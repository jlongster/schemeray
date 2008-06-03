#ifdef ___LINKER_INFO
; File: "schemeray.c", produced by Gambit-C v4.2.6
(
402006
" schemeray"
(" schemeray")
(
"face"
"light"
"mesh"
"mtlswitch"
"new"
"plane"
"sphere"
"triangle"
"vertex"
"window"
"x"
"y"
)
(
)
(
" schemeray"
"##type-2-window"
"ambient"
"apply-lighting"
"backColor"
"cur-material"
"current-log-port"
"eye"
"file-foreach"
"find-closest-prim"
"generate-spheres"
"get-current-material"
"load-obj"
"make-image"
"make-vec3d"
"make-vertex"
"mat-attr"
"mat-create"
"mat-property"
"materials"
"mesh-primitives"
"obj-attr"
"obj-face"
"obj-material-switch"
"obj-type"
"obj-vertex"
"plane-intersection"
"plane-normal"
"prims"
"res"
"scene"
"screenDimen"
"shoot-ray"
"shoot-screen-rays"
"sphere-intersection"
"sphere-normal"
"token-map"
"triangle-intersection"
"triangle-normal"
"vec3d-add"
"vec3d-scalar-mul"
"verts"
"while"
"window-x"
"window-y"
"write-color"
"write-log"
)
(
"box"
"coptix"
"depth"
"display-args"
"flonum->fixnum"
"light-intersection"
"light-pos"
"make-vec2d"
"make-window"
"mat-declaration"
"material-prop"
"maxsteps"
"mesh-pos"
"obj-color"
"obj-declaration"
"obj-normal"
"plane-distance"
"read-token"
"real->percentage"
"real->u8"
"saturate"
"sphere-pos"
"sphere-radius"
"test-intersection"
"triangle-v1"
"triangle-v2"
"triangle-v3"
"vec2d-x"
"vec2d-y"
"vec3d-component-mul"
"vec3d-cross"
"vec3d-dot"
"vec3d-length"
"vec3d-op"
"vec3d-sub"
"vec3d-unit"
"vec3d-x"
"vec3d-y"
"vec3d-z"
"window-x-set!"
"window-y-set!"
"window?"
)
(
"##flonum.->fixnum"
"##make-uninterned-symbol"
"##type-type"
"*"
"-"
">="
"append"
"apply"
"assoc"
"call-with-input-file"
"current-error-port"
"current-input-port"
"display"
"error"
"exact->inexact"
"length"
"list->vector"
"make-parameter"
"memv"
"newline"
"read"
"read-all"
"read-line"
"reverse"
"string->symbol"
"string-append"
"string=?"
"with-input-from-string"
"with-output-to-file"
"with-output-to-port"
"write-u8"
)
 #f
)
#else
#define ___VERSION 402006
#define ___MODULE_NAME " schemeray"
#define ___LINKER_ID ____20_schemeray
#define ___MH_PROC ___H__20_schemeray
#define ___SCRIPT_LINE 0
#define ___SYM_COUNT 12
#define ___GLO_COUNT 120
#define ___SUP_COUNT 89
#define ___CNS_COUNT 14
#define ___SUB_COUNT 29
#define ___LBL_COUNT 460
#define ___OFD_COUNT 3
#include "gambit.h"

___NEED_SYM(___S_face)
___NEED_SYM(___S_light)
___NEED_SYM(___S_mesh)
___NEED_SYM(___S_mtlswitch)
___NEED_SYM(___S_new)
___NEED_SYM(___S_plane)
___NEED_SYM(___S_sphere)
___NEED_SYM(___S_triangle)
___NEED_SYM(___S_vertex)
___NEED_SYM(___S_window)
___NEED_SYM(___S_x)
___NEED_SYM(___S_y)

___NEED_GLO(___G__20_schemeray)
___NEED_GLO(___G__23__23_flonum_2e__2d__3e_fixnum)
___NEED_GLO(___G__23__23_make_2d_uninterned_2d_symbol)
___NEED_GLO(___G__23__23_type_2d_2_2d_window)
___NEED_GLO(___G__23__23_type_2d_type)
___NEED_GLO(___G__2a_)
___NEED_GLO(___G__2d_)
___NEED_GLO(___G__3e__3d_)
___NEED_GLO(___G_ambient)
___NEED_GLO(___G_append)
___NEED_GLO(___G_apply)
___NEED_GLO(___G_apply_2d_lighting)
___NEED_GLO(___G_assoc)
___NEED_GLO(___G_backColor)
___NEED_GLO(___G_box)
___NEED_GLO(___G_call_2d_with_2d_input_2d_file)
___NEED_GLO(___G_coptix)
___NEED_GLO(___G_cur_2d_material)
___NEED_GLO(___G_current_2d_error_2d_port)
___NEED_GLO(___G_current_2d_input_2d_port)
___NEED_GLO(___G_current_2d_log_2d_port)
___NEED_GLO(___G_depth)
___NEED_GLO(___G_display)
___NEED_GLO(___G_display_2d_args)
___NEED_GLO(___G_error)
___NEED_GLO(___G_exact_2d__3e_inexact)
___NEED_GLO(___G_eye)
___NEED_GLO(___G_file_2d_foreach)
___NEED_GLO(___G_find_2d_closest_2d_prim)
___NEED_GLO(___G_flonum_2d__3e_fixnum)
___NEED_GLO(___G_generate_2d_spheres)
___NEED_GLO(___G_get_2d_current_2d_material)
___NEED_GLO(___G_length)
___NEED_GLO(___G_light_2d_intersection)
___NEED_GLO(___G_light_2d_pos)
___NEED_GLO(___G_list_2d__3e_vector)
___NEED_GLO(___G_load_2d_obj)
___NEED_GLO(___G_make_2d_image)
___NEED_GLO(___G_make_2d_parameter)
___NEED_GLO(___G_make_2d_vec2d)
___NEED_GLO(___G_make_2d_vec3d)
___NEED_GLO(___G_make_2d_vertex)
___NEED_GLO(___G_make_2d_window)
___NEED_GLO(___G_mat_2d_attr)
___NEED_GLO(___G_mat_2d_create)
___NEED_GLO(___G_mat_2d_declaration)
___NEED_GLO(___G_mat_2d_property)
___NEED_GLO(___G_material_2d_prop)
___NEED_GLO(___G_materials)
___NEED_GLO(___G_maxsteps)
___NEED_GLO(___G_memv)
___NEED_GLO(___G_mesh_2d_pos)
___NEED_GLO(___G_mesh_2d_primitives)
___NEED_GLO(___G_newline)
___NEED_GLO(___G_obj_2d_attr)
___NEED_GLO(___G_obj_2d_color)
___NEED_GLO(___G_obj_2d_declaration)
___NEED_GLO(___G_obj_2d_face)
___NEED_GLO(___G_obj_2d_material_2d_switch)
___NEED_GLO(___G_obj_2d_normal)
___NEED_GLO(___G_obj_2d_type)
___NEED_GLO(___G_obj_2d_vertex)
___NEED_GLO(___G_plane_2d_distance)
___NEED_GLO(___G_plane_2d_intersection)
___NEED_GLO(___G_plane_2d_normal)
___NEED_GLO(___G_prims)
___NEED_GLO(___G_read)
___NEED_GLO(___G_read_2d_all)
___NEED_GLO(___G_read_2d_line)
___NEED_GLO(___G_read_2d_token)
___NEED_GLO(___G_real_2d__3e_percentage)
___NEED_GLO(___G_real_2d__3e_u8)
___NEED_GLO(___G_res)
___NEED_GLO(___G_reverse)
___NEED_GLO(___G_saturate)
___NEED_GLO(___G_scene)
___NEED_GLO(___G_screenDimen)
___NEED_GLO(___G_shoot_2d_ray)
___NEED_GLO(___G_shoot_2d_screen_2d_rays)
___NEED_GLO(___G_sphere_2d_intersection)
___NEED_GLO(___G_sphere_2d_normal)
___NEED_GLO(___G_sphere_2d_pos)
___NEED_GLO(___G_sphere_2d_radius)
___NEED_GLO(___G_string_2d__3e_symbol)
___NEED_GLO(___G_string_2d_append)
___NEED_GLO(___G_string_3d__3f_)
___NEED_GLO(___G_test_2d_intersection)
___NEED_GLO(___G_token_2d_map)
___NEED_GLO(___G_triangle_2d_intersection)
___NEED_GLO(___G_triangle_2d_normal)
___NEED_GLO(___G_triangle_2d_v1)
___NEED_GLO(___G_triangle_2d_v2)
___NEED_GLO(___G_triangle_2d_v3)
___NEED_GLO(___G_vec2d_2d_x)
___NEED_GLO(___G_vec2d_2d_y)
___NEED_GLO(___G_vec3d_2d_add)
___NEED_GLO(___G_vec3d_2d_component_2d_mul)
___NEED_GLO(___G_vec3d_2d_cross)
___NEED_GLO(___G_vec3d_2d_dot)
___NEED_GLO(___G_vec3d_2d_length)
___NEED_GLO(___G_vec3d_2d_op)
___NEED_GLO(___G_vec3d_2d_scalar_2d_mul)
___NEED_GLO(___G_vec3d_2d_sub)
___NEED_GLO(___G_vec3d_2d_unit)
___NEED_GLO(___G_vec3d_2d_x)
___NEED_GLO(___G_vec3d_2d_y)
___NEED_GLO(___G_vec3d_2d_z)
___NEED_GLO(___G_verts)
___NEED_GLO(___G_while)
___NEED_GLO(___G_window_2d_x)
___NEED_GLO(___G_window_2d_x_2d_set_21_)
___NEED_GLO(___G_window_2d_y)
___NEED_GLO(___G_window_2d_y_2d_set_21_)
___NEED_GLO(___G_window_3f_)
___NEED_GLO(___G_with_2d_input_2d_from_2d_string)
___NEED_GLO(___G_with_2d_output_2d_to_2d_file)
___NEED_GLO(___G_with_2d_output_2d_to_2d_port)
___NEED_GLO(___G_write_2d_color)
___NEED_GLO(___G_write_2d_log)
___NEED_GLO(___G_write_2d_u8)

___BEGIN_SYM1
___DEF_SYM1(0,___S_face,"face")
___DEF_SYM1(1,___S_light,"light")
___DEF_SYM1(2,___S_mesh,"mesh")
___DEF_SYM1(3,___S_mtlswitch,"mtlswitch")
___DEF_SYM1(4,___S_new,"new")
___DEF_SYM1(5,___S_plane,"plane")
___DEF_SYM1(6,___S_sphere,"sphere")
___DEF_SYM1(7,___S_triangle,"triangle")
___DEF_SYM1(8,___S_vertex,"vertex")
___DEF_SYM1(9,___S_window,"window")
___DEF_SYM1(10,___S_x,"x")
___DEF_SYM1(11,___S_y,"y")
___END_SYM1

___BEGIN_GLO
___DEF_GLO(0," schemeray")
___DEF_GLO(1,"##type-2-window")
___DEF_GLO(2,"ambient")
___DEF_GLO(3,"apply-lighting")
___DEF_GLO(4,"backColor")
___DEF_GLO(5,"box")
___DEF_GLO(6,"coptix")
___DEF_GLO(7,"cur-material")
___DEF_GLO(8,"current-log-port")
___DEF_GLO(9,"depth")
___DEF_GLO(10,"display-args")
___DEF_GLO(11,"eye")
___DEF_GLO(12,"file-foreach")
___DEF_GLO(13,"find-closest-prim")
___DEF_GLO(14,"flonum->fixnum")
___DEF_GLO(15,"generate-spheres")
___DEF_GLO(16,"get-current-material")
___DEF_GLO(17,"light-intersection")
___DEF_GLO(18,"light-pos")
___DEF_GLO(19,"load-obj")
___DEF_GLO(20,"make-image")
___DEF_GLO(21,"make-vec2d")
___DEF_GLO(22,"make-vec3d")
___DEF_GLO(23,"make-vertex")
___DEF_GLO(24,"make-window")
___DEF_GLO(25,"mat-attr")
___DEF_GLO(26,"mat-create")
___DEF_GLO(27,"mat-declaration")
___DEF_GLO(28,"mat-property")
___DEF_GLO(29,"material-prop")
___DEF_GLO(30,"materials")
___DEF_GLO(31,"maxsteps")
___DEF_GLO(32,"mesh-pos")
___DEF_GLO(33,"mesh-primitives")
___DEF_GLO(34,"obj-attr")
___DEF_GLO(35,"obj-color")
___DEF_GLO(36,"obj-declaration")
___DEF_GLO(37,"obj-face")
___DEF_GLO(38,"obj-material-switch")
___DEF_GLO(39,"obj-normal")
___DEF_GLO(40,"obj-type")
___DEF_GLO(41,"obj-vertex")
___DEF_GLO(42,"plane-distance")
___DEF_GLO(43,"plane-intersection")
___DEF_GLO(44,"plane-normal")
___DEF_GLO(45,"prims")
___DEF_GLO(46,"read-token")
___DEF_GLO(47,"real->percentage")
___DEF_GLO(48,"real->u8")
___DEF_GLO(49,"res")
___DEF_GLO(50,"saturate")
___DEF_GLO(51,"scene")
___DEF_GLO(52,"screenDimen")
___DEF_GLO(53,"shoot-ray")
___DEF_GLO(54,"shoot-screen-rays")
___DEF_GLO(55,"sphere-intersection")
___DEF_GLO(56,"sphere-normal")
___DEF_GLO(57,"sphere-pos")
___DEF_GLO(58,"sphere-radius")
___DEF_GLO(59,"test-intersection")
___DEF_GLO(60,"token-map")
___DEF_GLO(61,"triangle-intersection")
___DEF_GLO(62,"triangle-normal")
___DEF_GLO(63,"triangle-v1")
___DEF_GLO(64,"triangle-v2")
___DEF_GLO(65,"triangle-v3")
___DEF_GLO(66,"vec2d-x")
___DEF_GLO(67,"vec2d-y")
___DEF_GLO(68,"vec3d-add")
___DEF_GLO(69,"vec3d-component-mul")
___DEF_GLO(70,"vec3d-cross")
___DEF_GLO(71,"vec3d-dot")
___DEF_GLO(72,"vec3d-length")
___DEF_GLO(73,"vec3d-op")
___DEF_GLO(74,"vec3d-scalar-mul")
___DEF_GLO(75,"vec3d-sub")
___DEF_GLO(76,"vec3d-unit")
___DEF_GLO(77,"vec3d-x")
___DEF_GLO(78,"vec3d-y")
___DEF_GLO(79,"vec3d-z")
___DEF_GLO(80,"verts")
___DEF_GLO(81,"while")
___DEF_GLO(82,"window-x")
___DEF_GLO(83,"window-x-set!")
___DEF_GLO(84,"window-y")
___DEF_GLO(85,"window-y-set!")
___DEF_GLO(86,"window?")
___DEF_GLO(87,"write-color")
___DEF_GLO(88,"write-log")
___DEF_GLO(89,"##flonum.->fixnum")
___DEF_GLO(90,"##make-uninterned-symbol")
___DEF_GLO(91,"##type-type")
___DEF_GLO(92,"*")
___DEF_GLO(93,"-")
___DEF_GLO(94,">=")
___DEF_GLO(95,"append")
___DEF_GLO(96,"apply")
___DEF_GLO(97,"assoc")
___DEF_GLO(98,"call-with-input-file")
___DEF_GLO(99,"current-error-port")
___DEF_GLO(100,"current-input-port")
___DEF_GLO(101,"display")
___DEF_GLO(102,"error")
___DEF_GLO(103,"exact->inexact")
___DEF_GLO(104,"length")
___DEF_GLO(105,"list->vector")
___DEF_GLO(106,"make-parameter")
___DEF_GLO(107,"memv")
___DEF_GLO(108,"newline")
___DEF_GLO(109,"read")
___DEF_GLO(110,"read-all")
___DEF_GLO(111,"read-line")
___DEF_GLO(112,"reverse")
___DEF_GLO(113,"string->symbol")
___DEF_GLO(114,"string-append")
___DEF_GLO(115,"string=?")
___DEF_GLO(116,"with-input-from-string")
___DEF_GLO(117,"with-output-to-file")
___DEF_GLO(118,"with-output-to-port")
___DEF_GLO(119,"write-u8")
___END_GLO

___BEGIN_CNS
 ___DEF_CNS(___REF_SUB(3),___REF_NUL)
,___DEF_CNS(___REF_CNS(2),___REF_CNS(3))
,___DEF_CNS(___REF_SUB(8),___REF_SYM(8,___S_vertex))
,___DEF_CNS(___REF_CNS(4),___REF_CNS(5))
,___DEF_CNS(___REF_SUB(9),___REF_SYM(0,___S_face))
,___DEF_CNS(___REF_CNS(6),___REF_NUL)
,___DEF_CNS(___REF_SUB(10),___REF_SYM(3,___S_mtlswitch))
,___DEF_CNS(___REF_SYM(8,___S_vertex),___REF_NUL)
,___DEF_CNS(___REF_SYM(0,___S_face),___REF_NUL)
,___DEF_CNS(___REF_SYM(3,___S_mtlswitch),___REF_NUL)
,___DEF_CNS(___REF_CNS(11),___REF_NUL)
,___DEF_CNS(___REF_SUB(15),___REF_SYM(4,___S_new))
,___DEF_CNS(___REF_SYM(4,___S_new),___REF_NUL)
,___DEF_CNS(___REF_SUB(22),___REF_NUL)
___END_CNS

___DEF_SUB_STR(___X0,15)
               ___STR8(35,35,116,121,112,101,45,50)
               ___STR7(45,119,105,110,100,111,119)
___DEF_SUB_VEC(___X1,6)
               ___VEC1(___REF_SYM(10,___S_x))
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_FAL)
               ___VEC1(___REF_SYM(11,___S_y))
               ___VEC1(___REF_FIX(0))
               ___VEC1(___REF_FAL)
               ___VEC0
___DEF_SUB_FLO(___X2,0x40c38800L,0x0L)
___DEF_SUB_FLO(___X3,0x3ff00000L,0x0L)
___DEF_SUB_FLO(___X4,0x40240000L,0x0L)
___DEF_SUB_STR(___X5,10)
               ___STR8(109,101,115,104,101,115,47,98)
               ___STR2(111,120)
___DEF_SUB_STR(___X6,18)
               ___STR8(109,101,115,104,101,115,47,99)
               ___STR8(111,112,116,105,120,95,115,108)
               ___STR2(105,109)
___DEF_SUB_STR(___X7,0)
               ___STR0
___DEF_SUB_STR(___X8,1)
               ___STR1(118)
___DEF_SUB_STR(___X9,1)
               ___STR1(102)
___DEF_SUB_STR(___X10,6)
               ___STR6(117,115,101,109,116,108)
___DEF_SUB_STR(___X11,47)
               ___STR8(73,110,118,97,108,105,100,32)
               ___STR8(111,98,106,32,102,105,108,101)
               ___STR8(32,102,111,114,109,97,116,44)
               ___STR8(32,118,101,114,116,101,120,32)
               ___STR8(99,97,109,101,32,97,102,116)
               ___STR7(101,114,32,102,97,99,101)
___DEF_SUB_FLO(___X12,0x402e0000L,0x0L)
___DEF_SUB_STR(___X13,2)
               ___STR2(75,100)
___DEF_SUB_STR(___X14,2)
               ___STR2(75,100)
___DEF_SUB_STR(___X15,6)
               ___STR6(110,101,119,109,116,108)
___DEF_SUB_STR(___X16,1)
               ___STR1(35)
___DEF_SUB_STR(___X17,3)
               ___STR3(46,46,46)
___DEF_SUB_STR(___X18,13)
               ___STR8(76,111,97,100,105,110,103,32)
               ___STR5(109,101,115,104,32)
___DEF_SUB_STR(___X19,17)
               ___STR8(80,114,105,109,105,116,105,118)
               ___STR8(101,32,99,111,117,110,116,58)
               ___STR1(32)
___DEF_SUB_STR(___X20,4)
               ___STR4(46,109,116,108)
___DEF_SUB_STR(___X21,4)
               ___STR4(46,111,98,106)
___DEF_SUB_FLO(___X22,0x40140000L,0x0L)
___DEF_SUB_STR(___X23,11)
               ___STR8(83,116,97,114,116,105,110,103)
               ___STR3(46,46,46)
___DEF_SUB_STR(___X24,9)
               ___STR8(105,109,97,103,101,46,112,112)
               ___STR1(109)
___DEF_SUB_STR(___X25,3)
               ___STR3(80,54,10)
___DEF_SUB_STR(___X26,4)
               ___STR4(50,53,53,10)
___DEF_SUB_STR(___X27,1)
               ___STR1(10)
___DEF_SUB_STR(___X28,1)
               ___STR1(32)

___BEGIN_SUB
 ___DEF_SUB(___X0)
,___DEF_SUB(___X1)
,___DEF_SUB(___X2)
,___DEF_SUB(___X3)
,___DEF_SUB(___X4)
,___DEF_SUB(___X5)
,___DEF_SUB(___X6)
,___DEF_SUB(___X7)
,___DEF_SUB(___X8)
,___DEF_SUB(___X9)
,___DEF_SUB(___X10)
,___DEF_SUB(___X11)
,___DEF_SUB(___X12)
,___DEF_SUB(___X13)
,___DEF_SUB(___X14)
,___DEF_SUB(___X15)
,___DEF_SUB(___X16)
,___DEF_SUB(___X17)
,___DEF_SUB(___X18)
,___DEF_SUB(___X19)
,___DEF_SUB(___X20)
,___DEF_SUB(___X21)
,___DEF_SUB(___X22)
,___DEF_SUB(___X23)
,___DEF_SUB(___X24)
,___DEF_SUB(___X25)
,___DEF_SUB(___X26)
,___DEF_SUB(___X27)
,___DEF_SUB(___X28)
___END_SUB



