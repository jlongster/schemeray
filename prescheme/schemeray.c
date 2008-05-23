#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "prescheme.h"
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
static void wD0(double);
static struct vector3d *vector3d_op(struct vector3d*, struct vector3d*, double(*)(double, double));
static struct vector3d *vector3d_scalar_mul(struct vector3d*, double);
static struct vector3d *shoot_ray(struct vector3d*, struct vector3d*, long);
long main(long, char**);
static struct vector3d *ambient;
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
static void wD0(double c_9X)
{

 {  write_real(c_9X);
  return;}
}
static struct vector3d *vector3d_op(struct vector3d *v1_10X, struct vector3d *v2_11X, double (*op_12X)(double, double))
{
  struct vector3d *vector3d_16X;
  double z_15X;
  double x_14X;
  double y_13X;
 {  y_13X = (*op_12X)((v1_10X->y), (v2_11X->y));
  x_14X = (*op_12X)((v1_10X->x), (v2_11X->x));
  z_15X = (*op_12X)((v1_10X->z), (v2_11X->z));
  vector3d_16X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_16X)) {
    return vector3d_16X;}
  else {
    vector3d_16X->x = x_14X;
    vector3d_16X->y = y_13X;
    vector3d_16X->z = z_15X;
    return vector3d_16X;}}
}
static struct vector3d *vector3d_scalar_mul(struct vector3d *v1_17X, double f_18X)
{
  struct vector3d *vector3d_22X;
  double v_21X;
  double v_20X;
  double v_19X;
 {  v_19X = v1_17X->y;
  v_20X = v1_17X->x;
  v_21X = v1_17X->z;
  vector3d_22X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_22X)) {
    return vector3d_22X;}
  else {
    vector3d_22X->x = (v_20X * f_18X);
    vector3d_22X->y = (v_19X * f_18X);
    vector3d_22X->z = (v_21X * f_18X);
    return vector3d_22X;}}
}
static struct vector3d *shoot_ray(struct vector3d *orig_23X, struct vector3d *dir_24X, long step_25X)
{
  struct vector3d *arg3K1;
  struct vector3d *arg3K0;
  struct object *arg2K1;
  long arg1K0;
  double arg0K2;
  double arg0K0;
  double merged_arg0K1;
  double merged_arg0K0;
  struct object *merged_arg2K0;
  struct vector3d *merged_arg3K1;
  struct vector3d *merged_arg3K0;

