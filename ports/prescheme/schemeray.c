#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prescheme.h"
#include <stdlib.h>
#include <math.h>
#include "c-util.h"

struct vector2d {
  double x;
  double y;
};
struct vector3d {
  double x;
  double y;
  double z;
};
struct object {
  long type;
  struct vector3d *color;
};
struct light {
  long type;
  struct vector3d *color;
  struct vector3d *position;
  double radius;
};
struct sphere {
  long type;
  struct vector3d *color;
  struct vector3d *position;
  double radius;
};
struct plane {
  long type;
  struct vector3d *color;
  struct vector3d *normal;
  double distance;
};
struct triangle {
  long type;
  struct vector3d *color;
  struct vector3d *vertex1;
  struct vector3d *vertex2;
  struct vector3d *vertex3;
};
struct mesh {
  long type;
  struct triangle **triangles;
};
static double HflS30(double, double);
static double Hfl_21(double, double);
static double HflA12(double, double);
static double vector3d_dot(struct vector3d*, struct vector3d*);
static struct vector3d *vector3d_op(struct vector3d*, struct vector3d*, double(*)(double, double));
static struct vector3d *vector3d_scalar_mul(struct vector3d*, double);
static struct vector3d *vector3d_cross(struct vector3d*, struct vector3d*);
static struct vector3d *triangle_normal(struct triangle*);
static struct vector3d *shoot_ray(struct vector3d*, struct vector3d*, long);
long test(long);
long main(long, char**);
static struct vector3d *ambient;
static struct vector3d *point;
static struct vector3d *eye;
static struct vector3d *default_color;
static struct object **scene;
static long scene_size;

static double HflS30(double x_3X, double y_4X)
{

 {  return (x_3X * y_4X);}
}
static double Hfl_21(double x_5X, double y_6X)
{

 {  return (x_5X - y_6X);}
}
static double HflA12(double x_7X, double y_8X)
{

 {  return (x_7X + y_8X);}
}
static double vector3d_dot(struct vector3d *v1_9X, struct vector3d *v2_10X)
{

 {  return ((((v1_9X->x) * (v2_10X->x)) + ((v1_9X->y) * (v2_10X->y))) + ((v1_9X->z) * (v2_10X->z)));}
}
static struct vector3d *vector3d_op(struct vector3d *v1_11X, struct vector3d *v2_12X, double (*op_13X)(double, double))
{
  struct vector3d *vector3d_17X;
  double z_16X;
  double x_15X;
  double y_14X;
 {  y_14X = (*op_13X)((v1_11X->y), (v2_12X->y));
  x_15X = (*op_13X)((v1_11X->x), (v2_12X->x));
  z_16X = (*op_13X)((v1_11X->z), (v2_12X->z));
  vector3d_17X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_17X)) {
    return vector3d_17X;}
  else {
    vector3d_17X->x = x_15X;
    vector3d_17X->y = y_14X;
    vector3d_17X->z = z_16X;
    return vector3d_17X;}}
}
static struct vector3d *vector3d_scalar_mul(struct vector3d *v1_18X, double f_19X)
{
  struct vector3d *vector3d_23X;
  double v_22X;
  double v_21X;
  double v_20X;
 {  v_20X = v1_18X->y;
  v_21X = v1_18X->x;
  v_22X = v1_18X->z;
  vector3d_23X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_23X)) {
    return vector3d_23X;}
  else {
    vector3d_23X->x = (v_21X * f_19X);
    vector3d_23X->y = (v_20X * f_19X);
    vector3d_23X->z = (v_22X * f_19X);
    return vector3d_23X;}}
}
static struct vector3d *vector3d_cross(struct vector3d *v1_24X, struct vector3d *v2_25X)
{
  struct vector3d *vector3d_33X;
  double v_32X;
  double v2_z_31X;
  double v1_x_30X;
  double v2_x_29X;
  double v1_y_28X;
  double v2_y_27X;
  double v1_z_26X;
 {  v1_z_26X = v1_24X->z;
  v2_y_27X = v2_25X->y;
  v1_y_28X = v1_24X->y;
  v2_x_29X = v2_25X->x;
  v1_x_30X = v1_24X->x;
  v2_z_31X = v2_25X->z;
  v_32X = v2_25X->z;
  vector3d_33X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_33X)) {
    return vector3d_33X;}
  else {
    vector3d_33X->x = (((v1_y_28X * v2_z_31X) * v_32X) - (v1_z_26X * v2_y_27X));
    vector3d_33X->y = ((v1_z_26X * v2_x_29X) - (v1_x_30X * v2_z_31X));
    vector3d_33X->z = ((v1_x_30X * v2_y_27X) - (v1_y_28X * v2_x_29X));
    return vector3d_33X;}}
}
static struct vector3d *triangle_normal(struct triangle *triangle_34X)
{
  double v_39X;
  double v_38X;
  struct vector3d *v1_37X;
  struct vector3d *v_36X;
  struct vector3d *v_35X;
 {  v_35X = vector3d_op((triangle_34X->vertex2), (triangle_34X->vertex1), Hfl_21);
  v_36X = vector3d_op((triangle_34X->vertex3), (triangle_34X->vertex1), Hfl_21);
  v1_37X = vector3d_cross(v_35X, v_36X);
  v_38X = vector3d_dot(v1_37X, v1_37X);
  v_39X = sqrt(v_38X);
  return vector3d_scalar_mul(v1_37X, (0.99999999 / v_39X));}
}
static struct vector3d *shoot_ray(struct vector3d *orig_40X, struct vector3d *dir_41X, long step_42X)
{
  struct vector3d *arg3K1;
  struct vector3d *arg3K0;
  struct object *arg2K1;
  long arg1K0;
  double arg0K2;
  double arg0K0;
  double merged_arg0K1;
  double merged_arg0K0;
  struct vector3d *merged_arg3K1;
  struct object *merged_arg2K0;