#undef ___MD_ALL
#define ___MD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64( \
___F64V20) ___D_F64(___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64( \
___F64V26) ___D_F64(___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64( \
___F64V32) ___D_F64(___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64( \
___F64V38) ___D_F64(___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42) ___D_F64(___F64V43) ___D_F64( \
___F64V44) ___D_F64(___F64V45) ___D_F64(___F64V46) ___D_F64(___F64V47) ___D_F64(___F64V48) ___D_F64(___F64V49) ___D_F64( \
___F64V50) ___D_F64(___F64V51) ___D_F64(___F64V52) ___D_F64(___F64V53) ___D_F64(___F64V54) ___D_F64(___F64V55) ___D_F64( \
___F64V56) ___D_F64(___F64V57) ___D_F64(___F64V58) ___D_F64(___F64V59) ___D_F64(___F64V60) ___D_F64(___F64V61) ___D_F64( \
___F64V62) ___D_F64(___F64V63) ___D_F64(___F64V64) ___D_F64(___F64V65) ___D_F64(___F64V66) ___D_F64(___F64V67) ___D_F64( \
___F64V68) ___D_F64(___F64V69) ___D_F64(___F64V70) ___D_F64(___F64V71) ___D_F64(___F64V72) ___D_F64(___F64V73) ___D_F64( \
___F64V74) ___D_F64(___F64V75) ___D_F64(___F64V76) ___D_F64(___F64V77) ___D_F64(___F64V78) ___D_F64(___F64V79) ___D_F64( \
___F64V80) ___D_F64(___F64V81)
#undef ___MR_ALL
#define ___MR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___MW_ALL
#define ___MW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_M_COD
___BEGIN_M_HLBL
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0__20_schemeray)
___DEF_M_HLBL(___L1__20_schemeray)
___DEF_M_HLBL(___L2__20_schemeray)
___DEF_M_HLBL(___L3__20_schemeray)
___DEF_M_HLBL(___L4__20_schemeray)
___DEF_M_HLBL(___L5__20_schemeray)
___DEF_M_HLBL(___L6__20_schemeray)
___DEF_M_HLBL(___L7__20_schemeray)
___DEF_M_HLBL(___L8__20_schemeray)
___DEF_M_HLBL(___L9__20_schemeray)
___DEF_M_HLBL(___L10__20_schemeray)
___DEF_M_HLBL(___L11__20_schemeray)
___DEF_M_HLBL(___L12__20_schemeray)
___DEF_M_HLBL(___L13__20_schemeray)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_display_2d_args)
___DEF_M_HLBL(___L1_display_2d_args)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_write_2d_log)
___DEF_M_HLBL(___L1_write_2d_log)
___DEF_M_HLBL(___L2_write_2d_log)
___DEF_M_HLBL(___L3_write_2d_log)
___DEF_M_HLBL(___L4_write_2d_log)
___DEF_M_HLBL(___L5_write_2d_log)
___DEF_M_HLBL(___L6_write_2d_log)
___DEF_M_HLBL(___L7_write_2d_log)
___DEF_M_HLBL(___L8_write_2d_log)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_real_2d__3e_u8)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_real_2d__3e_percentage)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_write_2d_color)
___DEF_M_HLBL(___L1_write_2d_color)
___DEF_M_HLBL(___L2_write_2d_color)
___DEF_M_HLBL(___L3_write_2d_color)
___DEF_M_HLBL(___L4_write_2d_color)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_make_2d_vec2d)
___DEF_M_HLBL(___L1_make_2d_vec2d)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec2d_2d_x)
___DEF_M_HLBL(___L1_vec2d_2d_x)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec2d_2d_y)
___DEF_M_HLBL(___L1_vec2d_2d_y)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_make_2d_vec3d)
___DEF_M_HLBL(___L1_make_2d_vec3d)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_x)
___DEF_M_HLBL(___L1_vec3d_2d_x)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_y)
___DEF_M_HLBL(___L1_vec3d_2d_y)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_z)
___DEF_M_HLBL(___L1_vec3d_2d_z)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_op)
___DEF_M_HLBL(___L1_vec3d_2d_op)
___DEF_M_HLBL(___L2_vec3d_2d_op)
___DEF_M_HLBL(___L3_vec3d_2d_op)
___DEF_M_HLBL(___L4_vec3d_2d_op)
___DEF_M_HLBL(___L5_vec3d_2d_op)
___DEF_M_HLBL(___L6_vec3d_2d_op)
___DEF_M_HLBL(___L7_vec3d_2d_op)
___DEF_M_HLBL(___L8_vec3d_2d_op)
___DEF_M_HLBL(___L9_vec3d_2d_op)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_add)
___DEF_M_HLBL(___L1_vec3d_2d_add)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_sub)
___DEF_M_HLBL(___L1_vec3d_2d_sub)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_component_2d_mul)
___DEF_M_HLBL(___L1_vec3d_2d_component_2d_mul)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_scalar_2d_mul)
___DEF_M_HLBL(___L1_vec3d_2d_scalar_2d_mul)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_length)
___DEF_M_HLBL(___L1_vec3d_2d_length)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_unit)
___DEF_M_HLBL(___L1_vec3d_2d_unit)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_dot)
___DEF_M_HLBL(___L1_vec3d_2d_dot)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_vec3d_2d_cross)
___DEF_M_HLBL(___L1_vec3d_2d_cross)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_saturate)
___DEF_M_HLBL(___L1_saturate)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_while)
___DEF_M_HLBL(___L1_while)
___DEF_M_HLBL(___L2_while)
___DEF_M_HLBL(___L3_while)
___DEF_M_HLBL(___L4_while)
___DEF_M_HLBL(___L5_while)
___DEF_M_HLBL(___L6_while)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_file_2d_foreach)
___DEF_M_HLBL(___L1_file_2d_foreach)
___DEF_M_HLBL(___L2_file_2d_foreach)
___DEF_M_HLBL(___L3_file_2d_foreach)
___DEF_M_HLBL(___L4_file_2d_foreach)
___DEF_M_HLBL(___L5_file_2d_foreach)
___DEF_M_HLBL(___L6_file_2d_foreach)
___DEF_M_HLBL(___L7_file_2d_foreach)
___DEF_M_HLBL(___L8_file_2d_foreach)
___DEF_M_HLBL(___L9_file_2d_foreach)
___DEF_M_HLBL(___L10_file_2d_foreach)
___DEF_M_HLBL(___L11_file_2d_foreach)
___DEF_M_HLBL(___L12_file_2d_foreach)
___DEF_M_HLBL(___L13_file_2d_foreach)
___DEF_M_HLBL(___L14_file_2d_foreach)
___DEF_M_HLBL(___L15_file_2d_foreach)
___DEF_M_HLBL(___L16_file_2d_foreach)
___DEF_M_HLBL(___L17_file_2d_foreach)
___DEF_M_HLBL(___L18_file_2d_foreach)
___DEF_M_HLBL(___L19_file_2d_foreach)
___DEF_M_HLBL(___L20_file_2d_foreach)
___DEF_M_HLBL(___L21_file_2d_foreach)
___DEF_M_HLBL(___L22_file_2d_foreach)
___DEF_M_HLBL(___L23_file_2d_foreach)
___DEF_M_HLBL(___L24_file_2d_foreach)
___DEF_M_HLBL(___L25_file_2d_foreach)
___DEF_M_HLBL(___L26_file_2d_foreach)
___DEF_M_HLBL(___L27_file_2d_foreach)
___DEF_M_HLBL(___L28_file_2d_foreach)
___DEF_M_HLBL(___L29_file_2d_foreach)
___DEF_M_HLBL(___L30_file_2d_foreach)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_read_2d_token)
___DEF_M_HLBL(___L1_read_2d_token)
___DEF_M_HLBL(___L2_read_2d_token)
___DEF_M_HLBL(___L3_read_2d_token)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_make_2d_vertex)
___DEF_M_HLBL(___L1_make_2d_vertex)
___DEF_M_HLBL(___L2_make_2d_vertex)
___DEF_M_HLBL(___L3_make_2d_vertex)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_token_2d_map)
___DEF_M_HLBL(___L1_token_2d_map)
___DEF_M_HLBL(___L2_token_2d_map)
___DEF_M_HLBL(___L3_token_2d_map)
___DEF_M_HLBL(___L4_token_2d_map)
___DEF_M_HLBL(___L5_token_2d_map)
___DEF_M_HLBL(___L6_token_2d_map)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_get_2d_current_2d_material)
___DEF_M_HLBL(___L1_get_2d_current_2d_material)
___DEF_M_HLBL(___L2_get_2d_current_2d_material)
___DEF_M_HLBL(___L3_get_2d_current_2d_material)
___DEF_M_HLBL(___L4_get_2d_current_2d_material)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_material_2d_prop)
___DEF_M_HLBL(___L1_material_2d_prop)
___DEF_M_HLBL(___L2_material_2d_prop)
___DEF_M_HLBL(___L3_material_2d_prop)
___DEF_M_HLBL(___L4_material_2d_prop)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_declaration)
___DEF_M_HLBL(___L1_obj_2d_declaration)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_vertex)
___DEF_M_HLBL(___L1_obj_2d_vertex)
___DEF_M_HLBL(___L2_obj_2d_vertex)
___DEF_M_HLBL(___L3_obj_2d_vertex)
___DEF_M_HLBL(___L4_obj_2d_vertex)
___DEF_M_HLBL(___L5_obj_2d_vertex)
___DEF_M_HLBL(___L6_obj_2d_vertex)
___DEF_M_HLBL(___L7_obj_2d_vertex)
___DEF_M_HLBL(___L8_obj_2d_vertex)
___DEF_M_HLBL(___L9_obj_2d_vertex)
___DEF_M_HLBL(___L10_obj_2d_vertex)
___DEF_M_HLBL(___L11_obj_2d_vertex)
___DEF_M_HLBL(___L12_obj_2d_vertex)
___DEF_M_HLBL(___L13_obj_2d_vertex)
___DEF_M_HLBL(___L14_obj_2d_vertex)
___DEF_M_HLBL(___L15_obj_2d_vertex)
___DEF_M_HLBL(___L16_obj_2d_vertex)
___DEF_M_HLBL(___L17_obj_2d_vertex)
___DEF_M_HLBL(___L18_obj_2d_vertex)
___DEF_M_HLBL(___L19_obj_2d_vertex)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_face)
___DEF_M_HLBL(___L1_obj_2d_face)
___DEF_M_HLBL(___L2_obj_2d_face)
___DEF_M_HLBL(___L3_obj_2d_face)
___DEF_M_HLBL(___L4_obj_2d_face)
___DEF_M_HLBL(___L5_obj_2d_face)
___DEF_M_HLBL(___L6_obj_2d_face)
___DEF_M_HLBL(___L7_obj_2d_face)
___DEF_M_HLBL(___L8_obj_2d_face)
___DEF_M_HLBL(___L9_obj_2d_face)
___DEF_M_HLBL(___L10_obj_2d_face)
___DEF_M_HLBL(___L11_obj_2d_face)
___DEF_M_HLBL(___L12_obj_2d_face)
___DEF_M_HLBL(___L13_obj_2d_face)
___DEF_M_HLBL(___L14_obj_2d_face)
___DEF_M_HLBL(___L15_obj_2d_face)
___DEF_M_HLBL(___L16_obj_2d_face)
___DEF_M_HLBL(___L17_obj_2d_face)
___DEF_M_HLBL(___L18_obj_2d_face)
___DEF_M_HLBL(___L19_obj_2d_face)
___DEF_M_HLBL(___L20_obj_2d_face)
___DEF_M_HLBL(___L21_obj_2d_face)
___DEF_M_HLBL(___L22_obj_2d_face)
___DEF_M_HLBL(___L23_obj_2d_face)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_material_2d_switch)
___DEF_M_HLBL(___L1_obj_2d_material_2d_switch)
___DEF_M_HLBL(___L2_obj_2d_material_2d_switch)
___DEF_M_HLBL(___L3_obj_2d_material_2d_switch)
___DEF_M_HLBL(___L4_obj_2d_material_2d_switch)
___DEF_M_HLBL(___L5_obj_2d_material_2d_switch)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_attr)
___DEF_M_HLBL(___L1_obj_2d_attr)
___DEF_M_HLBL(___L2_obj_2d_attr)
___DEF_M_HLBL(___L3_obj_2d_attr)
___DEF_M_HLBL(___L4_obj_2d_attr)
___DEF_M_HLBL(___L5_obj_2d_attr)
___DEF_M_HLBL(___L6_obj_2d_attr)
___DEF_M_HLBL(___L7_obj_2d_attr)
___DEF_M_HLBL(___L8_obj_2d_attr)
___DEF_M_HLBL(___L9_obj_2d_attr)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_mat_2d_create)
___DEF_M_HLBL(___L1_mat_2d_create)
___DEF_M_HLBL(___L2_mat_2d_create)
___DEF_M_HLBL(___L3_mat_2d_create)
___DEF_M_HLBL(___L4_mat_2d_create)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_mat_2d_declaration)
___DEF_M_HLBL(___L1_mat_2d_declaration)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_mat_2d_property)
___DEF_M_HLBL(___L1_mat_2d_property)
___DEF_M_HLBL(___L2_mat_2d_property)
___DEF_M_HLBL(___L3_mat_2d_property)
___DEF_M_HLBL(___L4_mat_2d_property)
___DEF_M_HLBL(___L5_mat_2d_property)
___DEF_M_HLBL(___L6_mat_2d_property)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_mat_2d_attr)
___DEF_M_HLBL(___L1_mat_2d_attr)
___DEF_M_HLBL(___L2_mat_2d_attr)
___DEF_M_HLBL(___L3_mat_2d_attr)
___DEF_M_HLBL(___L4_mat_2d_attr)
___DEF_M_HLBL(___L5_mat_2d_attr)
___DEF_M_HLBL(___L6_mat_2d_attr)
___DEF_M_HLBL(___L7_mat_2d_attr)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_load_2d_obj)
___DEF_M_HLBL(___L1_load_2d_obj)
___DEF_M_HLBL(___L2_load_2d_obj)
___DEF_M_HLBL(___L3_load_2d_obj)
___DEF_M_HLBL(___L4_load_2d_obj)
___DEF_M_HLBL(___L5_load_2d_obj)
___DEF_M_HLBL(___L6_load_2d_obj)
___DEF_M_HLBL(___L7_load_2d_obj)
___DEF_M_HLBL(___L8_load_2d_obj)
___DEF_M_HLBL(___L9_load_2d_obj)
___DEF_M_HLBL(___L10_load_2d_obj)
___DEF_M_HLBL(___L11_load_2d_obj)
___DEF_M_HLBL(___L12_load_2d_obj)
___DEF_M_HLBL(___L13_load_2d_obj)
___DEF_M_HLBL(___L14_load_2d_obj)
___DEF_M_HLBL(___L15_load_2d_obj)
___DEF_M_HLBL(___L16_load_2d_obj)
___DEF_M_HLBL(___L17_load_2d_obj)
___DEF_M_HLBL(___L18_load_2d_obj)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_make_2d_window)
___DEF_M_HLBL(___L1_make_2d_window)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_window_3f_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_window_2d_x)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_window_2d_x_2d_set_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_window_2d_y)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_window_2d_y_2d_set_21_)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_generate_2d_spheres)
___DEF_M_HLBL(___L1_generate_2d_spheres)
___DEF_M_HLBL(___L2_generate_2d_spheres)
___DEF_M_HLBL(___L3_generate_2d_spheres)
___DEF_M_HLBL(___L4_generate_2d_spheres)
___DEF_M_HLBL(___L5_generate_2d_spheres)
___DEF_M_HLBL(___L6_generate_2d_spheres)
___DEF_M_HLBL(___L7_generate_2d_spheres)
___DEF_M_HLBL(___L8_generate_2d_spheres)
___DEF_M_HLBL(___L9_generate_2d_spheres)
___DEF_M_HLBL(___L10_generate_2d_spheres)
___DEF_M_HLBL(___L11_generate_2d_spheres)
___DEF_M_HLBL(___L12_generate_2d_spheres)
___DEF_M_HLBL(___L13_generate_2d_spheres)
___DEF_M_HLBL(___L14_generate_2d_spheres)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_type)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_color)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_obj_2d_normal)
___DEF_M_HLBL(___L1_obj_2d_normal)
___DEF_M_HLBL(___L2_obj_2d_normal)
___DEF_M_HLBL(___L3_obj_2d_normal)
___DEF_M_HLBL(___L4_obj_2d_normal)
___DEF_M_HLBL(___L5_obj_2d_normal)
___DEF_M_HLBL(___L6_obj_2d_normal)
___DEF_M_HLBL(___L7_obj_2d_normal)
___DEF_M_HLBL(___L8_obj_2d_normal)
___DEF_M_HLBL(___L9_obj_2d_normal)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_light_2d_pos)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_light_2d_intersection)
___DEF_M_HLBL(___L1_light_2d_intersection)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_sphere_2d_pos)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_sphere_2d_radius)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_sphere_2d_intersection)
___DEF_M_HLBL(___L1_sphere_2d_intersection)
___DEF_M_HLBL(___L2_sphere_2d_intersection)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_sphere_2d_normal)
___DEF_M_HLBL(___L1_sphere_2d_normal)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_plane_2d_normal)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_plane_2d_distance)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_plane_2d_intersection)
___DEF_M_HLBL(___L1_plane_2d_intersection)
___DEF_M_HLBL(___L2_plane_2d_intersection)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_triangle_2d_v1)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_triangle_2d_v2)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_triangle_2d_v3)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_triangle_2d_normal)
___DEF_M_HLBL(___L1_triangle_2d_normal)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_triangle_2d_intersection)
___DEF_M_HLBL(___L1_triangle_2d_intersection)
___DEF_M_HLBL(___L2_triangle_2d_intersection)
___DEF_M_HLBL(___L3_triangle_2d_intersection)
___DEF_M_HLBL(___L4_triangle_2d_intersection)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_mesh_2d_pos)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_mesh_2d_primitives)
___DEF_M_HLBL(___L1_mesh_2d_primitives)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_test_2d_intersection)
___DEF_M_HLBL(___L1_test_2d_intersection)
___DEF_M_HLBL(___L2_test_2d_intersection)
___DEF_M_HLBL(___L3_test_2d_intersection)
___DEF_M_HLBL(___L4_test_2d_intersection)
___DEF_M_HLBL(___L5_test_2d_intersection)
___DEF_M_HLBL(___L6_test_2d_intersection)
___DEF_M_HLBL(___L7_test_2d_intersection)
___DEF_M_HLBL(___L8_test_2d_intersection)
___DEF_M_HLBL(___L9_test_2d_intersection)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_apply_2d_lighting)
___DEF_M_HLBL(___L1_apply_2d_lighting)
___DEF_M_HLBL(___L2_apply_2d_lighting)
___DEF_M_HLBL(___L3_apply_2d_lighting)
___DEF_M_HLBL(___L4_apply_2d_lighting)
___DEF_M_HLBL(___L5_apply_2d_lighting)
___DEF_M_HLBL(___L6_apply_2d_lighting)
___DEF_M_HLBL(___L7_apply_2d_lighting)
___DEF_M_HLBL(___L8_apply_2d_lighting)
___DEF_M_HLBL(___L9_apply_2d_lighting)
___DEF_M_HLBL(___L10_apply_2d_lighting)
___DEF_M_HLBL(___L11_apply_2d_lighting)
___DEF_M_HLBL(___L12_apply_2d_lighting)
___DEF_M_HLBL(___L13_apply_2d_lighting)
___DEF_M_HLBL(___L14_apply_2d_lighting)
___DEF_M_HLBL(___L15_apply_2d_lighting)
___DEF_M_HLBL(___L16_apply_2d_lighting)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L1_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L2_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L3_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L4_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L5_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L6_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L7_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L8_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L9_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L10_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L11_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L12_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L13_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L14_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L15_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L16_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L17_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L18_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L19_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L20_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L21_find_2d_closest_2d_prim)
___DEF_M_HLBL(___L22_find_2d_closest_2d_prim)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_shoot_2d_ray)
___DEF_M_HLBL(___L1_shoot_2d_ray)
___DEF_M_HLBL(___L2_shoot_2d_ray)
___DEF_M_HLBL(___L3_shoot_2d_ray)
___DEF_M_HLBL(___L4_shoot_2d_ray)
___DEF_M_HLBL(___L5_shoot_2d_ray)
___DEF_M_HLBL(___L6_shoot_2d_ray)
___DEF_M_HLBL(___L7_shoot_2d_ray)
___DEF_M_HLBL(___L8_shoot_2d_ray)
___DEF_M_HLBL(___L9_shoot_2d_ray)
___DEF_M_HLBL(___L10_shoot_2d_ray)
___DEF_M_HLBL(___L11_shoot_2d_ray)
___DEF_M_HLBL(___L12_shoot_2d_ray)
___DEF_M_HLBL(___L13_shoot_2d_ray)
___DEF_M_HLBL(___L14_shoot_2d_ray)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L1_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L2_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L3_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L4_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L5_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L6_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L7_shoot_2d_screen_2d_rays)
___DEF_M_HLBL(___L8_shoot_2d_screen_2d_rays)
___DEF_M_HLBL_INTRO
___DEF_M_HLBL(___L0_make_2d_image)
___DEF_M_HLBL(___L1_make_2d_image)
___DEF_M_HLBL(___L2_make_2d_image)
___DEF_M_HLBL(___L3_make_2d_image)
___DEF_M_HLBL(___L4_make_2d_image)
___DEF_M_HLBL(___L5_make_2d_image)
___DEF_M_HLBL(___L6_make_2d_image)
___DEF_M_HLBL(___L7_make_2d_image)
___DEF_M_HLBL(___L8_make_2d_image)
___DEF_M_HLBL(___L9_make_2d_image)
___DEF_M_HLBL(___L10_make_2d_image)
___DEF_M_HLBL(___L11_make_2d_image)
___END_M_HLBL

___BEGIN_M_SW

#undef ___PH_PROC
#define ___PH_PROC ___H__20_schemeray
#undef ___PH_LBL0
#define ___PH_LBL0 1
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0__20_schemeray)
___DEF_P_HLBL(___L1__20_schemeray)
___DEF_P_HLBL(___L2__20_schemeray)
___DEF_P_HLBL(___L3__20_schemeray)
___DEF_P_HLBL(___L4__20_schemeray)
___DEF_P_HLBL(___L5__20_schemeray)
___DEF_P_HLBL(___L6__20_schemeray)
___DEF_P_HLBL(___L7__20_schemeray)
___DEF_P_HLBL(___L8__20_schemeray)
___DEF_P_HLBL(___L9__20_schemeray)
___DEF_P_HLBL(___L10__20_schemeray)
___DEF_P_HLBL(___L11__20_schemeray)
___DEF_P_HLBL(___L12__20_schemeray)
___DEF_P_HLBL(___L13__20_schemeray)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0__20_schemeray)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L__20_schemeray)
   ___SET_GLO(14,___G_flonum_2d__3e_fixnum,___PRM(89,___G__23__23_flonum_2e__2d__3e_fixnum))
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1__20_schemeray)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),99,___G_current_2d_error_2d_port)
___DEF_SLBL(2,___L2__20_schemeray)
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(1),106,___G_make_2d_parameter)
___DEF_SLBL(3,___L3__20_schemeray)
   ___SET_GLO(8,___G_current_2d_log_2d_port,___R1)
   ___SET_GLO(80,___G_verts,___NUL)
   ___SET_GLO(45,___G_prims,___NUL)
   ___SET_GLO(30,___G_materials,___NUL)
   ___SET_GLO(7,___G_cur_2d_material,___FAL)
   ___SET_R1(___SUB(0))
   ___SET_R0(___LBL(4))
   ___JUMPGLONOTSAFE(___SET_NARGS(1),90,___G__23__23_make_2d_uninterned_2d_symbol)
___DEF_SLBL(4,___L4__20_schemeray)
   ___BEGIN_ALLOC_STRUCTURE(6)
   ___ADD_STRUCTURE_ELEM(0,___GLO(91,___G__23__23_type_2d_type))
   ___ADD_STRUCTURE_ELEM(1,___R1)
   ___ADD_STRUCTURE_ELEM(2,___SYM(9,___S_window))
   ___ADD_STRUCTURE_ELEM(3,___FIX(8L))
   ___ADD_STRUCTURE_ELEM(4,___FAL)
   ___ADD_STRUCTURE_ELEM(5,___SUB(1))
   ___END_ALLOC_STRUCTURE(6)
   ___SET_R1(___GET_STRUCTURE(6))
   ___SET_GLO(1,___G__23__23_type_2d_2_2d_window,___R1)
   ___BEGIN_ALLOC_F64VECTOR(2)
   ___ADD_F64VECTOR_ELEM(0,8.)
   ___ADD_F64VECTOR_ELEM(1,6.)
   ___END_ALLOC_F64VECTOR(2)
   ___SET_R1(___GET_F64VECTOR(2))
   ___SET_GLO(52,___G_screenDimen,___R1)
   ___BEGIN_ALLOC_STRUCTURE(3)
   ___ADD_STRUCTURE_ELEM(0,___GLO(1,___G__23__23_type_2d_2_2d_window))
   ___ADD_STRUCTURE_ELEM(1,___FIX(800L))
   ___ADD_STRUCTURE_ELEM(2,___FIX(600L))
   ___END_ALLOC_STRUCTURE(3)
   ___SET_R1(___GET_STRUCTURE(3))
   ___SET_GLO(49,___G_res,___R1)
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___ADD_F64VECTOR_ELEM(1,0.)
   ___ADD_F64VECTOR_ELEM(2,-5.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_GLO(11,___G_eye,___R1)
   ___SET_GLO(9,___G_depth,___SUB(2))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___ADD_F64VECTOR_ELEM(1,0.)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_GLO(4,___G_backColor,___R1)
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,.1)
   ___ADD_F64VECTOR_ELEM(1,.1)
   ___ADD_F64VECTOR_ELEM(2,.1)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_GLO(2,___G_ambient,___R1)
   ___SET_GLO(31,___G_maxsteps,___FIX(3L))
   ___SET_R1(___MAKEPROMISE(___LBL(12)))
   ___SET_GLO(6,___G_coptix,___R1)
   ___SET_R1(___MAKEPROMISE(___LBL(10)))
   ___SET_GLO(5,___G_box,___R1)
   ___SET_R0(___LBL(6))
   ___CHECK_HEAP(5,4096)
___DEF_SLBL(5,___L5__20_schemeray)
   ___JUMPINT(___SET_NARGS(0),___PRC(294),___L_generate_2d_spheres)
___DEF_SLBL(6,___L6__20_schemeray)
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,-40.)
   ___ADD_F64VECTOR_ELEM(1,-15.)
   ___ADD_F64VECTOR_ELEM(2,60.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_R2(___CONS(___R2,___CNS(0)))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,.7)
   ___ADD_F64VECTOR_ELEM(1,.9)
   ___ADD_F64VECTOR_ELEM(2,.9)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_R2(___CONS(___R3,___R2))
   ___SET_R2(___CONS(___SYM(1,___S_light),___R2))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,.25)
   ___ADD_F64VECTOR_ELEM(1,-1.)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,.7)
   ___ADD_F64VECTOR_ELEM(1,.7)
   ___ADD_F64VECTOR_ELEM(2,1.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___BEGIN_ALLOC_LIST(4,___R3)
   ___ADD_LIST_ELEM(1,___SUB(4))
   ___ADD_LIST_ELEM(2,___R4)
   ___ADD_LIST_ELEM(3,___SYM(5,___S_plane))
   ___END_ALLOC_LIST(4)
   ___SET_R3(___GET_LIST(4))
   ___BEGIN_ALLOC_LIST(2,___R2)
   ___ADD_LIST_ELEM(1,___R3)
   ___END_ALLOC_LIST(2)
   ___SET_R2(___GET_LIST(2))
   ___SET_R0(___LBL(8))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7__20_schemeray)
   ___JUMPPRM(___SET_NARGS(2),___PRM(95,___G_append))
___DEF_SLBL(8,___L8__20_schemeray)
   ___SET_GLO(51,___G_scene,___R1)
   ___SET_R0(___STK(-3))
   ___POLL(9)
___DEF_SLBL(9,___L9__20_schemeray)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(0),___PRC(448),___L_make_2d_image)
___DEF_SLBL(10,___L10__20_schemeray)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(10,0,0,0)
   ___SET_R1(___SUB(5))
   ___POLL(11)
___DEF_SLBL(11,___L11__20_schemeray)
   ___GOTO(___L14__20_schemeray)
___DEF_SLBL(12,___L12__20_schemeray)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(12,0,0,0)
   ___SET_R1(___SUB(6))
   ___POLL(13)
___DEF_SLBL(13,___L13__20_schemeray)
___DEF_GLBL(___L14__20_schemeray)
   ___JUMPINT(___SET_NARGS(1),___PRC(261),___L_load_2d_obj)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_display_2d_args
#undef ___PH_LBL0
#define ___PH_LBL0 16
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_display_2d_args)
___DEF_P_HLBL(___L1_display_2d_args)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_display_2d_args)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_display_2d_args)
   ___POLL(1)
___DEF_SLBL(1,___L1_display_2d_args)
   ___JUMPPRM(___SET_NARGS(1),___PRM(101,___G_display))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_write_2d_log
#undef ___PH_LBL0
#define ___PH_LBL0 19
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_write_2d_log)
___DEF_P_HLBL(___L1_write_2d_log)
___DEF_P_HLBL(___L2_write_2d_log)
___DEF_P_HLBL(___L3_write_2d_log)
___DEF_P_HLBL(___L4_write_2d_log)
___DEF_P_HLBL(___L5_write_2d_log)
___DEF_P_HLBL(___L6_write_2d_log)
___DEF_P_HLBL(___L7_write_2d_log)
___DEF_P_HLBL(___L8_write_2d_log)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_write_2d_log)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(0,0,0,0)
___DEF_GLBL(___L_write_2d_log)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_write_2d_log)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),8,___G_current_2d_log_2d_port)
___DEF_SLBL(2,___L2_write_2d_log)
   ___SET_STK(-1,___R1)
   ___SET_STK(0,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(0),5)
   ___ADD_CLO_ELEM(0,___STK(-2))
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(0))
   ___SET_R0(___STK(-3))
   ___SET_R1(___STK(-1))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_write_2d_log)
   ___POLL(4)
___DEF_SLBL(4,___L4_write_2d_log)
   ___ADJFP(-4)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),118,___G_with_2d_output_2d_to_2d_port)
___DEF_SLBL(5,___L5_write_2d_log)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(5,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R0(___LBL(7))
   ___ADJFP(4)
   ___POLL(6)
___DEF_SLBL(6,___L6_write_2d_log)
   ___JUMPPRM(___SET_NARGS(1),___PRM(101,___G_display))
___DEF_SLBL(7,___L7_write_2d_log)
   ___SET_R0(___STK(-3))
   ___POLL(8)
___DEF_SLBL(8,___L8_write_2d_log)
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(0),___PRM(108,___G_newline))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_real_2d__3e_u8
#undef ___PH_LBL0
#define ___PH_LBL0 29
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4)
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_real_2d__3e_u8)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_real_2d__3e_u8)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_real_2d__3e_u8)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64FLOOR(___F64V1))
   ___SET_F64(___F64V3,___F64MIN(255.,___F64V2))
   ___SET_F64(___F64V4,___F64MAX(0.,___F64V3))
   ___SET_R1(___F64TOFIX(___F64V4))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_real_2d__3e_percentage
#undef ___PH_LBL0
#define ___PH_LBL0 31
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3)
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_real_2d__3e_percentage)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_real_2d__3e_percentage)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_real_2d__3e_percentage)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64MUL(100.,___F64V1))
   ___SET_F64(___F64V3,___F64FLOOR(___F64V2))
   ___SET_R1(___F64TOFIX(___F64V3))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_write_2d_color
#undef ___PH_LBL0
#define ___PH_LBL0 33
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R4 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5)
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_write_2d_color)
___DEF_P_HLBL(___L1_write_2d_color)
___DEF_P_HLBL(___L2_write_2d_color)
___DEF_P_HLBL(___L3_write_2d_color)
___DEF_P_HLBL(___L4_write_2d_color)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_write_2d_color)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_write_2d_color)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,255.))
   ___SET_F64(___F64V3,___F64FLOOR(___F64V2))
   ___SET_F64(___F64V4,___F64MIN(255.,___F64V3))
   ___SET_F64(___F64V5,___F64MAX(0.,___F64V4))
   ___SET_R1(___F64TOFIX(___F64V5))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_write_2d_color)
   ___JUMPGLONOTSAFE(___SET_NARGS(1),119,___G_write_2d_u8)
___DEF_SLBL(2,___L2_write_2d_color)
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-2),___FIX(1L)))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,255.))
   ___SET_F64(___F64V3,___F64FLOOR(___F64V2))
   ___SET_F64(___F64V4,___F64MIN(255.,___F64V3))
   ___SET_F64(___F64V5,___F64MAX(0.,___F64V4))
   ___SET_R1(___F64TOFIX(___F64V5))
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(1),119,___G_write_2d_u8)
___DEF_SLBL(3,___L3_write_2d_color)
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-2),___FIX(2L)))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,255.))
   ___SET_F64(___F64V3,___F64FLOOR(___F64V2))
   ___SET_F64(___F64V4,___F64MIN(255.,___F64V3))
   ___SET_F64(___F64V5,___F64MAX(0.,___F64V4))
   ___SET_R1(___F64TOFIX(___F64V5))
   ___SET_R0(___STK(-3))
   ___POLL(4)
___DEF_SLBL(4,___L4_write_2d_color)
   ___ADJFP(-4)
   ___JUMPGLONOTSAFE(___SET_NARGS(1),119,___G_write_2d_u8)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_make_2d_vec2d
#undef ___PH_LBL0
#define ___PH_LBL0 39
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_make_2d_vec2d)
___DEF_P_HLBL(___L1_make_2d_vec2d)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_make_2d_vec2d)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_make_2d_vec2d)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64UNBOX(___R2))
   ___BEGIN_ALLOC_F64VECTOR(2)
   ___ADD_F64VECTOR_ELEM(0,___F64V1)
   ___ADD_F64VECTOR_ELEM(1,___F64V2)
   ___END_ALLOC_F64VECTOR(2)
   ___SET_R1(___GET_F64VECTOR(2))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_make_2d_vec2d)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec2d_2d_x
#undef ___PH_LBL0
#define ___PH_LBL0 42
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec2d_2d_x)
___DEF_P_HLBL(___L1_vec2d_2d_x)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec2d_2d_x)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_vec2d_2d_x)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec2d_2d_x)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec2d_2d_y
#undef ___PH_LBL0
#define ___PH_LBL0 45
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec2d_2d_y)
___DEF_P_HLBL(___L1_vec2d_2d_y)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec2d_2d_y)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_vec2d_2d_y)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec2d_2d_y)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_make_2d_vec3d
#undef ___PH_LBL0
#define ___PH_LBL0 48
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64( \
___F64V3)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_make_2d_vec3d)
___DEF_P_HLBL(___L1_make_2d_vec3d)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_make_2d_vec3d)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_make_2d_vec3d)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64UNBOX(___R2))
   ___SET_F64(___F64V3,___F64UNBOX(___R3))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V1)
   ___ADD_F64VECTOR_ELEM(1,___F64V2)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_make_2d_vec3d)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_x
#undef ___PH_LBL0
#define ___PH_LBL0 51
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_x)
___DEF_P_HLBL(___L1_vec3d_2d_x)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_x)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_vec3d_2d_x)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_x)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_y
#undef ___PH_LBL0
#define ___PH_LBL0 54
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_y)
___DEF_P_HLBL(___L1_vec3d_2d_y)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_y)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_vec3d_2d_y)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_y)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_z
#undef ___PH_LBL0
#define ___PH_LBL0 57
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_z)
___DEF_P_HLBL(___L1_vec3d_2d_z)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_z)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_vec3d_2d_z)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_z)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_op
#undef ___PH_LBL0
#define ___PH_LBL0 60
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_op)
___DEF_P_HLBL(___L1_vec3d_2d_op)
___DEF_P_HLBL(___L2_vec3d_2d_op)
___DEF_P_HLBL(___L3_vec3d_2d_op)
___DEF_P_HLBL(___L4_vec3d_2d_op)
___DEF_P_HLBL(___L5_vec3d_2d_op)
___DEF_P_HLBL(___L6_vec3d_2d_op)
___DEF_P_HLBL(___L7_vec3d_2d_op)
___DEF_P_HLBL(___L8_vec3d_2d_op)
___DEF_P_HLBL(___L9_vec3d_2d_op)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_op)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_vec3d_2d_op)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_F64(___F64V1,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_R0(___LBL(3))
   ___SET_R1(___F64BOX(___F64V2))
   ___SET_R2(___F64BOX(___F64V1))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_op)
   ___POLL(2)
___DEF_SLBL(2,___L2_vec3d_2d_op)
   ___JUMPGENNOTSAFE(___SET_NARGS(2),___R3)
___DEF_SLBL(3,___L3_vec3d_2d_op)
   ___SET_STK(-3,___R1)
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-5),___FIX(1L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_R0(___LBL(5))
   ___SET_R1(___F64BOX(___F64V2))
   ___SET_R2(___F64BOX(___F64V1))
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_vec3d_2d_op)
   ___JUMPGENNOTSAFE(___SET_NARGS(2),___STK(-4))
___DEF_SLBL(5,___L5_vec3d_2d_op)
   ___SET_STK(-2,___R1)
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-5),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_R0(___LBL(7))
   ___SET_R1(___F64BOX(___F64V2))
   ___SET_R2(___F64BOX(___F64V1))
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_vec3d_2d_op)
   ___JUMPGENNOTSAFE(___SET_NARGS(2),___STK(-4))
___DEF_SLBL(7,___L7_vec3d_2d_op)
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-3)))
   ___SET_F64(___F64V2,___F64UNBOX(___STK(-2)))
   ___SET_F64(___F64V3,___F64UNBOX(___R1))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V1)
   ___ADD_F64VECTOR_ELEM(1,___F64V2)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(8,4096)
___DEF_SLBL(8,___L8_vec3d_2d_op)
   ___POLL(9)
___DEF_SLBL(9,___L9_vec3d_2d_op)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_add
#undef ___PH_LBL0
#define ___PH_LBL0 71
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) \

#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_add)
___DEF_P_HLBL(___L1_vec3d_2d_add)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_add)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_vec3d_2d_add)
   ___SET_F64(___F64V1,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64ADD(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64ADD(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64ADD(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_add)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_sub
#undef ___PH_LBL0
#define ___PH_LBL0 74
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) \

#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_sub)
___DEF_P_HLBL(___L1_vec3d_2d_sub)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_sub)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_vec3d_2d_sub)
   ___SET_F64(___F64V1,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_sub)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_component_2d_mul
#undef ___PH_LBL0
#define ___PH_LBL0 77
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) \

#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_component_2d_mul)
___DEF_P_HLBL(___L1_vec3d_2d_component_2d_mul)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_component_2d_mul)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_vec3d_2d_component_2d_mul)
   ___SET_F64(___F64V1,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_component_2d_mul)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_scalar_2d_mul
