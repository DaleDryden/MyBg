static const uint8_t fs_metaballs_glsl[398] =
{
	0x46, 0x53, 0x48, 0x05, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x7f, 0x01, 0x00, 0x00, 0x76, 0x61, // FSH..,.?......va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // rying highp vec4
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, //  v_color0;.varyi
	0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x76, 0x5f, // ng highp vec3 v_
	0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, // normal;.void mai
	0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, // n ().{.  highp f
	0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, // loat tmpvar_1;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x20, //  tmpvar_1 = dot 
	0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x76, 0x5f, 0x6e, 0x6f, 0x72, // (normalize(v_nor
	0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, // mal), vec3(0.0, 
	0x30, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, 0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6d, // 0.0, -1.0));.  m
	0x65, 0x64, 0x69, 0x75, 0x6d, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, // ediump vec4 tmpv
	0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // ar_2;.  tmpvar_2
	0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // .w = 1.0;.  tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, // ar_2.xyz = pow (
	0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, // ((.    pow (v_co
	0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x32, // lor0.xyz, vec3(2
	0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x29, 0x29, 0x0a, 0x20, // .2, 2.2, 2.2)). 
	0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x20, 0x2b, 0x20, //   * tmpvar_1) + 
	0x70, 0x6f, 0x77, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2c, 0x20, 0x33, // pow (tmpvar_1, 3
	0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x76, 0x65, 0x63, 0x33, 0x28, 0x30, 0x2e, 0x34, 0x35, // 0.0)), vec3(0.45
	0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, // 45454, 0.4545454
	0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x29, 0x29, 0x3b, 0x0a, 0x20, // , 0.4545454));. 
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, //  gl_FragColor = 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // tmpvar_2;.}...
};
static const uint8_t fs_metaballs_spv[986] =
{
	0x46, 0x53, 0x48, 0x05, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0xc8, 0x03, 0x00, 0x00, 0x03, 0x02, // FSH..,.?........
	0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x07, 0x00, 0x08, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x00, 0x00, // #...............
	0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, // ..GLSL.std.450..
	0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, // ..........main..
	0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x10, 0x00, // ..M...Q.........
	0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, // ................
	0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x76, 0x5f, // in........M...v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x51, 0x00, // color0........Q.
	0x00, 0x00, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ..v_normal......
	0x06, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, // ......bgfx_FragD
	0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x1e, 0x00, // ata0..G...M.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x51, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G...Q.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x1e, 0x00, // ......G.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, // ..............!.
	0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x06, 0x00, // .. .............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x06, 0x00, // ................
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x28, 0x00, // ......+.......(.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x2c, 0x00, // ......+.......,.
	0x00, 0x00, 0x00, 0x00, 0x80, 0xbf, 0x2c, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2d, 0x00, // ......,.......-.
	0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x2b, 0x00, // ..(...(...,...+.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x2b, 0x00, // ......5......A+.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0xcd, 0xcc, 0x0c, 0x40, 0x2b, 0x00, // ......9......@+.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x2f, 0xba, 0xe8, 0x3e, 0x2b, 0x00, // ......B.../..>+.
	0x04, 0x00, 0x06, 0x00, 0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x20, 0x00, // ......F......? .
	0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..L...........;.
	0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ..L...M....... .
	0x04, 0x00, 0x50, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..P...........;.
	0x04, 0x00, 0x50, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ..P...Q....... .
	0x04, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..[...........;.
	0x04, 0x00, 0x5b, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, // ..[...........,.
	0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x39, 0x00, // ..........9...9.
	0x00, 0x00, 0x39, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0xa0, 0x00, // ..9...,.........
	0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x42, 0x00, 0x00, 0x00, 0x36, 0x00, // ..B...B...B...6.
	0x05, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, // ..........=.....
	0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, // ..N...M...=.....
	0x00, 0x00, 0x52, 0x00, 0x00, 0x00, 0x51, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x08, 0x00, // ..R...Q.........
	0x00, 0x00, 0x7a, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x00, 0x52, 0x00, // ..z.......E...R.
	0x00, 0x00, 0x94, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x7a, 0x00, // ..........|...z.
	0x00, 0x00, 0x2d, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x06, 0x00, 0x00, 0x00, 0x7e, 0x00, // ..-...........~.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x35, 0x00, // ..........|...5.
	0x00, 0x00, 0x4f, 0x00, 0x08, 0x00, 0x08, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x4e, 0x00, // ..O...........N.
	0x00, 0x00, 0x4e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, // ..N.............
	0x00, 0x00, 0x0c, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x1a, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x9f, 0x00, 0x00, 0x00, 0x8e, 0x00, // ................
	0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x82, 0x00, 0x00, 0x00, 0x7c, 0x00, // ..............|.
	0x00, 0x00, 0x50, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x7e, 0x00, // ..P...........~.
	0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x08, 0x00, // ..~...~.........
	0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0x0c, 0x00, // ................
	0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, // ................
	0x00, 0x00, 0x87, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, // ..........Q.....
	0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, // ..............Q.
	0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x06, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x89, 0x00, // ..Q.............
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x8d, 0x00, // ......P.........
	0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x8c, 0x00, 0x00, 0x00, 0x46, 0x00, // ..............F.
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0xfd, 0x00, // ..>.............
	0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,                                     // ..8.......
};
static const uint8_t fs_metaballs_dx9[423] =
{
	0x46, 0x53, 0x48, 0x05, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x98, 0x01, 0x00, 0x00, 0x00, 0x03, // FSH..,.?........
	0xff, 0xff, 0xfe, 0xff, 0x14, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x23, 0x00, // ......CTAB....#.
	0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, // ................
	0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, // ......ps_3_0.Mic
	0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, // rosoft (R) HLSL 
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, // Shader Compiler 
	0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, // 10.1..Q.........
	0xf0, 0x41, 0xcd, 0xcc, 0x0c, 0x40, 0x2f, 0xba, 0xe8, 0x3e, 0x00, 0x00, 0x80, 0x3f, 0x1f, 0x00, // .A...@/..>...?..
	0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x07, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, // ................
	0x01, 0x80, 0x01, 0x00, 0x07, 0x90, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, // ................
	0xe4, 0x90, 0x01, 0x00, 0xe4, 0x90, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, // ................
	0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, // ................
	0xaa, 0x90, 0x20, 0x00, 0x00, 0x03, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, // .. .............
	0x00, 0xa0, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x90, 0x0f, 0x00, // ................
	0x00, 0x02, 0x02, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x90, 0x0f, 0x00, 0x00, 0x02, 0x02, 0x00, // ........U.......
	0x04, 0x80, 0x00, 0x00, 0xaa, 0x90, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0e, 0x80, 0x02, 0x00, // ................
	0x90, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, 0x01, 0x80, 0x00, 0x00, // ....U...........
	0x55, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x02, 0x00, 0x02, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x0e, 0x00, // U...............
	0x00, 0x02, 0x02, 0x00, 0x04, 0x80, 0x00, 0x00, 0xff, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, // ................
	0x07, 0x80, 0x02, 0x00, 0xe4, 0x80, 0x00, 0x00, 0x00, 0x81, 0x01, 0x00, 0x00, 0x80, 0x0f, 0x00, // ................
	0x00, 0x02, 0x01, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, // ................
	0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x0f, 0x00, 0x00, 0x02, 0x01, 0x00, 0x04, 0x80, 0x00, 0x00, // ....U...........
	0xaa, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x00, 0x00, // ................
	0xaa, 0xa0, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x0e, 0x00, // ................
	0x00, 0x02, 0x00, 0x08, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x0e, 0x00, 0x00, 0x02, 0x00, 0x08, // ........U.......
	0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x08, 0x80, 0x00, 0x00, // ................
	0xff, 0xa0, 0xff, 0xff, 0x00, 0x00, 0x00,                                                       // .......
};
static const uint8_t fs_metaballs_dx11[662] =
{
	0x46, 0x53, 0x48, 0x05, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x44, 0x58, // FSH..,.?......DX
	0x42, 0x43, 0x71, 0x00, 0x85, 0x0b, 0x80, 0xfd, 0x1e, 0xdf, 0x09, 0x21, 0xdf, 0xe6, 0x3a, 0xef, // BCq........!..:.
	0x53, 0xf8, 0x01, 0x00, 0x00, 0x00, 0x84, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, // S.............,.
	0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, // ..........ISGNl.
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........P.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x07, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x01, 0x00, // ..........b.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x07, // ................
	0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, // ..SV_POSITION.CO
	0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, // LOR.TEXCOORD..OS
	0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, // GN,........... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, // ......SV_TARGET.
	0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0xa8, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x6a, 0x00, // ..SHDR....@...j.
	0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, // ..b...r.......b.
	0x00, 0x03, 0x72, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, // ..r.......e.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, // ......h......./.
	0x00, 0x05, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x01, 0x00, // ..r.......F.....
	0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // ..8...r.......F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x0c, 0x40, 0xcd, 0xcc, // .......@.....@..
	0x0c, 0x40, 0xcd, 0xcc, 0x0c, 0x40, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x00, // .@...@........r.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, // ......F.........
	0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, // ..........F.....
	0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x05, 0x82, 0x00, // ..F.......D.....
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, // ......:.......8.
	0x00, 0x07, 0x82, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, // ..........:.....
	0x00, 0x00, 0x2a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x06, 0x12, 0x00, // ..*......./.....
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, // ......:...A.....
	0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, // ..8.............
	0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x41, 0x19, 0x00, // .......@.....A..
	0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, // ..2...r.......F.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf6, 0x0f, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, // ..........A.....
	0x00, 0x00, 0x06, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00, 0x05, 0x72, 0x00, // ........../...r.
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, // ......F.......8.
	0x00, 0x0a, 0x72, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, // ..r.......F.....
	0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, 0xe8, 0x3e, 0x2f, 0xba, // ...@../..>/..>/.
	0xe8, 0x3e, 0x00, 0x00, 0x00, 0x00, 0x19, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, // .>........r ....
	0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x82, 0x20, // ..F.......6.... 
	0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x3e, 0x00, // .......@.....?>.
	0x00, 0x01, 0x00, 0x00, 0x00, 0x00,                                                             // ......
};
static const uint8_t fs_metaballs_mtl[712] =
{
	0x46, 0x53, 0x48, 0x05, 0x03, 0x2c, 0xf5, 0x3f, 0x00, 0x00, 0xb9, 0x02, 0x00, 0x00, 0x75, 0x73, // FSH..,.?......us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // tal;.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, // MtlShaderInput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .  float4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x76, 0x5f, 0x6e, // r0;.  float3 v_n
	0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, // ormal;.};.struct
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, //  xlatMtlShaderOu
	0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // tput {.  float4 
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, // gl_FragColor;.};
	0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, // .struct xlatMtlS
	0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x7d, // haderUniform {.}
	0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // ;.fragment xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x78, // tlShaderOutput x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, 0x61, 0x74, // latMtlMain (xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x5f, // MtlShaderInput _
	0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, 0x69, 0x6e, // mtl_i [[stage_in
	0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, // ]], constant xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, // tMtlShaderUnifor
	0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, 0x66, 0x66, // m& _mtl_u [[buff
	0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, // er(0)]]).{.  xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, //  _mtl_o;.  float
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, //  tmpvar_1 = 0;. 
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x64, 0x6f, 0x74, 0x20, //  tmpvar_1 = dot 
	0x28, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x69, 0x7a, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // (normalize(_mtl_
	0x69, 0x2e, 0x76, 0x5f, 0x6e, 0x6f, 0x72, 0x6d, 0x61, 0x6c, 0x29, 0x2c, 0x20, 0x66, 0x6c, 0x6f, // i.v_normal), flo
	0x61, 0x74, 0x33, 0x28, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x2d, 0x31, // at3(0.0, 0.0, -1
	0x2e, 0x30, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, // .0));.  float4 t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // mpvar_2 = 0;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x31, 0x2e, 0x30, 0x3b, // mpvar_2.w = 1.0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x79, 0x7a, 0x20, // .  tmpvar_2.xyz 
	0x3d, 0x20, 0x70, 0x6f, 0x77, 0x20, 0x28, 0x28, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x70, 0x6f, // = pow (((.    po
	0x77, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // w (_mtl_i.v_colo
	0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x32, // r0.xyz, float3(2
	0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x2c, 0x20, 0x32, 0x2e, 0x32, 0x29, 0x29, 0x0a, 0x20, // .2, 2.2, 2.2)). 
	0x20, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x29, 0x20, 0x2b, 0x20, //   * tmpvar_1) + 
	0x70, 0x6f, 0x77, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x2c, 0x20, 0x33, // pow (tmpvar_1, 3
	0x30, 0x2e, 0x30, 0x29, 0x29, 0x2c, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x28, 0x30, 0x2e, // 0.0)), float3(0.
	0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, // 4545454, 0.45454
	0x35, 0x34, 0x2c, 0x20, 0x30, 0x2e, 0x34, 0x35, 0x34, 0x35, 0x34, 0x35, 0x34, 0x29, 0x29, 0x3b, // 54, 0.4545454));
	0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, // .  _mtl_o.gl_Fra
	0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // gColor = tmpvar_
	0x32, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // 2;.  return _mtl
	0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                 // _o;.}...
};
extern const uint8_t* fs_metaballs_pssl;
extern const uint32_t fs_metaballs_pssl_size;