  int object_normal_return_tag;
  struct vector3d *object_normal0_return_value;
  int same_signPD0_return_tag;
  char same_signPD00_return_value;
  struct object *object_43X;
  struct vector3d *point_44X;
  double x_45X;
  double y_46X;
  struct vector3d *v_153X;
  double v_152X;
  double v_151X;
  struct vector3d *v1_150X;
  struct sphere *sphere_149X;
  struct vector3d *vector3d_148X;
  struct vector3d *v_147X;
  struct triangle *v_146X;
  struct plane *plane_145X;
  char temp_144X;
  struct vector3d *v_143X;
  struct vector3d *v2_142X;
  struct vector3d *v2_141X;
  struct vector3d *v_140X;
  struct vector3d *v1_139X;
  struct vector3d *v2_138X;
  struct vector3d *vector3d_137X;
  struct vector3d *vector3d_136X;
  char v_135X;
  double shadow_134X;
  double n_133X;
  double spec_132X;
  double rDv_131X;
  double n_130X;
  struct vector3d *r_129X;
  struct vector3d *v2_128X;
  double v_127X;
  double nDl_126X;
  struct vector3d *v1_125X;
  double n_124X;
  struct vector3d *n_123X;
  struct vector3d *l_122X;
  double v_121X;
  double v_120X;
  struct vector3d *point_to_light_119X;
  struct light *light_118X;
  struct object *obj_117X;
  struct vector3d *acc_116X;
  long i_115X;
  struct vector3d *v_114X;
  double d_113X;
  double r_112X;
  double v_111X;
  double d_110X;
  double v_109X;
  double v_108X;
  double b_107X;
  struct vector3d *eo_106X;
  struct sphere *obj_105X;
  struct vector3d *vector3d_104X;
  struct vector3d *v2_103X;
  double v_102X;
  struct vector3d *v_101X;
  struct vector3d *v_100X;
  struct vector3d *v2_99X;
  struct vector3d *view_98X;
  double v_97X;
  double v_96X;
  struct vector3d *v1_95X;
  struct vector3d *r_94X;
  double v_93X;
  double v_92X;
  struct vector3d *v1_91X;
  struct vector3d *v2_90X;
  double v_89X;
  struct vector3d *n_88X;
  struct vector3d *point_87X;
  struct vector3d *v2_86X;
  struct vector3d *vector3d_85X;
  char v_84X;
  char v_83X;
  double v_82X;
  struct vector3d *v_81X;
  struct vector3d *v_80X;
  struct vector3d *v_79X;
  char v_78X;
  double v_77X;
  struct vector3d *v_76X;
  struct vector3d *v_75X;
  struct vector3d *v_74X;
  double val_73X;
  struct vector3d *v_72X;
  struct vector3d *v_71X;
  struct vector3d *v_70X;
  struct vector3d *p_69X;
  struct vector3d *v2_68X;
  double d_67X;
  double o_aDn_66X;
  struct vector3d *v_65X;
  struct vector3d *c_64X;
  struct vector3d *b_63X;
  struct vector3d *a_62X;
  double vDn_61X;
  struct vector3d *n_60X;
  struct triangle *obj_59X;
  double dist_58X;
  double v_57X;
  double d_56X;
  struct plane *obj_55X;
  char temp_54X;
  struct object *obj_53X;
  double closest_depth_52X;
  struct object *closest_object_51X;
  long i_50X;
  struct vector3d *vector3d_49X;
  long num_prims_48X;
  struct object **prims_47X;
 {  if ((step_42X < 3)) {
    prims_47X = scene;
    num_prims_48X = scene_size;
    arg1K0 = 0;
    arg2K1 = NULL;
    arg0K2 = 10000.0;
    goto L2155;}
  else {
    vector3d_49X = (struct vector3d*)malloc(sizeof(struct vector3d));
    if ((NULL == vector3d_49X)) {
      return vector3d_49X;}
    else {
      vector3d_49X->x = 0.0;
      vector3d_49X->y = 0.0;
      vector3d_49X->z = 0.0;
      return vector3d_49X;}}}
 L2155: {
  i_50X = arg1K0;
  closest_object_51X = arg2K1;
  closest_depth_52X = arg0K2;
  if ((i_50X < num_prims_48X)) {
    obj_53X = *(prims_47X + i_50X);
    temp_54X = 0 == (obj_53X->type);
    if (temp_54X) {
      goto L2098;}
    else {
      if ((1 == (obj_53X->type))) {
        goto L2098;}
      else {
        if ((2 == (obj_53X->type))) {
          obj_55X = (struct plane*)(obj_53X);
          d_56X = vector3d_dot((obj_55X->normal), dir_41X);
          if ((0.0 == d_56X)) {
            arg0K0 = 10000.0;
            goto L2160;}
          else {
            v_57X = vector3d_dot((obj_55X->normal), orig_40X);
            dist_58X = (0.0 - (v_57X + (obj_55X->distance))) / d_56X;
            if ((0.0 < dist_58X)) {
              arg0K0 = dist_58X;
              goto L2160;}
            else {
              arg0K0 = 10000.0;
              goto L2160;}}}
        else {
          if ((3 == (obj_53X->type))) {
            obj_59X = (struct triangle*)(obj_53X);
            n_60X = triangle_normal(obj_59X);
            vDn_61X = vector3d_dot(dir_41X, n_60X);
            if ((vDn_61X < 0.0)) {
              a_62X = obj_59X->vertex1;
              b_63X = obj_59X->vertex2;
              c_64X = obj_59X->vertex3;
              v_65X = vector3d_op(orig_40X, a_62X, Hfl_21);
              o_aDn_66X = vector3d_dot(v_65X, n_60X);
              d_67X = 0.0 - (o_aDn_66X / vDn_61X);
              v2_68X = vector3d_scalar_mul(dir_41X, d_67X);
              p_69X = vector3d_op(orig_40X, v2_68X, HflA12);
              v_70X = vector3d_op(b_63X, a_62X, Hfl_21);
              v_71X = vector3d_op(p_69X, a_62X, Hfl_21);
              v_72X = vector3d_cross(v_70X, v_71X);
              val_73X = vector3d_dot(v_72X, n_60X);
              if ((d_67X < 0.0)) {
                arg0K0 = 10000.0;
                goto L2160;}
              else {
                v_74X = vector3d_op(c_64X, b_63X, Hfl_21);
                v_75X = vector3d_op(p_69X, b_63X, Hfl_21);
                v_76X = vector3d_cross(v_74X, v_75X);
                v_77X = vector3d_dot(v_76X, n_60X);
                merged_arg0K0 = val_73X;
                merged_arg0K1 = v_77X;
                same_signPD0_return_tag = 0;
                goto same_signPD0;
               same_signPD0_return_0:
                v_78X = same_signPD00_return_value;
                if (v_78X) {
                  v_79X = vector3d_op(a_62X, c_64X, Hfl_21);
                  v_80X = vector3d_op(p_69X, c_64X, Hfl_21);
                  v_81X = vector3d_cross(v_79X, v_80X);
                  v_82X = vector3d_dot(v_81X, n_60X);
                  merged_arg0K0 = val_73X;
                  merged_arg0K1 = v_82X;
                  same_signPD0_return_tag = 1;
                  goto same_signPD0;
                 same_signPD0_return_1:
                  v_83X = same_signPD00_return_value;
                  if (v_83X) {
                    arg0K0 = d_67X;
                    goto L2160;}
                  else {
                    arg0K0 = 10000.0;
                    goto L2160;}}
                else {
                  arg0K0 = 10000.0;
                  goto L2160;}}}
            else {
              arg0K0 = 10000.0;
              goto L2160;}}
          else {
            arg0K0 = 10000.0;
            goto L2160;}}}}}
  else {
    v_84X = ISNULL(closest_object_51X);
    if (v_84X) {
      vector3d_85X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_85X)) {
        return vector3d_85X;}
      else {
        vector3d_85X->x = 0.0;
        vector3d_85X->y = 0.0;
        vector3d_85X->z = 0.0;
        return vector3d_85X;}}
    else {
      v2_86X = vector3d_scalar_mul(dir_41X, closest_depth_52X);
      point_87X = vector3d_op(orig_40X, v2_86X, HflA12);
      merged_arg2K0 = closest_object_51X;
      merged_arg3K1 = point_87X;
      object_normal_return_tag = 0;
      goto object_normal;
     object_normal_return_0:
      n_88X = object_normal0_return_value;
      v_89X = vector3d_dot(dir_41X, n_88X);
      v2_90X = vector3d_scalar_mul(n_88X, (2.0 * v_89X));
      v1_91X = vector3d_op(dir_41X, v2_90X, Hfl_21);
      v_92X = vector3d_dot(v1_91X, v1_91X);
      v_93X = sqrt(v_92X);
      r_94X = vector3d_scalar_mul(v1_91X, (0.99999999 / v_93X));
      v1_95X = vector3d_op(point_87X, (eye), Hfl_21);
      v_96X = vector3d_dot(v1_95X, v1_95X);
      v_97X = sqrt(v_96X);
      view_98X = vector3d_scalar_mul(v1_95X, (0.99999999 / v_97X));
      v2_99X = vector3d_scalar_mul(r_94X, 1e-4);
      v_100X = vector3d_op(point_87X, v2_99X, HflA12);
      v_101X = shoot_ray(v_100X, r_94X, (1 + step_42X));
      v_102X = (float)((1 + step_42X));
      v2_103X = vector3d_scalar_mul(v_101X, (0.99999999 / (v_102X * 2.0)));
      if ((0 == (closest_object_51X->type))) {
        return vector3d_op((closest_object_51X->color), v2_103X, HflA12);}
      else {
        vector3d_104X = (struct vector3d*)malloc(sizeof(struct vector3d));
        if ((NULL == vector3d_104X)) {
          arg3K0 = vector3d_104X;
          goto L1915;}
        else {
          vector3d_104X->x = 0.0;
          vector3d_104X->y = 0.0;
          vector3d_104X->z = 0.0;
          arg3K0 = vector3d_104X;
          goto L1915;}}}}}
 L2098: {
  obj_105X = (struct sphere*)(obj_53X);
  eo_106X = vector3d_op(orig_40X, (obj_105X->position), Hfl_21);
  b_107X = vector3d_dot(eo_106X, dir_41X);
  v_108X = pow((obj_105X->radius), 2.0);
  v_109X = vector3d_dot(eo_106X, eo_106X);
  d_110X = (b_107X * b_107X) - (v_109X - v_108X);
  if ((0.0 < d_110X)) {
    v_111X = sqrt(d_110X);
    r_112X = (0.0 - b_107X) - v_111X;
    if ((0.0 < r_112X)) {
      arg0K0 = r_112X;
      goto L2160;}
    else {
      arg0K0 = 10000.0;
      goto L2160;}}
  else {
    arg0K0 = 10000.0;
    goto L2160;}}
 L2160: {
  d_113X = arg0K0;
  if ((d_113X < closest_depth_52X)) {
    arg1K0 = (1 + i_50X);
    arg2K1 = obj_53X;
    arg0K2 = d_113X;
    goto L2155;}
  else {
    arg1K0 = (1 + i_50X);
    arg2K1 = closest_object_51X;
    arg0K2 = closest_depth_52X;
    goto L2155;}}
 L1915: {
  v_114X = arg3K0;
  arg1K0 = 0;
  arg3K1 = v_114X;
  goto L1824;}
 L1824: {
  i_115X = arg1K0;
  acc_116X = arg3K1;
  if ((i_115X < (scene_size))) {
    obj_117X = *((scene) + i_115X);
    if ((0 == (obj_117X->type))) {
      light_118X = (struct light*)(obj_117X);
      point_to_light_119X = vector3d_op((light_118X->position), point_87X, Hfl_21);
      v_120X = vector3d_dot(point_to_light_119X, point_to_light_119X);
      v_121X = sqrt(v_120X);
      l_122X = vector3d_scalar_mul(point_to_light_119X, (0.99999999 / v_121X));
      merged_arg2K0 = closest_object_51X;
      merged_arg3K1 = point_87X;
      object_normal_return_tag = 1;
      goto object_normal;
     object_normal_return_1:
      n_123X = object_normal0_return_value;
      n_124X = vector3d_dot(n_123X, l_122X);
      if ((n_124X < 0.0)) {
        arg0K0 = 0.0;
        goto L1852;}
      else {
        if ((1.0 < n_124X)) {
          arg0K0 = 1.0;
          goto L1852;}
        else {
          arg0K0 = n_124X;
          goto L1852;}}}
    else {
      arg1K0 = (1 + i_115X);
      arg3K1 = acc_116X;
      goto L1824;}}
  else {
    if ((2 == (closest_object_51X->type))) {
      return vector3d_op(acc_116X, v2_103X, HflA12);}
    else {
      v1_125X = vector3d_op((ambient), acc_116X, HflA12);
      return vector3d_op(v1_125X, v2_103X, HflA12);}}}
 L1852: {
  nDl_126X = arg0K0;
  v_127X = vector3d_dot(n_123X, l_122X);
  v2_128X = vector3d_scalar_mul(n_123X, (2.0 * v_127X));
  r_129X = vector3d_op(l_122X, v2_128X, Hfl_21);
  n_130X = vector3d_dot(r_129X, view_98X);
  if ((n_130X < 0.0)) {
    arg0K0 = 0.0;
    goto L1866;}
  else {
    if ((1.0 < n_130X)) {
      arg0K0 = 1.0;
      goto L1866;}
    else {
      arg0K0 = n_130X;
      goto L1866;}}}
 L1866: {
  rDv_131X = arg0K0;
  spec_132X = pow(rDv_131X, 30.0);
  n_133X = 4.0 * nDl_126X;
  if ((n_133X < 0.0)) {
    arg0K0 = 0.0;
    goto L1876;}
  else {
    if ((1.0 < n_133X)) {
      arg0K0 = 1.0;
      goto L1876;}
    else {
      arg0K0 = n_133X;
      goto L1876;}}}
 L1876: {
  shadow_134X = arg0K0;
  if ((0.0 < nDl_126X)) {
    v_135X = 2 == (closest_object_51X->type);
    if (v_135X) {
      vector3d_136X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_136X)) {
        arg3K0 = vector3d_136X;
        goto L1899;}
      else {
        vector3d_136X->x = 0.0;
        vector3d_136X->y = 0.0;
        vector3d_136X->z = 0.0;
        arg3K0 = vector3d_136X;
        goto L1899;}}
    else {
      vector3d_137X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_137X)) {
        arg3K0 = vector3d_137X;
        goto L1899;}
      else {
        vector3d_137X->x = spec_132X;
        vector3d_137X->y = spec_132X;
        vector3d_137X->z = spec_132X;
        arg3K0 = vector3d_137X;
        goto L1899;}}}
  else {
    arg1K0 = (1 + i_115X);
    arg3K1 = acc_116X;
    goto L1824;}}
 L1899: {
  v2_138X = arg3K0;
  v1_139X = vector3d_scalar_mul((closest_object_51X->color), nDl_126X);
  v_140X = vector3d_op(v1_139X, v2_138X, HflA12);
  v2_141X = vector3d_scalar_mul(v_140X, shadow_134X);
  v2_142X = vector3d_op((obj_117X->color), v2_141X, HflS30);
  v_143X = vector3d_op(acc_116X, v2_142X, HflA12);
  arg1K0 = (1 + i_115X);
  arg3K1 = v_143X;
  goto L1824;}
 same_signPD0: {
  x_45X = merged_arg0K0;
  y_46X = merged_arg0K1;{
  same_signPD00_return_value = ((x_45X < 0.0) == (y_46X < 0.0));
  goto same_signPD0_return;}
 same_signPD0_return:
  switch (same_signPD0_return_tag) {
  case 0: goto same_signPD0_return_0;
  default: goto same_signPD0_return_1;
  }}

 object_normal: {
  object_43X = merged_arg2K0;
  point_44X = merged_arg3K1;{
  temp_144X = 0 == (object_43X->type);
  if (temp_144X) {
    goto L1521;}
  else {
    if ((1 == (object_43X->type))) {
      goto L1521;}
    else {
      if ((2 == (object_43X->type))) {
        plane_145X = (struct plane*)(object_43X);
        object_normal0_return_value = (plane_145X->normal);
        goto object_normal_return;}
      else {
        if ((3 == (object_43X->type))) {
          v_146X = (struct triangle*)(object_43X);
          v_147X = triangle_normal(v_146X);
          object_normal0_return_value = v_147X;
          goto object_normal_return;}
        else {
          vector3d_148X = (struct vector3d*)malloc(sizeof(struct vector3d));
          if ((NULL == vector3d_148X)) {
            object_normal0_return_value = vector3d_148X;
            goto object_normal_return;}
          else {
            vector3d_148X->x = 0.0;
            vector3d_148X->y = 1.0;
            vector3d_148X->z = 0.0;
            object_normal0_return_value = vector3d_148X;
            goto object_normal_return;}}}}}}
 L1521: {
  sphere_149X = (struct sphere*)(object_43X);
  v1_150X = vector3d_op(point_44X, (sphere_149X->position), Hfl_21);
  v_151X = vector3d_dot(v1_150X, v1_150X);
  v_152X = sqrt(v_151X);
  v_153X = vector3d_scalar_mul(v1_150X, (0.99999999 / v_152X));
  object_normal0_return_value = v_153X;
  goto object_normal_return;}
 object_normal_return:
  switch (object_normal_return_tag) {
  case 0: goto object_normal_return_0;
  default: goto object_normal_return_1;
  }}

}
long test(long n_154X)
{
  long arg1K0;
  long n_155X;
 {  arg1K0 = n_154X;
  goto L2667;}
 L2667: {
  n_155X = arg1K0;
  if ((n_155X < 1000)) {
    arg1K0 = (1 + n_155X);
    goto L2667;}
  else {
    return n_155X;}}
}
long main(long argc_156X, char **argv_157X)
{
  double arg0K0;
  struct object *arg2K0;
  long arg1K0;
  struct vector3d *arg3K0;
  double merged_arg0K0;
  struct vector3d *merged_arg3K0;

  int vector3d_inverse_return_tag;
  struct vector3d *vector3d_inverse0_return_value;
  int wD1_return_tag;
  struct vector3d *v1_158X;
  double c_159X;
  struct vector3d *vector3d_240X;
  double v_239X;
  double v_238X;
  double v_237X;
  long v_236X;
  double f_235X;
  struct object *v_234X;
  struct vector3d *color_233X;
  struct vector3d *view_232X;
  double v_231X;
  double v_230X;
  struct vector3d *v1_229X;
  struct vector3d *v1_228X;
  struct vector3d *point_227X;
  struct vector3d *v2_226X;
  double v_225X;
  struct vector3d *v1_224X;
  double v_223X;
  long y_222X;
  long x_221X;
  long n_220X;
  struct object *v_219X;
  struct object *v_218X;
  struct sphere *sphere_217X;
  struct vector3d *color_216X;
  struct vector3d *corner_215X;
  struct vector3d *v2_214X;
  struct vector3d *v_213X;
  struct vector3d *v1_212X;
  struct vector3d *v_211X;
  struct vector3d *dy_210X;
  double v_209X;
  struct vector3d *dx_208X;
  double v_207X;
  struct vector3d *eye_up_206X;
  struct vector3d *eye_right_205X;
  struct vector3d *v_204X;
  struct vector3d *vector3d_203X;
  struct vector3d *position_202X;
  struct vector3d *vector3d_201X;
  double v_200X;
  double v_199X;
  struct vector3d *v1_198X;
  struct vector3d *eye_unit_197X;
  double v_196X;
  double v_195X;
  struct vector3d *v1_194X;
  long v_193X;
  FILE * port_192X;
  long n_191X;
  struct vector3d *vector3d_190X;
  double v_189X;
  double v_188X;
  long i_187X;
  struct object *v_186X;
  struct object *v_185X;
  struct object *v_184X;
  struct plane *plane_183X;
  struct vector3d *color_182X;
  struct vector3d *vector3d_181X;
  struct vector3d *normal_180X;
  struct vector3d *vector3d_179X;
  struct object *v_178X;
  struct object *v_177X;
  struct object *v_176X;
  struct light *light_175X;
  struct vector3d *color_174X;
  struct vector3d *vector3d_173X;
  struct vector3d *position_172X;
  struct vector3d *vector3d_171X;
  struct object **objects_170X;
  struct object *v_169X;
  struct object *object_168X;
  struct vector3d *v_167X;
  struct vector3d *vector3d_166X;
  struct vector3d *v_165X;
  struct vector3d *vector3d_164X;
  struct vector3d *v_163X;
  struct vector3d *vector3d_162X;
  struct vector3d *v_161X;
  struct vector3d *vector3d_160X;
 {  vector3d_160X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_160X)) {
    arg3K0 = vector3d_160X;
    goto L1287;}
  else {
    vector3d_160X->x = 0.0;
    vector3d_160X->y = 0.0;
    vector3d_160X->z = 1.0;
    arg3K0 = vector3d_160X;
    goto L1287;}}
 L1287: {
  v_161X = arg3K0;
  eye = v_161X;
  vector3d_162X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_162X)) {
    arg3K0 = vector3d_162X;
    goto L1292;}
  else {
    vector3d_162X->x = 0.0;
    vector3d_162X->y = 0.0;
    vector3d_162X->z = -5.0;
    arg3K0 = vector3d_162X;
    goto L1292;}}
 L1292: {
  v_163X = arg3K0;
  point = v_163X;
  vector3d_164X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_164X)) {
    arg3K0 = vector3d_164X;
    goto L1297;}
  else {
    vector3d_164X->x = 0.0;
    vector3d_164X->y = 0.0;
    vector3d_164X->z = 0.0;
    arg3K0 = vector3d_164X;
    goto L1297;}}
 L1297: {
  v_165X = arg3K0;
  default_color = v_165X;
  vector3d_166X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_166X)) {
    arg3K0 = vector3d_166X;
    goto L1302;}
  else {
    vector3d_166X->x = 0.1;
    vector3d_166X->y = 0.1;
    vector3d_166X->z = 0.1;
    arg3K0 = vector3d_166X;
    goto L1302;}}
 L1302: {
  v_167X = arg3K0;
  ambient = v_167X;
  object_168X = (struct object*)malloc(sizeof(struct object));
  if ((NULL == object_168X)) {
    arg2K0 = object_168X;
    goto L1309;}
  else {
    object_168X->type = -1;
    arg2K0 = object_168X;
    goto L1309;}}
 L1309: {
  v_169X = arg2K0;
  objects_170X = (struct object**)malloc(sizeof(struct object*) * 27);
  vector3d_171X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_171X)) {
    arg3K0 = vector3d_171X;
    goto L1315;}
  else {
    vector3d_171X->x = -40.0;
    vector3d_171X->y = -15.0;
    vector3d_171X->z = 60.0;
    arg3K0 = vector3d_171X;
    goto L1315;}}
 L1315: {
  position_172X = arg3K0;
  vector3d_173X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_173X)) {
    arg3K0 = vector3d_173X;
    goto L1313;}
  else {
    vector3d_173X->x = 0.7;
    vector3d_173X->y = 0.9;
    vector3d_173X->z = 0.9;
    arg3K0 = vector3d_173X;
    goto L1313;}}
 L1313: {
  color_174X = arg3K0;
  light_175X = (struct light*)malloc(sizeof(struct light));
  if ((NULL == light_175X)) {
    v_176X = (struct object*)(light_175X);
    arg2K0 = v_176X;
    goto L1317;}
  else {
    light_175X->type = 0;
    light_175X->color = color_174X;
    light_175X->position = position_172X;
    light_175X->radius = 1.0;
    v_177X = (struct object*)(light_175X);
    arg2K0 = v_177X;
    goto L1317;}}
 L1317: {
  v_178X = arg2K0;
  *(objects_170X + 0) = v_178X;
  vector3d_179X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_179X)) {
    arg3K0 = vector3d_179X;
    goto L1323;}
  else {
    vector3d_179X->x = 0.0;
    vector3d_179X->y = -1.0;
    vector3d_179X->z = 0.0;
    arg3K0 = vector3d_179X;
    goto L1323;}}
 L1323: {
  normal_180X = arg3K0;
  vector3d_181X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_181X)) {
    arg3K0 = vector3d_181X;
    goto L1321;}
  else {
    vector3d_181X->x = 0.7;
    vector3d_181X->y = 0.7;
    vector3d_181X->z = 1.0;
    arg3K0 = vector3d_181X;
    goto L1321;}}
 L1321: {
  color_182X = arg3K0;
  plane_183X = (struct plane*)malloc(sizeof(struct plane));
  if ((NULL == plane_183X)) {
    v_184X = (struct object*)(plane_183X);
    arg2K0 = v_184X;
    goto L1325;}
  else {
    plane_183X->type = 2;
    plane_183X->color = color_182X;
    plane_183X->normal = normal_180X;
    plane_183X->distance = 5.0;
    v_185X = (struct object*)(plane_183X);
    arg2K0 = v_185X;
    goto L1325;}}
 L1325: {
  v_186X = arg2K0;
  *(objects_170X + 1) = v_186X;
  arg1K0 = 0;
  goto L1062;}
 L1062: {
  i_187X = arg1K0;
  if ((i_187X < 25)) {
    v_188X = (float)((i_187X / 5));
    v_189X = (float)((i_187X % 5));
    vector3d_190X = (struct vector3d*)malloc(sizeof(struct vector3d));
    if ((NULL == vector3d_190X)) {
      arg3K0 = vector3d_190X;
      goto L1071;}
    else {
      vector3d_190X->x = (15.0 * v_189X);
      vector3d_190X->y = 0.0;
      vector3d_190X->z = (15.0 + (15.0 * v_188X));
      arg3K0 = vector3d_190X;
      goto L1071;}}
  else {
    scene = objects_170X;
    scene_size = 27;
    n_191X = test(0);
    ps_write_integer(n_191X, (stdout));
    ps_write_string("test", (stdout));
    port_192X = ps_open_output_file("image.ppm", &v_193X);
    ps_write_string("P6\n", port_192X);
    ps_write_integer(800, port_192X);
    ps_write_string(" ", port_192X);
    ps_write_integer(600, port_192X);
    ps_write_string("\n", port_192X);
    ps_write_string("255\n", port_192X);
    v1_194X = eye;
    v_195X = vector3d_dot(v1_194X, v1_194X);
    v_196X = sqrt(v_195X);
    eye_unit_197X = vector3d_scalar_mul(v1_194X, (0.99999999 / v_196X));
    v1_198X = point;
    v_199X = vector3d_dot(v1_198X, v1_198X);
    v_200X = sqrt(v_199X);vector3d_scalar_mul(v1_198X, (0.99999999 / v_200X));
    vector3d_201X = (struct vector3d*)malloc(sizeof(struct vector3d));
    if ((NULL == vector3d_201X)) {
      arg3K0 = vector3d_201X;
      goto L2383;}
    else {
      vector3d_201X->x = 0.0;
      vector3d_201X->y = 1.0;
      vector3d_201X->z = 0.0;
      arg3K0 = vector3d_201X;
      goto L2383;}}}
 L1071: {
  position_202X = arg3K0;
  vector3d_203X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_203X)) {
    arg3K0 = vector3d_203X;
    goto L1065;}
  else {
    vector3d_203X->x = 0.2;
    vector3d_203X->y = 0.5;
    vector3d_203X->z = 0.5;
    arg3K0 = vector3d_203X;
    goto L1065;}}
 L2383: {
  v_204X = arg3K0;
  eye_right_205X = vector3d_cross(eye_unit_197X, v_204X);
  eye_up_206X = vector3d_cross(eye_unit_197X, eye_right_205X);
  v_207X = (float)(800);
  dx_208X = vector3d_scalar_mul(eye_right_205X, (8.0 / v_207X));
  v_209X = (float)(600);
  dy_210X = vector3d_scalar_mul(eye_up_206X, (6.0 / v_209X));
  merged_arg3K0 = eye_right_205X;
  vector3d_inverse_return_tag = 0;
  goto vector3d_inverse;
 vector3d_inverse_return_0:
  v_211X = vector3d_inverse0_return_value;
  v1_212X = vector3d_scalar_mul(v_211X, 4.0);
  merged_arg3K0 = eye_up_206X;
  vector3d_inverse_return_tag = 1;
  goto vector3d_inverse;
 vector3d_inverse_return_1:
  v_213X = vector3d_inverse0_return_value;
  v2_214X = vector3d_scalar_mul(v_213X, 3.0);
  corner_215X = vector3d_op(v1_212X, v2_214X, HflA12);
  arg1K0 = 0;
  goto L2421;}
 L1065: {
  color_216X = arg3K0;
  sphere_217X = (struct sphere*)malloc(sizeof(struct sphere));
  if ((NULL == sphere_217X)) {
    v_218X = (struct object*)(sphere_217X);
    arg2K0 = v_218X;
    goto L1073;}
  else {
    sphere_217X->type = 1;
    sphere_217X->color = color_216X;
    sphere_217X->position = position_202X;
    sphere_217X->radius = 5.0;
    v_219X = (struct object*)(sphere_217X);
    arg2K0 = v_219X;
    goto L1073;}}
 L2421: {
  n_220X = arg1K0;
  if ((n_220X < 480000)) {
    x_221X = n_220X % 800;
    y_222X = n_220X / 800;
    v_223X = (float)(x_221X);
    v1_224X = vector3d_scalar_mul(dx_208X, v_223X);
    v_225X = (float)(y_222X);
    v2_226X = vector3d_scalar_mul(dy_210X, v_225X);
    point_227X = vector3d_op(v1_224X, v2_226X, HflA12);
    v1_228X = vector3d_op(corner_215X, point_227X, HflA12);
    v1_229X = vector3d_op(v1_228X, point_227X, Hfl_21);
    v_230X = vector3d_dot(v1_229X, v1_229X);
    v_231X = sqrt(v_230X);
    view_232X = vector3d_scalar_mul(v1_229X, (0.99999999 / v_231X));
    color_233X = shoot_ray(point_227X, view_232X, 0);
    merged_arg0K0 = (color_233X->x);
    wD1_return_tag = 0;
    goto wD1;
   wD1_return_0:
    merged_arg0K0 = (color_233X->y);
    wD1_return_tag = 1;
    goto wD1;
   wD1_return_1:
    merged_arg0K0 = (color_233X->z);
    wD1_return_tag = 2;
    goto wD1;
   wD1_return_2:
    arg1K0 = (1 + n_220X);
    goto L2421;}
  else {
    return 0;}}
 L1073: {
  v_234X = arg2K0;
  *(objects_170X + (2 + i_187X)) = v_234X;
  arg1K0 = (1 + i_187X);
  goto L1062;}
 wD1: {
  c_159X = merged_arg0K0;{
  if ((c_159X < 0.0)) {
    arg0K0 = 0.0;
    goto L705;}
  else {
    if ((1.0 < c_159X)) {
      arg0K0 = 1.0;
      goto L705;}
    else {
      arg0K0 = c_159X;
      goto L705;}}}
 L705: {
  f_235X = arg0K0;
  v_236X = (unsigned char)((f_235X * 255.0));
  write_byte(v_236X, port_192X);
  goto wD1_return;}
 wD1_return:
  switch (wD1_return_tag) {
  case 0: goto wD1_return_0;
  case 1: goto wD1_return_1;
  default: goto wD1_return_2;
  }}

 vector3d_inverse: {
  v1_158X = merged_arg3K0;{
  v_237X = v1_158X->y;
  v_238X = v1_158X->x;
  v_239X = v1_158X->z;
  vector3d_240X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_240X)) {
    vector3d_inverse0_return_value = vector3d_240X;
    goto vector3d_inverse_return;}
  else {
    vector3d_240X->x = (0.0 - v_238X);
    vector3d_240X->y = (0.0 - v_237X);
    vector3d_240X->z = (0.0 - v_239X);
    vector3d_inverse0_return_value = vector3d_240X;
    goto vector3d_inverse_return;}}
 vector3d_inverse_return:
  switch (vector3d_inverse_return_tag) {
  case 0: goto vector3d_inverse_return_0;
  default: goto vector3d_inverse_return_1;
  }}

}void
prescheme_init(void)
{
ambient = NULL;
point = NULL;
eye = NULL;
default_color = NULL;
scene = NULL;
scene_size = 0;
}