#undef ___PH_LBL0
#define ___PH_LBL0 80
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_scalar_2d_mul)
___DEF_P_HLBL(___L1_vec3d_2d_scalar_2d_mul)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_scalar_2d_mul)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_vec3d_2d_scalar_2d_mul)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V2,___F64UNBOX(___R2))
   ___SET_F64(___F64V3,___F64MUL(___F64V1,___F64V2))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V5,___F64MUL(___F64V4,___F64V2))
   ___SET_F64(___F64V6,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V7,___F64MUL(___F64V6,___F64V2))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V3)
   ___ADD_F64VECTOR_ELEM(1,___F64V5)
   ___ADD_F64VECTOR_ELEM(2,___F64V7)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_scalar_2d_mul)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_length
#undef ___PH_LBL0
#define ___PH_LBL0 83
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) ___D_F64( \
___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) ___D_F64( \
___F64V10) ___D_F64(___F64V11)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_length)
___DEF_P_HLBL(___L1_vec3d_2d_length)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_length)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_vec3d_2d_length)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_F64(___F64V11,___F64SQRT(___F64V10))
   ___SET_R1(___F64BOX(___F64V11))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_length)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_unit
#undef ___PH_LBL0
#define ___PH_LBL0 86
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) ___D_F64( \
___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) ___D_F64( \
___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64(___F64V14) ___D_F64(___F64V15) ___D_F64( \
___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_unit)
___DEF_P_HLBL(___L1_vec3d_2d_unit)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_unit)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_vec3d_2d_unit)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_F64(___F64V11,___F64SQRT(___F64V10))
   ___SET_F64(___F64V12,___F64INV(___F64V11))
   ___SET_F64(___F64V13,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V14,___F64MUL(___F64V13,___F64V12))
   ___SET_F64(___F64V15,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V16,___F64MUL(___F64V15,___F64V12))
   ___SET_F64(___F64V17,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V12))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V16)
   ___ADD_F64VECTOR_ELEM(2,___F64V14)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_unit)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_dot
#undef ___PH_LBL0
#define ___PH_LBL0 89
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) \
 ___D_F64(___F64V10)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_dot)
___DEF_P_HLBL(___L1_vec3d_2d_dot)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_dot)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_vec3d_2d_dot)
   ___SET_F64(___F64V1,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_R1(___F64BOX(___F64V10))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_dot)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_vec3d_2d_cross
#undef ___PH_LBL0
#define ___PH_LBL0 92
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) \
 ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64(___F64V14) ___D_F64(___F64V15) \
 ___D_F64(___F64V16)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_vec3d_2d_cross)
___DEF_P_HLBL(___L1_vec3d_2d_cross)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_vec3d_2d_cross)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_vec3d_2d_cross)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V3,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V4,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V6,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V7,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V8,___F64MUL(___F64MUL(___F64V3,___F64V6),___F64V7))
   ___SET_F64(___F64V9,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V10,___F64SUB(___F64V8,___F64V9))
   ___SET_F64(___F64V11,___F64MUL(___F64V1,___F64V6))
   ___SET_F64(___F64V12,___F64MUL(___F64V5,___F64V2))
   ___SET_F64(___F64V13,___F64SUB(___F64V12,___F64V11))
   ___SET_F64(___F64V14,___F64MUL(___F64V3,___F64V2))
   ___SET_F64(___F64V15,___F64MUL(___F64V1,___F64V4))
   ___SET_F64(___F64V16,___F64SUB(___F64V15,___F64V14))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V10)
   ___ADD_F64VECTOR_ELEM(1,___F64V13)
   ___ADD_F64VECTOR_ELEM(2,___F64V16)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_vec3d_2d_cross)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_saturate
#undef ___PH_LBL0
#define ___PH_LBL0 95
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_saturate)
___DEF_P_HLBL(___L1_saturate)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_saturate)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_saturate)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64MAX(0.,___F64V1))
   ___SET_F64(___F64V3,___F64MIN(1.,___F64V2))
   ___SET_R1(___F64BOX(___F64V3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_saturate)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_while
#undef ___PH_LBL0
#define ___PH_LBL0 98
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_while)
___DEF_P_HLBL(___L1_while)
___DEF_P_HLBL(___L2_while)
___DEF_P_HLBL(___L3_while)
___DEF_P_HLBL(___L4_while)
___DEF_P_HLBL(___L5_while)
___DEF_P_HLBL(___L6_while)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_while)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_while)
   ___GOTO(___L7_while)
___DEF_SLBL(1,___L1_while)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___ADJFP(-8)
   ___POLL(2)
___DEF_SLBL(2,___L2_while)
___DEF_GLBL(___L7_while)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R0(___LBL(4))
   ___ADJFP(8)
   ___POLL(3)
___DEF_SLBL(3,___L3_while)
   ___JUMPGENNOTSAFE(___SET_NARGS(0),___R1)
___DEF_SLBL(4,___L4_while)
   ___SET_STK(-3,___R1)
   ___SET_R0(___LBL(5))
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___STK(-5))
___DEF_SLBL(5,___L5_while)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L8_while)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(6)
___DEF_SLBL(6,___L6_while)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L8_while)
   ___SET_R1(___STK(-3))
   ___SET_R0(___LBL(1))
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___STK(-4))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_file_2d_foreach
#undef ___PH_LBL0
#define ___PH_LBL0 106
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_file_2d_foreach)
___DEF_P_HLBL(___L1_file_2d_foreach)
___DEF_P_HLBL(___L2_file_2d_foreach)
___DEF_P_HLBL(___L3_file_2d_foreach)
___DEF_P_HLBL(___L4_file_2d_foreach)
___DEF_P_HLBL(___L5_file_2d_foreach)
___DEF_P_HLBL(___L6_file_2d_foreach)
___DEF_P_HLBL(___L7_file_2d_foreach)
___DEF_P_HLBL(___L8_file_2d_foreach)
___DEF_P_HLBL(___L9_file_2d_foreach)
___DEF_P_HLBL(___L10_file_2d_foreach)
___DEF_P_HLBL(___L11_file_2d_foreach)
___DEF_P_HLBL(___L12_file_2d_foreach)
___DEF_P_HLBL(___L13_file_2d_foreach)
___DEF_P_HLBL(___L14_file_2d_foreach)
___DEF_P_HLBL(___L15_file_2d_foreach)
___DEF_P_HLBL(___L16_file_2d_foreach)
___DEF_P_HLBL(___L17_file_2d_foreach)
___DEF_P_HLBL(___L18_file_2d_foreach)
___DEF_P_HLBL(___L19_file_2d_foreach)
___DEF_P_HLBL(___L20_file_2d_foreach)
___DEF_P_HLBL(___L21_file_2d_foreach)
___DEF_P_HLBL(___L22_file_2d_foreach)
___DEF_P_HLBL(___L23_file_2d_foreach)
___DEF_P_HLBL(___L24_file_2d_foreach)
___DEF_P_HLBL(___L25_file_2d_foreach)
___DEF_P_HLBL(___L26_file_2d_foreach)
___DEF_P_HLBL(___L27_file_2d_foreach)
___DEF_P_HLBL(___L28_file_2d_foreach)
___DEF_P_HLBL(___L29_file_2d_foreach)
___DEF_P_HLBL(___L30_file_2d_foreach)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_file_2d_foreach)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_file_2d_foreach)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),3)
   ___ADD_CLO_ELEM(0,___R2)
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(1))
   ___ADJFP(1)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_file_2d_foreach)
   ___POLL(2)
___DEF_SLBL(2,___L2_file_2d_foreach)
   ___ADJFP(-1)
   ___JUMPPRM(___SET_NARGS(2),___PRM(98,___G_call_2d_with_2d_input_2d_file))
___DEF_SLBL(3,___L3_file_2d_foreach)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(3,1,0,0)
   ___SET_STK(1,___ALLOC_CLO(1))
   ___SET_STK(2,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(1),29)
   ___ADD_CLO_ELEM(0,___R1)
   ___END_SETUP_CLO(1)
   ___BEGIN_SETUP_CLO(1,___STK(2),21)
   ___ADD_CLO_ELEM(0,___CLO(___R4,1))
   ___END_SETUP_CLO(1)
   ___SET_STK(3,___R0)
   ___SET_R0(___LBL(6))
   ___ADJFP(4)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_file_2d_foreach)
   ___POLL(5)
___DEF_SLBL(5,___L5_file_2d_foreach)
   ___JUMPGENNOTSAFE(___SET_NARGS(0),___STK(-3))
___DEF_SLBL(6,___L6_file_2d_foreach)
   ___SET_STK(0,___R1)
   ___SET_R0(___LBL(8))
   ___ADJFP(4)
   ___GOTO(___L31_file_2d_foreach)
___DEF_SLBL(7,___L7_file_2d_foreach)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(7,1,0,0)
___DEF_GLBL(___L31_file_2d_foreach)
   ___SET_R1(___BOOLEAN(___EQP(___EOF,___R1)))
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(8,___L8_file_2d_foreach)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L34_file_2d_foreach)
   ___END_IF
   ___GOTO(___L32_file_2d_foreach)
___DEF_SLBL(9,___L9_file_2d_foreach)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L33_file_2d_foreach)
   ___END_IF
___DEF_GLBL(___L32_file_2d_foreach)
   ___SET_R1(___VOID)
   ___POLL(10)
___DEF_SLBL(10,___L10_file_2d_foreach)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___DEF_GLBL(___L33_file_2d_foreach)
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(11))
   ___ADJFP(-4)
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(11,___L11_file_2d_foreach)
   ___SET_R3(___STK(-2))
   ___SET_R2(___LBL(7))
   ___SET_R1(___STK(-3))
   ___SET_R0(___STK(-1))
   ___POLL(12)
___DEF_SLBL(12,___L12_file_2d_foreach)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(3),___PRC(98),___L_while)
___DEF_GLBL(___L34_file_2d_foreach)
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(13))
   ___ADJFP(-4)
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(13,___L13_file_2d_foreach)
   ___SET_R0(___LBL(14))
   ___JUMPGENNOTSAFE(___SET_NARGS(0),___STK(-3))
___DEF_SLBL(14,___L14_file_2d_foreach)
   ___SET_STK(0,___R1)
   ___SET_R0(___LBL(15))
   ___ADJFP(4)
   ___GOTO(___L31_file_2d_foreach)
___DEF_SLBL(15,___L15_file_2d_foreach)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L32_file_2d_foreach)
   ___END_IF
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(16))
   ___ADJFP(-4)
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(16,___L16_file_2d_foreach)
   ___SET_R0(___LBL(17))
   ___JUMPGENNOTSAFE(___SET_NARGS(0),___STK(-3))
___DEF_SLBL(17,___L17_file_2d_foreach)
   ___SET_STK(0,___R1)
   ___SET_R0(___LBL(18))
   ___ADJFP(4)
   ___GOTO(___L31_file_2d_foreach)
___DEF_SLBL(18,___L18_file_2d_foreach)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L32_file_2d_foreach)
   ___END_IF
   ___SET_R1(___STK(-4))
   ___SET_R0(___LBL(19))
   ___ADJFP(-4)
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___STK(-2))
___DEF_SLBL(19,___L19_file_2d_foreach)
   ___SET_R0(___LBL(20))
   ___JUMPGENNOTSAFE(___SET_NARGS(0),___STK(-3))
___DEF_SLBL(20,___L20_file_2d_foreach)
   ___SET_STK(0,___R1)
   ___SET_R0(___LBL(9))
   ___ADJFP(4)
   ___GOTO(___L31_file_2d_foreach)
___DEF_SLBL(21,___L21_file_2d_foreach)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(21,1,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_R2(___SUB(7))
   ___SET_R0(___LBL(23))
   ___ADJFP(4)
   ___POLL(22)
___DEF_SLBL(22,___L22_file_2d_foreach)
   ___JUMPPRM(___SET_NARGS(2),___PRM(115,___G_string_3d__3f_))
___DEF_SLBL(23,___L23_file_2d_foreach)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L35_file_2d_foreach)
   ___END_IF
   ___SET_STK(0,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(0),26)
   ___ADD_CLO_ELEM(0,___CLO(___STK(-1),1))
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(0))
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___CHECK_HEAP(24,4096)
___DEF_SLBL(24,___L24_file_2d_foreach)
   ___POLL(25)
___DEF_SLBL(25,___L25_file_2d_foreach)
   ___ADJFP(-4)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),116,___G_with_2d_input_2d_from_2d_string)
___DEF_SLBL(26,___L26_file_2d_foreach)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(26,0,0,0)
   ___POLL(27)
___DEF_SLBL(27,___L27_file_2d_foreach)
   ___JUMPGENNOTSAFE(___SET_NARGS(0),___CLO(___R4,1))
___DEF_GLBL(___L35_file_2d_foreach)
   ___SET_R1(___VOID)
   ___POLL(28)
___DEF_SLBL(28,___L28_file_2d_foreach)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(29,___L29_file_2d_foreach)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(29,0,0,0)
   ___SET_R1(___CLO(___R4,1))
   ___POLL(30)
___DEF_SLBL(30,___L30_file_2d_foreach)
   ___JUMPGLONOTSAFE(___SET_NARGS(1),111,___G_read_2d_line)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_read_2d_token
#undef ___PH_LBL0
#define ___PH_LBL0 138
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_read_2d_token)
___DEF_P_HLBL(___L1_read_2d_token)
___DEF_P_HLBL(___L2_read_2d_token)
___DEF_P_HLBL(___L3_read_2d_token)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_read_2d_token)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_read_2d_token)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_read_2d_token)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),100,___G_current_2d_input_2d_port)
___DEF_SLBL(2,___L2_read_2d_token)
   ___SET_R2(___CHR(32))
   ___SET_R0(___STK(-3))
   ___POLL(3)
___DEF_SLBL(3,___L3_read_2d_token)
   ___ADJFP(-4)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),111,___G_read_2d_line)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_make_2d_vertex
#undef ___PH_LBL0
#define ___PH_LBL0 143
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_make_2d_vertex)
___DEF_P_HLBL(___L1_make_2d_vertex)
___DEF_P_HLBL(___L2_make_2d_vertex)
___DEF_P_HLBL(___L3_make_2d_vertex)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_make_2d_vertex)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_make_2d_vertex)
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L4_make_2d_vertex)
   ___END_IF
   ___SET_R2(___FIXSUBP(___R1,___FIX(1L)))
   ___IF(___NOT(___FALSEP(___R2)))
   ___GOTO(___L5_make_2d_vertex)
   ___END_IF
___DEF_GLBL(___L4_make_2d_vertex)
   ___SET_STK(1,___R0)
   ___SET_R2(___FIX(1L))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_make_2d_vertex)
   ___JUMPPRM(___SET_NARGS(2),___PRM(93,___G__2d_))
___DEF_SLBL(2,___L2_make_2d_vertex)
   ___SET_R2(___R1)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L5_make_2d_vertex)
   ___SET_R2(___VECTORREF(___GLO(80,___G_verts),___R2))
   ___SET_R1(___PRC(48))
   ___POLL(3)
___DEF_SLBL(3,___L3_make_2d_vertex)
   ___JUMPPRM(___SET_NARGS(2),___PRM(96,___G_apply))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_token_2d_map
#undef ___PH_LBL0
#define ___PH_LBL0 148
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_token_2d_map)
___DEF_P_HLBL(___L1_token_2d_map)
___DEF_P_HLBL(___L2_token_2d_map)
___DEF_P_HLBL(___L3_token_2d_map)
___DEF_P_HLBL(___L4_token_2d_map)
___DEF_P_HLBL(___L5_token_2d_map)
___DEF_P_HLBL(___L6_token_2d_map)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_token_2d_map)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_token_2d_map)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_token_2d_map)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),100,___G_current_2d_input_2d_port)
___DEF_SLBL(2,___L2_token_2d_map)
   ___SET_R2(___CHR(32))
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(2),111,___G_read_2d_line)
___DEF_SLBL(3,___L3_token_2d_map)
   ___SET_STK(-1,___R1)
   ___SET_R2(___STK(-2))
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(2),___PRM(97,___G_assoc))
___DEF_SLBL(4,___L4_token_2d_map)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L7_token_2d_map)
   ___END_IF
   ___SET_R1(___STK(-1))
   ___POLL(5)
___DEF_SLBL(5,___L5_token_2d_map)
   ___GOTO(___L8_token_2d_map)
___DEF_GLBL(___L7_token_2d_map)
   ___SET_R1(___CDR(___R1))
   ___POLL(6)
___DEF_SLBL(6,___L6_token_2d_map)
___DEF_GLBL(___L8_token_2d_map)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_get_2d_current_2d_material
#undef ___PH_LBL0
#define ___PH_LBL0 156
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_get_2d_current_2d_material)
___DEF_P_HLBL(___L1_get_2d_current_2d_material)
___DEF_P_HLBL(___L2_get_2d_current_2d_material)
___DEF_P_HLBL(___L3_get_2d_current_2d_material)
___DEF_P_HLBL(___L4_get_2d_current_2d_material)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_get_2d_current_2d_material)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_get_2d_current_2d_material)
   ___IF(___FALSEP(___GLO(7,___G_cur_2d_material)))
   ___GOTO(___L8_get_2d_current_2d_material)
   ___END_IF
   ___SET_STK(1,___GLO(7,___G_cur_2d_material))
   ___SET_STK(2,___GLO(30,___G_materials))
   ___SET_STK(3,___R0)
   ___SET_R2(___STK(2))
   ___SET_R1(___STK(1))
   ___SET_R0(___LBL(3))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_get_2d_current_2d_material)
   ___GOTO(___L6_get_2d_current_2d_material)
___DEF_GLBL(___L5_get_2d_current_2d_material)
   ___SET_R3(___CAR(___R2))
   ___SET_R4(___CAR(___R3))
   ___IF(___EQP(___R1,___R4))
   ___GOTO(___L7_get_2d_current_2d_material)
   ___END_IF
   ___SET_R2(___CDR(___R2))
   ___POLL(2)
___DEF_SLBL(2,___L2_get_2d_current_2d_material)
___DEF_GLBL(___L6_get_2d_current_2d_material)
   ___IF(___PAIRP(___R2))
   ___GOTO(___L5_get_2d_current_2d_material)
   ___END_IF
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L7_get_2d_current_2d_material)
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(3,___L3_get_2d_current_2d_material)
   ___SET_R1(___CDR(___R1))
   ___POLL(4)
___DEF_SLBL(4,___L4_get_2d_current_2d_material)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(3))
___DEF_GLBL(___L8_get_2d_current_2d_material)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_material_2d_prop
#undef ___PH_LBL0
#define ___PH_LBL0 162
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_material_2d_prop)
___DEF_P_HLBL(___L1_material_2d_prop)
___DEF_P_HLBL(___L2_material_2d_prop)
___DEF_P_HLBL(___L3_material_2d_prop)
___DEF_P_HLBL(___L4_material_2d_prop)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_material_2d_prop)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_material_2d_prop)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R2)
   ___SET_R2(___R1)
   ___SET_R1(___STK(2))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_material_2d_prop)
   ___JUMPPRM(___SET_NARGS(2),___PRM(97,___G_assoc))
___DEF_SLBL(2,___L2_material_2d_prop)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L5_material_2d_prop)
   ___END_IF
   ___SET_R1(___FAL)
   ___POLL(3)
___DEF_SLBL(3,___L3_material_2d_prop)
   ___GOTO(___L6_material_2d_prop)
___DEF_GLBL(___L5_material_2d_prop)
   ___SET_R1(___CDR(___R1))
   ___POLL(4)
___DEF_SLBL(4,___L4_material_2d_prop)
___DEF_GLBL(___L6_material_2d_prop)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_declaration
#undef ___PH_LBL0
#define ___PH_LBL0 168
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_declaration)
___DEF_P_HLBL(___L1_obj_2d_declaration)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_declaration)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_obj_2d_declaration)
   ___SET_R1(___CNS(1))
   ___POLL(1)
___DEF_SLBL(1,___L1_obj_2d_declaration)
   ___JUMPINT(___SET_NARGS(1),___PRC(148),___L_token_2d_map)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_vertex
#undef ___PH_LBL0
#define ___PH_LBL0 171
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4 ___D_F64(___F64V1) ___D_F64(___F64V2) \

#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_vertex)
___DEF_P_HLBL(___L1_obj_2d_vertex)
___DEF_P_HLBL(___L2_obj_2d_vertex)
___DEF_P_HLBL(___L3_obj_2d_vertex)
___DEF_P_HLBL(___L4_obj_2d_vertex)
___DEF_P_HLBL(___L5_obj_2d_vertex)
___DEF_P_HLBL(___L6_obj_2d_vertex)
___DEF_P_HLBL(___L7_obj_2d_vertex)
___DEF_P_HLBL(___L8_obj_2d_vertex)
___DEF_P_HLBL(___L9_obj_2d_vertex)
___DEF_P_HLBL(___L10_obj_2d_vertex)
___DEF_P_HLBL(___L11_obj_2d_vertex)
___DEF_P_HLBL(___L12_obj_2d_vertex)
___DEF_P_HLBL(___L13_obj_2d_vertex)
___DEF_P_HLBL(___L14_obj_2d_vertex)
___DEF_P_HLBL(___L15_obj_2d_vertex)
___DEF_P_HLBL(___L16_obj_2d_vertex)
___DEF_P_HLBL(___L17_obj_2d_vertex)
___DEF_P_HLBL(___L18_obj_2d_vertex)
___DEF_P_HLBL(___L19_obj_2d_vertex)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_vertex)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_obj_2d_vertex)
   ___IF(___NOT(___VECTORP(___GLO(80,___G_verts))))
   ___GOTO(___L20_obj_2d_vertex)
   ___END_IF
   ___SET_R1(___SUB(11))
   ___POLL(1)
___DEF_SLBL(1,___L1_obj_2d_vertex)
   ___JUMPGLONOTSAFE(___SET_NARGS(1),102,___G_error)
___DEF_GLBL(___L20_obj_2d_vertex)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(3))
   ___ADJFP(4)
   ___POLL(2)
___DEF_SLBL(2,___L2_obj_2d_vertex)
   ___JUMPPRM(___SET_NARGS(0),___PRM(109,___G_read))
___DEF_SLBL(3,___L3_obj_2d_vertex)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L33_obj_2d_vertex)
   ___END_IF
   ___IF(___FLONUMP(___R1))
   ___GOTO(___L21_obj_2d_vertex)
   ___END_IF
   ___GOTO(___L34_obj_2d_vertex)
___DEF_SLBL(4,___L4_obj_2d_vertex)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L34_obj_2d_vertex)
   ___END_IF
___DEF_GLBL(___L21_obj_2d_vertex)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,15.))
   ___SET_R1(___F64BOX(___F64V2))
   ___CHECK_HEAP(5,4096)
___DEF_SLBL(5,___L5_obj_2d_vertex)
___DEF_GLBL(___L22_obj_2d_vertex)
   ___SET_STK(-2,___R1)
   ___SET_R0(___LBL(6))
   ___JUMPPRM(___SET_NARGS(0),___PRM(109,___G_read))
___DEF_SLBL(6,___L6_obj_2d_vertex)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L30_obj_2d_vertex)
   ___END_IF
   ___IF(___FLONUMP(___R1))
   ___GOTO(___L23_obj_2d_vertex)
   ___END_IF
   ___GOTO(___L31_obj_2d_vertex)
___DEF_SLBL(7,___L7_obj_2d_vertex)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L31_obj_2d_vertex)
   ___END_IF
___DEF_GLBL(___L23_obj_2d_vertex)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,15.))
   ___SET_R1(___F64BOX(___F64V2))
   ___CHECK_HEAP(8,4096)
___DEF_SLBL(8,___L8_obj_2d_vertex)
___DEF_GLBL(___L24_obj_2d_vertex)
   ___SET_STK(-1,___R1)
   ___SET_R0(___LBL(9))
   ___JUMPPRM(___SET_NARGS(0),___PRM(109,___G_read))
___DEF_SLBL(9,___L9_obj_2d_vertex)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L27_obj_2d_vertex)
   ___END_IF
   ___IF(___FLONUMP(___R1))
   ___GOTO(___L25_obj_2d_vertex)
   ___END_IF
   ___GOTO(___L28_obj_2d_vertex)
___DEF_SLBL(10,___L10_obj_2d_vertex)
   ___IF(___NOT(___FLONUMP(___R1)))
   ___GOTO(___L28_obj_2d_vertex)
   ___END_IF
___DEF_GLBL(___L25_obj_2d_vertex)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,15.))
   ___SET_R1(___F64BOX(___F64V2))
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_obj_2d_vertex)
___DEF_GLBL(___L26_obj_2d_vertex)
   ___BEGIN_ALLOC_LIST(3,___STK(-1))
   ___ADD_LIST_ELEM(1,___R1)
   ___ADD_LIST_ELEM(2,___STK(-2))
   ___END_ALLOC_LIST(3)
   ___SET_R1(___GET_LIST(3))
   ___SET_R1(___CONS(___R1,___GLO(80,___G_verts)))
   ___SET_GLO(80,___G_verts,___R1)
   ___SET_R1(___VOID)
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_obj_2d_vertex)
   ___POLL(13)
___DEF_SLBL(13,___L13_obj_2d_vertex)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L27_obj_2d_vertex)
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L29_obj_2d_vertex)
   ___END_IF
   ___SET_F64(___F64V1,___F64FROMFIX(___R1))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(14,4096)
___DEF_SLBL(14,___L14_obj_2d_vertex)
   ___IF(___FLONUMP(___R1))
   ___GOTO(___L25_obj_2d_vertex)
   ___END_IF
___DEF_GLBL(___L28_obj_2d_vertex)
   ___SET_R2(___SUB(12))
   ___SET_R0(___LBL(15))
   ___JUMPPRM(___SET_NARGS(2),___PRM(92,___G__2a_))
___DEF_SLBL(15,___L15_obj_2d_vertex)
   ___GOTO(___L26_obj_2d_vertex)
___DEF_GLBL(___L29_obj_2d_vertex)
   ___SET_R0(___LBL(10))
   ___JUMPPRM(___SET_NARGS(1),___PRM(103,___G_exact_2d__3e_inexact))
___DEF_GLBL(___L30_obj_2d_vertex)
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L32_obj_2d_vertex)
   ___END_IF
   ___SET_F64(___F64V1,___F64FROMFIX(___R1))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(16,4096)
___DEF_SLBL(16,___L16_obj_2d_vertex)
   ___IF(___FLONUMP(___R1))
   ___GOTO(___L23_obj_2d_vertex)
   ___END_IF
___DEF_GLBL(___L31_obj_2d_vertex)
   ___SET_R2(___SUB(12))
   ___SET_R0(___LBL(17))
   ___JUMPPRM(___SET_NARGS(2),___PRM(92,___G__2a_))
___DEF_SLBL(17,___L17_obj_2d_vertex)
   ___GOTO(___L24_obj_2d_vertex)
___DEF_GLBL(___L32_obj_2d_vertex)
   ___SET_R0(___LBL(7))
   ___JUMPPRM(___SET_NARGS(1),___PRM(103,___G_exact_2d__3e_inexact))
___DEF_GLBL(___L33_obj_2d_vertex)
   ___IF(___NOT(___FIXNUMP(___R1)))
   ___GOTO(___L35_obj_2d_vertex)
   ___END_IF
   ___SET_F64(___F64V1,___F64FROMFIX(___R1))
   ___SET_R1(___F64BOX(___F64V1))
   ___CHECK_HEAP(18,4096)
___DEF_SLBL(18,___L18_obj_2d_vertex)
   ___IF(___FLONUMP(___R1))
   ___GOTO(___L21_obj_2d_vertex)
   ___END_IF
___DEF_GLBL(___L34_obj_2d_vertex)
   ___SET_R2(___SUB(12))
   ___SET_R0(___LBL(19))
   ___JUMPPRM(___SET_NARGS(2),___PRM(92,___G__2a_))
___DEF_SLBL(19,___L19_obj_2d_vertex)
   ___GOTO(___L22_obj_2d_vertex)
___DEF_GLBL(___L35_obj_2d_vertex)
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(1),___PRM(103,___G_exact_2d__3e_inexact))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_face
#undef ___PH_LBL0
#define ___PH_LBL0 192
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_face)
___DEF_P_HLBL(___L1_obj_2d_face)
___DEF_P_HLBL(___L2_obj_2d_face)
___DEF_P_HLBL(___L3_obj_2d_face)
___DEF_P_HLBL(___L4_obj_2d_face)
___DEF_P_HLBL(___L5_obj_2d_face)
___DEF_P_HLBL(___L6_obj_2d_face)
___DEF_P_HLBL(___L7_obj_2d_face)
___DEF_P_HLBL(___L8_obj_2d_face)
___DEF_P_HLBL(___L9_obj_2d_face)
___DEF_P_HLBL(___L10_obj_2d_face)
___DEF_P_HLBL(___L11_obj_2d_face)
___DEF_P_HLBL(___L12_obj_2d_face)
___DEF_P_HLBL(___L13_obj_2d_face)
___DEF_P_HLBL(___L14_obj_2d_face)
___DEF_P_HLBL(___L15_obj_2d_face)
___DEF_P_HLBL(___L16_obj_2d_face)
___DEF_P_HLBL(___L17_obj_2d_face)
___DEF_P_HLBL(___L18_obj_2d_face)
___DEF_P_HLBL(___L19_obj_2d_face)
___DEF_P_HLBL(___L20_obj_2d_face)
___DEF_P_HLBL(___L21_obj_2d_face)
___DEF_P_HLBL(___L22_obj_2d_face)
___DEF_P_HLBL(___L23_obj_2d_face)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_face)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_obj_2d_face)
   ___IF(___NOT(___PAIRP(___GLO(80,___G_verts))))
   ___GOTO(___L24_obj_2d_face)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_R1(___GLO(80,___G_verts))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_obj_2d_face)
   ___JUMPPRM(___SET_NARGS(1),___PRM(112,___G_reverse))
___DEF_SLBL(2,___L2_obj_2d_face)
   ___SET_R0(___LBL(3))
   ___JUMPPRM(___SET_NARGS(1),___PRM(105,___G_list_2d__3e_vector))
___DEF_SLBL(3,___L3_obj_2d_face)
   ___SET_GLO(80,___G_verts,___R1)
   ___SET_R0(___STK(-3))
   ___ADJFP(-4)
___DEF_GLBL(___L24_obj_2d_face)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(5))
   ___ADJFP(4)
   ___POLL(4)
___DEF_SLBL(4,___L4_obj_2d_face)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),110,___G_read_2d_all)
___DEF_SLBL(5,___L5_obj_2d_face)
   ___SET_R0(___LBL(6))
   ___JUMPPRM(___SET_NARGS(1),___PRM(105,___G_list_2d__3e_vector))
