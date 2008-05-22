#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prescheme.h"
#include <math.h>

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
static struct vector3d *shoot_ray(struct vector3d*, struct vector3d*, long);
long main(long, char**);
static struct vector3d *ambient;
static struct vector3d *eye;
static struct vector3d *default_color;
static struct object **scene;
static long scene_size;
static struct vector3d *acc;
static struct object *fcp_obj;
static double fcp_depth;

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
static struct vector3d *shoot_ray(struct vector3d *orig_24X, struct vector3d *dir_25X, long step_26X)
{
  struct vector3d *arg3K0;
  long arg2K0;
  void arg1K0;
  double arg0K0;
  double merged_arg0K1;
  double merged_arg0K0;
  struct object *merged_arg4K0;
  struct vector3d *merged_arg3K1;
  struct vector3d *merged_arg3K0;

  int vector3d_cross_return_tag;
  struct vector3d *vector3d_cross0_return_value;
  int object_normal_return_tag;
  struct vector3d *object_normal0_return_value;
  int same_signPD0_return_tag;
  char same_signPD00_return_value;
  struct vector3d *v1_27X;
  struct vector3d *v2_28X;
  struct object *object_29X;
  struct vector3d *point_30X;
  double x_31X;
  double y_32X;
  struct vector3d *vector3d_147X;
  double v_146X;
  double v2_z_145X;
  double v1_x_144X;
  double v2_x_143X;
  double v1_y_142X;
  double v2_y_141X;
  double v1_z_140X;
  struct vector3d *v_139X;
  double v_138X;
  struct vector3d *v1_137X;
  struct sphere *sphere_136X;
  struct vector3d *vector3d_135X;
  struct vector3d *v_134X;
  double v_133X;
  struct vector3d *v1_132X;
  struct vector3d *v_131X;
  struct vector3d *v_130X;
  struct triangle *triangle_129X;
  struct plane *plane_128X;
  char temp_127X;
  struct vector3d *v_126X;
  struct vector3d *v2_125X;
  struct vector3d *v2_124X;
  struct vector3d *v_123X;
  struct vector3d *v1_122X;
  struct vector3d *v2_121X;
  struct vector3d *vector3d_120X;
  struct vector3d *vector3d_119X;
  char v_118X;
  double shadow_117X;
  double n_116X;
  double spec_115X;
  double rDv_114X;
  double n_112X;
  struct vector3d *r_111X;
  struct vector3d *v2_110X;
  double v_109X;
  double nDl_108X;
  struct vector3d *v1_106X;
  double n_105X;
  struct vector3d *n_104X;
  struct vector3d *l_103X;
  double v_102X;
  struct vector3d *point_to_light_101X;
  struct light *light_100X;
  char v_99X;
  struct object *obj_98X;
  long i_97X;
  double d_96X;
  double r_95X;
  double v_94X;
  double d_93X;
  double v_92X;
  double v_91X;
  double b_90X;
  struct vector3d *eo_89X;
  struct sphere *obj_88X;
  struct vector3d *v2_87X;
  struct vector3d *v_86X;
  struct vector3d *v_85X;
  struct vector3d *v2_84X;
  struct vector3d *view_83X;
  double v_82X;
  struct vector3d *v1_81X;
  struct vector3d *r_80X;
  double v_79X;
  struct vector3d *v1_78X;
  struct vector3d *v2_77X;
  double v_76X;
  struct vector3d *n_75X;
  struct vector3d *point_74X;
  struct vector3d *v2_73X;
  struct object *obj_72X;
  char v_71X;
  double v_70X;
  struct vector3d *v_69X;
  struct vector3d *v_68X;
  struct vector3d *v_67X;
  char v_66X;
  double v_65X;
  struct vector3d *v_64X;
  struct vector3d *v_63X;
  struct vector3d *v_62X;
  double val_61X;
  struct vector3d *v_60X;
  struct vector3d *v_59X;
  struct vector3d *v_58X;
  struct vector3d *p_57X;
  struct vector3d *v2_56X;
  double d_55X;
  double o_aDn_54X;
  struct vector3d *v_53X;
  struct vector3d *c_52X;
  struct vector3d *b_51X;
  struct vector3d *a_50X;
  double vDn_49X;
  struct vector3d *n_48X;
  double v_47X;
  struct vector3d *v1_46X;
  struct vector3d *v_45X;
  struct vector3d *v_44X;
  struct triangle *obj_43X;
  double dist_42X;
  double v_41X;
  double d_40X;
  struct plane *obj_39X;
  char temp_38X;
  struct object *o_37X;
  long i_36X;
  struct vector3d *vector3d_35X;
  long num_prims_34X;
  struct object **prims_33X;
 {  if ((step_26X < 3)) {
    prims_33X = scene;
    num_prims_34X = scene_size;
    fcp_obj = NULL;
    fcp_depth = 10000.0;
    arg2K0 = 0;
    goto L1679;}
  else {
    vector3d_35X = (struct vector3d*)malloc(sizeof(struct vector3d));
    if ((NULL == vector3d_35X)) {
      return vector3d_35X;}
    else {
      vector3d_35X->x = 0.0;
      vector3d_35X->y = 0.0;
      vector3d_35X->z = 0.0;
      return vector3d_35X;}}}
 L1679: {
  i_36X = arg2K0;
  if ((i_36X < num_prims_34X)) {
    o_37X = *(prims_33X + i_36X);
    temp_38X = 0 == (o_37X->type);
    if (temp_38X) {
      goto L1618;}
    else {
      if ((1 == (o_37X->type))) {
        goto L1618;}
      else {
        if ((2 == (o_37X->type))) {
          obj_39X = (struct light*)(o_37X);
          d_40X = vector3d_dot((obj_39X->normal), dir_25X);
          if ((0.0 == d_40X)) {
            arg0K0 = 10000.0;
            goto L1684;}
          else {
            v_41X = vector3d_dot((obj_39X->normal), orig_24X);
            dist_42X = (0.0 - (v_41X + (obj_39X->distance))) / d_40X;
            if ((0.0 < dist_42X)) {
              arg0K0 = dist_42X;
              goto L1684;}
            else {
              arg0K0 = 10000.0;
              goto L1684;}}}
        else {
          if ((3 == (o_37X->type))) {
            obj_43X = (struct light*)(o_37X);
            v_44X = vector3d_op((obj_43X->vertex2), (obj_43X->vertex1), Hfl_21);
            v_45X = vector3d_op((obj_43X->vertex3), (obj_43X->vertex1), Hfl_21);
            merged_arg3K0 = v_44X;
            merged_arg3K1 = v_45X;
            vector3d_cross_return_tag = 0;
            goto vector3d_cross;
           vector3d_cross_return_0:
            v1_46X = vector3d_cross0_return_value;
            v_47X = vector3d_dot(v1_46X, v1_46X);sqrt(v_47X);
            n_48X = vector3d_scalar_mul(v1_46X, 1.0);
            vDn_49X = vector3d_dot(dir_25X, n_48X);
            if ((vDn_49X < 0.0)) {
              a_50X = obj_43X->vertex1;
              b_51X = obj_43X->vertex2;
              c_52X = obj_43X->vertex3;
              v_53X = vector3d_op(orig_24X, a_50X, Hfl_21);
              o_aDn_54X = vector3d_dot(v_53X, n_48X);
              d_55X = 0.0 - (o_aDn_54X / vDn_49X);
              v2_56X = vector3d_scalar_mul(dir_25X, d_55X);
              p_57X = vector3d_op(orig_24X, v2_56X, HflA12);
              v_58X = vector3d_op(b_51X, a_50X, Hfl_21);
              v_59X = vector3d_op(p_57X, a_50X, Hfl_21);
              merged_arg3K0 = v_58X;
              merged_arg3K1 = v_59X;
              vector3d_cross_return_tag = 1;
              goto vector3d_cross;
             vector3d_cross_return_1:
              v_60X = vector3d_cross0_return_value;
              val_61X = vector3d_dot(v_60X, n_48X);
              if ((d_55X < 0.0)) {
                arg0K0 = 10000.0;
                goto L1684;}
              else {
                v_62X = vector3d_op(c_52X, b_51X, Hfl_21);
                v_63X = vector3d_op(p_57X, b_51X, Hfl_21);
                merged_arg3K0 = v_62X;
                merged_arg3K1 = v_63X;
                vector3d_cross_return_tag = 2;
                goto vector3d_cross;
               vector3d_cross_return_2:
                v_64X = vector3d_cross0_return_value;
                v_65X = vector3d_dot(v_64X, n_48X);
                merged_arg0K0 = val_61X;
                merged_arg0K1 = v_65X;
                same_signPD0_return_tag = 0;
                goto same_signPD0;
               same_signPD0_return_0:
                v_66X = same_signPD00_return_value;
                if (v_66X) {
                  v_67X = vector3d_op(a_50X, c_52X, Hfl_21);
                  v_68X = vector3d_op(p_57X, c_52X, Hfl_21);
                  merged_arg3K0 = v_67X;
                  merged_arg3K1 = v_68X;
                  vector3d_cross_return_tag = 3;
                  goto vector3d_cross;
                 vector3d_cross_return_3:
                  v_69X = vector3d_cross0_return_value;
                  v_70X = vector3d_dot(v_69X, n_48X);
                  merged_arg0K0 = val_61X;
                  merged_arg0K1 = v_70X;
                  same_signPD0_return_tag = 1;
                  goto same_signPD0;
                 same_signPD0_return_1:
                  v_71X = same_signPD00_return_value;
                  if (v_71X) {
                    arg0K0 = d_55X;
                    goto L1684;}
                  else {
                    arg0K0 = 10000.0;
                    goto L1684;}}
                else {
                  arg0K0 = 10000.0;
                  goto L1684;}}}
            else {
              arg0K0 = 10000.0;
              goto L1684;}}
          else {
            arg0K0 = 10000.0;
            goto L1684;}}}}}
  else {
    obj_72X = fcp_obj;
    v2_73X = vector3d_scalar_mul(dir_25X, (fcp_depth));
    point_74X = vector3d_op(orig_24X, v2_73X, HflA12);
    merged_arg4K0 = obj_72X;
    merged_arg3K1 = point_74X;
    object_normal_return_tag = 0;
    goto object_normal;
   object_normal_return_0:
    n_75X = object_normal0_return_value;
    v_76X = vector3d_dot(dir_25X, n_75X);
    v2_77X = vector3d_scalar_mul(n_75X, (2.0 * v_76X));
    v1_78X = vector3d_op(dir_25X, v2_77X, Hfl_21);
    v_79X = vector3d_dot(v1_78X, v1_78X);sqrt(v_79X);
    r_80X = vector3d_scalar_mul(v1_78X, 1.0);
    v1_81X = vector3d_op(point_74X, (eye), Hfl_21);
    v_82X = vector3d_dot(v1_81X, v1_81X);sqrt(v_82X);
    view_83X = vector3d_scalar_mul(v1_81X, 1.0);
    v2_84X = vector3d_scalar_mul(r_80X, 1e-4);
    v_85X = vector3d_op(point_74X, v2_84X, HflA12);
    v_86X = shoot_ray(v_85X, r_80X, (1 + step_26X));(float)((1 + step_26X));
    v2_87X = vector3d_scalar_mul(v_86X, 1.0);
    if ((0 == (obj_72X->type))) {
      return vector3d_op((obj_72X->color), v2_87X, HflA12);}
    else {
      arg2K0 = 0;
      goto L1354;}}}
 L1618: {
  obj_88X = (struct light*)(o_37X);
  eo_89X = vector3d_op(orig_24X, (obj_88X->position), Hfl_21);
  b_90X = vector3d_dot(eo_89X, dir_25X);
  v_91X = pow((obj_88X->radius), 2.0);
  v_92X = vector3d_dot(eo_89X, eo_89X);
  d_93X = (b_90X * b_90X) - (v_92X - v_91X);
  if ((0.0 < d_93X)) {
    v_94X = sqrt(d_93X);
    r_95X = (0.0 - b_90X) - v_94X;
    if ((0.0 < r_95X)) {
      arg0K0 = r_95X;
      goto L1684;}
    else {
      arg0K0 = 10000.0;
      goto L1684;}}
  else {
    arg0K0 = 10000.0;
    goto L1684;}}
 L1684: {
  d_96X = arg0K0;
  if ((d_96X < 10000.0)) {
    fcp_obj = o_37X;
    fcp_depth = d_96X;
    goto L1696;}
  else {
    goto L1696;}}
 L1354: {
  i_97X = arg2K0;
  if ((i_97X < (scene_size))) {
    obj_98X = *((scene) + i_97X);
    v_99X = 0 == (obj_98X->type);
    if (v_99X) {
      light_100X = (struct light*)(obj_98X);
      point_to_light_101X = vector3d_op((light_100X->position), point_74X, Hfl_21);
      v_102X = vector3d_dot(point_to_light_101X, point_to_light_101X);sqrt(v_102X);
      l_103X = vector3d_scalar_mul(point_to_light_101X, 1.0);
      merged_arg4K0 = obj_72X;
      merged_arg3K1 = point_74X;
      object_normal_return_tag = 1;
      goto object_normal;
     object_normal_return_1:
      n_104X = object_normal0_return_value;
      n_105X = vector3d_dot(n_104X, l_103X);
      if ((n_105X < 0.0)) {
        arg0K0 = 0.0;
        goto L1384;}
      else {
        if ((1.0 < n_105X)) {
          arg0K0 = 1.0;
          goto L1384;}
        else {
          arg0K0 = n_105X;
          goto L1384;}}}
    else {
      goto L1448;}}
  else {
    if ((2 == (obj_72X->type))) {
      return vector3d_op((acc), v2_87X, HflA12);}
    else {
      v1_106X = vector3d_op((ambient), (acc), HflA12);
      return vector3d_op(v1_106X, v2_87X, HflA12);}}}
 L1696: {
  v_107X = arg1K0;(*v_107X)();
  arg2K0 = (1 + i_36X);
  goto L1679;}
 L1384: {
  nDl_108X = arg0K0;
  v_109X = vector3d_dot(n_104X, l_103X);
  v2_110X = vector3d_scalar_mul(n_104X, (2.0 * v_109X));
  r_111X = vector3d_op(l_103X, v2_110X, Hfl_21);
  n_112X = vector3d_dot(r_111X, view_83X);
  if ((n_112X < 0.0)) {
    arg0K0 = 0.0;
    goto L1398;}
  else {
    if ((1.0 < n_112X)) {
      arg0K0 = 1.0;
      goto L1398;}
    else {
      arg0K0 = n_112X;
      goto L1398;}}}
 L1448: {
  v_113X = arg1K0;(*v_113X)();
  arg2K0 = (1 + i_97X);
  goto L1354;}
 L1398: {
  rDv_114X = arg0K0;
  spec_115X = pow(rDv_114X, 30.0);
  n_116X = 4.0 * nDl_108X;
  if ((n_116X < 0.0)) {
    arg0K0 = 0.0;
    goto L1408;}
  else {
    if ((1.0 < n_116X)) {
      arg0K0 = 1.0;
      goto L1408;}
    else {
      arg0K0 = n_116X;
      goto L1408;}}}
 L1408: {
  shadow_117X = arg0K0;
  if ((0.0 < nDl_108X)) {
    v_118X = 2 == (obj_72X->type);
    if (v_118X) {
      vector3d_119X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_119X)) {
        arg3K0 = vector3d_119X;
        goto L1433;}
      else {
        vector3d_119X->x = 0.0;
        vector3d_119X->y = 0.0;
        vector3d_119X->z = 0.0;
        arg3K0 = vector3d_119X;
        goto L1433;}}
    else {
      vector3d_120X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_120X)) {
        arg3K0 = vector3d_120X;
        goto L1433;}
      else {
        vector3d_120X->x = spec_115X;
        vector3d_120X->y = spec_115X;
        vector3d_120X->z = spec_115X;
        arg3K0 = vector3d_120X;
        goto L1433;}}}
  else {
    goto L1448;}}
 L1433: {
  v2_121X = arg3K0;
  v1_122X = vector3d_scalar_mul((obj_72X->color), nDl_108X);
  v_123X = vector3d_op(v1_122X, v2_121X, HflA12);
  v2_124X = vector3d_scalar_mul(v_123X, shadow_117X);
  v2_125X = vector3d_op((obj_98X->color), v2_124X, HflS30);
  v_126X = vector3d_op((acc), v2_125X, HflA12);
  acc = v_126X;
  goto L1448;}
 same_signPD0: {
  x_31X = merged_arg0K0;
  y_32X = merged_arg0K1;{
  same_signPD00_return_value = ((x_31X < 0.0) == (y_32X < 0.0));
  goto same_signPD0_return;}
 same_signPD0_return:
  switch (same_signPD0_return_tag) {
  case 0: goto same_signPD0_return_0;
  default: goto same_signPD0_return_1;
  }}

 object_normal: {
  object_29X = merged_arg4K0;
  point_30X = merged_arg3K1;{
  temp_127X = 0 == (object_29X->type);
  if (temp_127X) {
    goto L1024;}
  else {
    if ((1 == (object_29X->type))) {
      goto L1024;}
    else {
      if ((2 == (object_29X->type))) {
        plane_128X = (struct light*)(object_29X);
        object_normal0_return_value = (plane_128X->normal);
        goto object_normal_return;}
      else {
        if ((3 == (object_29X->type))) {
          triangle_129X = (struct light*)(object_29X);
          v_130X = vector3d_op((triangle_129X->vertex2), (triangle_129X->vertex1), Hfl_21);
          v_131X = vector3d_op((triangle_129X->vertex3), (triangle_129X->vertex1), Hfl_21);
          merged_arg3K0 = v_130X;
          merged_arg3K1 = v_131X;
          vector3d_cross_return_tag = 4;
          goto vector3d_cross;
         vector3d_cross_return_4:
          v1_132X = vector3d_cross0_return_value;
          v_133X = vector3d_dot(v1_132X, v1_132X);sqrt(v_133X);
          v_134X = vector3d_scalar_mul(v1_132X, 1.0);
          object_normal0_return_value = v_134X;
          goto object_normal_return;}
        else {
          vector3d_135X = (struct vector3d*)malloc(sizeof(struct vector3d));
          if ((NULL == vector3d_135X)) {
            object_normal0_return_value = vector3d_135X;
            goto object_normal_return;}
          else {
            vector3d_135X->x = 0.0;
            vector3d_135X->y = 1.0;
            vector3d_135X->z = 0.0;
            object_normal0_return_value = vector3d_135X;
            goto object_normal_return;}}}}}}
 L1024: {
  sphere_136X = (struct light*)(object_29X);
  v1_137X = vector3d_op(point_30X, (sphere_136X->position), Hfl_21);
  v_138X = vector3d_dot(v1_137X, v1_137X);sqrt(v_138X);
  v_139X = vector3d_scalar_mul(v1_137X, 1.0);
  object_normal0_return_value = v_139X;
  goto object_normal_return;}
 object_normal_return:
  switch (object_normal_return_tag) {
  case 0: goto object_normal_return_0;
  default: goto object_normal_return_1;
  }}

 vector3d_cross: {
  v1_27X = merged_arg3K0;
  v2_28X = merged_arg3K1;{
  v1_z_140X = v1_27X->z;
  v2_y_141X = v2_28X->y;
  v1_y_142X = v1_27X->y;
  v2_x_143X = v2_28X->x;
  v1_x_144X = v1_27X->x;
  v2_z_145X = v2_28X->z;
  v_146X = v2_28X->z;
  vector3d_147X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_147X)) {
    vector3d_cross0_return_value = vector3d_147X;
    goto vector3d_cross_return;}
  else {
    vector3d_147X->x = (((v1_y_142X * v2_z_145X) * v_146X) - (v1_z_140X * v2_y_141X));
    vector3d_147X->y = ((v1_z_140X * v2_x_143X) - (v1_x_144X * v2_z_145X));
    vector3d_147X->z = ((v1_x_144X * v2_y_141X) - (v1_y_142X * v2_x_143X));
    vector3d_cross0_return_value = vector3d_147X;
    goto vector3d_cross_return;}}
 vector3d_cross_return:
  switch (vector3d_cross_return_tag) {
  case 0: goto vector3d_cross_return_0;
  case 1: goto vector3d_cross_return_1;
  case 2: goto vector3d_cross_return_2;
  case 3: goto vector3d_cross_return_3;
  default: goto vector3d_cross_return_4;
  }}

}
long main(long argc_148X, char **argv_149X)
{
  struct object *arg4K0;
  long arg2K0;
  struct vector3d *arg3K0;
  double merged_arg0K0;

  int wD1_return_tag;
  long wD10_return_value;
  double c_150X;
  long v_194X;
  struct vector3d *color_193X;
  struct vector3d *view_192X;
  double v_191X;
  struct vector3d *v1_190X;
  struct vector3d *v1_189X;
  struct vector3d *point_188X;
  struct vector3d *vector3d_187X;
  double v_186X;
  double v_185X;
  long n_184X;
  double dy_183X;
  double dx_182X;
  double v_181X;
  double v_180X;
  struct vector3d *corner_179X;
  struct vector3d *vector3d_178X;
  long v_177X;
  FILE * port_176X;
  struct object *v_175X;
  struct object *v_174X;
  struct object *v_173X;
  struct light *light_172X;
  struct vector3d *color_171X;
  struct vector3d *vector3d_170X;
  struct vector3d *position_169X;
  struct vector3d *vector3d_168X;
  struct object *v_167X;
  struct object *v_166X;
  struct object *v_165X;
  struct plane *plane_164X;
  struct vector3d *color_163X;
  struct vector3d *vector3d_162X;
  struct vector3d *normal_161X;
  struct vector3d *vector3d_160X;
  struct object **objects_159X;
  struct object *v_158X;
  struct object *object_157X;
  struct vector3d *v_156X;
  struct vector3d *vector3d_155X;
  struct vector3d *v_154X;
  struct vector3d *vector3d_153X;
  struct vector3d *v_152X;
  struct vector3d *vector3d_151X;
 {  vector3d_151X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_151X)) {
    arg3K0 = vector3d_151X;
    goto L1955;}
  else {
    vector3d_151X->x = 0.0;
    vector3d_151X->y = 0.0;
    vector3d_151X->z = -5.0;
    arg3K0 = vector3d_151X;
    goto L1955;}}
 L1955: {
  v_152X = arg3K0;
  eye = v_152X;
  vector3d_153X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_153X)) {
    arg3K0 = vector3d_153X;
    goto L1960;}
  else {
    vector3d_153X->x = 0.0;
    vector3d_153X->y = 0.0;
    vector3d_153X->z = 0.0;
    arg3K0 = vector3d_153X;
    goto L1960;}}
 L1960: {
  v_154X = arg3K0;
  default_color = v_154X;
  vector3d_155X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_155X)) {
    arg3K0 = vector3d_155X;
    goto L1965;}
  else {
    vector3d_155X->x = 0.1;
    vector3d_155X->y = 0.1;
    vector3d_155X->z = 0.1;
    arg3K0 = vector3d_155X;
    goto L1965;}}
 L1965: {
  v_156X = arg3K0;
  ambient = v_156X;
  object_157X = (struct object*)malloc(sizeof(struct object));
  if ((NULL == object_157X)) {
    arg4K0 = object_157X;
    goto L1970;}
  else {
    object_157X->type = -1;
    arg4K0 = object_157X;
    goto L1970;}}
 L1970: {
  v_158X = arg4K0;
  objects_159X = (struct object**)malloc(sizeof(struct object*) * 5);
  vector3d_160X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_160X)) {
    arg3K0 = vector3d_160X;
    goto L1976;}
  else {
    vector3d_160X->x = 0.25;
    vector3d_160X->y = -1.0;
    vector3d_160X->z = 0.0;
    arg3K0 = vector3d_160X;
    goto L1976;}}
 L1976: {
  normal_161X = arg3K0;
  vector3d_162X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_162X)) {
    arg3K0 = vector3d_162X;
    goto L1974;}
  else {
    vector3d_162X->x = 0.7;
    vector3d_162X->y = 0.7;
    vector3d_162X->z = 1.0;
    arg3K0 = vector3d_162X;
    goto L1974;}}
 L1974: {
  color_163X = arg3K0;
  plane_164X = (struct plane*)malloc(sizeof(struct plane));
  if ((NULL == plane_164X)) {
    v_165X = (struct object*)(plane_164X);
    arg4K0 = v_165X;
    goto L1978;}
  else {
    plane_164X->type = 2;
    plane_164X->color = color_163X;
    plane_164X->normal = normal_161X;
    plane_164X->distance = 10.0;
    v_166X = (struct object*)(plane_164X);
    arg4K0 = v_166X;
    goto L1978;}}
 L1978: {
  v_167X = arg4K0;
  *(objects_159X + 0) = v_167X;
  vector3d_168X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_168X)) {
    arg3K0 = vector3d_168X;
    goto L1984;}
  else {
    vector3d_168X->x = -40.0;
    vector3d_168X->y = -15.0;
    vector3d_168X->z = 60.0;
    arg3K0 = vector3d_168X;
    goto L1984;}}
 L1984: {
  position_169X = arg3K0;
  vector3d_170X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_170X)) {
    arg3K0 = vector3d_170X;
    goto L1982;}
  else {
    vector3d_170X->x = 0.7;
    vector3d_170X->y = 0.9;
    vector3d_170X->z = 0.9;
    arg3K0 = vector3d_170X;
    goto L1982;}}
 L1982: {
  color_171X = arg3K0;
  light_172X = (struct light*)malloc(sizeof(struct light));
  if ((NULL == light_172X)) {
    v_173X = (struct object*)(light_172X);
    arg4K0 = v_173X;
    goto L1986;}
  else {
    light_172X->type = 0;
    light_172X->color = color_171X;
    light_172X->position = position_169X;
    light_172X->radius = 1.0;
    v_174X = (struct object*)(light_172X);
    arg4K0 = v_174X;
    goto L1986;}}
 L1986: {
  v_175X = arg4K0;
  *(objects_159X + 1) = v_175X;
  scene = objects_159X;
  scene_size = 5;
  port_176X = ps_open_output_file("image.ppm", &v_177X);
  ps_write_string("P6\n", port_176X);
  ps_write_integer(800, port_176X);
  ps_write_string(" ", port_176X);
  ps_write_integer(600, port_176X);
  ps_write_string("\n", port_176X);
  ps_write_string("255\n", port_176X);
  vector3d_178X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_178X)) {
    arg3K0 = vector3d_178X;
    goto L1838;}
  else {
    vector3d_178X->x = -4.0;
    vector3d_178X->y = -3.0;
    vector3d_178X->z = 0.0;
    arg3K0 = vector3d_178X;
    goto L1838;}}
 L1838: {
  corner_179X = arg3K0;
  v_180X = (float)(800);
  v_181X = (float)(600);
  dx_182X = 8.0 / v_180X;
  dy_183X = 6.0 / v_181X;
  arg2K0 = 0;
  goto L1847;}
 L1847: {
  n_184X = arg2K0;
  if ((n_184X < 480000)) {
    v_185X = (float)((n_184X / 600));
    v_186X = (float)((n_184X % 800));
    vector3d_187X = (struct vector3d*)malloc(sizeof(struct vector3d));
    if ((NULL == vector3d_187X)) {
      arg3K0 = vector3d_187X;
      goto L1854;}
    else {
      vector3d_187X->x = (v_186X * dx_182X);
      vector3d_187X->y = (v_185X * dy_183X);
      vector3d_187X->z = 0.0;
      arg3K0 = vector3d_187X;
      goto L1854;}}
  else {
    return 0;}}
 L1854: {
  point_188X = arg3K0;
  v1_189X = vector3d_op(corner_179X, point_188X, HflA12);
  v1_190X = vector3d_op(v1_189X, (eye), Hfl_21);
  v_191X = vector3d_dot(v1_190X, v1_190X);sqrt(v_191X);
  view_192X = vector3d_scalar_mul(v1_190X, 1.0);
  color_193X = shoot_ray((eye), view_192X, 0);
  merged_arg0K0 = (color_193X->x);
  wD1_return_tag = 0;
  goto wD1;
 wD1_return_0:
  merged_arg0K0 = (color_193X->y);
  wD1_return_tag = 1;
  goto wD1;
 wD1_return_1:
  merged_arg0K0 = (color_193X->z);
  wD1_return_tag = 2;
  goto wD1;
 wD1_return_2:
  arg2K0 = (1 + n_184X);
  goto L1847;}
 wD1: {
  c_150X = merged_arg0K0;{
  v_194X = (unsigned char)(c_150X);
  wD10_return_value = (ps_write_integer(v_194X, port_176X));
  goto wD1_return;}
 wD1_return:
  switch (wD1_return_tag) {
  case 0: goto wD1_return_0;
  case 1: goto wD1_return_1;
  default: goto wD1_return_2;
  }}

}void
prescheme_init(void)
{
ambient = NULL;
eye = NULL;
default_color = NULL;
scene = NULL;
scene_size = 0;
acc = NULL;
fcp_obj = NULL;
fcp_depth = 10000.0;
}