  int vector3d_dot_return_tag;
  double vector3d_dot0_return_value;
  int vector3d_cross_return_tag;
  struct vector3d *vector3d_cross0_return_value;
  int object_normal_return_tag;
  struct vector3d *object_normal0_return_value;
  int same_signPD1_return_tag;
  char same_signPD10_return_value;
  struct vector3d *v1_26X;
  struct vector3d *v2_27X;
  struct vector3d *v1_28X;
  struct vector3d *v2_29X;
  struct object *object_30X;
  struct vector3d *point_31X;
  double x_32X;
  double y_33X;
  struct vector3d *vector3d_151X;
  double v_150X;
  double v2_z_149X;
  double v1_x_148X;
  double v2_x_147X;
  double v1_y_146X;
  double v2_y_145X;
  double v1_z_144X;
  struct vector3d *v_143X;
  double v_142X;
  struct vector3d *v1_141X;
  struct sphere *sphere_140X;
  struct vector3d *vector3d_139X;
  struct vector3d *v_138X;
  double v_137X;
  struct vector3d *v1_136X;
  struct vector3d *v_135X;
  struct vector3d *v_134X;
  struct triangle *triangle_133X;
  struct plane *plane_132X;
  char temp_131X;
  struct vector3d *v_130X;
  struct vector3d *v2_129X;
  struct vector3d *v2_128X;
  struct vector3d *v_127X;
  struct vector3d *v1_126X;
  struct vector3d *v2_125X;
  struct vector3d *vector3d_124X;
  struct vector3d *vector3d_123X;
  char v_122X;
  double shadow_121X;
  double n_120X;
  double spec_119X;
  double rDv_118X;
  double n_117X;
  struct vector3d *r_116X;
  struct vector3d *v2_115X;
  double v_114X;
  double nDl_113X;
  struct vector3d *v1_112X;
  double n_111X;
  struct vector3d *n_110X;
  struct vector3d *l_109X;
  double v_108X;
  struct vector3d *point_to_light_107X;
  struct light *light_106X;
  struct object *obj_105X;
  struct vector3d *acc_104X;
  long i_103X;
  struct vector3d *v_102X;
  double d_101X;
  double r_100X;
  double v_99X;
  double d_98X;
  double v_97X;
  double v_96X;
  double b_95X;
  struct vector3d *eo_94X;
  struct sphere *obj_93X;
  struct vector3d *vector3d_92X;
  struct vector3d *v2_91X;
  struct vector3d *v_90X;
  struct vector3d *v_89X;
  struct vector3d *v2_88X;
  struct vector3d *view_87X;
  double v_86X;
  struct vector3d *v1_85X;
  struct vector3d *r_84X;
  double v_83X;
  struct vector3d *v1_82X;
  struct vector3d *v2_81X;
  double v_80X;
  struct vector3d *n_79X;
  struct vector3d *point_78X;
  struct vector3d *v2_77X;
  struct vector3d *vector3d_76X;
  char v_75X;
  char v_74X;
  double v_73X;
  struct vector3d *v_72X;
  struct vector3d *v_71X;
  struct vector3d *v_70X;
  char v_69X;
  double v_68X;
  struct vector3d *v_67X;
  struct vector3d *v_66X;
  struct vector3d *v_65X;
  double val_64X;
  struct vector3d *v_63X;
  struct vector3d *v_62X;
  struct vector3d *v_61X;
  struct vector3d *p_60X;
  struct vector3d *v2_59X;
  double d_58X;
  double o_aDn_57X;
  struct vector3d *v_56X;
  struct vector3d *c_55X;
  struct vector3d *b_54X;
  struct vector3d *a_53X;
  double vDn_52X;
  struct vector3d *n_51X;
  double v_50X;
  struct vector3d *v1_49X;
  struct vector3d *v_48X;
  struct vector3d *v_47X;
  struct triangle *obj_46X;
  double dist_45X;
  double v_44X;
  double d_43X;
  struct plane *obj_42X;
  char temp_41X;
  struct object *obj_40X;
  double closest_depth_39X;
  struct object *closest_object_38X;
  long i_37X;
  struct vector3d *vector3d_36X;
  long num_prims_35X;
  struct object **prims_34X;
 {  if ((step_25X < 3)) {
    prims_34X = scene;
    num_prims_35X = scene_size;
    arg1K0 = 0;
    arg2K1 = NULL;
    arg0K2 = 10000.0;
    goto L1951;}
  else {
    vector3d_36X = (struct vector3d*)malloc(sizeof(struct vector3d));
    if ((NULL == vector3d_36X)) {
      return vector3d_36X;}
    else {
      vector3d_36X->x = 0.0;
      vector3d_36X->y = 0.0;
      vector3d_36X->z = 0.0;
      return vector3d_36X;}}}
 L1951: {
  i_37X = arg1K0;
  closest_object_38X = arg2K1;
  closest_depth_39X = arg0K2;
  if ((i_37X < num_prims_35X)) {
    obj_40X = *(prims_34X + i_37X);
    temp_41X = 0 == (obj_40X->type);
    if (temp_41X) {
      goto L1894;}
    else {
      if ((1 == (obj_40X->type))) {
        goto L1894;}
      else {
        if ((2 == (obj_40X->type))) {
          obj_42X = (struct light*)(obj_40X);
          merged_arg3K0 = (obj_42X->normal);
          merged_arg3K1 = dir_24X;
          vector3d_dot_return_tag = 0;
          goto vector3d_dot;
         vector3d_dot_return_0:
          d_43X = vector3d_dot0_return_value;
          if ((0.0 == d_43X)) {
            arg0K0 = 10000.0;
            goto L1956;}
          else {
            merged_arg3K0 = (obj_42X->normal);
            merged_arg3K1 = orig_23X;
            vector3d_dot_return_tag = 1;
            goto vector3d_dot;
           vector3d_dot_return_1:
            v_44X = vector3d_dot0_return_value;
            dist_45X = (0.0 - (v_44X + (obj_42X->distance))) / d_43X;
            if ((0.0 < dist_45X)) {
              arg0K0 = dist_45X;
              goto L1956;}
            else {
              arg0K0 = 10000.0;
              goto L1956;}}}
        else {
          if ((3 == (obj_40X->type))) {
            obj_46X = (struct light*)(obj_40X);
            v_47X = vector3d_op((obj_46X->vertex2), (obj_46X->vertex1), Hfl_21);
            v_48X = vector3d_op((obj_46X->vertex3), (obj_46X->vertex1), Hfl_21);
            merged_arg3K0 = v_47X;
            merged_arg3K1 = v_48X;
            vector3d_cross_return_tag = 0;
            goto vector3d_cross;
           vector3d_cross_return_0:
            v1_49X = vector3d_cross0_return_value;
            merged_arg3K0 = v1_49X;
            merged_arg3K1 = v1_49X;
            vector3d_dot_return_tag = 2;
            goto vector3d_dot;
           vector3d_dot_return_2:
            v_50X = vector3d_dot0_return_value;sqrt(v_50X);
            n_51X = vector3d_scalar_mul(v1_49X, 1.0);
            merged_arg3K0 = dir_24X;
            merged_arg3K1 = n_51X;
            vector3d_dot_return_tag = 3;
            goto vector3d_dot;
           vector3d_dot_return_3:
            vDn_52X = vector3d_dot0_return_value;
            if ((vDn_52X < 0.0)) {
              a_53X = obj_46X->vertex1;
              b_54X = obj_46X->vertex2;
              c_55X = obj_46X->vertex3;
              v_56X = vector3d_op(orig_23X, a_53X, Hfl_21);
              merged_arg3K0 = v_56X;
              merged_arg3K1 = n_51X;
              vector3d_dot_return_tag = 4;
              goto vector3d_dot;
             vector3d_dot_return_4:
              o_aDn_57X = vector3d_dot0_return_value;
              d_58X = 0.0 - (o_aDn_57X / vDn_52X);
              v2_59X = vector3d_scalar_mul(dir_24X, d_58X);
              p_60X = vector3d_op(orig_23X, v2_59X, HflA12);
              v_61X = vector3d_op(b_54X, a_53X, Hfl_21);
              v_62X = vector3d_op(p_60X, a_53X, Hfl_21);
              merged_arg3K0 = v_61X;
              merged_arg3K1 = v_62X;
              vector3d_cross_return_tag = 1;
              goto vector3d_cross;
             vector3d_cross_return_1:
              v_63X = vector3d_cross0_return_value;
              merged_arg3K0 = v_63X;
              merged_arg3K1 = n_51X;
              vector3d_dot_return_tag = 5;
              goto vector3d_dot;
             vector3d_dot_return_5:
              val_64X = vector3d_dot0_return_value;
              if ((d_58X < 0.0)) {
                arg0K0 = 10000.0;
                goto L1956;}
              else {
                v_65X = vector3d_op(c_55X, b_54X, Hfl_21);
                v_66X = vector3d_op(p_60X, b_54X, Hfl_21);
                merged_arg3K0 = v_65X;
                merged_arg3K1 = v_66X;
                vector3d_cross_return_tag = 2;
                goto vector3d_cross;
               vector3d_cross_return_2:
                v_67X = vector3d_cross0_return_value;
                merged_arg3K0 = v_67X;
                merged_arg3K1 = n_51X;
                vector3d_dot_return_tag = 6;
                goto vector3d_dot;
               vector3d_dot_return_6:
                v_68X = vector3d_dot0_return_value;
                merged_arg0K0 = val_64X;
                merged_arg0K1 = v_68X;
                same_signPD1_return_tag = 0;
                goto same_signPD1;
               same_signPD1_return_0:
                v_69X = same_signPD10_return_value;
                if (v_69X) {
                  v_70X = vector3d_op(a_53X, c_55X, Hfl_21);
                  v_71X = vector3d_op(p_60X, c_55X, Hfl_21);
                  merged_arg3K0 = v_70X;
                  merged_arg3K1 = v_71X;
                  vector3d_cross_return_tag = 3;
                  goto vector3d_cross;
                 vector3d_cross_return_3:
                  v_72X = vector3d_cross0_return_value;
                  merged_arg3K0 = v_72X;
                  merged_arg3K1 = n_51X;
                  vector3d_dot_return_tag = 7;
                  goto vector3d_dot;
                 vector3d_dot_return_7:
                  v_73X = vector3d_dot0_return_value;
                  merged_arg0K0 = val_64X;
                  merged_arg0K1 = v_73X;
                  same_signPD1_return_tag = 1;
                  goto same_signPD1;
                 same_signPD1_return_1:
                  v_74X = same_signPD10_return_value;
                  if (v_74X) {
                    arg0K0 = d_58X;
                    goto L1956;}
                  else {
                    arg0K0 = 10000.0;
                    goto L1956;}}
                else {
                  arg0K0 = 10000.0;
                  goto L1956;}}}
            else {
              arg0K0 = 10000.0;
              goto L1956;}}
          else {
            arg0K0 = 10000.0;
            goto L1956;}}}}}
  else {
    v_75X = ISNULL(closest_object_38X);
    if (v_75X) {
      vector3d_76X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_76X)) {
        return vector3d_76X;}
      else {
        vector3d_76X->x = 0.0;
        vector3d_76X->y = 0.0;
        vector3d_76X->z = 0.0;
        return vector3d_76X;}}
    else {
      v2_77X = vector3d_scalar_mul(dir_24X, closest_depth_39X);
      point_78X = vector3d_op(orig_23X, v2_77X, HflA12);
      merged_arg2K0 = closest_object_38X;
      merged_arg3K1 = point_78X;
      object_normal_return_tag = 0;
      goto object_normal;
     object_normal_return_0:
      n_79X = object_normal0_return_value;
      merged_arg3K0 = dir_24X;
      merged_arg3K1 = n_79X;
      vector3d_dot_return_tag = 8;
      goto vector3d_dot;
     vector3d_dot_return_8:
      v_80X = vector3d_dot0_return_value;
      v2_81X = vector3d_scalar_mul(n_79X, (2.0 * v_80X));
      v1_82X = vector3d_op(dir_24X, v2_81X, Hfl_21);
      merged_arg3K0 = v1_82X;
      merged_arg3K1 = v1_82X;
      vector3d_dot_return_tag = 9;
      goto vector3d_dot;
     vector3d_dot_return_9:
      v_83X = vector3d_dot0_return_value;sqrt(v_83X);
      r_84X = vector3d_scalar_mul(v1_82X, 1.0);
      v1_85X = vector3d_op(point_78X, (eye), Hfl_21);
      merged_arg3K0 = v1_85X;
      merged_arg3K1 = v1_85X;
      vector3d_dot_return_tag = 10;
      goto vector3d_dot;
     vector3d_dot_return_10:
      v_86X = vector3d_dot0_return_value;sqrt(v_86X);
      view_87X = vector3d_scalar_mul(v1_85X, 1.0);
      v2_88X = vector3d_scalar_mul(r_84X, 1e-4);
      v_89X = vector3d_op(point_78X, v2_88X, HflA12);
      v_90X = shoot_ray(v_89X, r_84X, (1 + step_25X));(float)((1 + step_25X));
      v2_91X = vector3d_scalar_mul(v_90X, 1.0);
      if ((0 == (closest_object_38X->type))) {
        return vector3d_op((closest_object_38X->color), v2_91X, HflA12);}
      else {
        vector3d_92X = (struct vector3d*)malloc(sizeof(struct vector3d));
        if ((NULL == vector3d_92X)) {
          arg3K0 = vector3d_92X;
          goto L1711;}
        else {
          vector3d_92X->x = 0.0;
          vector3d_92X->y = 0.0;
          vector3d_92X->z = 0.0;
          arg3K0 = vector3d_92X;
          goto L1711;}}}}}
 L1894: {
  obj_93X = (struct light*)(obj_40X);
  eo_94X = vector3d_op(orig_23X, (obj_93X->position), Hfl_21);
  merged_arg3K0 = eo_94X;
  merged_arg3K1 = dir_24X;
  vector3d_dot_return_tag = 11;
  goto vector3d_dot;
 vector3d_dot_return_11:
  b_95X = vector3d_dot0_return_value;
  v_96X = pow((obj_93X->radius), 2.0);
  merged_arg3K0 = eo_94X;
  merged_arg3K1 = eo_94X;
  vector3d_dot_return_tag = 12;
  goto vector3d_dot;
 vector3d_dot_return_12:
  v_97X = vector3d_dot0_return_value;
  d_98X = (b_95X * b_95X) - (v_97X - v_96X);
  if ((0.0 < d_98X)) {
    v_99X = sqrt(d_98X);
    r_100X = (0.0 - b_95X) - v_99X;
    if ((0.0 < r_100X)) {
      arg0K0 = r_100X;
      goto L1956;}
    else {
      arg0K0 = 10000.0;
      goto L1956;}}
  else {
    arg0K0 = 10000.0;
    goto L1956;}}
 L1956: {
  d_101X = arg0K0;
  if ((d_101X < closest_depth_39X)) {
    arg1K0 = (1 + i_37X);
    arg2K1 = obj_40X;
    arg0K2 = d_101X;
    goto L1951;}
  else {
    arg1K0 = (1 + i_37X);
    arg2K1 = closest_object_38X;
    arg0K2 = closest_depth_39X;
    goto L1951;}}
 L1711: {
  v_102X = arg3K0;
  arg1K0 = 0;
  arg3K1 = v_102X;
  goto L1620;}
 L1620: {
  i_103X = arg1K0;
  acc_104X = arg3K1;
  if ((i_103X < (scene_size))) {
    obj_105X = *((scene) + i_103X);
    if ((0 == (obj_105X->type))) {
      light_106X = (struct light*)(obj_105X);
      point_to_light_107X = vector3d_op((light_106X->position), point_78X, Hfl_21);
      merged_arg3K0 = point_to_light_107X;
      merged_arg3K1 = point_to_light_107X;
      vector3d_dot_return_tag = 13;
      goto vector3d_dot;
     vector3d_dot_return_13:
      v_108X = vector3d_dot0_return_value;sqrt(v_108X);
      l_109X = vector3d_scalar_mul(point_to_light_107X, 1.0);
      merged_arg2K0 = closest_object_38X;
      merged_arg3K1 = point_78X;
      object_normal_return_tag = 1;
      goto object_normal;
     object_normal_return_1:
      n_110X = object_normal0_return_value;
      merged_arg3K0 = n_110X;
      merged_arg3K1 = l_109X;
      vector3d_dot_return_tag = 14;
      goto vector3d_dot;
     vector3d_dot_return_14:
      n_111X = vector3d_dot0_return_value;
      if ((n_111X < 0.0)) {
        arg0K0 = 0.0;
        goto L1648;}
      else {
        if ((1.0 < n_111X)) {
          arg0K0 = 1.0;
          goto L1648;}
        else {
          arg0K0 = n_111X;
          goto L1648;}}}
    else {
      arg1K0 = (1 + i_103X);
      arg3K1 = acc_104X;
      goto L1620;}}
  else {
    if ((2 == (closest_object_38X->type))) {
      return vector3d_op(acc_104X, v2_91X, HflA12);}
    else {
      v1_112X = vector3d_op((ambient), acc_104X, HflA12);
      return vector3d_op(v1_112X, v2_91X, HflA12);}}}
 L1648: {
  nDl_113X = arg0K0;
  merged_arg3K0 = n_110X;
  merged_arg3K1 = l_109X;
  vector3d_dot_return_tag = 15;
  goto vector3d_dot;
 vector3d_dot_return_15:
  v_114X = vector3d_dot0_return_value;
  v2_115X = vector3d_scalar_mul(n_110X, (2.0 * v_114X));
  r_116X = vector3d_op(l_109X, v2_115X, Hfl_21);
  merged_arg3K0 = r_116X;
  merged_arg3K1 = view_87X;
  vector3d_dot_return_tag = 16;
  goto vector3d_dot;
 vector3d_dot_return_16:
  n_117X = vector3d_dot0_return_value;
  if ((n_117X < 0.0)) {
    arg0K0 = 0.0;
    goto L1662;}
  else {
    if ((1.0 < n_117X)) {
      arg0K0 = 1.0;
      goto L1662;}
    else {
      arg0K0 = n_117X;
      goto L1662;}}}
 L1662: {
  rDv_118X = arg0K0;
  spec_119X = pow(rDv_118X, 30.0);
  n_120X = 4.0 * nDl_113X;
  if ((n_120X < 0.0)) {
    arg0K0 = 0.0;
    goto L1672;}
  else {
    if ((1.0 < n_120X)) {
      arg0K0 = 1.0;
      goto L1672;}
    else {
      arg0K0 = n_120X;
      goto L1672;}}}
 L1672: {
  shadow_121X = arg0K0;
  if ((0.0 < nDl_113X)) {
    v_122X = 2 == (closest_object_38X->type);
    if (v_122X) {
      vector3d_123X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_123X)) {
        arg3K0 = vector3d_123X;
        goto L1695;}
      else {
        vector3d_123X->x = 0.0;
        vector3d_123X->y = 0.0;
        vector3d_123X->z = 0.0;
        arg3K0 = vector3d_123X;
        goto L1695;}}
    else {
      vector3d_124X = (struct vector3d*)malloc(sizeof(struct vector3d));
      if ((NULL == vector3d_124X)) {
        arg3K0 = vector3d_124X;
        goto L1695;}
      else {
        vector3d_124X->x = spec_119X;
        vector3d_124X->y = spec_119X;
        vector3d_124X->z = spec_119X;
        arg3K0 = vector3d_124X;
        goto L1695;}}}
  else {
    arg1K0 = (1 + i_103X);
    arg3K1 = acc_104X;
    goto L1620;}}
 L1695: {
  v2_125X = arg3K0;
  v1_126X = vector3d_scalar_mul((closest_object_38X->color), nDl_113X);
  v_127X = vector3d_op(v1_126X, v2_125X, HflA12);
  v2_128X = vector3d_scalar_mul(v_127X, shadow_121X);
  v2_129X = vector3d_op((obj_105X->color), v2_128X, HflS30);
  v_130X = vector3d_op(acc_104X, v2_129X, HflA12);
  arg1K0 = (1 + i_103X);
  arg3K1 = v_130X;
  goto L1620;}
 same_signPD1: {
  x_32X = merged_arg0K0;
  y_33X = merged_arg0K1;{
  same_signPD10_return_value = ((x_32X < 0.0) == (y_33X < 0.0));
  goto same_signPD1_return;}
 same_signPD1_return:
  switch (same_signPD1_return_tag) {
  case 0: goto same_signPD1_return_0;
  default: goto same_signPD1_return_1;
  }}

 object_normal: {
  object_30X = merged_arg2K0;
  point_31X = merged_arg3K1;{
  temp_131X = 0 == (object_30X->type);
  if (temp_131X) {
    goto L1289;}
  else {
    if ((1 == (object_30X->type))) {
      goto L1289;}
    else {
      if ((2 == (object_30X->type))) {
        plane_132X = (struct light*)(object_30X);
        object_normal0_return_value = (plane_132X->normal);
        goto object_normal_return;}
      else {
        if ((3 == (object_30X->type))) {
          triangle_133X = (struct light*)(object_30X);
          v_134X = vector3d_op((triangle_133X->vertex2), (triangle_133X->vertex1), Hfl_21);
          v_135X = vector3d_op((triangle_133X->vertex3), (triangle_133X->vertex1), Hfl_21);
          merged_arg3K0 = v_134X;
          merged_arg3K1 = v_135X;
          vector3d_cross_return_tag = 4;
          goto vector3d_cross;
         vector3d_cross_return_4:
          v1_136X = vector3d_cross0_return_value;
          merged_arg3K0 = v1_136X;
          merged_arg3K1 = v1_136X;
          vector3d_dot_return_tag = 17;
          goto vector3d_dot;
         vector3d_dot_return_17:
          v_137X = vector3d_dot0_return_value;sqrt(v_137X);
          v_138X = vector3d_scalar_mul(v1_136X, 1.0);
          object_normal0_return_value = v_138X;
          goto object_normal_return;}
        else {
          vector3d_139X = (struct vector3d*)malloc(sizeof(struct vector3d));
          if ((NULL == vector3d_139X)) {
            object_normal0_return_value = vector3d_139X;
            goto object_normal_return;}
          else {
            vector3d_139X->x = 0.0;
            vector3d_139X->y = 1.0;
            vector3d_139X->z = 0.0;
            object_normal0_return_value = vector3d_139X;
            goto object_normal_return;}}}}}}
 L1289: {
  sphere_140X = (struct light*)(object_30X);
  v1_141X = vector3d_op(point_31X, (sphere_140X->position), Hfl_21);
  merged_arg3K0 = v1_141X;
  merged_arg3K1 = v1_141X;
  vector3d_dot_return_tag = 18;
  goto vector3d_dot;
 vector3d_dot_return_18:
  v_142X = vector3d_dot0_return_value;sqrt(v_142X);
  v_143X = vector3d_scalar_mul(v1_141X, 1.0);
  object_normal0_return_value = v_143X;
  goto object_normal_return;}
 object_normal_return:
  switch (object_normal_return_tag) {
  case 0: goto object_normal_return_0;
  default: goto object_normal_return_1;
  }}

 vector3d_cross: {
  v1_28X = merged_arg3K0;
  v2_29X = merged_arg3K1;{
  v1_z_144X = v1_28X->z;
  v2_y_145X = v2_29X->y;
  v1_y_146X = v1_28X->y;
  v2_x_147X = v2_29X->x;
  v1_x_148X = v1_28X->x;
  v2_z_149X = v2_29X->z;
  v_150X = v2_29X->z;
  vector3d_151X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_151X)) {
    vector3d_cross0_return_value = vector3d_151X;
    goto vector3d_cross_return;}
  else {
    vector3d_151X->x = (((v1_y_146X * v2_z_149X) * v_150X) - (v1_z_144X * v2_y_145X));
    vector3d_151X->y = ((v1_z_144X * v2_x_147X) - (v1_x_148X * v2_z_149X));
    vector3d_151X->z = ((v1_x_148X * v2_y_145X) - (v1_y_146X * v2_x_147X));
    vector3d_cross0_return_value = vector3d_151X;
    goto vector3d_cross_return;}}
 vector3d_cross_return:
  switch (vector3d_cross_return_tag) {
  case 0: goto vector3d_cross_return_0;
  case 1: goto vector3d_cross_return_1;
  case 2: goto vector3d_cross_return_2;
  case 3: goto vector3d_cross_return_3;
  default: goto vector3d_cross_return_4;
  }}

 vector3d_dot: {
  v1_26X = merged_arg3K0;
  v2_27X = merged_arg3K1;{
  vector3d_dot0_return_value = ((((v1_26X->x) * (v2_27X->x)) + ((v1_26X->y) * (v2_27X->y))) + ((v1_26X->z) * (v2_27X->z)));
  goto vector3d_dot_return;}
 vector3d_dot_return:
  switch (vector3d_dot_return_tag) {
  case 0: goto vector3d_dot_return_0;
  case 1: goto vector3d_dot_return_1;
  case 2: goto vector3d_dot_return_2;
  case 3: goto vector3d_dot_return_3;
  case 4: goto vector3d_dot_return_4;
  case 5: goto vector3d_dot_return_5;
  case 6: goto vector3d_dot_return_6;
  case 7: goto vector3d_dot_return_7;
  case 8: goto vector3d_dot_return_8;
  case 9: goto vector3d_dot_return_9;
  case 10: goto vector3d_dot_return_10;
  case 11: goto vector3d_dot_return_11;
  case 12: goto vector3d_dot_return_12;
  case 13: goto vector3d_dot_return_13;
  case 14: goto vector3d_dot_return_14;
  case 15: goto vector3d_dot_return_15;
  case 16: goto vector3d_dot_return_16;
  case 17: goto vector3d_dot_return_17;
  default: goto vector3d_dot_return_18;
  }}

}
long main(long argc_152X, char **argv_153X)
{
  struct object *arg2K0;
  struct vector3d *arg3K0;
  FILE * merged_arg4K1;
  struct vector3d *merged_arg3K0;

  int write_vector_return_tag;
  struct vector3d *vector3d_154X;
  struct vector3d *color_182X;
  struct vector3d *dir_181X;
  struct vector3d *vector3d_180X;
  struct object *v_179X;
  struct object *v_178X;
  struct object *v_177X;
  struct light *light_176X;
  struct vector3d *color_175X;
  struct vector3d *vector3d_174X;
  struct vector3d *position_173X;
  struct vector3d *vector3d_172X;
  struct object *v_171X;
  struct object *v_170X;
  struct object *v_169X;
  struct sphere *sphere_168X;
  struct vector3d *color_167X;
  struct vector3d *vector3d_166X;
  struct vector3d *position_165X;
  struct vector3d *vector3d_164X;
  struct object **objects_163X;
  struct object *v_162X;
  struct object *object_161X;
  struct vector3d *v_160X;
  struct vector3d *vector3d_159X;
  struct vector3d *v_158X;
  struct vector3d *vector3d_157X;
  struct vector3d *v_156X;
  struct vector3d *vector3d_155X;
 {  vector3d_155X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_155X)) {
    arg3K0 = vector3d_155X;
    goto L930;}
  else {
    vector3d_155X->x = 0.0;
    vector3d_155X->y = 0.0;
    vector3d_155X->z = -5.0;
    arg3K0 = vector3d_155X;
    goto L930;}}
 L930: {
  v_156X = arg3K0;
  eye = v_156X;
  vector3d_157X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_157X)) {
    arg3K0 = vector3d_157X;
    goto L935;}
  else {
    vector3d_157X->x = 0.0;
    vector3d_157X->y = 0.0;
    vector3d_157X->z = 0.0;
    arg3K0 = vector3d_157X;
    goto L935;}}
 L935: {
  v_158X = arg3K0;
  default_color = v_158X;
  vector3d_159X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_159X)) {
    arg3K0 = vector3d_159X;
    goto L940;}
  else {
    vector3d_159X->x = 0.1;
    vector3d_159X->y = 0.1;
    vector3d_159X->z = 0.1;
    arg3K0 = vector3d_159X;
    goto L940;}}
 L940: {
  v_160X = arg3K0;
  ambient = v_160X;
  object_161X = (struct object*)malloc(sizeof(struct object));
  if ((NULL == object_161X)) {
    arg2K0 = object_161X;
    goto L945;}
  else {
    object_161X->type = -1;
    arg2K0 = object_161X;
    goto L945;}}
 L945: {
  v_162X = arg2K0;
  objects_163X = (struct object**)malloc(sizeof(struct object*) * 2);
  vector3d_164X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_164X)) {
    arg3K0 = vector3d_164X;
    goto L951;}
  else {
    vector3d_164X->x = 0.0;
    vector3d_164X->y = 0.0;
    vector3d_164X->z = 20.0;
    arg3K0 = vector3d_164X;
    goto L951;}}
 L951: {
  position_165X = arg3K0;
  vector3d_166X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_166X)) {
    arg3K0 = vector3d_166X;
    goto L949;}
  else {
    vector3d_166X->x = 0.7;
    vector3d_166X->y = 0.7;
    vector3d_166X->z = 1.0;
    arg3K0 = vector3d_166X;
    goto L949;}}
 L949: {
  color_167X = arg3K0;
  sphere_168X = (struct sphere*)malloc(sizeof(struct sphere));
  if ((NULL == sphere_168X)) {
    v_169X = (struct object*)(sphere_168X);
    arg2K0 = v_169X;
    goto L953;}
  else {
    sphere_168X->type = 1;
    sphere_168X->color = color_167X;
    sphere_168X->position = position_165X;
    sphere_168X->radius = 10.0;
    v_170X = (struct object*)(sphere_168X);
    arg2K0 = v_170X;
    goto L953;}}
 L953: {
  v_171X = arg2K0;
  *(objects_163X + 0) = v_171X;
  vector3d_172X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_172X)) {
    arg3K0 = vector3d_172X;
    goto L959;}
  else {
    vector3d_172X->x = 20.0;
    vector3d_172X->y = 20.0;
    vector3d_172X->z = 15.0;
    arg3K0 = vector3d_172X;
    goto L959;}}
 L959: {
  position_173X = arg3K0;
  vector3d_174X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_174X)) {
    arg3K0 = vector3d_174X;
    goto L957;}
  else {
    vector3d_174X->x = 0.7;
    vector3d_174X->y = 0.9;
    vector3d_174X->z = 0.9;
    arg3K0 = vector3d_174X;
    goto L957;}}
 L957: {
  color_175X = arg3K0;
  light_176X = (struct light*)malloc(sizeof(struct light));
  if ((NULL == light_176X)) {
    v_177X = (struct object*)(light_176X);
    arg2K0 = v_177X;
    goto L961;}
  else {
    light_176X->type = 0;
    light_176X->color = color_175X;
    light_176X->position = position_173X;
    light_176X->radius = 1.0;
    v_178X = (struct object*)(light_176X);
    arg2K0 = v_178X;
    goto L961;}}
 L961: {
  v_179X = arg2K0;
  *(objects_163X + 1) = v_179X;
  scene = objects_163X;
  scene_size = 2;
  vector3d_180X = (struct vector3d*)malloc(sizeof(struct vector3d));
  if ((NULL == vector3d_180X)) {
    arg3K0 = vector3d_180X;
    goto L2233;}
  else {
    vector3d_180X->x = 0.0;
    vector3d_180X->y = 0.0;
    vector3d_180X->z = 1.0;
    arg3K0 = vector3d_180X;
    goto L2233;}}
 L2233: {
  dir_181X = arg3K0;
  ps_write_string("Eye: ", (stdout));
  merged_arg3K0 = (eye);
  merged_arg4K1 = (stdout);
  write_vector_return_tag = 0;
  goto write_vector;
 write_vector_return_0:
  { long ignoreXX;
  PS_WRITE_CHAR(10, (stdout), ignoreXX) }
  ps_write_string("Shooting ray:\n    origin: [", (stdout));
  merged_arg3K0 = (eye);
  merged_arg4K1 = (stdout);
  write_vector_return_tag = 1;
  goto write_vector;
 write_vector_return_1:
  ps_write_string("]\n", (stdout));
  ps_write_string("    dir:    [", (stdout));
  merged_arg3K0 = dir_181X;
  merged_arg4K1 = (stdout);
  write_vector_return_tag = 2;
  goto write_vector;
 write_vector_return_2:
  ps_write_string("]\n", (stdout));
  color_182X = shoot_ray((eye), dir_181X, 0);
  merged_arg3K0 = color_182X;
  merged_arg4K1 = (stdout);
  write_vector_return_tag = 3;
  goto write_vector;
 write_vector_return_3:
  return 0;}
 write_vector: {
  vector3d_154X = merged_arg3K0;{wD0((vector3d_154X->x));
  ps_write_string(" ", (stdout));wD0((vector3d_154X->y));
  ps_write_string(" ", (stdout));
  wD0((vector3d_154X->z));
  goto write_vector_return;}
 write_vector_return:
  switch (write_vector_return_tag) {
  case 0: goto write_vector_return_0;
  case 1: goto write_vector_return_1;
  case 2: goto write_vector_return_2;
  default: goto write_vector_return_3;
  }}

}void
prescheme_init(void)
{
ambient = NULL;
eye = NULL;
default_color = NULL;
scene = NULL;
scene_size = 0;
}