___DEF_SLBL(6,___L6_obj_2d_face)
   ___SET_R2(___VECTORLENGTH(___R1))
   ___SET_STK(-2,___R1)
   ___SET_STK(-1,___R2)
   ___SET_R0(___LBL(7))
   ___JUMPINT(___SET_NARGS(0),___PRC(156),___L_get_2d_current_2d_material)
___DEF_SLBL(7,___L7_obj_2d_face)
   ___IF(___NOT(___FIXNUMP(___STK(-1))))
   ___GOTO(___L36_obj_2d_face)
   ___END_IF
   ___IF(___FIXGE(___STK(-1),___FIX(3L)))
   ___GOTO(___L33_obj_2d_face)
   ___END_IF
   ___IF(___FIXNUMP(___STK(-1)))
   ___GOTO(___L25_obj_2d_face)
   ___END_IF
   ___GOTO(___L31_obj_2d_face)
___DEF_SLBL(8,___L8_obj_2d_face)
   ___BEGIN_ALLOC_LIST(5,___R1)
   ___ADD_LIST_ELEM(1,___STK(-1))
   ___ADD_LIST_ELEM(2,___STK(-2))
   ___ADD_LIST_ELEM(3,___STK(-3))
   ___ADD_LIST_ELEM(4,___SYM(7,___S_triangle))
   ___END_ALLOC_LIST(5)
   ___SET_R1(___GET_LIST(5))
   ___SET_R1(___CONS(___R1,___GLO(45,___G_prims)))
   ___SET_GLO(45,___G_prims,___R1)
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___CHECK_HEAP(9,4096)
___DEF_SLBL(9,___L9_obj_2d_face)
   ___IF(___NOT(___FIXNUMP(___STK(-1))))
   ___GOTO(___L31_obj_2d_face)
   ___END_IF
___DEF_GLBL(___L25_obj_2d_face)
   ___IF(___FIXGE(___STK(-1),___FIX(4L)))
   ___GOTO(___L27_obj_2d_face)
   ___END_IF
___DEF_GLBL(___L26_obj_2d_face)
   ___SET_R1(___VOID)
   ___POLL(10)
___DEF_SLBL(10,___L10_obj_2d_face)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_SLBL(11,___L11_obj_2d_face)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L30_obj_2d_face)
   ___END_IF
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
___DEF_GLBL(___L27_obj_2d_face)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(13))
   ___SET_R0(___LBL(12))
   ___JUMPPRM(___SET_NARGS(2),___PRM(97,___G_assoc))
___DEF_SLBL(12,___L12_obj_2d_face)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L28_obj_2d_face)
   ___END_IF
   ___SET_R1(___FAL)
   ___GOTO(___L29_obj_2d_face)
___DEF_GLBL(___L28_obj_2d_face)
   ___SET_R1(___CDR(___R1))
___DEF_GLBL(___L29_obj_2d_face)
   ___SET_R2(___R1)
   ___SET_R1(___PRC(48))
   ___SET_R0(___LBL(13))
   ___JUMPPRM(___SET_NARGS(2),___PRM(96,___G_apply))
___DEF_SLBL(13,___L13_obj_2d_face)
   ___SET_STK(-1,___R1)
   ___SET_R1(___VECTORREF(___STK(-2),___FIX(0L)))
   ___SET_R0(___LBL(14))
   ___JUMPINT(___SET_NARGS(1),___PRC(143),___L_make_2d_vertex)
___DEF_SLBL(14,___L14_obj_2d_face)
   ___SET_STK(0,___R1)
   ___SET_R1(___VECTORREF(___STK(-2),___FIX(2L)))
   ___SET_R0(___LBL(15))
   ___ADJFP(4)
   ___JUMPINT(___SET_NARGS(1),___PRC(143),___L_make_2d_vertex)
___DEF_SLBL(15,___L15_obj_2d_face)
   ___SET_STK(-3,___R1)
   ___SET_R1(___VECTORREF(___STK(-6),___FIX(3L)))
   ___SET_R0(___LBL(16))
   ___JUMPINT(___SET_NARGS(1),___PRC(143),___L_make_2d_vertex)
___DEF_SLBL(16,___L16_obj_2d_face)
   ___BEGIN_ALLOC_LIST(5,___R1)
   ___ADD_LIST_ELEM(1,___STK(-3))
   ___ADD_LIST_ELEM(2,___STK(-4))
   ___ADD_LIST_ELEM(3,___STK(-5))
   ___ADD_LIST_ELEM(4,___SYM(7,___S_triangle))
   ___END_ALLOC_LIST(5)
   ___SET_R1(___GET_LIST(5))
   ___SET_R1(___CONS(___R1,___GLO(45,___G_prims)))
   ___SET_GLO(45,___G_prims,___R1)
   ___SET_R1(___VOID)
   ___CHECK_HEAP(17,4096)
___DEF_SLBL(17,___L17_obj_2d_face)
   ___POLL(18)
___DEF_SLBL(18,___L18_obj_2d_face)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L30_obj_2d_face)
   ___ADJFP(-4)
   ___GOTO(___L26_obj_2d_face)
___DEF_SLBL(19,___L19_obj_2d_face)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L32_obj_2d_face)
   ___END_IF
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
   ___IF(___FIXNUMP(___STK(-1)))
   ___GOTO(___L25_obj_2d_face)
   ___END_IF
___DEF_GLBL(___L31_obj_2d_face)
   ___SET_STK(0,___R1)
   ___SET_R1(___STK(-1))
   ___SET_R2(___FIX(4L))
   ___SET_R0(___LBL(11))
   ___ADJFP(4)
   ___JUMPPRM(___SET_NARGS(2),___PRM(94,___G__3e__3d_))
___DEF_GLBL(___L32_obj_2d_face)
   ___SET_R1(___STK(-4))
   ___ADJFP(-4)
___DEF_GLBL(___L33_obj_2d_face)
   ___SET_STK(0,___R1)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(14))
   ___SET_R0(___LBL(20))
   ___ADJFP(4)
   ___JUMPPRM(___SET_NARGS(2),___PRM(97,___G_assoc))
___DEF_SLBL(20,___L20_obj_2d_face)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L34_obj_2d_face)
   ___END_IF
   ___SET_R1(___FAL)
   ___GOTO(___L35_obj_2d_face)
___DEF_GLBL(___L34_obj_2d_face)
   ___SET_R1(___CDR(___R1))
___DEF_GLBL(___L35_obj_2d_face)
   ___SET_R2(___R1)
   ___SET_R1(___PRC(48))
   ___SET_R0(___LBL(21))
   ___JUMPPRM(___SET_NARGS(2),___PRM(96,___G_apply))
___DEF_SLBL(21,___L21_obj_2d_face)
   ___SET_STK(-3,___R1)
   ___SET_R1(___VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_R0(___LBL(22))
   ___JUMPINT(___SET_NARGS(1),___PRC(143),___L_make_2d_vertex)
___DEF_SLBL(22,___L22_obj_2d_face)
   ___SET_STK(-2,___R1)
   ___SET_R1(___VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_R0(___LBL(23))
   ___JUMPINT(___SET_NARGS(1),___PRC(143),___L_make_2d_vertex)
___DEF_SLBL(23,___L23_obj_2d_face)
   ___SET_STK(-1,___R1)
   ___SET_R1(___VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_R0(___LBL(8))
   ___JUMPINT(___SET_NARGS(1),___PRC(143),___L_make_2d_vertex)
___DEF_GLBL(___L36_obj_2d_face)
   ___SET_STK(0,___R1)
   ___SET_R1(___STK(-1))
   ___SET_R2(___FIX(3L))
   ___SET_R0(___LBL(19))
   ___ADJFP(4)
   ___JUMPPRM(___SET_NARGS(2),___PRM(94,___G__3e__3d_))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_material_2d_switch
#undef ___PH_LBL0
#define ___PH_LBL0 217
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_material_2d_switch)
___DEF_P_HLBL(___L1_obj_2d_material_2d_switch)
___DEF_P_HLBL(___L2_obj_2d_material_2d_switch)
___DEF_P_HLBL(___L3_obj_2d_material_2d_switch)
___DEF_P_HLBL(___L4_obj_2d_material_2d_switch)
___DEF_P_HLBL(___L5_obj_2d_material_2d_switch)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_material_2d_switch)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_obj_2d_material_2d_switch)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_obj_2d_material_2d_switch)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),100,___G_current_2d_input_2d_port)
___DEF_SLBL(2,___L2_obj_2d_material_2d_switch)
   ___SET_R2(___CHR(32))
   ___SET_R0(___LBL(3))
   ___JUMPGLONOTSAFE(___SET_NARGS(2),111,___G_read_2d_line)
___DEF_SLBL(3,___L3_obj_2d_material_2d_switch)
   ___SET_R0(___LBL(4))
   ___JUMPPRM(___SET_NARGS(1),___PRM(113,___G_string_2d__3e_symbol))
___DEF_SLBL(4,___L4_obj_2d_material_2d_switch)
   ___SET_GLO(7,___G_cur_2d_material,___R1)
   ___SET_R1(___VOID)
   ___POLL(5)
___DEF_SLBL(5,___L5_obj_2d_material_2d_switch)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_attr
#undef ___PH_LBL0
#define ___PH_LBL0 224
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_attr)
___DEF_P_HLBL(___L1_obj_2d_attr)
___DEF_P_HLBL(___L2_obj_2d_attr)
___DEF_P_HLBL(___L3_obj_2d_attr)
___DEF_P_HLBL(___L4_obj_2d_attr)
___DEF_P_HLBL(___L5_obj_2d_attr)
___DEF_P_HLBL(___L6_obj_2d_attr)
___DEF_P_HLBL(___L7_obj_2d_attr)
___DEF_P_HLBL(___L8_obj_2d_attr)
___DEF_P_HLBL(___L9_obj_2d_attr)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_attr)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_obj_2d_attr)
   ___SET_STK(1,___R0)
   ___SET_R1(___CNS(1))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_obj_2d_attr)
   ___JUMPINT(___SET_NARGS(1),___PRC(148),___L_token_2d_map)
___DEF_SLBL(2,___L2_obj_2d_attr)
   ___SET_STK(-2,___R1)
   ___SET_R2(___CNS(7))
   ___SET_R0(___LBL(3))
   ___JUMPPRM(___SET_NARGS(2),___PRM(107,___G_memv))
___DEF_SLBL(3,___L3_obj_2d_attr)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L10_obj_2d_attr)
   ___END_IF
   ___SET_R0(___STK(-3))
   ___POLL(4)
___DEF_SLBL(4,___L4_obj_2d_attr)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(0),___PRC(171),___L_obj_2d_vertex)
___DEF_GLBL(___L10_obj_2d_attr)
   ___SET_R1(___STK(-2))
   ___SET_R2(___CNS(8))
   ___SET_R0(___LBL(5))
   ___JUMPPRM(___SET_NARGS(2),___PRM(107,___G_memv))
___DEF_SLBL(5,___L5_obj_2d_attr)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L11_obj_2d_attr)
   ___END_IF
   ___SET_R0(___STK(-3))
   ___POLL(6)
___DEF_SLBL(6,___L6_obj_2d_attr)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(0),___PRC(192),___L_obj_2d_face)
___DEF_GLBL(___L11_obj_2d_attr)
   ___SET_R1(___STK(-2))
   ___SET_R2(___CNS(9))
   ___SET_R0(___LBL(7))
   ___JUMPPRM(___SET_NARGS(2),___PRM(107,___G_memv))
___DEF_SLBL(7,___L7_obj_2d_attr)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L12_obj_2d_attr)
   ___END_IF
   ___SET_R1(___VOID)
   ___POLL(8)
___DEF_SLBL(8,___L8_obj_2d_attr)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L12_obj_2d_attr)
   ___SET_R0(___STK(-3))
   ___POLL(9)
___DEF_SLBL(9,___L9_obj_2d_attr)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(0),___PRC(217),___L_obj_2d_material_2d_switch)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_mat_2d_create
#undef ___PH_LBL0
#define ___PH_LBL0 235
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_mat_2d_create)
___DEF_P_HLBL(___L1_mat_2d_create)
___DEF_P_HLBL(___L2_mat_2d_create)
___DEF_P_HLBL(___L3_mat_2d_create)
___DEF_P_HLBL(___L4_mat_2d_create)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_mat_2d_create)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_mat_2d_create)
   ___SET_STK(1,___R0)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_mat_2d_create)
   ___JUMPPRM(___SET_NARGS(0),___PRM(109,___G_read))
___DEF_SLBL(2,___L2_mat_2d_create)
   ___SET_R2(___CONS(___R1,___NUL))
   ___SET_R2(___CONS(___R2,___GLO(30,___G_materials)))
   ___SET_GLO(30,___G_materials,___R2)
   ___SET_GLO(7,___G_cur_2d_material,___R1)
   ___SET_R1(___VOID)
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_mat_2d_create)
   ___POLL(4)
___DEF_SLBL(4,___L4_mat_2d_create)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_mat_2d_declaration
#undef ___PH_LBL0
#define ___PH_LBL0 241
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_mat_2d_declaration)
___DEF_P_HLBL(___L1_mat_2d_declaration)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_mat_2d_declaration)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_mat_2d_declaration)
   ___SET_R1(___CNS(10))
   ___POLL(1)
___DEF_SLBL(1,___L1_mat_2d_declaration)
   ___JUMPINT(___SET_NARGS(1),___PRC(148),___L_token_2d_map)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_mat_2d_property
#undef ___PH_LBL0
#define ___PH_LBL0 244
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_mat_2d_property)
___DEF_P_HLBL(___L1_mat_2d_property)
___DEF_P_HLBL(___L2_mat_2d_property)
___DEF_P_HLBL(___L3_mat_2d_property)
___DEF_P_HLBL(___L4_mat_2d_property)
___DEF_P_HLBL(___L5_mat_2d_property)
___DEF_P_HLBL(___L6_mat_2d_property)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_mat_2d_property)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_mat_2d_property)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_mat_2d_property)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),110,___G_read_2d_all)
___DEF_SLBL(2,___L2_mat_2d_property)
   ___SET_STK(-1,___GLO(7,___G_cur_2d_material))
   ___SET_STK(0,___GLO(30,___G_materials))
   ___SET_STK(1,___R1)
   ___SET_R2(___STK(0))
   ___SET_R1(___STK(-1))
   ___SET_R0(___LBL(4))
   ___ADJFP(4)
   ___IF(___PAIRP(___R2))
   ___GOTO(___L8_mat_2d_property)
   ___END_IF
   ___GOTO(___L9_mat_2d_property)
___DEF_GLBL(___L7_mat_2d_property)
   ___SET_R2(___CDR(___R2))
   ___POLL(3)
___DEF_SLBL(3,___L3_mat_2d_property)
   ___IF(___NOT(___PAIRP(___R2)))
   ___GOTO(___L9_mat_2d_property)
   ___END_IF
___DEF_GLBL(___L8_mat_2d_property)
   ___SET_R3(___CAR(___R2))
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___EQP(___R1,___R4)))
   ___GOTO(___L7_mat_2d_property)
   ___END_IF
   ___SET_R1(___R3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L9_mat_2d_property)
   ___SET_R1(___FAL)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(4,___L4_mat_2d_property)
   ___SET_R2(___CONS(___STK(-6),___STK(-3)))
   ___SET_R3(___CDR(___R1))
   ___SET_R2(___CONS(___R2,___R3))
   ___SETCDR(___R1,___R2)
   ___CHECK_HEAP(5,4096)
___DEF_SLBL(5,___L5_mat_2d_property)
   ___POLL(6)
___DEF_SLBL(6,___L6_mat_2d_property)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_mat_2d_attr
#undef ___PH_LBL0
#define ___PH_LBL0 252
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_mat_2d_attr)
___DEF_P_HLBL(___L1_mat_2d_attr)
___DEF_P_HLBL(___L2_mat_2d_attr)
___DEF_P_HLBL(___L3_mat_2d_attr)
___DEF_P_HLBL(___L4_mat_2d_attr)
___DEF_P_HLBL(___L5_mat_2d_attr)
___DEF_P_HLBL(___L6_mat_2d_attr)
___DEF_P_HLBL(___L7_mat_2d_attr)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_mat_2d_attr)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_mat_2d_attr)
   ___SET_STK(1,___R0)
   ___SET_R1(___CNS(10))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_mat_2d_attr)
   ___JUMPINT(___SET_NARGS(1),___PRC(148),___L_token_2d_map)
___DEF_SLBL(2,___L2_mat_2d_attr)
   ___SET_STK(-2,___R1)
   ___SET_R2(___CNS(12))
   ___SET_R0(___LBL(3))
   ___JUMPPRM(___SET_NARGS(2),___PRM(107,___G_memv))
___DEF_SLBL(3,___L3_mat_2d_attr)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L8_mat_2d_attr)
   ___END_IF
   ___SET_R0(___STK(-3))
   ___POLL(4)
___DEF_SLBL(4,___L4_mat_2d_attr)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(0),___PRC(235),___L_mat_2d_create)
___DEF_GLBL(___L8_mat_2d_attr)
   ___SET_R1(___STK(-2))
   ___SET_R2(___SUB(16))
   ___SET_R0(___LBL(5))
   ___JUMPPRM(___SET_NARGS(2),___PRM(115,___G_string_3d__3f_))
___DEF_SLBL(5,___L5_mat_2d_attr)
   ___IF(___NOT(___FALSEP(___R1)))
   ___GOTO(___L9_mat_2d_attr)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___POLL(6)
___DEF_SLBL(6,___L6_mat_2d_attr)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(1),___PRC(244),___L_mat_2d_property)
___DEF_GLBL(___L9_mat_2d_attr)
   ___SET_R1(___VOID)
   ___POLL(7)
___DEF_SLBL(7,___L7_mat_2d_attr)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_load_2d_obj
#undef ___PH_LBL0
#define ___PH_LBL0 261
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_load_2d_obj)
___DEF_P_HLBL(___L1_load_2d_obj)
___DEF_P_HLBL(___L2_load_2d_obj)
___DEF_P_HLBL(___L3_load_2d_obj)
___DEF_P_HLBL(___L4_load_2d_obj)
___DEF_P_HLBL(___L5_load_2d_obj)
___DEF_P_HLBL(___L6_load_2d_obj)
___DEF_P_HLBL(___L7_load_2d_obj)
___DEF_P_HLBL(___L8_load_2d_obj)
___DEF_P_HLBL(___L9_load_2d_obj)
___DEF_P_HLBL(___L10_load_2d_obj)
___DEF_P_HLBL(___L11_load_2d_obj)
___DEF_P_HLBL(___L12_load_2d_obj)
___DEF_P_HLBL(___L13_load_2d_obj)
___DEF_P_HLBL(___L14_load_2d_obj)
___DEF_P_HLBL(___L15_load_2d_obj)
___DEF_P_HLBL(___L16_load_2d_obj)
___DEF_P_HLBL(___L17_load_2d_obj)
___DEF_P_HLBL(___L18_load_2d_obj)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_load_2d_obj)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_load_2d_obj)
   ___SET_GLO(80,___G_verts,___NUL)
   ___SET_GLO(45,___G_prims,___NUL)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R2(___R1)
   ___SET_R3(___SUB(17))
   ___SET_R1(___SUB(18))
   ___SET_R0(___LBL(14))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_load_2d_obj)
   ___SET_NARGS(3) ___GOTO(___L3_load_2d_obj)
___DEF_SLBL(2,___L2_load_2d_obj)
   ___SET_R2(___R1)
   ___SET_R1(___SUB(19))
   ___SET_R0(___LBL(12))
   ___SET_NARGS(2) ___GOTO(___L3_load_2d_obj)
___DEF_SLBL(3,___L3_load_2d_obj)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(3,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_R0(___LBL(5))
   ___ADJFP(4)
   ___POLL(4)
___DEF_SLBL(4,___L4_load_2d_obj)
   ___JUMPGLONOTSAFE(___SET_NARGS(0),8,___G_current_2d_log_2d_port)
___DEF_SLBL(5,___L5_load_2d_obj)
   ___SET_STK(-1,___R1)
   ___SET_STK(0,___ALLOC_CLO(1))
   ___BEGIN_SETUP_CLO(1,___STK(0),8)
   ___ADD_CLO_ELEM(0,___STK(-2))
   ___END_SETUP_CLO(1)
   ___SET_R2(___STK(0))
   ___SET_R0(___STK(-3))
   ___SET_R1(___STK(-1))
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_load_2d_obj)
   ___POLL(7)
___DEF_SLBL(7,___L7_load_2d_obj)
   ___ADJFP(-4)
   ___JUMPGLONOTSAFE(___SET_NARGS(2),118,___G_with_2d_output_2d_to_2d_port)
___DEF_SLBL(8,___L8_load_2d_obj)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(8,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R0(___LBL(10))
   ___ADJFP(4)
   ___POLL(9)
___DEF_SLBL(9,___L9_load_2d_obj)
   ___JUMPPRM(___SET_NARGS(1),___PRM(101,___G_display))
___DEF_SLBL(10,___L10_load_2d_obj)
   ___SET_R0(___STK(-3))
   ___POLL(11)
___DEF_SLBL(11,___L11_load_2d_obj)
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(0),___PRM(108,___G_newline))
___DEF_SLBL(12,___L12_load_2d_obj)
   ___SET_R1(___GLO(45,___G_prims))
   ___SET_R0(___STK(-3))
   ___POLL(13)
___DEF_SLBL(13,___L13_load_2d_obj)
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(1),___PRM(112,___G_reverse))
___DEF_SLBL(14,___L14_load_2d_obj)
   ___SET_R1(___STK(-2))
   ___SET_R2(___SUB(20))
   ___SET_R0(___LBL(15))
   ___JUMPPRM(___SET_NARGS(2),___PRM(114,___G_string_2d_append))
___DEF_SLBL(15,___L15_load_2d_obj)
   ___SET_R2(___PRC(252))
   ___SET_R0(___LBL(16))
   ___JUMPINT(___SET_NARGS(2),___PRC(106),___L_file_2d_foreach)
___DEF_SLBL(16,___L16_load_2d_obj)
   ___SET_R1(___STK(-2))
   ___SET_R2(___SUB(21))
   ___SET_R0(___LBL(17))
   ___JUMPPRM(___SET_NARGS(2),___PRM(114,___G_string_2d_append))
___DEF_SLBL(17,___L17_load_2d_obj)
   ___SET_R2(___PRC(224))
   ___SET_R0(___LBL(18))
   ___JUMPINT(___SET_NARGS(2),___PRC(106),___L_file_2d_foreach)
___DEF_SLBL(18,___L18_load_2d_obj)
   ___SET_R1(___GLO(45,___G_prims))
   ___SET_R0(___LBL(2))
   ___JUMPPRM(___SET_NARGS(1),___PRM(104,___G_length))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_make_2d_window
#undef ___PH_LBL0
#define ___PH_LBL0 281
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_make_2d_window)
___DEF_P_HLBL(___L1_make_2d_window)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_make_2d_window)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_make_2d_window)
   ___BEGIN_ALLOC_STRUCTURE(3)
   ___ADD_STRUCTURE_ELEM(0,___GLO(1,___G__23__23_type_2d_2_2d_window))
   ___ADD_STRUCTURE_ELEM(1,___R1)
   ___ADD_STRUCTURE_ELEM(2,___R2)
   ___END_ALLOC_STRUCTURE(3)
   ___SET_R1(___GET_STRUCTURE(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_make_2d_window)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_window_3f_
#undef ___PH_LBL0
#define ___PH_LBL0 284
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_window_3f_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_window_3f_)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_window_3f_)
   ___SET_R2(___TYPEID(___GLO(1,___G__23__23_type_2d_2_2d_window)))
   ___SET_R1(___BOOLEAN(___STRUCTUREDIOP(___R1,___R2)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_window_2d_x
#undef ___PH_LBL0
#define ___PH_LBL0 286
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_window_2d_x)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_window_2d_x)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_window_2d_x)
   ___SET_R1(___UNCHECKEDSTRUCTUREREF(___R1,___FIX(1L),___GLO(1,___G__23__23_type_2d_2_2d_window),___LBL(0)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_window_2d_x_2d_set_21_
#undef ___PH_LBL0
#define ___PH_LBL0 288
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_window_2d_x_2d_set_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_window_2d_x_2d_set_21_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_window_2d_x_2d_set_21_)
   ___UNCHECKEDSTRUCTURESET(___R1,___R2,___FIX(1L),___GLO(1,___G__23__23_type_2d_2_2d_window),___LBL(0))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_window_2d_y
#undef ___PH_LBL0
#define ___PH_LBL0 290
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_window_2d_y)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_window_2d_y)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_window_2d_y)
   ___SET_R1(___UNCHECKEDSTRUCTUREREF(___R1,___FIX(2L),___GLO(1,___G__23__23_type_2d_2_2d_window),___LBL(0)))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_window_2d_y_2d_set_21_
#undef ___PH_LBL0
#define ___PH_LBL0 292
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_window_2d_y_2d_set_21_)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_window_2d_y_2d_set_21_)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_window_2d_y_2d_set_21_)
   ___UNCHECKEDSTRUCTURESET(___R1,___R2,___FIX(2L),___GLO(1,___G__23__23_type_2d_2_2d_window),___LBL(0))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_generate_2d_spheres
#undef ___PH_LBL0
#define ___PH_LBL0 294
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_generate_2d_spheres)
___DEF_P_HLBL(___L1_generate_2d_spheres)
___DEF_P_HLBL(___L2_generate_2d_spheres)
___DEF_P_HLBL(___L3_generate_2d_spheres)
___DEF_P_HLBL(___L4_generate_2d_spheres)
___DEF_P_HLBL(___L5_generate_2d_spheres)
___DEF_P_HLBL(___L6_generate_2d_spheres)
___DEF_P_HLBL(___L7_generate_2d_spheres)
___DEF_P_HLBL(___L8_generate_2d_spheres)
___DEF_P_HLBL(___L9_generate_2d_spheres)
___DEF_P_HLBL(___L10_generate_2d_spheres)
___DEF_P_HLBL(___L11_generate_2d_spheres)
___DEF_P_HLBL(___L12_generate_2d_spheres)
___DEF_P_HLBL(___L13_generate_2d_spheres)
___DEF_P_HLBL(___L14_generate_2d_spheres)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_generate_2d_spheres)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_generate_2d_spheres)
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___ADD_F64VECTOR_ELEM(1,0.)
   ___ADD_F64VECTOR_ELEM(2,65.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,-1.)
   ___ADD_F64VECTOR_ELEM(1,-.25)
   ___ADD_F64VECTOR_ELEM(2,.5)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___ADD_F64VECTOR_ELEM(1,-1.)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_STK(1,___ALLOC_CLO(4))
   ___BEGIN_SETUP_CLO(4,___STK(1),3)
   ___ADD_CLO_ELEM(0,___R2)
   ___ADD_CLO_ELEM(1,___R3)
   ___ADD_CLO_ELEM(2,___STK(1))
   ___ADD_CLO_ELEM(3,___R1)
   ___END_SETUP_CLO(4)
   ___SET_R2(___NUL)
   ___SET_R1(___FIX(0L))
   ___ADJFP(1)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_generate_2d_spheres)
   ___POLL(2)
___DEF_SLBL(2,___L2_generate_2d_spheres)
   ___ADJFP(-1)
   ___JUMPGENNOTSAFE(___SET_NARGS(2),___STK(1))
___DEF_SLBL(3,___L3_generate_2d_spheres)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(3,2,0,0)
   ___IF(___NOT(___FIXLT(___R1,___FIX(50L))))
   ___GOTO(___L15_generate_2d_spheres)
   ___END_IF
   ___SET_F64(___F64V1,___F64FROMFIX(___R1))
   ___SET_F64(___F64V2,___F64DIV(___F64V1,50.))
   ___SET_F64(___F64V3,___F64ADD(.2,___F64V2))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,.8)
   ___ADD_F64VECTOR_ELEM(1,___F64V3)
   ___ADD_F64VECTOR_ELEM(2,.2)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(5,___R4)
   ___SET_R1(___CLO(___R4,1))
   ___SET_R2(___SUB(4))
   ___SET_R0(___LBL(6))
   ___ADJFP(8)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_generate_2d_spheres)
   ___POLL(5)
___DEF_SLBL(5,___L5_generate_2d_spheres)
   ___JUMPINT(___SET_NARGS(2),___PRC(80),___L_vec3d_2d_scalar_2d_mul)
___DEF_SLBL(6,___L6_generate_2d_spheres)
   ___SET_R2(___FIXREM(___STK(-6),___FIX(5L)))
   ___SET_F64(___F64V1,___F64FROMFIX(___R2))
   ___SET_R0(___LBL(8))
   ___SET_R2(___F64BOX(___F64V1))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_generate_2d_spheres)
   ___JUMPINT(___SET_NARGS(2),___PRC(80),___L_vec3d_2d_scalar_2d_mul)
___DEF_SLBL(8,___L8_generate_2d_spheres)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_R0(___CLO(___STK(-3),4))
   ___SET_F64(___F64V2,___F64VECTORREF(___R0,___FIX(2L)))
   ___SET_F64(___F64V3,___F64ADD(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_R0(___CLO(___STK(-3),4))
   ___SET_F64(___F64V5,___F64VECTORREF(___R0,___FIX(1L)))
   ___SET_F64(___F64V6,___F64ADD(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_R0(___CLO(___STK(-3),4))
   ___SET_F64(___F64V8,___F64VECTORREF(___R0,___FIX(0L)))
   ___SET_F64(___F64V9,___F64ADD(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_STK(-2,___R1)
   ___SET_R1(___CLO(___STK(-3),2))
   ___SET_R2(___SUB(4))
   ___SET_R0(___LBL(10))
   ___CHECK_HEAP(9,4096)
___DEF_SLBL(9,___L9_generate_2d_spheres)
   ___JUMPINT(___SET_NARGS(2),___PRC(80),___L_vec3d_2d_scalar_2d_mul)
___DEF_SLBL(10,___L10_generate_2d_spheres)
   ___SET_R2(___FIXQUO(___STK(-6),___FIX(5L)))
   ___SET_F64(___F64V1,___F64FROMFIX(___R2))
   ___SET_R0(___LBL(12))
   ___SET_R2(___F64BOX(___F64V1))
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_generate_2d_spheres)
   ___JUMPINT(___SET_NARGS(2),___PRC(80),___L_vec3d_2d_scalar_2d_mul)
___DEF_SLBL(12,___L12_generate_2d_spheres)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-2),___FIX(2L)))
   ___SET_F64(___F64V3,___F64ADD(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-2),___FIX(1L)))
   ___SET_F64(___F64V6,___F64ADD(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-2),___FIX(0L)))
   ___SET_F64(___F64V9,___F64ADD(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_R1(___CONS(___R1,___CNS(13)))
   ___SET_R1(___CONS(___STK(-4),___R1))
   ___SET_R1(___CONS(___SYM(6,___S_sphere),___R1))
   ___SET_R2(___CONS(___R1,___STK(-5)))
   ___SET_R1(___FIXADD(___STK(-6),___FIX(1L)))
   ___SET_R0(___STK(-7))
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_generate_2d_spheres)
   ___POLL(14)
___DEF_SLBL(14,___L14_generate_2d_spheres)
   ___ADJFP(-8)
   ___JUMPGENNOTSAFE(___SET_NARGS(2),___CLO(___STK(5),3))
___DEF_GLBL(___L15_generate_2d_spheres)
   ___SET_R1(___R2)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_type
#undef ___PH_LBL0
#define ___PH_LBL0 310
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_type)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_type)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_obj_2d_type)
   ___SET_R1(___CAR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_color
#undef ___PH_LBL0
#define ___PH_LBL0 312
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_color)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_color)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_obj_2d_color)
   ___SET_R1(___CADR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_obj_2d_normal
#undef ___PH_LBL0
#define ___PH_LBL0 314
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_obj_2d_normal)
___DEF_P_HLBL(___L1_obj_2d_normal)
___DEF_P_HLBL(___L2_obj_2d_normal)
___DEF_P_HLBL(___L3_obj_2d_normal)
___DEF_P_HLBL(___L4_obj_2d_normal)
___DEF_P_HLBL(___L5_obj_2d_normal)
___DEF_P_HLBL(___L6_obj_2d_normal)
___DEF_P_HLBL(___L7_obj_2d_normal)
___DEF_P_HLBL(___L8_obj_2d_normal)
___DEF_P_HLBL(___L9_obj_2d_normal)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_obj_2d_normal)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_obj_2d_normal)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_obj_2d_normal)
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___DEF_SLBL(2,___L2_obj_2d_normal)
   ___IF(___EQP(___SYM(6,___S_sphere),___R1))
   ___GOTO(___L10_obj_2d_normal)
   ___END_IF
   ___GOTO(___L14_obj_2d_normal)
___DEF_SLBL(3,___L3_obj_2d_normal)
   ___IF(___NOT(___EQP(___SYM(1,___S_light),___R1)))
   ___GOTO(___L11_obj_2d_normal)
   ___END_IF
___DEF_GLBL(___L10_obj_2d_normal)
   ___SET_R2(___STK(-1))
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___POLL(4)
___DEF_SLBL(4,___L4_obj_2d_normal)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(2),___PRC(338),___L_sphere_2d_normal)
___DEF_GLBL(___L11_obj_2d_normal)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(5))
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___DEF_SLBL(5,___L5_obj_2d_normal)
   ___IF(___NOT(___EQP(___SYM(5,___S_plane),___R1)))
   ___GOTO(___L12_obj_2d_normal)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___POLL(6)
___DEF_SLBL(6,___L6_obj_2d_normal)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(1),___PRC(341),___L_plane_2d_normal)
___DEF_GLBL(___L12_obj_2d_normal)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(7))
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___DEF_SLBL(7,___L7_obj_2d_normal)
   ___IF(___NOT(___EQP(___SYM(7,___S_triangle),___R1)))
   ___GOTO(___L13_obj_2d_normal)
   ___END_IF
   ___SET_R1(___STK(-2))
   ___SET_R0(___STK(-3))
   ___POLL(8)
___DEF_SLBL(8,___L8_obj_2d_normal)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(1),___PRC(355),___L_triangle_2d_normal)
___DEF_GLBL(___L13_obj_2d_normal)
   ___SET_R1(___VOID)
   ___POLL(9)
___DEF_SLBL(9,___L9_obj_2d_normal)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L14_obj_2d_normal)
   ___SET_R1(___STK(-2))
   ___SET_R0(___LBL(3))
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_light_2d_pos
#undef ___PH_LBL0
#define ___PH_LBL0 325
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_light_2d_pos)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_light_2d_pos)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_light_2d_pos)
   ___SET_R1(___CADDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_light_2d_intersection
#undef ___PH_LBL0
#define ___PH_LBL0 327
#undef ___PD_ALL
#define ___PD_ALL ___D_FP
#undef ___PR_ALL
#define ___PR_ALL ___R_FP
#undef ___PW_ALL
#define ___PW_ALL
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_light_2d_intersection)
___DEF_P_HLBL(___L1_light_2d_intersection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_light_2d_intersection)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_light_2d_intersection)
   ___POLL(1)
___DEF_SLBL(1,___L1_light_2d_intersection)
   ___JUMPINT(___SET_NARGS(3),___PRC(334),___L_sphere_2d_intersection)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_sphere_2d_pos
#undef ___PH_LBL0
#define ___PH_LBL0 330
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_sphere_2d_pos)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_sphere_2d_pos)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_sphere_2d_pos)
   ___SET_R1(___CADDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_sphere_2d_radius
#undef ___PH_LBL0
#define ___PH_LBL0 332
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_sphere_2d_radius)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_sphere_2d_radius)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_sphere_2d_radius)
   ___SET_R1(___CADDDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_sphere_2d_intersection
#undef ___PH_LBL0
#define ___PH_LBL0 334
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64( \
___F64V20) ___D_F64(___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64( \
___F64V26) ___D_F64(___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64( \
___F64V32) ___D_F64(___F64V33) ___D_F64(___F64V34)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_sphere_2d_intersection)
___DEF_P_HLBL(___L1_sphere_2d_intersection)
___DEF_P_HLBL(___L2_sphere_2d_intersection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_sphere_2d_intersection)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_sphere_2d_intersection)
   ___SET_R4(___CADDR(___R1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_R1(___CADDDR(___R1))
   ___SET_F64(___F64V20,___F64UNBOX(___R1))
   ___SET_F64(___F64V21,___F64EXPT(___F64V20,2.))
   ___SET_F64(___F64V22,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V24,___F64MUL(___F64V23,___F64V22))
   ___SET_F64(___F64V25,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V26,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V29,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V30,___F64MUL(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64ADD(___F64ADD(___F64V30,___F64V27),___F64V24))
   ___SET_F64(___F64V32,___F64SUB(___F64V31,___F64V21))
   ___SET_F64(___F64V33,___F64MUL(___F64V19,___F64V19))
   ___SET_F64(___F64V34,___F64SUB(___F64V33,___F64V32))
   ___SET_R1(___F64BOX(___F64V34))
   ___SET_R3(___F64BOX(___F64V19))
   ___ADJFP(3)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_sphere_2d_intersection)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___IF(___F64LE(___F64V1,0.))
   ___GOTO(___L3_sphere_2d_intersection)
   ___END_IF
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___SET_F64(___F64V2,___F64SQRT(___F64V1))
   ___SET_F64(___F64V3,___F64UNBOX(___R3))
   ___SET_F64(___F64V4,___F64NEG(___F64V3))
   ___SET_F64(___F64V5,___F64SUB(___F64V4,___F64V2))
   ___SET_R1(___F64BOX(___F64V5))
   ___CHECK_HEAP(2,4096)
___DEF_SLBL(2,___L2_sphere_2d_intersection)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___IF(___NOT(___F64GT(___F64V1,0.)))
   ___GOTO(___L3_sphere_2d_intersection)
   ___END_IF
   ___ADJFP(-3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L3_sphere_2d_intersection)
   ___SET_R1(___SUB(2))
   ___ADJFP(-3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_sphere_2d_normal
#undef ___PH_LBL0
#define ___PH_LBL0 338
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64(___F64V3) \
 ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64(___F64V9) \
 ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64(___F64V14) ___D_F64(___F64V15) \
 ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64(___F64V20) ___D_F64(___F64V21) \
 ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64(___F64V26) ___D_F64(___F64V27) \

#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_sphere_2d_normal)
___DEF_P_HLBL(___L1_sphere_2d_normal)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_sphere_2d_normal)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(0,2,0,0)
___DEF_GLBL(___L_sphere_2d_normal)
   ___SET_R1(___CADDR(___R1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_F64(___F64V20,___F64SQRT(___F64V19))
   ___SET_F64(___F64V21,___F64INV(___F64V20))
   ___SET_F64(___F64V22,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V23,___F64MUL(___F64V22,___F64V21))
   ___SET_F64(___F64V24,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V26,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V21))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V27)
   ___ADD_F64VECTOR_ELEM(1,___F64V25)
   ___ADD_F64VECTOR_ELEM(2,___F64V23)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_sphere_2d_normal)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_plane_2d_normal
#undef ___PH_LBL0
#define ___PH_LBL0 341
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_plane_2d_normal)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_plane_2d_normal)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_plane_2d_normal)
   ___SET_R1(___CADDDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_plane_2d_distance
#undef ___PH_LBL0
#define ___PH_LBL0 343
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_plane_2d_distance)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_plane_2d_distance)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_plane_2d_distance)
   ___SET_R1(___CADDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_plane_2d_intersection
#undef ___PH_LBL0
#define ___PH_LBL0 345
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R1 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_plane_2d_intersection)
___DEF_P_HLBL(___L1_plane_2d_intersection)
___DEF_P_HLBL(___L2_plane_2d_intersection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_plane_2d_intersection)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_plane_2d_intersection)
   ___SET_R4(___CADDDR(___R1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_R3(___F64BOX(___F64V10))
   ___ADJFP(3)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_plane_2d_intersection)
   ___SET_F64(___F64V1,___F64UNBOX(___R3))
   ___IF(___F64ZEROP(___F64V1))
   ___GOTO(___L3_plane_2d_intersection)
   ___END_IF
   ___SET_R4(___CADDDR(___R1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_R1(___CADDR(___R1))
   ___SET_F64(___F64V11,___F64UNBOX(___R1))
   ___SET_F64(___F64V12,___F64ADD(___F64V10,___F64V11))
   ___SET_F64(___F64V13,___F64NEG(___F64V12))
   ___SET_F64(___F64V14,___F64UNBOX(___R3))
   ___SET_F64(___F64V15,___F64DIV(___F64V13,___F64V14))
   ___SET_R1(___F64BOX(___F64V15))
   ___CHECK_HEAP(2,4096)
___DEF_SLBL(2,___L2_plane_2d_intersection)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___IF(___NOT(___F64POSITIVEP(___F64V1)))
   ___GOTO(___L3_plane_2d_intersection)
   ___END_IF
   ___ADJFP(-3)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L3_plane_2d_intersection)
   ___SET_R1(___SUB(2))
   ___ADJFP(-3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_triangle_2d_v1
#undef ___PH_LBL0
#define ___PH_LBL0 349
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_triangle_2d_v1)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_triangle_2d_v1)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_triangle_2d_v1)
   ___SET_R1(___CADDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_triangle_2d_v2
#undef ___PH_LBL0
#define ___PH_LBL0 351
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_triangle_2d_v2)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_triangle_2d_v2)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_triangle_2d_v2)
   ___SET_R1(___CADDDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_triangle_2d_v3
#undef ___PH_LBL0
#define ___PH_LBL0 353
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_triangle_2d_v3)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_triangle_2d_v3)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_triangle_2d_v3)
   ___SET_R1(___CDDDDR(___R1))
   ___SET_R1(___CAR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_triangle_2d_normal
#undef ___PH_LBL0
#define ___PH_LBL0 355
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64( \
___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64( \
___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64(___F64V14) ___D_F64( \
___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64(___F64V20) ___D_F64( \
___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64(___F64V26) ___D_F64( \
___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64(___F64V32) ___D_F64( \
___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64(___F64V38) ___D_F64( \
___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42) ___D_F64(___F64V43) ___D_F64(___F64V44) ___D_F64( \
___F64V45) ___D_F64(___F64V46) ___D_F64(___F64V47) ___D_F64(___F64V48) ___D_F64(___F64V49) ___D_F64(___F64V50) ___D_F64( \
___F64V51) ___D_F64(___F64V52)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_triangle_2d_normal)
___DEF_P_HLBL(___L1_triangle_2d_normal)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_triangle_2d_normal)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_triangle_2d_normal)
   ___SET_R2(___CADDDR(___R1))
   ___SET_R3(___CADDR(___R1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_R3(___CDDDDR(___R1))
   ___SET_R3(___CAR(___R3))
   ___SET_R1(___CADDR(___R1))
   ___SET_F64(___F64V10,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_F64(___F64V45,___F64SQRT(___F64V44))
   ___SET_F64(___F64V46,___F64INV(___F64V45))
   ___SET_F64(___F64V47,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V48,___F64MUL(___F64V47,___F64V46))
   ___SET_F64(___F64V49,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V50,___F64MUL(___F64V49,___F64V46))
   ___SET_F64(___F64V51,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V52,___F64MUL(___F64V51,___F64V46))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V52)
   ___ADD_F64VECTOR_ELEM(1,___F64V50)
   ___ADD_F64VECTOR_ELEM(2,___F64V48)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_triangle_2d_normal)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_triangle_2d_intersection
#undef ___PH_LBL0
#define ___PH_LBL0 358
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64( \
___F64V20) ___D_F64(___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64( \
___F64V26) ___D_F64(___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64( \
___F64V32) ___D_F64(___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64( \
___F64V38) ___D_F64(___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42) ___D_F64(___F64V43) ___D_F64( \
___F64V44) ___D_F64(___F64V45) ___D_F64(___F64V46) ___D_F64(___F64V47) ___D_F64(___F64V48) ___D_F64(___F64V49) ___D_F64( \
___F64V50) ___D_F64(___F64V51) ___D_F64(___F64V52) ___D_F64(___F64V53) ___D_F64(___F64V54) ___D_F64(___F64V55) ___D_F64( \
___F64V56) ___D_F64(___F64V57) ___D_F64(___F64V58) ___D_F64(___F64V59) ___D_F64(___F64V60) ___D_F64(___F64V61) ___D_F64( \
___F64V62) ___D_F64(___F64V63) ___D_F64(___F64V64) ___D_F64(___F64V65) ___D_F64(___F64V66) ___D_F64(___F64V67) ___D_F64( \
___F64V68) ___D_F64(___F64V69) ___D_F64(___F64V70) ___D_F64(___F64V71) ___D_F64(___F64V72) ___D_F64(___F64V73) ___D_F64( \
___F64V74) ___D_F64(___F64V75) ___D_F64(___F64V76) ___D_F64(___F64V77) ___D_F64(___F64V78) ___D_F64(___F64V79) ___D_F64( \
___F64V80) ___D_F64(___F64V81)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_triangle_2d_intersection)
___DEF_P_HLBL(___L1_triangle_2d_intersection)
___DEF_P_HLBL(___L2_triangle_2d_intersection)
___DEF_P_HLBL(___L3_triangle_2d_intersection)
___DEF_P_HLBL(___L4_triangle_2d_intersection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_triangle_2d_intersection)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_triangle_2d_intersection)
   ___SET_R4(___CADDR(___R1))
   ___SET_STK(1,___CDDDDR(___R1))
   ___SET_STK(1,___CAR(___STK(1)))
   ___SET_F64(___F64V1,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(1),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_STK(1,___CADDR(___R1))
   ___SET_STK(2,___CADDDR(___R1))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(2),___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(2),___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(1),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(2),___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(1,___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(1),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_F64(___F64V45,___F64SQRT(___F64V44))
   ___SET_F64(___F64V46,___F64INV(___F64V45))
   ___SET_F64(___F64V47,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V48,___F64MUL(___F64V47,___F64V46))
   ___SET_F64(___F64V49,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V50,___F64MUL(___F64V49,___F64V46))
   ___SET_F64(___F64V51,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V52,___F64MUL(___F64V51,___F64V46))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V52)
   ___ADD_F64VECTOR_ELEM(1,___F64V50)
   ___ADD_F64VECTOR_ELEM(2,___F64V48)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_F64(___F64V53,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V54,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V55,___F64MUL(___F64V54,___F64V53))
   ___SET_F64(___F64V56,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V57,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V58,___F64MUL(___F64V57,___F64V56))
   ___SET_F64(___F64V59,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V60,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V61,___F64MUL(___F64V60,___F64V59))
   ___SET_F64(___F64V62,___F64ADD(___F64ADD(___F64V61,___F64V58),___F64V55))
   ___SET_STK(1,___F64BOX(___F64V62))
   ___ADJFP(8)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_triangle_2d_intersection)
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-7)))
   ___IF(___F64GE(___F64V1,0.))
   ___GOTO(___L6_triangle_2d_intersection)
   ___END_IF
   ___SET_STK(-6,___CADDR(___R1))
   ___SET_STK(-5,___CADDDR(___R1))
   ___SET_R1(___CDDDDR(___R1))
   ___SET_R1(___CAR(___R1))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_F64(___F64V20,___F64UNBOX(___STK(-7)))
   ___SET_F64(___F64V21,___F64DIV(___F64V19,___F64V20))
   ___SET_F64(___F64V22,___F64NEG(___F64V21))
   ___SET_F64(___F64V23,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V24,___F64MUL(___F64V23,___F64V22))
   ___SET_F64(___F64V25,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V26,___F64MUL(___F64V25,___F64V22))
   ___SET_F64(___F64V27,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V28,___F64MUL(___F64V27,___F64V22))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V28)
   ___ADD_F64VECTOR_ELEM(1,___F64V26)
   ___ADD_F64VECTOR_ELEM(2,___F64V24)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V29,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V30,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V31,___F64ADD(___F64V30,___F64V29))
   ___SET_F64(___F64V32,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V33,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V34,___F64ADD(___F64V33,___F64V32))
   ___SET_F64(___F64V35,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V37,___F64ADD(___F64V36,___F64V35))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V37)
   ___ADD_F64VECTOR_ELEM(1,___F64V34)
   ___ADD_F64VECTOR_ELEM(2,___F64V31)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_F64(___F64V38,___F64VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___STK(-5),___FIX(2L)))
   ___SET_F64(___F64V40,___F64SUB(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___STK(-5),___FIX(1L)))
   ___SET_F64(___F64V43,___F64SUB(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_F64(___F64V45,___F64VECTORREF(___STK(-5),___FIX(0L)))
   ___SET_F64(___F64V46,___F64SUB(___F64V45,___F64V44))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V46)
   ___ADD_F64VECTOR_ELEM(1,___F64V43)
   ___ADD_F64VECTOR_ELEM(2,___F64V40)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V47,___F64VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_F64(___F64V48,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V49,___F64SUB(___F64V48,___F64V47))
   ___SET_F64(___F64V50,___F64VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_F64(___F64V51,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V52,___F64SUB(___F64V51,___F64V50))
   ___SET_F64(___F64V53,___F64VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_F64(___F64V54,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V55,___F64SUB(___F64V54,___F64V53))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V55)
   ___ADD_F64VECTOR_ELEM(1,___F64V52)
   ___ADD_F64VECTOR_ELEM(2,___F64V49)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_F64(___F64V56,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V57,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V58,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V59,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V60,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V61,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V62,___F64MUL(___F64V59,___F64V60))
   ___SET_F64(___F64V63,___F64MUL(___F64V61,___F64V58))
   ___SET_F64(___F64V64,___F64SUB(___F64V63,___F64V62))
   ___SET_F64(___F64V65,___F64MUL(___F64V61,___F64V56))
   ___SET_F64(___F64V66,___F64MUL(___F64V57,___F64V60))
   ___SET_F64(___F64V67,___F64SUB(___F64V66,___F64V65))
   ___SET_F64(___F64V68,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V69,___F64MUL(___F64MUL(___F64V59,___F64V56),___F64V68))
   ___SET_F64(___F64V70,___F64MUL(___F64V57,___F64V58))
   ___SET_F64(___F64V71,___F64SUB(___F64V69,___F64V70))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V71)
   ___ADD_F64VECTOR_ELEM(1,___F64V67)
   ___ADD_F64VECTOR_ELEM(2,___F64V64)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V72,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V73,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V74,___F64MUL(___F64V73,___F64V72))
   ___SET_F64(___F64V75,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V76,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V77,___F64MUL(___F64V76,___F64V75))
   ___SET_F64(___F64V78,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V79,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V80,___F64MUL(___F64V79,___F64V78))
   ___SET_F64(___F64V81,___F64ADD(___F64ADD(___F64V80,___F64V77),___F64V74))
   ___SET_STK(-7,___F64BOX(___F64V22))
   ___SET_R3(___F64BOX(___F64V81))
   ___ADJFP(3)
   ___CHECK_HEAP(2,4096)
___DEF_SLBL(2,___L2_triangle_2d_intersection)
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-10)))
   ___IF(___NOT(___F64GE(___F64V1,0.)))
   ___GOTO(___L5_triangle_2d_intersection)
   ___END_IF
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-7,___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-8,___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(-7),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(-7),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(-7),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-8,___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_STK(-8,___BOOLEAN(___F64NEGATIVEP(___F64V44)))
   ___SET_F64(___F64V45,___F64UNBOX(___R3))
   ___SET_STK(-7,___BOOLEAN(___F64NEGATIVEP(___F64V45)))
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_triangle_2d_intersection)
   ___IF(___NOT(___EQP(___STK(-7),___STK(-8))))
   ___GOTO(___L5_triangle_2d_intersection)
   ___END_IF
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-9,___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_R1(___BOOLEAN(___F64NEGATIVEP(___F64V44)))
   ___SET_F64(___F64V45,___F64UNBOX(___R3))
   ___SET_R2(___BOOLEAN(___F64NEGATIVEP(___F64V45)))
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_triangle_2d_intersection)
   ___IF(___NOT(___EQP(___R2,___R1)))
   ___GOTO(___L5_triangle_2d_intersection)
   ___END_IF
   ___SET_R1(___STK(-10))
   ___ADJFP(-11)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L5_triangle_2d_intersection)
   ___SET_R1(___SUB(2))
   ___ADJFP(-11)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L6_triangle_2d_intersection)
   ___SET_R1(___SUB(2))
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_mesh_2d_pos
#undef ___PH_LBL0
#define ___PH_LBL0 364
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_mesh_2d_pos)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_mesh_2d_pos)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_mesh_2d_pos)
   ___SET_R1(___CADDR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_mesh_2d_primitives
#undef ___PH_LBL0
#define ___PH_LBL0 366
#undef ___PD_ALL
#define ___PD_ALL ___D_R0 ___D_R1
#undef ___PR_ALL
#define ___PR_ALL ___R_R0 ___R_R1
#undef ___PW_ALL
#define ___PW_ALL ___W_R1
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_mesh_2d_primitives)
___DEF_P_HLBL(___L1_mesh_2d_primitives)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_mesh_2d_primitives)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_mesh_2d_primitives)
   ___SET_R1(___CADDDR(___R1))
   ___IF(___NOT(___PAIRP(___R1)))
   ___GOTO(___L2_mesh_2d_primitives)
   ___END_IF
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L2_mesh_2d_primitives)
   ___FORCE1(1,___R1)
___DEF_SLBL(1,___L1_mesh_2d_primitives)
   ___FORCE2
   ___SET_R1(___FORCE3)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_test_2d_intersection
#undef ___PH_LBL0
#define ___PH_LBL0 369
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_test_2d_intersection)
___DEF_P_HLBL(___L1_test_2d_intersection)
___DEF_P_HLBL(___L2_test_2d_intersection)
___DEF_P_HLBL(___L3_test_2d_intersection)
___DEF_P_HLBL(___L4_test_2d_intersection)
___DEF_P_HLBL(___L5_test_2d_intersection)
___DEF_P_HLBL(___L6_test_2d_intersection)
___DEF_P_HLBL(___L7_test_2d_intersection)
___DEF_P_HLBL(___L8_test_2d_intersection)
___DEF_P_HLBL(___L9_test_2d_intersection)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_test_2d_intersection)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_test_2d_intersection)
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_R0(___LBL(2))
   ___ADJFP(8)
   ___POLL(1)
___DEF_SLBL(1,___L1_test_2d_intersection)
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___DEF_SLBL(2,___L2_test_2d_intersection)
   ___IF(___EQP(___SYM(6,___S_sphere),___R1))
   ___GOTO(___L10_test_2d_intersection)
   ___END_IF
   ___GOTO(___L14_test_2d_intersection)
___DEF_SLBL(3,___L3_test_2d_intersection)
   ___IF(___NOT(___EQP(___SYM(1,___S_light),___R1)))
   ___GOTO(___L11_test_2d_intersection)
   ___END_IF
___DEF_GLBL(___L10_test_2d_intersection)
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(4)
___DEF_SLBL(4,___L4_test_2d_intersection)
   ___ADJFP(-8)
   ___JUMPINT(___SET_NARGS(3),___PRC(334),___L_sphere_2d_intersection)
___DEF_GLBL(___L11_test_2d_intersection)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(5))
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___DEF_SLBL(5,___L5_test_2d_intersection)
   ___IF(___NOT(___EQP(___SYM(5,___S_plane),___R1)))
   ___GOTO(___L12_test_2d_intersection)
   ___END_IF
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(6)
___DEF_SLBL(6,___L6_test_2d_intersection)
   ___ADJFP(-8)
   ___JUMPINT(___SET_NARGS(3),___PRC(345),___L_plane_2d_intersection)
___DEF_GLBL(___L12_test_2d_intersection)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(7))
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___DEF_SLBL(7,___L7_test_2d_intersection)
   ___IF(___NOT(___EQP(___SYM(7,___S_triangle),___R1)))
   ___GOTO(___L13_test_2d_intersection)
   ___END_IF
   ___SET_R3(___STK(-4))
   ___SET_R2(___STK(-5))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-7))
   ___POLL(8)
___DEF_SLBL(8,___L8_test_2d_intersection)
   ___ADJFP(-8)
   ___JUMPINT(___SET_NARGS(3),___PRC(358),___L_triangle_2d_intersection)
___DEF_GLBL(___L13_test_2d_intersection)
   ___SET_R1(___VOID)
   ___POLL(9)
___DEF_SLBL(9,___L9_test_2d_intersection)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L14_test_2d_intersection)
   ___SET_R1(___STK(-6))
   ___SET_R0(___LBL(3))
   ___JUMPINT(___SET_NARGS(1),___PRC(310),___L_obj_2d_type)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_apply_2d_lighting
#undef ___PH_LBL0
#define ___PH_LBL0 380
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64( \
___F64V20) ___D_F64(___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64( \
___F64V26) ___D_F64(___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64( \
___F64V32) ___D_F64(___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64( \
___F64V38) ___D_F64(___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42) ___D_F64(___F64V43) ___D_F64( \
___F64V44) ___D_F64(___F64V45) ___D_F64(___F64V46) ___D_F64(___F64V47) ___D_F64(___F64V48) ___D_F64(___F64V49) ___D_F64( \
___F64V50) ___D_F64(___F64V51) ___D_F64(___F64V52) ___D_F64(___F64V53) ___D_F64(___F64V54)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_apply_2d_lighting)
___DEF_P_HLBL(___L1_apply_2d_lighting)
___DEF_P_HLBL(___L2_apply_2d_lighting)
___DEF_P_HLBL(___L3_apply_2d_lighting)
___DEF_P_HLBL(___L4_apply_2d_lighting)
___DEF_P_HLBL(___L5_apply_2d_lighting)
___DEF_P_HLBL(___L6_apply_2d_lighting)
___DEF_P_HLBL(___L7_apply_2d_lighting)
___DEF_P_HLBL(___L8_apply_2d_lighting)
___DEF_P_HLBL(___L9_apply_2d_lighting)
___DEF_P_HLBL(___L10_apply_2d_lighting)
___DEF_P_HLBL(___L11_apply_2d_lighting)
___DEF_P_HLBL(___L12_apply_2d_lighting)
___DEF_P_HLBL(___L13_apply_2d_lighting)
___DEF_P_HLBL(___L14_apply_2d_lighting)
___DEF_P_HLBL(___L15_apply_2d_lighting)
___DEF_P_HLBL(___L16_apply_2d_lighting)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_apply_2d_lighting)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_apply_2d_lighting)
   ___SET_R4(___CAR(___R1))
   ___IF(___EQP(___R4,___SYM(1,___S_light)))
   ___GOTO(___L28_apply_2d_lighting)
   ___END_IF
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___ADD_F64VECTOR_ELEM(1,0.)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_R4(___BOX(___R4))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_STK(5,___R1)
   ___SET_STK(6,___R2)
   ___SET_R2(___R4)
   ___SET_R1(___R3)
   ___SET_R3(___GLO(51,___G_scene))
   ___SET_R0(___LBL(14))
   ___ADJFP(6)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_apply_2d_lighting)
   ___POLL(2)
___DEF_SLBL(2,___L2_apply_2d_lighting)
   ___GOTO(___L17_apply_2d_lighting)
___DEF_SLBL(3,___L3_apply_2d_lighting)
   ___SET_R3(___CDR(___STK(-2)))
   ___SET_R2(___STK(-3))
   ___SET_R1(___STK(-4))
   ___SET_R0(___STK(-5))
   ___ADJFP(-6)
   ___POLL(4)
___DEF_SLBL(4,___L4_apply_2d_lighting)
___DEF_GLBL(___L17_apply_2d_lighting)
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L26_apply_2d_lighting)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(7,___STK(-1))
   ___SET_STK(8,___STK(0))
   ___SET_R3(___CAR(___R3))
   ___SET_R0(___LBL(3))
   ___ADJFP(8)
   ___POLL(5)
___DEF_SLBL(5,___L5_apply_2d_lighting)
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___EQP(___R4,___SYM(1,___S_light))))
   ___GOTO(___L26_apply_2d_lighting)
   ___END_IF
   ___SET_R4(___CADDR(___R3))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(0),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(0),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(0),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_F64(___F64V20,___F64SQRT(___F64V19))
   ___SET_F64(___F64V21,___F64INV(___F64V20))
   ___SET_F64(___F64V22,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V23,___F64MUL(___F64V22,___F64V21))
   ___SET_F64(___F64V24,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V26,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V21))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V27)
   ___ADD_F64VECTOR_ELEM(1,___F64V25)
   ___ADD_F64VECTOR_ELEM(2,___F64V23)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_STK(1,___CAR(___STK(-1)))
   ___ADJFP(4)
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_apply_2d_lighting)
   ___IF(___NOT(___EQP(___SYM(6,___S_sphere),___STK(-3))))
   ___GOTO(___L23_apply_2d_lighting)
   ___END_IF
___DEF_GLBL(___L18_apply_2d_lighting)
   ___SET_STK(-3,___CADDR(___STK(-5)))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_F64(___F64V20,___F64SQRT(___F64V19))
   ___SET_F64(___F64V21,___F64INV(___F64V20))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V23,___F64MUL(___F64V22,___F64V21))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V26,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V21))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V27)
   ___ADD_F64VECTOR_ELEM(1,___F64V25)
   ___ADD_F64VECTOR_ELEM(2,___F64V23)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-4))
   ___SET_STK(-4,___STK(-3))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_apply_2d_lighting)
___DEF_GLBL(___L19_apply_2d_lighting)
   ___SET_F64(___F64V1,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_F64(___F64V11,___F64MAX(0.,___F64V10))
   ___SET_F64(___F64V12,___F64MIN(1.,___F64V11))
   ___SET_F64(___F64V13,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V21,___F64MUL(___F64V20,___F64V19))
   ___SET_F64(___F64V22,___F64ADD(___F64ADD(___F64V21,___F64V18),___F64V15))
   ___SET_F64(___F64V23,___F64MUL(2.,___F64V22))
   ___SET_F64(___F64V24,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V24,___F64V23))
   ___SET_F64(___F64V26,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V23))
   ___SET_F64(___F64V28,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V29,___F64MUL(___F64V28,___F64V23))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V29)
   ___ADD_F64VECTOR_ELEM(1,___F64V27)
   ___ADD_F64VECTOR_ELEM(2,___F64V25)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V30,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V31,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V32,___F64SUB(___F64V31,___F64V30))
   ___SET_F64(___F64V33,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V34,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V35,___F64SUB(___F64V34,___F64V33))
   ___SET_F64(___F64V36,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V37,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V38,___F64SUB(___F64V37,___F64V36))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V38)
   ___ADD_F64VECTOR_ELEM(1,___F64V35)
   ___ADD_F64VECTOR_ELEM(2,___F64V32)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V39,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V40,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V41,___F64MUL(___F64V40,___F64V39))
   ___SET_F64(___F64V42,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V43,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V44,___F64MUL(___F64V43,___F64V42))
   ___SET_F64(___F64V45,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V46,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V47,___F64MUL(___F64V46,___F64V45))
   ___SET_F64(___F64V48,___F64ADD(___F64ADD(___F64V47,___F64V44),___F64V41))
   ___SET_F64(___F64V49,___F64MAX(0.,___F64V48))
   ___SET_F64(___F64V50,___F64MIN(1.,___F64V49))
   ___SET_F64(___F64V51,___F64EXPT(___F64V50,30.))
   ___SET_F64(___F64V52,___F64MUL(4.,___F64V12))
   ___SET_F64(___F64V53,___F64MAX(0.,___F64V52))
   ___SET_F64(___F64V54,___F64MIN(1.,___F64V53))
   ___SET_STK(-3,___F64BOX(___F64V12))
   ___SET_R1(___F64BOX(___F64V51))
   ___SET_R4(___F64BOX(___F64V54))
   ___ADJFP(1)
   ___CHECK_HEAP(8,4096)
___DEF_SLBL(8,___L8_apply_2d_lighting)
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-4)))
   ___IF(___NOT(___F64GT(___F64V1,0.)))
   ___GOTO(___L22_apply_2d_lighting)
   ___END_IF
   ___SET_STK(-5,___UNBOX(___R2))
   ___SET_STK(-3,___CADR(___STK(-6)))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V2,___F64UNBOX(___STK(-4)))
   ___SET_F64(___F64V3,___F64MUL(___F64V1,___F64V2))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V5,___F64MUL(___F64V4,___F64V2))
   ___SET_F64(___F64V6,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V7,___F64MUL(___F64V6,___F64V2))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V7)
   ___ADD_F64VECTOR_ELEM(1,___F64V5)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_STK(-6,___CAR(___STK(-6)))
   ___CHECK_HEAP(9,4096)
___DEF_SLBL(9,___L9_apply_2d_lighting)
   ___IF(___NOT(___EQP(___SYM(5,___S_plane),___STK(-6))))
   ___GOTO(___L21_apply_2d_lighting)
   ___END_IF
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___ADD_F64VECTOR_ELEM(1,0.)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10_apply_2d_lighting)
___DEF_GLBL(___L20_apply_2d_lighting)
   ___SET_F64(___F64V1,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V3,___F64ADD(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V6,___F64ADD(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V9,___F64ADD(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V11,___F64UNBOX(___R4))
   ___SET_F64(___F64V12,___F64MUL(___F64V10,___F64V11))
   ___SET_F64(___F64V13,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V14,___F64MUL(___F64V13,___F64V11))
   ___SET_F64(___F64V15,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V16,___F64MUL(___F64V15,___F64V11))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V16)
   ___ADD_F64VECTOR_ELEM(1,___F64V14)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_R3(___CADR(___R3))
   ___SET_F64(___F64V17,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V18,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V19,___F64MUL(___F64V18,___F64V17))
   ___SET_F64(___F64V20,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V22,___F64MUL(___F64V21,___F64V20))
   ___SET_F64(___F64V23,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V24,___F64V23))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V25)
   ___ADD_F64VECTOR_ELEM(1,___F64V22)
   ___ADD_F64VECTOR_ELEM(2,___F64V19)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V26,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V27,___F64VECTORREF(___STK(-5),___FIX(2L)))
   ___SET_F64(___F64V28,___F64ADD(___F64V27,___F64V26))
   ___SET_F64(___F64V29,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V30,___F64VECTORREF(___STK(-5),___FIX(1L)))
   ___SET_F64(___F64V31,___F64ADD(___F64V30,___F64V29))
   ___SET_F64(___F64V32,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V33,___F64VECTORREF(___STK(-5),___FIX(0L)))
   ___SET_F64(___F64V34,___F64ADD(___F64V33,___F64V32))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V31)
   ___ADD_F64VECTOR_ELEM(2,___F64V28)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SETBOX(___R2,___R1) ___SET_R1(___R2)
   ___ADJFP(-7)
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_apply_2d_lighting)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L21_apply_2d_lighting)
   ___SET_F64(___F64V1,___F64UNBOX(___R1))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V1)
   ___ADD_F64VECTOR_ELEM(1,___F64V1)
   ___ADD_F64VECTOR_ELEM(2,___F64V1)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_apply_2d_lighting)
   ___GOTO(___L20_apply_2d_lighting)
___DEF_GLBL(___L22_apply_2d_lighting)
   ___SET_R1(___VOID)
   ___ADJFP(-7)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L23_apply_2d_lighting)
   ___SET_STK(-3,___CAR(___STK(-5)))
   ___IF(___EQP(___SYM(1,___S_light),___STK(-3)))
   ___GOTO(___L18_apply_2d_lighting)
   ___END_IF
   ___SET_STK(-4,___CAR(___STK(-5)))
   ___IF(___NOT(___EQP(___SYM(5,___S_plane),___STK(-4))))
   ___GOTO(___L24_apply_2d_lighting)
   ___END_IF
   ___SET_STK(-4,___CADDDR(___STK(-5)))
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-4))
   ___SET_STK(-4,___STK(-3))
   ___GOTO(___L19_apply_2d_lighting)
___DEF_GLBL(___L24_apply_2d_lighting)
   ___SET_STK(-4,___CAR(___STK(-5)))
   ___IF(___NOT(___EQP(___SYM(7,___S_triangle),___STK(-4))))
   ___GOTO(___L25_apply_2d_lighting)
   ___END_IF
   ___SET_STK(-4,___CADDR(___STK(-5)))
   ___SET_STK(-3,___CDDDDR(___STK(-5)))
   ___SET_STK(-3,___CAR(___STK(-3)))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_STK(-3,___CADDR(___STK(-5)))
   ___SET_STK(-2,___CADDDR(___STK(-5)))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-2),___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-2),___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(-2),___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-3,___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_F64(___F64V45,___F64SQRT(___F64V44))
   ___SET_F64(___F64V46,___F64INV(___F64V45))
   ___SET_F64(___F64V47,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V48,___F64MUL(___F64V47,___F64V46))
   ___SET_F64(___F64V49,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V50,___F64MUL(___F64V49,___F64V46))
   ___SET_F64(___F64V51,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V52,___F64MUL(___F64V51,___F64V46))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V52)
   ___ADD_F64VECTOR_ELEM(1,___F64V50)
   ___ADD_F64VECTOR_ELEM(2,___F64V48)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-4,___GET_F64VECTOR(3))
   ___SET_STK(-3,___R1)
   ___SET_R1(___STK(-4))
   ___SET_STK(-4,___STK(-3))
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_apply_2d_lighting)
   ___GOTO(___L19_apply_2d_lighting)
___DEF_GLBL(___L25_apply_2d_lighting)
   ___SET_STK(-4,___R1)
   ___SET_R1(___VOID)
   ___GOTO(___L19_apply_2d_lighting)
___DEF_GLBL(___L26_apply_2d_lighting)
   ___SET_R1(___VOID)
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(14,___L14_apply_2d_lighting)
   ___SET_R1(___CAR(___STK(-2)))
   ___IF(___NOT(___EQP(___SYM(5,___S_plane),___R1)))
   ___GOTO(___L27_apply_2d_lighting)
   ___END_IF
   ___SET_R1(___UNBOX(___STK(-1)))
   ___POLL(15)
___DEF_SLBL(15,___L15_apply_2d_lighting)
   ___ADJFP(-4)
   ___JUMPPRM(___NOTHING,___STK(1))
___DEF_GLBL(___L27_apply_2d_lighting)
   ___SET_R2(___UNBOX(___STK(-1)))
   ___SET_R1(___GLO(2,___G_ambient))
   ___SET_R0(___STK(-3))
   ___POLL(16)
___DEF_SLBL(16,___L16_apply_2d_lighting)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(2),___PRC(71),___L_vec3d_2d_add)
___DEF_GLBL(___L28_apply_2d_lighting)
   ___SET_R1(___CADR(___R1))
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_find_2d_closest_2d_prim
#undef ___PH_LBL0
#define ___PH_LBL0 398
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64( \
___F64V20) ___D_F64(___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64( \
___F64V26) ___D_F64(___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64( \
___F64V32) ___D_F64(___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64( \
___F64V38) ___D_F64(___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42) ___D_F64(___F64V43) ___D_F64( \
___F64V44) ___D_F64(___F64V45) ___D_F64(___F64V46) ___D_F64(___F64V47) ___D_F64(___F64V48) ___D_F64(___F64V49) ___D_F64( \
___F64V50) ___D_F64(___F64V51) ___D_F64(___F64V52) ___D_F64(___F64V53) ___D_F64(___F64V54) ___D_F64(___F64V55) ___D_F64( \
___F64V56) ___D_F64(___F64V57) ___D_F64(___F64V58) ___D_F64(___F64V59) ___D_F64(___F64V60) ___D_F64(___F64V61) ___D_F64( \
___F64V62) ___D_F64(___F64V63) ___D_F64(___F64V64) ___D_F64(___F64V65) ___D_F64(___F64V66) ___D_F64(___F64V67) ___D_F64( \
___F64V68) ___D_F64(___F64V69) ___D_F64(___F64V70) ___D_F64(___F64V71) ___D_F64(___F64V72) ___D_F64(___F64V73) ___D_F64( \
___F64V74) ___D_F64(___F64V75) ___D_F64(___F64V76) ___D_F64(___F64V77) ___D_F64(___F64V78) ___D_F64(___F64V79) ___D_F64( \
___F64V80) ___D_F64(___F64V81)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L1_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L2_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L3_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L4_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L5_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L6_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L7_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L8_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L9_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L10_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L11_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L12_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L13_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L14_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L15_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L16_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L17_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L18_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L19_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L20_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L21_find_2d_closest_2d_prim)
___DEF_P_HLBL(___L22_find_2d_closest_2d_prim)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_find_2d_closest_2d_prim)
   ___IF_NARGS_EQ(4,___NOTHING)
   ___WRONG_NARGS(0,4,0,0)
___DEF_GLBL(___L_find_2d_closest_2d_prim)
   ___GOTO(___L23_find_2d_closest_2d_prim)
___DEF_SLBL(1,___L1_find_2d_closest_2d_prim)
   ___SET_STK(-2,___R1)
   ___SET_STK(-1,___ALLOC_CLO(2))
   ___BEGIN_SETUP_CLO(2,___STK(-1),22)
   ___ADD_CLO_ELEM(0,___STK(-4))
   ___ADD_CLO_ELEM(1,___STK(-3))
   ___END_SETUP_CLO(2)
   ___SET_R3(___STK(-1))
   ___SET_R1(___STK(-6))
   ___SET_R0(___STK(-5))
   ___SET_R2(___STK(-2))
   ___ADJFP(-7)
   ___CHECK_HEAP(2,4096)
___DEF_SLBL(2,___L2_find_2d_closest_2d_prim)
   ___POLL(3)
___DEF_SLBL(3,___L3_find_2d_closest_2d_prim)
___DEF_GLBL(___L23_find_2d_closest_2d_prim)
   ___SET_R4(___BOX(___FAL))
   ___SET_STK(1,___BOX(___SUB(2)))
   ___SET_STK(2,___R0)
   ___SET_STK(3,___R3)
   ___SET_STK(4,___R4)
   ___SET_STK(8,___STK(0))
   ___SET_STK(9,___R1)
   ___SET_R3(___R2)
   ___SET_R2(___R4)
   ___SET_R1(___STK(1))
   ___SET_R0(___LBL(19))
   ___ADJFP(9)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_find_2d_closest_2d_prim)
   ___POLL(5)
___DEF_SLBL(5,___L5_find_2d_closest_2d_prim)
___DEF_GLBL(___L24_find_2d_closest_2d_prim)
   ___IF(___NOT(___PAIRP(___R3)))
   ___GOTO(___L29_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_STK(4,___R3)
   ___SET_STK(7,___STK(-1))
   ___SET_STK(8,___STK(0))
   ___SET_R3(___CAR(___R3))
   ___SET_R0(___LBL(17))
   ___ADJFP(8)
   ___POLL(6)
___DEF_SLBL(6,___L6_find_2d_closest_2d_prim)
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___EQP(___R4,___SYM(2,___S_mesh))))
   ___GOTO(___L25_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R4(___CADDR(___R3))
   ___SET_F64(___F64V1,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-1,___GET_F64VECTOR(3))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R2)
   ___SET_R1(___R3)
   ___SET_R0(___LBL(1))
   ___ADJFP(6)
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_find_2d_closest_2d_prim)
   ___POLL(8)
___DEF_SLBL(8,___L8_find_2d_closest_2d_prim)
   ___JUMPINT(___SET_NARGS(1),___PRC(366),___L_mesh_2d_primitives)
___DEF_GLBL(___L25_find_2d_closest_2d_prim)
   ___SET_R4(___CAR(___R3))
   ___IF(___EQP(___SYM(6,___S_sphere),___R4))
   ___GOTO(___L26_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___EQP(___SYM(1,___S_light),___R4)))
   ___GOTO(___L31_find_2d_closest_2d_prim)
   ___END_IF
___DEF_GLBL(___L26_find_2d_closest_2d_prim)
   ___SET_R4(___CADDR(___R3))
   ___SET_F64(___F64V1,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(0),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(0),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(0),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_STK(0,___CADDDR(___R3))
   ___SET_F64(___F64V20,___F64UNBOX(___STK(0)))
   ___SET_F64(___F64V21,___F64EXPT(___F64V20,2.))
   ___SET_F64(___F64V22,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V24,___F64MUL(___F64V23,___F64V22))
   ___SET_F64(___F64V25,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V26,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V29,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V30,___F64MUL(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64ADD(___F64ADD(___F64V30,___F64V27),___F64V24))
   ___SET_F64(___F64V32,___F64SUB(___F64V31,___F64V21))
   ___SET_F64(___F64V33,___F64MUL(___F64V19,___F64V19))
   ___SET_F64(___F64V34,___F64SUB(___F64V33,___F64V32))
   ___SET_STK(-1,___F64BOX(___F64V19))
   ___SET_R4(___F64BOX(___F64V34))
   ___ADJFP(3)
   ___CHECK_HEAP(9,4096)
___DEF_SLBL(9,___L9_find_2d_closest_2d_prim)
   ___SET_F64(___F64V1,___F64UNBOX(___R4))
   ___IF(___NOT(___F64LE(___F64V1,0.)))
   ___GOTO(___L30_find_2d_closest_2d_prim)
   ___END_IF
___DEF_GLBL(___L27_find_2d_closest_2d_prim)
   ___SET_R4(___SUB(2))
   ___ADJFP(-3)
___DEF_GLBL(___L28_find_2d_closest_2d_prim)
   ___SET_STK(-1,___UNBOX(___R1))
   ___SET_F64(___F64V1,___F64UNBOX(___R4))
   ___SET_F64(___F64V2,___F64UNBOX(___STK(-1)))
   ___IF(___NOT(___F64LT(___F64V1,___F64V2)))
   ___GOTO(___L29_find_2d_closest_2d_prim)
   ___END_IF
   ___SETBOX(___R1,___R4)
   ___SETBOX(___R2,___R3) ___SET_R1(___R2)
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L29_find_2d_closest_2d_prim)
   ___SET_R1(___VOID)
   ___ADJFP(-2)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L30_find_2d_closest_2d_prim)
   ___SET_F64(___F64V1,___F64UNBOX(___R4))
   ___SET_F64(___F64V2,___F64SQRT(___F64V1))
   ___SET_F64(___F64V3,___F64UNBOX(___STK(-4)))
   ___SET_F64(___F64V4,___F64NEG(___F64V3))
   ___SET_F64(___F64V5,___F64SUB(___F64V4,___F64V2))
   ___SET_R4(___F64BOX(___F64V5))
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10_find_2d_closest_2d_prim)
   ___SET_F64(___F64V1,___F64UNBOX(___R4))
   ___IF(___F64GT(___F64V1,0.))
   ___GOTO(___L32_find_2d_closest_2d_prim)
   ___END_IF
   ___GOTO(___L27_find_2d_closest_2d_prim)
___DEF_GLBL(___L31_find_2d_closest_2d_prim)
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___EQP(___SYM(5,___S_plane),___R4)))
   ___GOTO(___L33_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R4(___CADDDR(___R3))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(0),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(0),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(0),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_R4(___F64BOX(___F64V10))
   ___ADJFP(3)
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_find_2d_closest_2d_prim)
   ___SET_F64(___F64V1,___F64UNBOX(___R4))
   ___IF(___F64ZEROP(___F64V1))
   ___GOTO(___L27_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_STK(-3,___CADDDR(___R3))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_STK(-3,___CADDR(___R3))
   ___SET_F64(___F64V11,___F64UNBOX(___STK(-3)))
   ___SET_F64(___F64V12,___F64ADD(___F64V10,___F64V11))
   ___SET_F64(___F64V13,___F64NEG(___F64V12))
   ___SET_F64(___F64V14,___F64UNBOX(___R4))
   ___SET_F64(___F64V15,___F64DIV(___F64V13,___F64V14))
   ___SET_R4(___F64BOX(___F64V15))
   ___CHECK_HEAP(12,4096)
___DEF_SLBL(12,___L12_find_2d_closest_2d_prim)
   ___SET_F64(___F64V1,___F64UNBOX(___R4))
   ___IF(___NOT(___F64POSITIVEP(___F64V1)))
   ___GOTO(___L27_find_2d_closest_2d_prim)
   ___END_IF
___DEF_GLBL(___L32_find_2d_closest_2d_prim)
   ___ADJFP(-3)
   ___GOTO(___L28_find_2d_closest_2d_prim)
___DEF_GLBL(___L33_find_2d_closest_2d_prim)
   ___SET_R4(___CAR(___R3))
   ___IF(___NOT(___EQP(___SYM(7,___S_triangle),___R4)))
   ___GOTO(___L36_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R4(___CADDR(___R3))
   ___SET_STK(1,___CDDDDR(___R3))
   ___SET_STK(1,___CAR(___STK(1)))
   ___SET_F64(___F64V1,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(1),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_STK(1,___CADDR(___R3))
   ___SET_STK(2,___CADDDR(___R3))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(2),___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(2),___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(1),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(2),___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(1,___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(1),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_F64(___F64V45,___F64SQRT(___F64V44))
   ___SET_F64(___F64V46,___F64INV(___F64V45))
   ___SET_F64(___F64V47,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V48,___F64MUL(___F64V47,___F64V46))
   ___SET_F64(___F64V49,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V50,___F64MUL(___F64V49,___F64V46))
   ___SET_F64(___F64V51,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V52,___F64MUL(___F64V51,___F64V46))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V52)
   ___ADD_F64VECTOR_ELEM(1,___F64V50)
   ___ADD_F64VECTOR_ELEM(2,___F64V48)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_F64(___F64V53,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V54,___F64VECTORREF(___STK(0),___FIX(2L)))
   ___SET_F64(___F64V55,___F64MUL(___F64V54,___F64V53))
   ___SET_F64(___F64V56,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V57,___F64VECTORREF(___STK(0),___FIX(1L)))
   ___SET_F64(___F64V58,___F64MUL(___F64V57,___F64V56))
   ___SET_F64(___F64V59,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V60,___F64VECTORREF(___STK(0),___FIX(0L)))
   ___SET_F64(___F64V61,___F64MUL(___F64V60,___F64V59))
   ___SET_F64(___F64V62,___F64ADD(___F64ADD(___F64V61,___F64V58),___F64V55))
   ___SET_STK(1,___F64BOX(___F64V62))
   ___ADJFP(8)
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_find_2d_closest_2d_prim)
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-7)))
   ___IF(___NOT(___F64GE(___F64V1,0.)))
   ___GOTO(___L34_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R4(___SUB(2))
   ___ADJFP(-8)
   ___GOTO(___L28_find_2d_closest_2d_prim)
___DEF_GLBL(___L34_find_2d_closest_2d_prim)
   ___SET_STK(-6,___CADDR(___R3))
   ___SET_STK(-5,___CADDDR(___R3))
   ___SET_STK(-4,___CDDDDR(___R3))
   ___SET_STK(-4,___CAR(___STK(-4)))
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-3,___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_F64(___F64V20,___F64UNBOX(___STK(-7)))
   ___SET_F64(___F64V21,___F64DIV(___F64V19,___F64V20))
   ___SET_F64(___F64V22,___F64NEG(___F64V21))
   ___SET_F64(___F64V23,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V24,___F64MUL(___F64V23,___F64V22))
   ___SET_F64(___F64V25,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V26,___F64MUL(___F64V25,___F64V22))
   ___SET_F64(___F64V27,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V28,___F64MUL(___F64V27,___F64V22))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V28)
   ___ADD_F64VECTOR_ELEM(1,___F64V26)
   ___ADD_F64VECTOR_ELEM(2,___F64V24)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-8,___GET_F64VECTOR(3))
   ___SET_F64(___F64V29,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V30,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V31,___F64ADD(___F64V30,___F64V29))
   ___SET_F64(___F64V32,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V33,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V34,___F64ADD(___F64V33,___F64V32))
   ___SET_F64(___F64V35,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V37,___F64ADD(___F64V36,___F64V35))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V37)
   ___ADD_F64VECTOR_ELEM(1,___F64V34)
   ___ADD_F64VECTOR_ELEM(2,___F64V31)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-9,___GET_F64VECTOR(3))
   ___SET_F64(___F64V38,___F64VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V40,___F64SUB(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V43,___F64SUB(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_F64(___F64V45,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V46,___F64SUB(___F64V45,___F64V44))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V46)
   ___ADD_F64VECTOR_ELEM(1,___F64V43)
   ___ADD_F64VECTOR_ELEM(2,___F64V40)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-8,___GET_F64VECTOR(3))
   ___SET_F64(___F64V47,___F64VECTORREF(___STK(-6),___FIX(2L)))
   ___SET_F64(___F64V48,___F64VECTORREF(___STK(-5),___FIX(2L)))
   ___SET_F64(___F64V49,___F64SUB(___F64V48,___F64V47))
   ___SET_F64(___F64V50,___F64VECTORREF(___STK(-6),___FIX(1L)))
   ___SET_F64(___F64V51,___F64VECTORREF(___STK(-5),___FIX(1L)))
   ___SET_F64(___F64V52,___F64SUB(___F64V51,___F64V50))
   ___SET_F64(___F64V53,___F64VECTORREF(___STK(-6),___FIX(0L)))
   ___SET_F64(___F64V54,___F64VECTORREF(___STK(-5),___FIX(0L)))
   ___SET_F64(___F64V55,___F64SUB(___F64V54,___F64V53))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V55)
   ___ADD_F64VECTOR_ELEM(1,___F64V52)
   ___ADD_F64VECTOR_ELEM(2,___F64V49)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-3,___GET_F64VECTOR(3))
   ___SET_F64(___F64V56,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V57,___F64VECTORREF(___STK(-3),___FIX(2L)))
   ___SET_F64(___F64V58,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V59,___F64VECTORREF(___STK(-3),___FIX(1L)))
   ___SET_F64(___F64V60,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V61,___F64VECTORREF(___STK(-3),___FIX(0L)))
   ___SET_F64(___F64V62,___F64MUL(___F64V59,___F64V60))
   ___SET_F64(___F64V63,___F64MUL(___F64V61,___F64V58))
   ___SET_F64(___F64V64,___F64SUB(___F64V63,___F64V62))
   ___SET_F64(___F64V65,___F64MUL(___F64V61,___F64V56))
   ___SET_F64(___F64V66,___F64MUL(___F64V57,___F64V60))
   ___SET_F64(___F64V67,___F64SUB(___F64V66,___F64V65))
   ___SET_F64(___F64V68,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V69,___F64MUL(___F64MUL(___F64V59,___F64V56),___F64V68))
   ___SET_F64(___F64V70,___F64MUL(___F64V57,___F64V58))
   ___SET_F64(___F64V71,___F64SUB(___F64V69,___F64V70))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V71)
   ___ADD_F64VECTOR_ELEM(1,___F64V67)
   ___ADD_F64VECTOR_ELEM(2,___F64V64)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-8,___GET_F64VECTOR(3))
   ___SET_F64(___F64V72,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V73,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V74,___F64MUL(___F64V73,___F64V72))
   ___SET_F64(___F64V75,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V76,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V77,___F64MUL(___F64V76,___F64V75))
   ___SET_F64(___F64V78,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V79,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V80,___F64MUL(___F64V79,___F64V78))
   ___SET_F64(___F64V81,___F64ADD(___F64ADD(___F64V80,___F64V77),___F64V74))
   ___SET_STK(-8,___F64BOX(___F64V81))
   ___SET_STK(-7,___F64BOX(___F64V22))
   ___ADJFP(4)
   ___CHECK_HEAP(14,4096)
___DEF_SLBL(14,___L14_find_2d_closest_2d_prim)
   ___SET_F64(___F64V1,___F64UNBOX(___STK(-11)))
   ___IF(___NOT(___F64GE(___F64V1,0.)))
   ___GOTO(___L35_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-13),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-13),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-13),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-7,___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-9,___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___STK(-7),___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___STK(-7),___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___STK(-7),___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___STK(-7),___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-9,___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___STK(-9),___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___STK(-9),___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___STK(-9),___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_STK(-9,___BOOLEAN(___F64NEGATIVEP(___F64V44)))
   ___SET_F64(___F64V45,___F64UNBOX(___STK(-12)))
   ___SET_STK(-7,___BOOLEAN(___F64NEGATIVEP(___F64V45)))
   ___CHECK_HEAP(15,4096)
___DEF_SLBL(15,___L15_find_2d_closest_2d_prim)
   ___IF(___NOT(___EQP(___STK(-7),___STK(-9))))
   ___GOTO(___L35_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-13),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-13),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-13),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-13,___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(-8),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-10),___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(-8),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-10),___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(-8),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(-10),___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-10,___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___STK(-13),___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(-10),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___STK(-13),___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(-10),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___STK(-13),___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(-10),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___STK(-13),___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-13,___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R4,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___STK(-13),___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R4,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___STK(-13),___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R4,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___STK(-13),___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_R4(___BOOLEAN(___F64NEGATIVEP(___F64V44)))
   ___SET_F64(___F64V45,___F64UNBOX(___STK(-12)))
   ___SET_STK(-13,___BOOLEAN(___F64NEGATIVEP(___F64V45)))
   ___CHECK_HEAP(16,4096)
___DEF_SLBL(16,___L16_find_2d_closest_2d_prim)
   ___IF(___NOT(___EQP(___STK(-13),___R4)))
   ___GOTO(___L35_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R4(___STK(-11))
   ___ADJFP(-12)
   ___GOTO(___L28_find_2d_closest_2d_prim)
___DEF_GLBL(___L35_find_2d_closest_2d_prim)
   ___SET_R4(___SUB(2))
   ___ADJFP(-12)
   ___GOTO(___L28_find_2d_closest_2d_prim)
___DEF_GLBL(___L36_find_2d_closest_2d_prim)
   ___SET_R4(___VOID)
   ___GOTO(___L28_find_2d_closest_2d_prim)
___DEF_SLBL(17,___L17_find_2d_closest_2d_prim)
   ___SET_R3(___CDR(___STK(-2)))
   ___SET_R2(___STK(-3))
   ___SET_R1(___STK(-4))
   ___SET_R0(___STK(-5))
   ___ADJFP(-6)
   ___POLL(18)
___DEF_SLBL(18,___L18_find_2d_closest_2d_prim)
   ___GOTO(___L24_find_2d_closest_2d_prim)
___DEF_SLBL(19,___L19_find_2d_closest_2d_prim)
   ___IF(___NOT(___NOT(___FALSEP(___UNBOX(___STK(-3))))))
   ___GOTO(___L37_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R2(___UNBOX(___STK(-6)))
   ___SET_R1(___UNBOX(___STK(-3)))
   ___SET_R0(___STK(-5))
   ___POLL(20)
___DEF_SLBL(20,___L20_find_2d_closest_2d_prim)
   ___ADJFP(-8)
   ___JUMPGENNOTSAFE(___SET_NARGS(2),___STK(4))
___DEF_GLBL(___L37_find_2d_closest_2d_prim)
   ___SET_R1(___GLO(4,___G_backColor))
   ___POLL(21)
___DEF_SLBL(21,___L21_find_2d_closest_2d_prim)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(3))
___DEF_SLBL(22,___L22_find_2d_closest_2d_prim)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(22,2,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___SET_R3(___UNBOX(___R3))
   ___SET_F64(___F64V1,___F64UNBOX(___R2))
   ___SET_F64(___F64V2,___F64UNBOX(___R3))
   ___IF(___NOT(___F64LT(___F64V1,___F64V2)))
   ___GOTO(___L38_find_2d_closest_2d_prim)
   ___END_IF
   ___SET_R3(___CLO(___R4,1))
   ___SETBOX(___R3,___R2)
   ___SET_R4(___CLO(___R4,2))
   ___SETBOX(___R4,___R1) ___SET_R1(___R4)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L38_find_2d_closest_2d_prim)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_shoot_2d_ray
#undef ___PH_LBL0
#define ___PH_LBL0 422
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64( \
___F64V20) ___D_F64(___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64( \
___F64V26) ___D_F64(___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64( \
___F64V32) ___D_F64(___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64( \
___F64V38) ___D_F64(___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42) ___D_F64(___F64V43) ___D_F64( \
___F64V44) ___D_F64(___F64V45) ___D_F64(___F64V46) ___D_F64(___F64V47) ___D_F64(___F64V48) ___D_F64(___F64V49) ___D_F64( \
___F64V50) ___D_F64(___F64V51) ___D_F64(___F64V52) ___D_F64(___F64V53) ___D_F64(___F64V54) ___D_F64(___F64V55) ___D_F64( \
___F64V56) ___D_F64(___F64V57) ___D_F64(___F64V58) ___D_F64(___F64V59) ___D_F64(___F64V60) ___D_F64(___F64V61) ___D_F64( \
___F64V62) ___D_F64(___F64V63) ___D_F64(___F64V64) ___D_F64(___F64V65) ___D_F64(___F64V66) ___D_F64(___F64V67) ___D_F64( \
___F64V68) ___D_F64(___F64V69) ___D_F64(___F64V70) ___D_F64(___F64V71)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_shoot_2d_ray)
___DEF_P_HLBL(___L1_shoot_2d_ray)
___DEF_P_HLBL(___L2_shoot_2d_ray)
___DEF_P_HLBL(___L3_shoot_2d_ray)
___DEF_P_HLBL(___L4_shoot_2d_ray)
___DEF_P_HLBL(___L5_shoot_2d_ray)
___DEF_P_HLBL(___L6_shoot_2d_ray)
___DEF_P_HLBL(___L7_shoot_2d_ray)
___DEF_P_HLBL(___L8_shoot_2d_ray)
___DEF_P_HLBL(___L9_shoot_2d_ray)
___DEF_P_HLBL(___L10_shoot_2d_ray)
___DEF_P_HLBL(___L11_shoot_2d_ray)
___DEF_P_HLBL(___L12_shoot_2d_ray)
___DEF_P_HLBL(___L13_shoot_2d_ray)
___DEF_P_HLBL(___L14_shoot_2d_ray)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_shoot_2d_ray)
   ___IF_NARGS_EQ(3,___NOTHING)
   ___WRONG_NARGS(0,3,0,0)
___DEF_GLBL(___L_shoot_2d_ray)
   ___IF(___FIXLT(___R3,___FIX(3L)))
   ___GOTO(___L15_shoot_2d_ray)
   ___END_IF
   ___GOTO(___L22_shoot_2d_ray)
___DEF_SLBL(1,___L1_shoot_2d_ray)
   ___SET_STK(-7,___R1)
   ___SET_F64(___F64V1,___F64VECTORREF(___STK(-4),___FIX(2L)))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,1e-4))
   ___SET_F64(___F64V3,___F64VECTORREF(___STK(-4),___FIX(1L)))
   ___SET_F64(___F64V4,___F64MUL(___F64V3,1e-4))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-4),___FIX(0L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,1e-4))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V6)
   ___ADD_F64VECTOR_ELEM(1,___F64V4)
   ___ADD_F64VECTOR_ELEM(2,___F64V2)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V7,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-5),___FIX(2L)))
   ___SET_F64(___F64V9,___F64ADD(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-5),___FIX(1L)))
   ___SET_F64(___F64V12,___F64ADD(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-5),___FIX(0L)))
   ___SET_F64(___F64V15,___F64ADD(___F64V14,___F64V13))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V15)
   ___ADD_F64VECTOR_ELEM(1,___F64V12)
   ___ADD_F64VECTOR_ELEM(2,___F64V9)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_R0(___CLO(___STK(-3),3))
   ___SET_R3(___FIXADD(___R0,___FIX(1L)))
   ___SET_R2(___STK(-4))
   ___SET_R0(___LBL(12))
   ___CHECK_HEAP(2,4096)
___DEF_SLBL(2,___L2_shoot_2d_ray)
   ___IF(___NOT(___FIXLT(___R3,___FIX(3L))))
   ___GOTO(___L22_shoot_2d_ray)
   ___END_IF
___DEF_GLBL(___L15_shoot_2d_ray)
   ___SET_STK(1,___R1)
   ___SET_STK(2,___ALLOC_CLO(3))
   ___BEGIN_SETUP_CLO(3,___STK(2),5)
   ___ADD_CLO_ELEM(0,___R2)
   ___ADD_CLO_ELEM(1,___R1)
   ___ADD_CLO_ELEM(2,___R3)
   ___END_SETUP_CLO(3)
   ___SET_R3(___STK(2))
   ___SET_R1(___R2)
   ___SET_R2(___GLO(51,___G_scene))
   ___ADJFP(2)
   ___CHECK_HEAP(3,4096)
___DEF_SLBL(3,___L3_shoot_2d_ray)
   ___POLL(4)
___DEF_SLBL(4,___L4_shoot_2d_ray)
   ___ADJFP(-1)
   ___JUMPINT(___SET_NARGS(4),___PRC(398),___L_find_2d_closest_2d_prim)
___DEF_SLBL(5,___L5_shoot_2d_ray)
   ___IF_NARGS_EQ(2,___NOTHING)
   ___WRONG_NARGS(5,2,0,0)
   ___IF(___FALSEP(___R1))
   ___GOTO(___L21_shoot_2d_ray)
   ___END_IF
   ___SET_R3(___CLO(___R4,1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V2,___F64UNBOX(___R2))
   ___SET_F64(___F64V3,___F64MUL(___F64V1,___F64V2))
   ___SET_STK(1,___CLO(___R4,1))
   ___SET_F64(___F64V4,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V5,___F64MUL(___F64V4,___F64V2))
   ___SET_STK(2,___CLO(___R4,1))
   ___SET_F64(___F64V6,___F64VECTORREF(___STK(2),___FIX(0L)))
   ___SET_F64(___F64V7,___F64MUL(___F64V6,___F64V2))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V7)
   ___ADD_F64VECTOR_ELEM(1,___F64V5)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_F64(___F64V8,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_STK(1,___CLO(___R4,2))
   ___SET_F64(___F64V9,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V10,___F64ADD(___F64V9,___F64V8))
   ___SET_F64(___F64V11,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_STK(2,___CLO(___R4,2))
   ___SET_F64(___F64V12,___F64VECTORREF(___STK(2),___FIX(1L)))
   ___SET_F64(___F64V13,___F64ADD(___F64V12,___F64V11))
   ___SET_F64(___F64V14,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_STK(2,___CLO(___R4,2))
   ___SET_F64(___F64V15,___F64VECTORREF(___STK(2),___FIX(0L)))
   ___SET_F64(___F64V16,___F64ADD(___F64V15,___F64V14))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V16)
   ___ADD_F64VECTOR_ELEM(1,___F64V13)
   ___ADD_F64VECTOR_ELEM(2,___F64V10)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_R3(___CAR(___R1))
   ___ADJFP(2)
   ___CHECK_HEAP(6,4096)
___DEF_SLBL(6,___L6_shoot_2d_ray)
   ___IF(___EQP(___SYM(6,___S_sphere),___R3))
   ___GOTO(___L16_shoot_2d_ray)
   ___END_IF
   ___SET_R3(___CAR(___R1))
   ___IF(___NOT(___EQP(___SYM(1,___S_light),___R3)))
   ___GOTO(___L18_shoot_2d_ray)
   ___END_IF
___DEF_GLBL(___L16_shoot_2d_ray)
   ___SET_R3(___CADDR(___R1))
   ___SET_F64(___F64V1,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V12,___F64MUL(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V18,___F64MUL(___F64V17,___F64V16))
   ___SET_F64(___F64V19,___F64ADD(___F64ADD(___F64V18,___F64V15),___F64V12))
   ___SET_F64(___F64V20,___F64SQRT(___F64V19))
   ___SET_F64(___F64V21,___F64INV(___F64V20))
   ___SET_F64(___F64V22,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V23,___F64MUL(___F64V22,___F64V21))
   ___SET_F64(___F64V24,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V26,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V21))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V27)
   ___ADD_F64VECTOR_ELEM(1,___F64V25)
   ___ADD_F64VECTOR_ELEM(2,___F64V23)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___CHECK_HEAP(7,4096)
___DEF_SLBL(7,___L7_shoot_2d_ray)
___DEF_GLBL(___L17_shoot_2d_ray)
   ___SET_F64(___F64V1,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_STK(0,___CLO(___R4,1))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(0),___FIX(2L)))
   ___SET_F64(___F64V3,___F64MUL(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_STK(1,___CLO(___R4,1))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V6,___F64MUL(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_STK(2,___CLO(___R4,1))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(2),___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64ADD(___F64ADD(___F64V9,___F64V6),___F64V3))
   ___SET_F64(___F64V11,___F64MUL(2.,___F64V10))
   ___SET_F64(___F64V12,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V13,___F64MUL(___F64V12,___F64V11))
   ___SET_F64(___F64V14,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V15,___F64MUL(___F64V14,___F64V11))
   ___SET_F64(___F64V16,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V17,___F64MUL(___F64V16,___F64V11))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V17)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V13)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V18,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_STK(0,___CLO(___R4,1))
   ___SET_F64(___F64V19,___F64VECTORREF(___STK(0),___FIX(2L)))
   ___SET_F64(___F64V20,___F64SUB(___F64V19,___F64V18))
   ___SET_F64(___F64V21,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_STK(1,___CLO(___R4,1))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(1),___FIX(1L)))
   ___SET_F64(___F64V23,___F64SUB(___F64V22,___F64V21))
   ___SET_F64(___F64V24,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_STK(1,___CLO(___R4,1))
   ___SET_F64(___F64V25,___F64VECTORREF(___STK(1),___FIX(0L)))
   ___SET_F64(___F64V26,___F64SUB(___F64V25,___F64V24))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V26)
   ___ADD_F64VECTOR_ELEM(1,___F64V23)
   ___ADD_F64VECTOR_ELEM(2,___F64V20)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V27,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V28,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V29,___F64MUL(___F64V28,___F64V27))
   ___SET_F64(___F64V30,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V31,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V32,___F64MUL(___F64V31,___F64V30))
   ___SET_F64(___F64V33,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V34,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V35,___F64MUL(___F64V34,___F64V33))
   ___SET_F64(___F64V36,___F64ADD(___F64ADD(___F64V35,___F64V32),___F64V29))
   ___SET_F64(___F64V37,___F64SQRT(___F64V36))
   ___SET_F64(___F64V38,___F64INV(___F64V37))
   ___SET_F64(___F64V39,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V42,___F64MUL(___F64V41,___F64V38))
   ___SET_F64(___F64V43,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V44,___F64MUL(___F64V43,___F64V38))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V44)
   ___ADD_F64VECTOR_ELEM(1,___F64V42)
   ___ADD_F64VECTOR_ELEM(2,___F64V40)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V45,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V46,___F64VECTORREF(___GLO(11,___G_eye),___FIX(2L)))
   ___SET_F64(___F64V47,___F64SUB(___F64V45,___F64V46))
   ___SET_F64(___F64V48,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V49,___F64VECTORREF(___GLO(11,___G_eye),___FIX(1L)))
   ___SET_F64(___F64V50,___F64SUB(___F64V48,___F64V49))
   ___SET_F64(___F64V51,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V52,___F64VECTORREF(___GLO(11,___G_eye),___FIX(0L)))
   ___SET_F64(___F64V53,___F64SUB(___F64V51,___F64V52))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V53)
   ___ADD_F64VECTOR_ELEM(1,___F64V50)
   ___ADD_F64VECTOR_ELEM(2,___F64V47)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-1,___GET_F64VECTOR(3))
   ___SET_F64(___F64V54,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V55,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V56,___F64MUL(___F64V55,___F64V54))
   ___SET_F64(___F64V57,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V58,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V59,___F64MUL(___F64V58,___F64V57))
   ___SET_F64(___F64V60,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V61,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V62,___F64MUL(___F64V61,___F64V60))
   ___SET_F64(___F64V63,___F64ADD(___F64ADD(___F64V62,___F64V59),___F64V56))
   ___SET_F64(___F64V64,___F64SQRT(___F64V63))
   ___SET_F64(___F64V65,___F64INV(___F64V64))
   ___SET_F64(___F64V66,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V67,___F64MUL(___F64V66,___F64V65))
   ___SET_F64(___F64V68,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V69,___F64MUL(___F64V68,___F64V65))
   ___SET_F64(___F64V70,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V71,___F64MUL(___F64V70,___F64V65))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V71)
   ___ADD_F64VECTOR_ELEM(1,___F64V69)
   ___ADD_F64VECTOR_ELEM(2,___F64V67)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-1,___GET_F64VECTOR(3))
   ___SET_STK(0,___R0)
   ___SET_STK(1,___R2)
   ___SET_STK(2,___R3)
   ___SET_STK(3,___R4)
   ___SET_R3(___STK(-1))
   ___SET_R0(___LBL(1))
   ___ADJFP(6)
   ___CHECK_HEAP(8,4096)
___DEF_SLBL(8,___L8_shoot_2d_ray)
   ___POLL(9)
___DEF_SLBL(9,___L9_shoot_2d_ray)
   ___JUMPINT(___SET_NARGS(3),___PRC(380),___L_apply_2d_lighting)
___DEF_GLBL(___L18_shoot_2d_ray)
   ___SET_R3(___CAR(___R1))
   ___IF(___NOT(___EQP(___SYM(5,___S_plane),___R3)))
   ___GOTO(___L19_shoot_2d_ray)
   ___END_IF
   ___SET_R3(___CADDDR(___R1))
   ___GOTO(___L17_shoot_2d_ray)
___DEF_GLBL(___L19_shoot_2d_ray)
   ___SET_R3(___CAR(___R1))
   ___IF(___NOT(___EQP(___SYM(7,___S_triangle),___R3)))
   ___GOTO(___L20_shoot_2d_ray)
   ___END_IF
   ___SET_R3(___CADDR(___R1))
   ___SET_STK(-1,___CDDDDR(___R1))
   ___SET_STK(-1,___CAR(___STK(-1)))
   ___SET_F64(___F64V1,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V2,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V3,___F64SUB(___F64V2,___F64V1))
   ___SET_F64(___F64V4,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V5,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V6,___F64SUB(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V9,___F64SUB(___F64V8,___F64V7))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,___F64V3)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_STK(-1,___CADDR(___R1))
   ___SET_STK(0,___CADDDR(___R1))
   ___SET_F64(___F64V10,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(0),___FIX(2L)))
   ___SET_F64(___F64V12,___F64SUB(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(0),___FIX(1L)))
   ___SET_F64(___F64V15,___F64SUB(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(0),___FIX(0L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_STK(-1,___GET_F64VECTOR(3))
   ___SET_F64(___F64V19,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___STK(-1),___FIX(2L)))
   ___SET_F64(___F64V21,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V22,___F64VECTORREF(___STK(-1),___FIX(1L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V24,___F64VECTORREF(___STK(-1),___FIX(0L)))
   ___SET_F64(___F64V25,___F64MUL(___F64V22,___F64V23))
   ___SET_F64(___F64V26,___F64MUL(___F64V24,___F64V21))
   ___SET_F64(___F64V27,___F64SUB(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64MUL(___F64V24,___F64V19))
   ___SET_F64(___F64V29,___F64MUL(___F64V20,___F64V23))
   ___SET_F64(___F64V30,___F64SUB(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V32,___F64MUL(___F64MUL(___F64V22,___F64V19),___F64V31))
   ___SET_F64(___F64V33,___F64MUL(___F64V20,___F64V21))
   ___SET_F64(___F64V34,___F64SUB(___F64V32,___F64V33))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V34)
   ___ADD_F64VECTOR_ELEM(1,___F64V30)
   ___ADD_F64VECTOR_ELEM(2,___F64V27)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___SET_F64(___F64V35,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V36,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V37,___F64MUL(___F64V36,___F64V35))
   ___SET_F64(___F64V38,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V39,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V38))
   ___SET_F64(___F64V41,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V42,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V43,___F64MUL(___F64V42,___F64V41))
   ___SET_F64(___F64V44,___F64ADD(___F64ADD(___F64V43,___F64V40),___F64V37))
   ___SET_F64(___F64V45,___F64SQRT(___F64V44))
   ___SET_F64(___F64V46,___F64INV(___F64V45))
   ___SET_F64(___F64V47,___F64VECTORREF(___R3,___FIX(2L)))
   ___SET_F64(___F64V48,___F64MUL(___F64V47,___F64V46))
   ___SET_F64(___F64V49,___F64VECTORREF(___R3,___FIX(1L)))
   ___SET_F64(___F64V50,___F64MUL(___F64V49,___F64V46))
   ___SET_F64(___F64V51,___F64VECTORREF(___R3,___FIX(0L)))
   ___SET_F64(___F64V52,___F64MUL(___F64V51,___F64V46))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V52)
   ___ADD_F64VECTOR_ELEM(1,___F64V50)
   ___ADD_F64VECTOR_ELEM(2,___F64V48)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R3(___GET_F64VECTOR(3))
   ___CHECK_HEAP(10,4096)
___DEF_SLBL(10,___L10_shoot_2d_ray)
   ___GOTO(___L17_shoot_2d_ray)
___DEF_GLBL(___L20_shoot_2d_ray)
   ___SET_R3(___VOID)
   ___GOTO(___L17_shoot_2d_ray)
___DEF_GLBL(___L21_shoot_2d_ray)
   ___SET_R1(___GLO(4,___G_backColor))
   ___JUMPPRM(___NOTHING,___R0)
___DEF_GLBL(___L22_shoot_2d_ray)
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,0.)
   ___ADD_F64VECTOR_ELEM(1,0.)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(11,4096)
___DEF_SLBL(11,___L11_shoot_2d_ray)
   ___JUMPPRM(___NOTHING,___R0)
___DEF_SLBL(12,___L12_shoot_2d_ray)
   ___SET_R0(___CLO(___STK(-3),3))
   ___SET_R2(___FIXADD(___R0,___FIX(1L)))
   ___SET_F64(___F64V1,___F64FROMFIX(___R2))
   ___SET_F64(___F64V2,___F64MUL(___F64V1,2.))
   ___SET_F64(___F64V3,___F64INV(___F64V2))
   ___SET_F64(___F64V4,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V5,___F64MUL(___F64V4,___F64V3))
   ___SET_F64(___F64V6,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V7,___F64MUL(___F64V6,___F64V3))
   ___SET_F64(___F64V8,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V9,___F64MUL(___F64V8,___F64V3))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V7)
   ___ADD_F64VECTOR_ELEM(2,___F64V5)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___SET_F64(___F64V10,___F64VECTORREF(___R1,___FIX(2L)))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(-7),___FIX(2L)))
   ___SET_F64(___F64V12,___F64ADD(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R1,___FIX(1L)))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(-7),___FIX(1L)))
   ___SET_F64(___F64V15,___F64ADD(___F64V14,___F64V13))
   ___SET_F64(___F64V16,___F64VECTORREF(___R1,___FIX(0L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___STK(-7),___FIX(0L)))
   ___SET_F64(___F64V18,___F64ADD(___F64V17,___F64V16))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V18)
   ___ADD_F64VECTOR_ELEM(1,___F64V15)
   ___ADD_F64VECTOR_ELEM(2,___F64V12)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R1(___GET_F64VECTOR(3))
   ___CHECK_HEAP(13,4096)
___DEF_SLBL(13,___L13_shoot_2d_ray)
   ___POLL(14)
___DEF_SLBL(14,___L14_shoot_2d_ray)
   ___ADJFP(-8)
   ___JUMPPRM(___NOTHING,___STK(2))
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_shoot_2d_screen_2d_rays
#undef ___PH_LBL0
#define ___PH_LBL0 438
#undef ___PD_ALL
#define ___PD_ALL ___D_HEAP ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_R4 ___D_F64(___F64V1) ___D_F64( \
___F64V2) ___D_F64(___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64( \
___F64V8) ___D_F64(___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64( \
___F64V14) ___D_F64(___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64( \
___F64V20) ___D_F64(___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64( \
___F64V26) ___D_F64(___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64( \
___F64V32) ___D_F64(___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64( \
___F64V38) ___D_F64(___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42)
#undef ___PR_ALL
#define ___PR_ALL ___R_HEAP ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3 ___R_R4
#undef ___PW_ALL
#define ___PW_ALL ___W_HEAP ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3 ___W_R4
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L1_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L2_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L3_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L4_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L5_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L6_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L7_shoot_2d_screen_2d_rays)
___DEF_P_HLBL(___L8_shoot_2d_screen_2d_rays)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_shoot_2d_screen_2d_rays)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(0,1,0,0)
___DEF_GLBL(___L_shoot_2d_screen_2d_rays)
   ___SET_R2(___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(1L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(286))
)
   ___SET_F64(___F64V1,___F64FROMFIX(___R2))
   ___SET_F64(___F64V2,___F64VECTORREF(___GLO(52,___G_screenDimen),___FIX(0L)))
   ___SET_F64(___F64V3,___F64DIV(___F64V2,___F64V1))
   ___SET_R3(___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(2L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(290))
)
   ___SET_F64(___F64V4,___F64FROMFIX(___R3))
   ___SET_F64(___F64V5,___F64VECTORREF(___GLO(52,___G_screenDimen),___FIX(1L)))
   ___SET_F64(___F64V6,___F64DIV(___F64V5,___F64V4))
   ___SET_F64(___F64V7,___F64VECTORREF(___GLO(52,___G_screenDimen),___FIX(0L)))
   ___SET_F64(___F64V8,___F64DIV(___F64V7,2.))
   ___SET_F64(___F64V9,___F64NEG(___F64V8))
   ___SET_F64(___F64V10,___F64VECTORREF(___GLO(52,___G_screenDimen),___FIX(1L)))
   ___SET_F64(___F64V11,___F64DIV(___F64V10,2.))
   ___SET_F64(___F64V12,___F64NEG(___F64V11))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V9)
   ___ADD_F64VECTOR_ELEM(1,___F64V12)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R4(___GET_F64VECTOR(3))
   ___SET_STK(1,___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(2L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(290)
))
   ___SET_STK(2,___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(1L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(286)
))
   ___SET_STK(1,___FIXMUL(___STK(2),___STK(1)))
   ___SET_STK(2,___ALLOC_CLO(6))
   ___SET_R2(___F64BOX(___F64V3))
   ___SET_R3(___F64BOX(___F64V6))
   ___BEGIN_SETUP_CLO(6,___STK(2),3)
   ___ADD_CLO_ELEM(0,___STK(1))
   ___ADD_CLO_ELEM(1,___R2)
   ___ADD_CLO_ELEM(2,___R3)
   ___ADD_CLO_ELEM(3,___STK(2))
   ___ADD_CLO_ELEM(4,___R1)
   ___ADD_CLO_ELEM(5,___R4)
   ___END_SETUP_CLO(6)
   ___SET_R1(___FIX(0L))
   ___ADJFP(2)
   ___CHECK_HEAP(1,4096)
___DEF_SLBL(1,___L1_shoot_2d_screen_2d_rays)
   ___POLL(2)
___DEF_SLBL(2,___L2_shoot_2d_screen_2d_rays)
   ___ADJFP(-2)
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___STK(2))
___DEF_SLBL(3,___L3_shoot_2d_screen_2d_rays)
   ___IF_NARGS_EQ(1,___NOTHING)
   ___WRONG_NARGS(3,1,0,0)
   ___SET_R3(___CLO(___R4,1))
   ___IF(___NOT(___FIXLT(___R1,___R3)))
   ___GOTO(___L9_shoot_2d_screen_2d_rays)
   ___END_IF
   ___SET_R3(___CLO(___R4,2))
   ___SET_R2(___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(1L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(286))
)
   ___SET_R2(___FIXREM(___R1,___R2))
   ___SET_F64(___F64V1,___F64FROMFIX(___R2))
   ___SET_F64(___F64V2,___F64UNBOX(___R3))
   ___SET_F64(___F64V3,___F64MUL(___F64V1,___F64V2))
   ___SET_R3(___CLO(___R4,3))
   ___SET_STK(1,___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(1L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(286)
))
   ___SET_STK(1,___FIXQUO(___R1,___STK(1)))
   ___SET_F64(___F64V4,___F64FROMFIX(___STK(1)))
   ___SET_F64(___F64V5,___F64UNBOX(___R3))
   ___SET_F64(___F64V6,___F64MUL(___F64V4,___F64V5))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V3)
   ___ADD_F64VECTOR_ELEM(1,___F64V6)
   ___ADD_F64VECTOR_ELEM(2,0.)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_F64(___F64V7,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_STK(1,___CLO(___R4,6))
   ___SET_F64(___F64V8,___F64VECTORREF(___STK(1),___FIX(2L)))
   ___SET_F64(___F64V9,___F64ADD(___F64V8,___F64V7))
   ___SET_F64(___F64V10,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_STK(2,___CLO(___R4,6))
   ___SET_F64(___F64V11,___F64VECTORREF(___STK(2),___FIX(1L)))
   ___SET_F64(___F64V12,___F64ADD(___F64V11,___F64V10))
   ___SET_F64(___F64V13,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_STK(2,___CLO(___R4,6))
   ___SET_F64(___F64V14,___F64VECTORREF(___STK(2),___FIX(0L)))
   ___SET_F64(___F64V15,___F64ADD(___F64V14,___F64V13))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V15)
   ___ADD_F64VECTOR_ELEM(1,___F64V12)
   ___ADD_F64VECTOR_ELEM(2,___F64V9)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_F64(___F64V16,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V17,___F64VECTORREF(___GLO(11,___G_eye),___FIX(2L)))
   ___SET_F64(___F64V18,___F64SUB(___F64V16,___F64V17))
   ___SET_F64(___F64V19,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V20,___F64VECTORREF(___GLO(11,___G_eye),___FIX(1L)))
   ___SET_F64(___F64V21,___F64SUB(___F64V19,___F64V20))
   ___SET_F64(___F64V22,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V23,___F64VECTORREF(___GLO(11,___G_eye),___FIX(0L)))
   ___SET_F64(___F64V24,___F64SUB(___F64V22,___F64V23))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V24)
   ___ADD_F64VECTOR_ELEM(1,___F64V21)
   ___ADD_F64VECTOR_ELEM(2,___F64V18)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_F64(___F64V25,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V26,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V27,___F64MUL(___F64V26,___F64V25))
   ___SET_F64(___F64V28,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V29,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V30,___F64MUL(___F64V29,___F64V28))
   ___SET_F64(___F64V31,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V32,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V33,___F64MUL(___F64V32,___F64V31))
   ___SET_F64(___F64V34,___F64ADD(___F64ADD(___F64V33,___F64V30),___F64V27))
   ___SET_F64(___F64V35,___F64SQRT(___F64V34))
   ___SET_F64(___F64V36,___F64INV(___F64V35))
   ___SET_F64(___F64V37,___F64VECTORREF(___R2,___FIX(2L)))
   ___SET_F64(___F64V38,___F64MUL(___F64V37,___F64V36))
   ___SET_F64(___F64V39,___F64VECTORREF(___R2,___FIX(1L)))
   ___SET_F64(___F64V40,___F64MUL(___F64V39,___F64V36))
   ___SET_F64(___F64V41,___F64VECTORREF(___R2,___FIX(0L)))
   ___SET_F64(___F64V42,___F64MUL(___F64V41,___F64V36))
   ___BEGIN_ALLOC_F64VECTOR(3)
   ___ADD_F64VECTOR_ELEM(0,___F64V42)
   ___ADD_F64VECTOR_ELEM(1,___F64V40)
   ___ADD_F64VECTOR_ELEM(2,___F64V38)
   ___END_ALLOC_F64VECTOR(3)
   ___SET_R2(___GET_F64VECTOR(3))
   ___SET_STK(1,___R0)
   ___SET_STK(2,___R1)
   ___SET_STK(3,___R4)
   ___SET_R3(___FIX(0L))
   ___SET_R1(___GLO(11,___G_eye))
   ___SET_R0(___LBL(6))
   ___ADJFP(4)
   ___CHECK_HEAP(4,4096)
___DEF_SLBL(4,___L4_shoot_2d_screen_2d_rays)
   ___POLL(5)
___DEF_SLBL(5,___L5_shoot_2d_screen_2d_rays)
   ___JUMPINT(___SET_NARGS(3),___PRC(422),___L_shoot_2d_ray)
___DEF_SLBL(6,___L6_shoot_2d_screen_2d_rays)
   ___SET_R0(___LBL(7))
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___CLO(___STK(-1),5))
___DEF_SLBL(7,___L7_shoot_2d_screen_2d_rays)
   ___SET_R1(___FIXADD(___STK(-2),___FIX(1L)))
   ___SET_R0(___STK(-3))
   ___POLL(8)
___DEF_SLBL(8,___L8_shoot_2d_screen_2d_rays)
   ___ADJFP(-4)
   ___JUMPGENNOTSAFE(___SET_NARGS(1),___CLO(___STK(3),4))
___DEF_GLBL(___L9_shoot_2d_screen_2d_rays)
   ___SET_R1(___VOID)
   ___JUMPPRM(___NOTHING,___R0)
___END_P_SW
___END_P_COD

#undef ___PH_PROC
#define ___PH_PROC ___H_make_2d_image
#undef ___PH_LBL0
#define ___PH_LBL0 448
#undef ___PD_ALL
#define ___PD_ALL ___D_FP ___D_R0 ___D_R1 ___D_R2 ___D_R3 ___D_F64(___F64V1) ___D_F64(___F64V2) ___D_F64( \
___F64V3) ___D_F64(___F64V4) ___D_F64(___F64V5) ___D_F64(___F64V6) ___D_F64(___F64V7) ___D_F64(___F64V8) ___D_F64( \
___F64V9) ___D_F64(___F64V10) ___D_F64(___F64V11) ___D_F64(___F64V12) ___D_F64(___F64V13) ___D_F64(___F64V14) ___D_F64( \
___F64V15) ___D_F64(___F64V16) ___D_F64(___F64V17) ___D_F64(___F64V18) ___D_F64(___F64V19) ___D_F64(___F64V20) ___D_F64( \
___F64V21) ___D_F64(___F64V22) ___D_F64(___F64V23) ___D_F64(___F64V24) ___D_F64(___F64V25) ___D_F64(___F64V26) ___D_F64( \
___F64V27) ___D_F64(___F64V28) ___D_F64(___F64V29) ___D_F64(___F64V30) ___D_F64(___F64V31) ___D_F64(___F64V32) ___D_F64( \
___F64V33) ___D_F64(___F64V34) ___D_F64(___F64V35) ___D_F64(___F64V36) ___D_F64(___F64V37) ___D_F64(___F64V38) ___D_F64( \
___F64V39) ___D_F64(___F64V40) ___D_F64(___F64V41) ___D_F64(___F64V42) ___D_F64(___F64V43) ___D_F64(___F64V44) ___D_F64( \
___F64V45) ___D_F64(___F64V46) ___D_F64(___F64V47) ___D_F64(___F64V48) ___D_F64(___F64V49) ___D_F64(___F64V50) ___D_F64( \
___F64V51) ___D_F64(___F64V52) ___D_F64(___F64V53) ___D_F64(___F64V54) ___D_F64(___F64V55) ___D_F64(___F64V56) ___D_F64( \
___F64V57) ___D_F64(___F64V58) ___D_F64(___F64V59) ___D_F64(___F64V60) ___D_F64(___F64V61) ___D_F64(___F64V62) ___D_F64( \
___F64V63) ___D_F64(___F64V64) ___D_F64(___F64V65) ___D_F64(___F64V66) ___D_F64(___F64V67) ___D_F64(___F64V68) ___D_F64( \
___F64V69) ___D_F64(___F64V70) ___D_F64(___F64V71) ___D_F64(___F64V72) ___D_F64(___F64V73) ___D_F64(___F64V74) ___D_F64( \
___F64V75) ___D_F64(___F64V76) ___D_F64(___F64V77) ___D_F64(___F64V78) ___D_F64(___F64V79) ___D_F64(___F64V80) ___D_F64( \
___F64V81)
#undef ___PR_ALL
#define ___PR_ALL ___R_FP ___R_R0 ___R_R1 ___R_R2 ___R_R3
#undef ___PW_ALL
#define ___PW_ALL ___W_FP ___W_R0 ___W_R1 ___W_R2 ___W_R3
___BEGIN_P_COD
___BEGIN_P_HLBL
___DEF_P_HLBL_INTRO
___DEF_P_HLBL(___L0_make_2d_image)
___DEF_P_HLBL(___L1_make_2d_image)
___DEF_P_HLBL(___L2_make_2d_image)
___DEF_P_HLBL(___L3_make_2d_image)
___DEF_P_HLBL(___L4_make_2d_image)
___DEF_P_HLBL(___L5_make_2d_image)
___DEF_P_HLBL(___L6_make_2d_image)
___DEF_P_HLBL(___L7_make_2d_image)
___DEF_P_HLBL(___L8_make_2d_image)
___DEF_P_HLBL(___L9_make_2d_image)
___DEF_P_HLBL(___L10_make_2d_image)
___DEF_P_HLBL(___L11_make_2d_image)
___END_P_HLBL
___BEGIN_P_SW
___DEF_SLBL(0,___L0_make_2d_image)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(0,0,0,0)
___DEF_GLBL(___L_make_2d_image)
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(23))
   ___SET_R0(___LBL(2))
   ___ADJFP(4)
   ___POLL(1)
___DEF_SLBL(1,___L1_make_2d_image)
   ___SET_NARGS(1) ___JUMPINT(___NOTHING,___PRC(19),___L0_write_2d_log)
___DEF_SLBL(2,___L2_make_2d_image)
   ___SET_R2(___LBL(4))
   ___SET_R1(___SUB(24))
   ___SET_R0(___STK(-3))
   ___POLL(3)
___DEF_SLBL(3,___L3_make_2d_image)
   ___ADJFP(-4)
   ___JUMPPRM(___SET_NARGS(2),___PRM(117,___G_with_2d_output_2d_to_2d_file))
___DEF_SLBL(4,___L4_make_2d_image)
   ___IF_NARGS_EQ(0,___NOTHING)
   ___WRONG_NARGS(4,0,0,0)
   ___SET_STK(1,___R0)
   ___SET_R1(___SUB(25))
   ___SET_R0(___LBL(11))
   ___ADJFP(4)
   ___POLL(5)
___DEF_SLBL(5,___L5_make_2d_image)
   ___SET_NARGS(1) ___GOTO(___L7_make_2d_image)
___DEF_SLBL(6,___L6_make_2d_image)
   ___SET_R1(___SUB(26))
   ___SET_R0(___LBL(9))
   ___SET_NARGS(1) ___GOTO(___L7_make_2d_image)
___DEF_SLBL(7,___L7_make_2d_image)
   ___IF_NARGS_EQ(0,___SET_R1(___NUL))
   ___GET_REST(7,0,0,0)
   ___POLL(8)
___DEF_SLBL(8,___L8_make_2d_image)
   ___JUMPPRM(___SET_NARGS(1),___PRM(101,___G_display))
___DEF_SLBL(9,___L9_make_2d_image)
   ___SET_R1(___PRC(33))
   ___SET_R0(___STK(-3))
   ___POLL(10)
___DEF_SLBL(10,___L10_make_2d_image)
   ___ADJFP(-4)
   ___JUMPINT(___SET_NARGS(1),___PRC(438),___L_shoot_2d_screen_2d_rays)
___DEF_SLBL(11,___L11_make_2d_image)
   ___SET_STK(1,___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(1L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(286)
))
   ___SET_R3(___SUB(27))
   ___SET_R2(___UNCHECKEDSTRUCTUREREF(___GLO(49,___G_res),___FIX(2L),___GLO(1,___G__23__23_type_2d_2_2d_window),___PRC(290))
)
   ___SET_R1(___SUB(28))
   ___SET_R0(___LBL(6))
   ___ADJFP(1)
   ___SET_NARGS(4) ___GOTO(___L7_make_2d_image)
___END_P_SW
___END_P_COD

___END_M_SW
___END_M_COD

___BEGIN_LBL
 ___DEF_LBL_INTRO(___H__20_schemeray," schemeray",___REF_FAL,14,0)
,___DEF_LBL_PROC(___H__20_schemeray,0,0)
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H__20_schemeray,0,0)
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_PROC(___H__20_schemeray,0,0)
,___DEF_LBL_RET(___H__20_schemeray,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_display_2d_args,"display-args",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_display_2d_args,1,0)
,___DEF_LBL_RET(___H_display_2d_args,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_write_2d_log,"write-log",___REF_FAL,9,0)
,___DEF_LBL_PROC(___H_write_2d_log,1,0)
,___DEF_LBL_RET(___H_write_2d_log,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_write_2d_log,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_write_2d_log,___IFD(___RETI,4,4,0x3f4L))
,___DEF_LBL_RET(___H_write_2d_log,___IFD(___RETI,4,4,0x3f4L))
,___DEF_LBL_PROC(___H_write_2d_log,0,1)
,___DEF_LBL_RET(___H_write_2d_log,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_write_2d_log,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_write_2d_log,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_real_2d__3e_u8,"real->u8",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_real_2d__3e_u8,1,0)
,___DEF_LBL_INTRO(___H_real_2d__3e_percentage,"real->percentage",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_real_2d__3e_percentage,1,0)
,___DEF_LBL_INTRO(___H_write_2d_color,"write-color",___REF_FAL,5,0)
,___DEF_LBL_PROC(___H_write_2d_color,1,0)
,___DEF_LBL_RET(___H_write_2d_color,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_write_2d_color,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_write_2d_color,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_write_2d_color,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_make_2d_vec2d,"make-vec2d",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_make_2d_vec2d,2,0)
,___DEF_LBL_RET(___H_make_2d_vec2d,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec2d_2d_x,"vec2d-x",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec2d_2d_x,1,0)
,___DEF_LBL_RET(___H_vec2d_2d_x,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec2d_2d_y,"vec2d-y",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec2d_2d_y,1,0)
,___DEF_LBL_RET(___H_vec2d_2d_y,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_make_2d_vec3d,"make-vec3d",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_make_2d_vec3d,3,0)
,___DEF_LBL_RET(___H_make_2d_vec3d,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_x,"vec3d-x",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_x,1,0)
,___DEF_LBL_RET(___H_vec3d_2d_x,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_y,"vec3d-y",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_y,1,0)
,___DEF_LBL_RET(___H_vec3d_2d_y,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_z,"vec3d-z",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_z,1,0)
,___DEF_LBL_RET(___H_vec3d_2d_z,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_op,"vec3d-op",___REF_FAL,10,0)
,___DEF_LBL_PROC(___H_vec3d_2d_op,3,0)
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETN,7,0,0x1fL))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETI,8,0,0x3f39L))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETN,7,0,0x31L))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_vec3d_2d_op,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_vec3d_2d_add,"vec3d-add",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_add,2,0)
,___DEF_LBL_RET(___H_vec3d_2d_add,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_sub,"vec3d-sub",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_sub,2,0)
,___DEF_LBL_RET(___H_vec3d_2d_sub,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_component_2d_mul,"vec3d-component-mul",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_component_2d_mul,2,0)
,___DEF_LBL_RET(___H_vec3d_2d_component_2d_mul,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_scalar_2d_mul,"vec3d-scalar-mul",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_scalar_2d_mul,2,0)
,___DEF_LBL_RET(___H_vec3d_2d_scalar_2d_mul,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_length,"vec3d-length",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_length,1,0)
,___DEF_LBL_RET(___H_vec3d_2d_length,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_unit,"vec3d-unit",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_unit,1,0)
,___DEF_LBL_RET(___H_vec3d_2d_unit,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_dot,"vec3d-dot",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_dot,2,0)
,___DEF_LBL_RET(___H_vec3d_2d_dot,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_vec3d_2d_cross,"vec3d-cross",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_vec3d_2d_cross,2,0)
,___DEF_LBL_RET(___H_vec3d_2d_cross,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_saturate,"saturate",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_saturate,1,0)
,___DEF_LBL_RET(___H_saturate,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_while,"while",___REF_FAL,7,0)
,___DEF_LBL_PROC(___H_while,3,0)
,___DEF_LBL_RET(___H_while,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_while,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_while,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_while,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_while,___IFD(___RETN,7,0,0x1fL))
,___DEF_LBL_RET(___H_while,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_file_2d_foreach,"file-foreach",___REF_FAL,31,0)
,___DEF_LBL_PROC(___H_file_2d_foreach,2,0)
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,1,4,0x3f0L))
,___DEF_LBL_PROC(___H_file_2d_foreach,1,1)
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,4,2,0x3f7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,4,2,0x3f7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_PROC(___H_file_2d_foreach,1,0)
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,7,2,0xfL))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,7,2,0xfL))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,8,2,0x3f04L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,7,2,0xfL))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,7,2,0xfL))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,2,0x7L))
,___DEF_LBL_PROC(___H_file_2d_foreach,1,1)
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_file_2d_foreach,0,1)
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_PROC(___H_file_2d_foreach,0,1)
,___DEF_LBL_RET(___H_file_2d_foreach,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_read_2d_token,"read-token",___REF_FAL,4,0)
,___DEF_LBL_PROC(___H_read_2d_token,0,0)
,___DEF_LBL_RET(___H_read_2d_token,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_read_2d_token,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_read_2d_token,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_make_2d_vertex,"make-vertex",___REF_FAL,4,0)
,___DEF_LBL_PROC(___H_make_2d_vertex,1,0)
,___DEF_LBL_RET(___H_make_2d_vertex,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_make_2d_vertex,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_make_2d_vertex,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_token_2d_map,"token-map",___REF_FAL,7,0)
,___DEF_LBL_PROC(___H_token_2d_map,1,0)
,___DEF_LBL_RET(___H_token_2d_map,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_token_2d_map,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_token_2d_map,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_token_2d_map,___IFD(___RETN,3,0,0x5L))
,___DEF_LBL_RET(___H_token_2d_map,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_token_2d_map,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_get_2d_current_2d_material,"get-current-material",___REF_FAL,5,0)
,___DEF_LBL_PROC(___H_get_2d_current_2d_material,0,0)
,___DEF_LBL_RET(___H_get_2d_current_2d_material,___IFD(___RETI,4,2,0x3f4L))
,___DEF_LBL_RET(___H_get_2d_current_2d_material,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_get_2d_current_2d_material,___IFD(___RETN,3,2,0x4L))
,___DEF_LBL_RET(___H_get_2d_current_2d_material,___IFD(___RETI,4,2,0x3f4L))
,___DEF_LBL_INTRO(___H_material_2d_prop,"material-prop",___REF_FAL,5,0)
,___DEF_LBL_PROC(___H_material_2d_prop,2,0)
,___DEF_LBL_RET(___H_material_2d_prop,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_material_2d_prop,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_material_2d_prop,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_material_2d_prop,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_obj_2d_declaration,"obj-declaration",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_obj_2d_declaration,0,0)
,___DEF_LBL_RET(___H_obj_2d_declaration,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_obj_2d_vertex,"obj-vertex",___REF_FAL,20,0)
,___DEF_LBL_PROC(___H_obj_2d_vertex,0,0)
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_vertex,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_INTRO(___H_obj_2d_face,"obj-face",___REF_FAL,24,0)
,___DEF_LBL_PROC(___H_obj_2d_face,0,0)
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0x7fL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETI,4,0,0x3ffL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0xbL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0x1dL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0x1fL))
,___DEF_LBL_RET(___H_obj_2d_face,___IFD(___RETN,7,0,0x3fL))
,___DEF_LBL_INTRO(___H_obj_2d_material_2d_switch,"obj-material-switch",___REF_FAL,6,0)
,___DEF_LBL_PROC(___H_obj_2d_material_2d_switch,0,0)
,___DEF_LBL_RET(___H_obj_2d_material_2d_switch,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_material_2d_switch,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_material_2d_switch,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_material_2d_switch,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_material_2d_switch,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_obj_2d_attr,"obj-attr",___REF_FAL,10,0)
,___DEF_LBL_PROC(___H_obj_2d_attr,0,0)
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_obj_2d_attr,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_mat_2d_create,"mat-create",___REF_FAL,5,0)
,___DEF_LBL_PROC(___H_mat_2d_create,0,0)
,___DEF_LBL_RET(___H_mat_2d_create,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_mat_2d_create,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_mat_2d_create,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_mat_2d_create,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_mat_2d_declaration,"mat-declaration",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_mat_2d_declaration,0,0)
,___DEF_LBL_RET(___H_mat_2d_declaration,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_mat_2d_property,"mat-property",___REF_FAL,7,0)
,___DEF_LBL_PROC(___H_mat_2d_property,1,0)
,___DEF_LBL_RET(___H_mat_2d_property,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_mat_2d_property,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_mat_2d_property,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_mat_2d_property,___IFD(___RETN,7,0,0x13L))
,___DEF_LBL_RET(___H_mat_2d_property,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_RET(___H_mat_2d_property,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_mat_2d_attr,"mat-attr",___REF_FAL,8,0)
,___DEF_LBL_PROC(___H_mat_2d_attr,0,0)
,___DEF_LBL_RET(___H_mat_2d_attr,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_mat_2d_attr,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_mat_2d_attr,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_mat_2d_attr,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_mat_2d_attr,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_mat_2d_attr,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_mat_2d_attr,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_load_2d_obj,"load-obj",___REF_FAL,19,0)
,___DEF_LBL_PROC(___H_load_2d_obj,1,0)
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_PROC(___H_load_2d_obj,1,0)
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETI,4,0,0x3f3L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETI,4,4,0x3f4L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETI,4,4,0x3f4L))
,___DEF_LBL_PROC(___H_load_2d_obj,0,1)
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_load_2d_obj,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_INTRO(___H_make_2d_window,"make-window",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_make_2d_window,2,0)
,___DEF_LBL_RET(___H_make_2d_window,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_window_3f_,"window?",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_window_3f_,1,0)
,___DEF_LBL_INTRO(___H_window_2d_x,"window-x",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_window_2d_x,1,0)
,___DEF_LBL_INTRO(___H_window_2d_x_2d_set_21_,"window-x-set!",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_window_2d_x_2d_set_21_,2,0)
,___DEF_LBL_INTRO(___H_window_2d_y,"window-y",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_window_2d_y,1,0)
,___DEF_LBL_INTRO(___H_window_2d_y_2d_set_21_,"window-y-set!",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_window_2d_y_2d_set_21_,2,0)
,___DEF_LBL_INTRO(___H_generate_2d_spheres,"generate-spheres",___REF_FAL,15,0)
,___DEF_LBL_PROC(___H_generate_2d_spheres,0,0)
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,1,4,0x3f1L))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,1,4,0x3f1L))
,___DEF_LBL_PROC(___H_generate_2d_spheres,2,4)
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETN,7,0,0x1fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,8,0,0x3f1fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETN,7,0,0x1fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,8,0,0x3f3fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETN,7,0,0x3fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,8,0,0x3f3fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETN,7,0,0x3fL))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,8,8,0x3f10L))
,___DEF_LBL_RET(___H_generate_2d_spheres,___IFD(___RETI,8,8,0x3f10L))
,___DEF_LBL_INTRO(___H_obj_2d_type,"obj-type",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_obj_2d_type,1,0)
,___DEF_LBL_INTRO(___H_obj_2d_color,"obj-color",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_obj_2d_color,1,0)
,___DEF_LBL_INTRO(___H_obj_2d_normal,"obj-normal",___REF_FAL,10,0)
,___DEF_LBL_PROC(___H_obj_2d_normal,2,0)
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETN,3,0,0x3L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_obj_2d_normal,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_INTRO(___H_light_2d_pos,"light-pos",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_light_2d_pos,1,0)
,___DEF_LBL_INTRO(___H_light_2d_intersection,"light-intersection",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_light_2d_intersection,3,0)
,___DEF_LBL_RET(___H_light_2d_intersection,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_sphere_2d_pos,"sphere-pos",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_sphere_2d_pos,1,0)
,___DEF_LBL_INTRO(___H_sphere_2d_radius,"sphere-radius",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_sphere_2d_radius,1,0)
,___DEF_LBL_INTRO(___H_sphere_2d_intersection,"sphere-intersection",___REF_FAL,3,0)
,___DEF_LBL_PROC(___H_sphere_2d_intersection,3,0)
,___DEF_LBL_RET(___H_sphere_2d_intersection,___IFD(___RETI,3,4,0x3f0L))
,___DEF_LBL_RET(___H_sphere_2d_intersection,___IFD(___RETI,3,4,0x3f0L))
,___DEF_LBL_INTRO(___H_sphere_2d_normal,"sphere-normal",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_sphere_2d_normal,2,0)
,___DEF_LBL_RET(___H_sphere_2d_normal,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_plane_2d_normal,"plane-normal",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_plane_2d_normal,1,0)
,___DEF_LBL_INTRO(___H_plane_2d_distance,"plane-distance",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_plane_2d_distance,1,0)
,___DEF_LBL_INTRO(___H_plane_2d_intersection,"plane-intersection",___REF_FAL,3,0)
,___DEF_LBL_PROC(___H_plane_2d_intersection,3,0)
,___DEF_LBL_RET(___H_plane_2d_intersection,___IFD(___RETI,3,4,0x3f0L))
,___DEF_LBL_RET(___H_plane_2d_intersection,___IFD(___RETI,3,4,0x3f0L))
,___DEF_LBL_INTRO(___H_triangle_2d_v1,"triangle-v1",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_triangle_2d_v1,1,0)
,___DEF_LBL_INTRO(___H_triangle_2d_v2,"triangle-v2",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_triangle_2d_v2,1,0)
,___DEF_LBL_INTRO(___H_triangle_2d_v3,"triangle-v3",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_triangle_2d_v3,1,0)
,___DEF_LBL_INTRO(___H_triangle_2d_normal,"triangle-normal",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_triangle_2d_normal,1,0)
,___DEF_LBL_RET(___H_triangle_2d_normal,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_triangle_2d_intersection,"triangle-intersection",___REF_FAL,5,0)
,___DEF_LBL_PROC(___H_triangle_2d_intersection,3,0)
,___DEF_LBL_RET(___H_triangle_2d_intersection,___IFD(___RETI,8,8,0x3f01L))
,___DEF_LBL_RET(___H_triangle_2d_intersection,___IFD(___RETI,11,12,0x3f007L))
,___DEF_LBL_RET(___H_triangle_2d_intersection,___IFD(___RETI,11,12,0x3f00fL))
,___DEF_LBL_RET(___H_triangle_2d_intersection,___IFD(___RETI,11,12,0x3f001L))
,___DEF_LBL_INTRO(___H_mesh_2d_pos,"mesh-pos",___REF_FAL,1,0)
,___DEF_LBL_PROC(___H_mesh_2d_pos,1,0)
,___DEF_LBL_INTRO(___H_mesh_2d_primitives,"mesh-primitives",___REF_FAL,2,0)
,___DEF_LBL_PROC(___H_mesh_2d_primitives,1,0)
,___DEF_LBL_RET(___H_mesh_2d_primitives,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_INTRO(___H_test_2d_intersection,"test-intersection",___REF_FAL,10,0)
,___DEF_LBL_PROC(___H_test_2d_intersection,3,0)
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETI,8,0,0x3f0fL))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETN,7,0,0xfL))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETI,8,8,0x3f00L))
,___DEF_LBL_RET(___H_test_2d_intersection,___IFD(___RETI,8,0,0x3f01L))
,___DEF_LBL_INTRO(___H_apply_2d_lighting,"apply-lighting",___REF_FAL,17,0)
,___DEF_LBL_PROC(___H_apply_2d_lighting,3,0)
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,6,0,0x3f37L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,6,0,0x3f37L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETN,7,2,0x3fL))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,2,4,0x3f3L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,10,2,0x3f33fL))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,6,8,0x3f07L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,6,8,0x3f07L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,7,8,0x3f05L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,7,8,0x3f07L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,7,8,0x3f06L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,7,8,0x3f06L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,6,8,0x3f07L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_apply_2d_lighting,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_INTRO(___H_find_2d_closest_2d_prim,"find-closest-prim",___REF_FAL,23,0)
,___DEF_LBL_PROC(___H_find_2d_closest_2d_prim,4,0)
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETN,7,2,0x1fL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,1,4,0x3f1L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,1,4,0x3f1L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,10,2,0x3f31eL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,10,2,0x3f31eL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,10,2,0x3f33fL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,8,2,0x3f1fL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,8,2,0x3f1fL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,5,8,0x3f01L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,5,8,0x3f00L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,5,8,0x3f01L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,5,8,0x3f00L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,10,12,0x3f007L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___OFD(___RETI,14,16,0x3f003fL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___OFD(___RETI,14,16,0x3f007fL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___OFD(___RETI,14,16,0x3f0005L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETN,7,2,0x3fL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,2,4,0x3f3L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETN,7,2,0x1eL))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,8,8,0x3f08L))
,___DEF_LBL_RET(___H_find_2d_closest_2d_prim,___IFD(___RETI,8,2,0x3f04L))
,___DEF_LBL_PROC(___H_find_2d_closest_2d_prim,2,2)
,___DEF_LBL_INTRO(___H_shoot_2d_ray,"shoot-ray",___REF_FAL,15,0)
,___DEF_LBL_PROC(___H_shoot_2d_ray,3,0)
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETN,7,1,0x1eL))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,8,1,0x3f13L))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,2,4,0x3f1L))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,2,4,0x3f1L))
,___DEF_LBL_PROC(___H_shoot_2d_ray,2,3)
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,2,4,0x3f0L))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,2,4,0x3f0L))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,8,1,0x3f1eL))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,8,1,0x3f1eL))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,2,4,0x3f0L))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETN,7,1,0x13L))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_RET(___H_shoot_2d_ray,___IFD(___RETI,8,1,0x3f02L))
,___DEF_LBL_INTRO(___H_shoot_2d_screen_2d_rays,"shoot-screen-rays",___REF_FAL,9,0)
,___DEF_LBL_PROC(___H_shoot_2d_screen_2d_rays,1,0)
,___DEF_LBL_RET(___H_shoot_2d_screen_2d_rays,___IFD(___RETI,2,4,0x3f2L))
,___DEF_LBL_RET(___H_shoot_2d_screen_2d_rays,___IFD(___RETI,2,4,0x3f2L))
,___DEF_LBL_PROC(___H_shoot_2d_screen_2d_rays,1,6)
,___DEF_LBL_RET(___H_shoot_2d_screen_2d_rays,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_shoot_2d_screen_2d_rays,___IFD(___RETI,4,0,0x3f7L))
,___DEF_LBL_RET(___H_shoot_2d_screen_2d_rays,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_shoot_2d_screen_2d_rays,___IFD(___RETN,3,0,0x7L))
,___DEF_LBL_RET(___H_shoot_2d_screen_2d_rays,___IFD(___RETI,4,4,0x3f4L))
,___DEF_LBL_INTRO(___H_make_2d_image,"make-image",___REF_FAL,12,0)
,___DEF_LBL_PROC(___H_make_2d_image,0,0)
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_PROC(___H_make_2d_image,0,0)
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETI,4,0,0x3f1L))
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_PROC(___H_make_2d_image,1,0)
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETI,0,0,0x3fL))
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETN,3,0,0x1L))
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETI,4,4,0x3f0L))
,___DEF_LBL_RET(___H_make_2d_image,___IFD(___RETN,3,0,0x1L))
___END_LBL

___BEGIN_OFD
 ___DEF_OFD(___RETI,14,16)
               ___GCMAP1(0x3f003fL)
,___DEF_OFD(___RETI,14,16)
               ___GCMAP1(0x3f007fL)
,___DEF_OFD(___RETI,14,16)
               ___GCMAP1(0x3f0005L)
___END_OFD

___BEGIN_MOD1
___DEF_PRM(0,___G__20_schemeray,1)
___DEF_PRM(10,___G_display_2d_args,16)
___DEF_PRM(88,___G_write_2d_log,19)
___DEF_PRM(48,___G_real_2d__3e_u8,29)
___DEF_PRM(47,___G_real_2d__3e_percentage,31)
___DEF_PRM(87,___G_write_2d_color,33)
___DEF_PRM(21,___G_make_2d_vec2d,39)
___DEF_PRM(66,___G_vec2d_2d_x,42)
___DEF_PRM(67,___G_vec2d_2d_y,45)
___DEF_PRM(22,___G_make_2d_vec3d,48)
___DEF_PRM(77,___G_vec3d_2d_x,51)
___DEF_PRM(78,___G_vec3d_2d_y,54)
___DEF_PRM(79,___G_vec3d_2d_z,57)
___DEF_PRM(73,___G_vec3d_2d_op,60)
___DEF_PRM(68,___G_vec3d_2d_add,71)
___DEF_PRM(75,___G_vec3d_2d_sub,74)
___DEF_PRM(69,___G_vec3d_2d_component_2d_mul,77)
___DEF_PRM(74,___G_vec3d_2d_scalar_2d_mul,80)
___DEF_PRM(72,___G_vec3d_2d_length,83)
___DEF_PRM(76,___G_vec3d_2d_unit,86)
___DEF_PRM(71,___G_vec3d_2d_dot,89)
___DEF_PRM(70,___G_vec3d_2d_cross,92)
___DEF_PRM(50,___G_saturate,95)
___DEF_PRM(81,___G_while,98)
___DEF_PRM(12,___G_file_2d_foreach,106)
___DEF_PRM(46,___G_read_2d_token,138)
___DEF_PRM(23,___G_make_2d_vertex,143)
___DEF_PRM(60,___G_token_2d_map,148)
___DEF_PRM(16,___G_get_2d_current_2d_material,156)
___DEF_PRM(29,___G_material_2d_prop,162)
___DEF_PRM(36,___G_obj_2d_declaration,168)
___DEF_PRM(41,___G_obj_2d_vertex,171)
___DEF_PRM(37,___G_obj_2d_face,192)
___DEF_PRM(38,___G_obj_2d_material_2d_switch,217)
___DEF_PRM(34,___G_obj_2d_attr,224)
___DEF_PRM(26,___G_mat_2d_create,235)
___DEF_PRM(27,___G_mat_2d_declaration,241)
___DEF_PRM(28,___G_mat_2d_property,244)
___DEF_PRM(25,___G_mat_2d_attr,252)
___DEF_PRM(19,___G_load_2d_obj,261)
___DEF_PRM(24,___G_make_2d_window,281)
___DEF_PRM(86,___G_window_3f_,284)
___DEF_PRM(82,___G_window_2d_x,286)
___DEF_PRM(83,___G_window_2d_x_2d_set_21_,288)
___DEF_PRM(84,___G_window_2d_y,290)
___DEF_PRM(85,___G_window_2d_y_2d_set_21_,292)
___DEF_PRM(15,___G_generate_2d_spheres,294)
___DEF_PRM(40,___G_obj_2d_type,310)
___DEF_PRM(35,___G_obj_2d_color,312)
___DEF_PRM(39,___G_obj_2d_normal,314)
___DEF_PRM(18,___G_light_2d_pos,325)
___DEF_PRM(17,___G_light_2d_intersection,327)
___DEF_PRM(57,___G_sphere_2d_pos,330)
___DEF_PRM(58,___G_sphere_2d_radius,332)
___DEF_PRM(55,___G_sphere_2d_intersection,334)
___DEF_PRM(56,___G_sphere_2d_normal,338)
___DEF_PRM(44,___G_plane_2d_normal,341)
___DEF_PRM(42,___G_plane_2d_distance,343)
___DEF_PRM(43,___G_plane_2d_intersection,345)
___DEF_PRM(63,___G_triangle_2d_v1,349)
___DEF_PRM(64,___G_triangle_2d_v2,351)
___DEF_PRM(65,___G_triangle_2d_v3,353)
___DEF_PRM(62,___G_triangle_2d_normal,355)
___DEF_PRM(61,___G_triangle_2d_intersection,358)
___DEF_PRM(32,___G_mesh_2d_pos,364)
___DEF_PRM(33,___G_mesh_2d_primitives,366)
___DEF_PRM(59,___G_test_2d_intersection,369)
___DEF_PRM(3,___G_apply_2d_lighting,380)
___DEF_PRM(13,___G_find_2d_closest_2d_prim,398)
___DEF_PRM(53,___G_shoot_2d_ray,422)
___DEF_PRM(54,___G_shoot_2d_screen_2d_rays,438)
___DEF_PRM(20,___G_make_2d_image,448)
___END_MOD1

___BEGIN_MOD2
___DEF_SYM2(0,___S_face,"face")
___DEF_SYM2(1,___S_light,"light")
___DEF_SYM2(2,___S_mesh,"mesh")
___DEF_SYM2(3,___S_mtlswitch,"mtlswitch")
___DEF_SYM2(4,___S_new,"new")
___DEF_SYM2(5,___S_plane,"plane")
___DEF_SYM2(6,___S_sphere,"sphere")
___DEF_SYM2(7,___S_triangle,"triangle")
___DEF_SYM2(8,___S_vertex,"vertex")
___DEF_SYM2(9,___S_window,"window")
___DEF_SYM2(10,___S_x,"x")
___DEF_SYM2(11,___S_y,"y")
___END_MOD2

#endif
