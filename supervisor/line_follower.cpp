/* --- Generated the 3/5/2024 at 21:25 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. jan. 23 21:2:58 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower.h"

void Line_follower__main_reset(Line_follower__main_mem* self) {
  self->v_340 = true;
  self->v_323 = true;
  self->v_267 = true;
  self->v_262 = true;
  self->v_258 = true;
  self->v_190 = true;
  self->v_150 = true;
  self->v_137 = true;
  self->v_124 = true;
  self->v_111 = true;
  self->v_98 = true;
  self->v_45 = true;
  self->v_40 = true;
  self->v_35 = true;
  self->v_30 = true;
  self->v_25 = true;
  self->error_1 = 0;
  self->t_1 = 0;
  self->pnr = false;
  self->ck = Line_follower__St_WhiteFast;
  self->v_4 = true;
  self->v_2 = true;
}

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int senLeft, int senRight, int f,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self) {
  Mc_ext__int_of_float_out Mc_ext__int_of_float_out_st;
  Mc_ext__float_of_int_out Mc_ext__float_of_int_out_st;
  
  int v_23;
  int v_28;
  int v_26;
  int v_24;
  int v_33;
  int v_31;
  int v_29;
  int v_38;
  int v_36;
  int v_34;
  int v_43;
  int v_41;
  int v_39;
  int v_48;
  int v_46;
  int v_44;
  int v_101;
  int v_99;
  int v_97;
  int v_96;
  int v_95;
  int v_94;
  int v_93;
  int v_92;
  int v_91;
  int v_90;
  int v_89;
  int v_88;
  int v_87;
  int v_86;
  int v_85;
  int v_84;
  int v_83;
  int v_82;
  int v_81;
  int v_80;
  int v_79;
  int v_78;
  int v_77;
  int v_76;
  int v_75;
  int v_74;
  int v_73;
  int v_72;
  int v_71;
  int v_70;
  int v_69;
  int v_68;
  int v_67;
  int v_66;
  int v_65;
  int v_64;
  int v_63;
  int v_62;
  int v_61;
  int v_60;
  int v_59;
  int v_58;
  int v_57;
  int v_56;
  int v_55;
  int v_54;
  int v_53;
  int v_52;
  int v_51;
  int v_50;
  int v_49;
  int v_114;
  int v_112;
  int v_110;
  int v_109;
  int v_108;
  int v_107;
  int v_106;
  int v_105;
  int v_104;
  int v_103;
  int v_102;
  int v_127;
  int v_125;
  int v_123;
  int v_122;
  int v_121;
  int v_120;
  int v_119;
  int v_118;
  int v_117;
  int v_116;
  int v_115;
  int v_140;
  int v_138;
  int v_136;
  int v_135;
  int v_134;
  int v_133;
  int v_132;
  int v_131;
  int v_130;
  int v_129;
  int v_128;
  int v_153;
  int v_151;
  int v_149;
  int v_148;
  int v_147;
  int v_146;
  int v_145;
  int v_144;
  int v_143;
  int v_142;
  int v_141;
  int v_181;
  Line_follower__st v_180;
  int v_179;
  Line_follower__st v_178;
  int v_177;
  Line_follower__st v_176;
  int v_175;
  Line_follower__st v_174;
  int v_173;
  Line_follower__st v_172;
  int v_171;
  int v_170;
  int v_169;
  int v_168;
  int v_167;
  int v_166;
  int v_165;
  int v_164;
  int v_163;
  int v_162;
  int v_161;
  int v_160;
  int v_159;
  int v_158;
  int v_157;
  int v_156;
  int v_155;
  int v_154;
  float v_205;
  float v_204;
  int dir_St_Blackfast_Sright;
  int v_r_St_Blackfast_Sright;
  int v_l_St_Blackfast_Sright;
  int dir_St_Blackfast_Sleft;
  int v_r_St_Blackfast_Sleft;
  int v_l_St_Blackfast_Sleft;
  int dir_St_Blackfast_Fwd;
  int v_r_St_Blackfast_Fwd;
  int v_l_St_Blackfast_Fwd;
  Line_follower__mode ck_4;
  float v_203;
  int v_202;
  int v_201;
  Line_follower__mode v_200;
  int v_199;
  int v_198;
  int v_197;
  int v_196;
  int v_195;
  int v_194;
  int v_193;
  int v_191;
  int v_189;
  Line_follower__st v_188;
  int v_187;
  int v_186;
  int v_185;
  int v_184;
  int v_183;
  int v_182;
  float pid_3;
  Line_follower__mode temp_3;
  float v_283;
  float v_282;
  int dir_St_Blackline_Sright;
  int v_r_St_Blackline_Sright;
  int v_l_St_Blackline_Sright;
  int dir_St_Blackline_Sleft;
  int v_r_St_Blackline_Sleft;
  int v_l_St_Blackline_Sleft;
  int dir_St_Blackline_Fwd;
  int v_r_St_Blackline_Fwd;
  int v_l_St_Blackline_Fwd;
  Line_follower__mode ck_3;
  float v_281;
  int v_280;
  int v_279;
  Line_follower__mode v_278;
  int v_277;
  int v_276;
  int v_275;
  int v_274;
  int v_273;
  int v_272;
  int v_271;
  int v_269;
  int v_268;
  int v_266;
  int v_264;
  int v_263;
  int v_261;
  int v_259;
  int v_257;
  Line_follower__st v_256;
  int v_255;
  Line_follower__st v_254;
  int v_253;
  Line_follower__st v_252;
  int v_251;
  Line_follower__st v_250;
  int v_249;
  Line_follower__st v_248;
  int v_247;
  int v_246;
  int v_245;
  int v_244;
  int v_243;
  int v_242;
  int v_241;
  int v_240;
  int v_239;
  int v_238;
  int v_237;
  int v_236;
  int v_235;
  int v_234;
  int v_233;
  int v_232;
  int v_231;
  int v_230;
  int v_229;
  int v_228;
  int v_227;
  int v_226;
  int v_225;
  int v_224;
  int v_223;
  int v_222;
  int v_221;
  int v_220;
  int v_219;
  int v_218;
  int v_217;
  int v_216;
  int v_215;
  int v_214;
  int v_213;
  int v_212;
  int v_211;
  int v_210;
  int v_209;
  int v_208;
  int v_207;
  int v_206;
  float pid_2;
  Line_follower__mode temp_2;
  int leftspace;
  int rightspace;
  float v_338;
  float v_337;
  int dir_St_Whiteline_Sright;
  int v_r_St_Whiteline_Sright;
  int v_l_St_Whiteline_Sright;
  int dir_St_Whiteline_Sleft;
  int v_r_St_Whiteline_Sleft;
  int v_l_St_Whiteline_Sleft;
  int dir_St_Whiteline_Fwd;
  int v_r_St_Whiteline_Fwd;
  int v_l_St_Whiteline_Fwd;
  Line_follower__mode ck_2;
  float v_336;
  int v_335;
  int v_334;
  Line_follower__mode v_333;
  int v_332;
  int v_331;
  int v_330;
  int v_329;
  int v_328;
  int v_327;
  int v_326;
  int v_324;
  int v_322;
  int v_321;
  int v_320;
  int v_319;
  int v_318;
  int v_317;
  int v_316;
  int v_315;
  int v_314;
  int v_313;
  int v_312;
  int v_311;
  int v_310;
  int v_309;
  int v_308;
  int v_307;
  int v_306;
  int v_305;
  int v_304;
  int v_303;
  int v_302;
  int v_301;
  int v_300;
  int v_299;
  int v_298;
  int v_297;
  int v_296;
  int v_295;
  int v_294;
  int v_293;
  int v_292;
  int v_291;
  int v_290;
  int v_289;
  int v_288;
  int v_287;
  int v_286;
  int v_285;
  int v_284;
  float pid_1;
  Line_follower__mode temp_1;
  float v_355;
  float v_354;
  int dir_St_WhiteFast_Sright;
  int v_r_St_WhiteFast_Sright;
  int v_l_St_WhiteFast_Sright;
  int dir_St_WhiteFast_Sleft;
  int v_r_St_WhiteFast_Sleft;
  int v_l_St_WhiteFast_Sleft;
  int dir_St_WhiteFast_Fwd;
  int v_r_St_WhiteFast_Fwd;
  int v_l_St_WhiteFast_Fwd;
  Line_follower__mode ck_1;
  float v_353;
  int v_352;
  int v_351;
  Line_follower__mode v_350;
  int v_349;
  int v_348;
  int v_347;
  int v_346;
  int v_345;
  int v_344;
  int v_343;
  int v_341;
  int v_339;
  float pid;
  Line_follower__mode temp;
  int nr_St_Park;
  Line_follower__st ns_St_Park;
  int time_St_Park;
  int t_St_Park;
  int dir_St_Park;
  int v_r_St_Park;
  int v_l_St_Park;
  int nr_St_Move;
  Line_follower__st ns_St_Move;
  int time_St_Move;
  int t_St_Move;
  int dir_St_Move;
  int v_r_St_Move;
  int v_l_St_Move;
  int nr_St_ParkRight;
  Line_follower__st ns_St_ParkRight;
  int time_St_ParkRight;
  int t_St_ParkRight;
  int dir_St_ParkRight;
  int v_r_St_ParkRight;
  int v_l_St_ParkRight;
  int nr_St_ParkLeft;
  Line_follower__st ns_St_ParkLeft;
  int time_St_ParkLeft;
  int t_St_ParkLeft;
  int dir_St_ParkLeft;
  int v_r_St_ParkLeft;
  int v_l_St_ParkLeft;
  int nr_St_Wait;
  Line_follower__st ns_St_Wait;
  int time_St_Wait;
  int t_St_Wait;
  int dir_St_Wait;
  int v_r_St_Wait;
  int v_l_St_Wait;
  int nr_St_Pause;
  Line_follower__st ns_St_Pause;
  int time_St_Pause;
  int t_St_Pause;
  int dir_St_Pause;
  int v_r_St_Pause;
  int v_l_St_Pause;
  int nr_St_Node5;
  Line_follower__st ns_St_Node5;
  int time_St_Node5;
  int t_St_Node5;
  int dir_St_Node5;
  int v_r_St_Node5;
  int v_l_St_Node5;
  int nr_St_Node4;
  Line_follower__st ns_St_Node4;
  int time_St_Node4;
  int t_St_Node4;
  int dir_St_Node4;
  int v_r_St_Node4;
  int v_l_St_Node4;
  int nr_St_Node3;
  Line_follower__st ns_St_Node3;
  int time_St_Node3;
  int t_St_Node3;
  int dir_St_Node3;
  int v_r_St_Node3;
  int v_l_St_Node3;
  int nr_St_Node2;
  Line_follower__st ns_St_Node2;
  int time_St_Node2;
  int t_St_Node2;
  int dir_St_Node2;
  int v_r_St_Node2;
  int v_l_St_Node2;
  int nr_St_Node1;
  Line_follower__st ns_St_Node1;
  int time_St_Node1;
  int t_St_Node1;
  int dir_St_Node1;
  int v_r_St_Node1;
  int v_l_St_Node1;
  int nr_St_Nodecount;
  Line_follower__st ns_St_Nodecount;
  int time_St_Nodecount;
  int t_St_Nodecount;
  int dir_St_Nodecount;
  int v_r_St_Nodecount;
  int v_l_St_Nodecount;
  int nr_St_Blackfast;
  Line_follower__st ns_St_Blackfast;
  int time_St_Blackfast;
  int t_St_Blackfast;
  int dir_St_Blackfast;
  int v_r_St_Blackfast;
  int v_l_St_Blackfast;
  int nr_St_Blackline;
  Line_follower__st ns_St_Blackline;
  int time_St_Blackline;
  int t_St_Blackline;
  int dir_St_Blackline;
  int v_r_St_Blackline;
  int v_l_St_Blackline;
  int nr_St_Whiteline;
  Line_follower__st ns_St_Whiteline;
  int time_St_Whiteline;
  int t_St_Whiteline;
  int dir_St_Whiteline;
  int v_r_St_Whiteline;
  int v_l_St_Whiteline;
  int nr_St_WhiteFast;
  Line_follower__st ns_St_WhiteFast;
  int time_St_WhiteFast;
  int t_St_WhiteFast;
  int dir_St_WhiteFast;
  int v_r_St_WhiteFast;
  int v_l_St_WhiteFast;
  float v_22;
  float v_21;
  float v_20;
  float v_19;
  float v_18;
  float v_17;
  float v_16;
  float v_15;
  float v_14;
  float v_13;
  float v_12;
  float v_11;
  float v_10;
  float v_9;
  float v_8;
  float v_7;
  int v_6;
  int v_3;
  int v_1;
  int v;
  Line_follower__st ns;
  int r;
  int nr;
  int t;
  int error;
  int e1;
  int e2;
  int p;
  int i;
  int d;
  int time;
  float pidvalue;
  float pidvalueF;
  r = self->pnr;
  v_1 = (sen4-sen0);
  e2 = (v_1*0);
  v = (sen3-sen1);
  e1 = (v*1);
  v_3 = (e1+e2);
  if (self->v_2) {
    error = 0;
  } else {
    error = v_3;
  };
  d = (error-self->error_1);
  Mc_ext__float_of_int_step(d, &Mc_ext__float_of_int_out_st);
  v_20 = Mc_ext__float_of_int_out_st.o;
  v_21 = (Line_follower__kdF*v_20);
  Mc_ext__float_of_int_step(d, &Mc_ext__float_of_int_out_st);
  v_12 = Mc_ext__float_of_int_out_st.o;
  v_13 = (Line_follower__kd*v_12);
  v_6 = (self->v_5+error);
  if (self->v_4) {
    i = 0;
  } else {
    i = v_6;
  };
  Mc_ext__float_of_int_step(i, &Mc_ext__float_of_int_out_st);
  v_17 = Mc_ext__float_of_int_out_st.o;
  v_18 = (Line_follower__kiF*v_17);
  Mc_ext__float_of_int_step(i, &Mc_ext__float_of_int_out_st);
  v_9 = Mc_ext__float_of_int_out_st.o;
  v_10 = (Line_follower__ki*v_9);
  p = error;
  Mc_ext__float_of_int_step(p, &Mc_ext__float_of_int_out_st);
  v_15 = Mc_ext__float_of_int_out_st.o;
  v_16 = (Line_follower__kpF*v_15);
  v_19 = (v_16+v_18);
  v_22 = (v_19+v_21);
  pidvalueF = (Line_follower__mul*v_22);
  Mc_ext__float_of_int_step(p, &Mc_ext__float_of_int_out_st);
  v_7 = Mc_ext__float_of_int_out_st.o;
  v_8 = (Line_follower__kp*v_7);
  v_11 = (v_8+v_10);
  v_14 = (v_11+v_13);
  pidvalue = (Line_follower__mul*v_14);
  switch (self->ck) {
    case Line_follower__St_WhiteFast:
      t_St_WhiteFast = self->t_1;
      v_352 = (pidvalueF<=-100.000000);
      if (v_352) {
        v_353 = -100.000000;
      } else {
        v_353 = pidvalueF;
      };
      v_351 = (pidvalueF>=Line_follower__limitF);
      if (v_351) {
        pid = 100.000000;
      } else {
        pid = v_353;
      };
      v_348 = (sen4<=Line_follower__tc);
      v_347 = (sen0>=Line_follower__tc);
      v_349 = (v_347&&v_348);
      if (v_349) {
        v_350 = Line_follower__Sleft;
      } else {
        v_350 = Line_follower__Fwd;
      };
      v_345 = (sen0<=Line_follower__tc);
      v_344 = (sen4>=Line_follower__tc);
      v_346 = (v_344&&v_345);
      if (v_346) {
        temp = Line_follower__Sright;
      } else {
        temp = v_350;
      };
      ck_1 = temp;
      v_343 = (self->v_342+1);
      if (self->v_340) {
        v_341 = true;
      } else {
        v_341 = r;
      };
      if (v_341) {
        time_St_WhiteFast = 0;
      } else {
        time_St_WhiteFast = v_343;
      };
      t = t_St_WhiteFast;
      time = time_St_WhiteFast;
      v_339 = (time>45);
      if (v_339) {
        nr_St_WhiteFast = true;
        ns_St_WhiteFast = Line_follower__St_Whiteline;
      } else {
        nr_St_WhiteFast = false;
        ns_St_WhiteFast = Line_follower__St_WhiteFast;
      };
      ns = ns_St_WhiteFast;
      nr = nr_St_WhiteFast;
      switch (ck_1) {
        case Line_follower__Fwd:
          v_355 = (Line_follower__limitF+pid);
          Mc_ext__int_of_float_step(v_355, &Mc_ext__int_of_float_out_st);
          v_r_St_WhiteFast_Fwd = Mc_ext__int_of_float_out_st.o;
          v_354 = (Line_follower__limitF-pid);
          Mc_ext__int_of_float_step(v_354, &Mc_ext__int_of_float_out_st);
          v_l_St_WhiteFast_Fwd = Mc_ext__int_of_float_out_st.o;
          dir_St_WhiteFast_Fwd = 1;
          v_l_St_WhiteFast = v_l_St_WhiteFast_Fwd;
          v_r_St_WhiteFast = v_r_St_WhiteFast_Fwd;
          dir_St_WhiteFast = dir_St_WhiteFast_Fwd;
          break;
        case Line_follower__Sleft:
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_WhiteFast_Sleft = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_WhiteFast_Sleft = Mc_ext__int_of_float_out_st.o;
          dir_St_WhiteFast_Sleft = 2;
          v_l_St_WhiteFast = v_l_St_WhiteFast_Sleft;
          v_r_St_WhiteFast = v_r_St_WhiteFast_Sleft;
          dir_St_WhiteFast = dir_St_WhiteFast_Sleft;
          break;
        case Line_follower__Sright:
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_WhiteFast_Sright = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_WhiteFast_Sright = Mc_ext__int_of_float_out_st.o;
          dir_St_WhiteFast_Sright = 3;
          v_l_St_WhiteFast = v_l_St_WhiteFast_Sright;
          v_r_St_WhiteFast = v_r_St_WhiteFast_Sright;
          dir_St_WhiteFast = dir_St_WhiteFast_Sright;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_WhiteFast;
      _out->v_r = v_r_St_WhiteFast;
      _out->dir = dir_St_WhiteFast;
      self->v_342 = time;
      self->v_340 = false;
      break;
    case Line_follower__St_Whiteline:
      t_St_Whiteline = self->t_1;
      v_335 = (pidvalue<=-45.000000);
      if (v_335) {
        v_336 = -45.000000;
      } else {
        v_336 = pidvalue;
      };
      v_334 = (pidvalue>=Line_follower__limit);
      if (v_334) {
        pid_1 = 45.000000;
      } else {
        pid_1 = v_336;
      };
      v_331 = (sen4<=Line_follower__tc);
      v_330 = (sen0>=Line_follower__tc);
      v_332 = (v_330&&v_331);
      if (v_332) {
        v_333 = Line_follower__Sleft;
      } else {
        v_333 = Line_follower__Fwd;
      };
      v_328 = (sen0<=Line_follower__tc);
      v_327 = (sen4>=Line_follower__tc);
      v_329 = (v_327&&v_328);
      if (v_329) {
        temp_1 = Line_follower__Sright;
      } else {
        temp_1 = v_333;
      };
      ck_2 = temp_1;
      v_326 = (self->v_325+1);
      if (self->v_323) {
        v_324 = true;
      } else {
        v_324 = r;
      };
      if (v_324) {
        time_St_Whiteline = 0;
      } else {
        time_St_Whiteline = v_326;
      };
      v_320 = (sen4<=Line_follower__tc);
      v_318 = (sen3>=Line_follower__tc);
      v_316 = (sen2<=Line_follower__tc);
      v_314 = (sen1>=Line_follower__tc);
      v_313 = (sen0>=Line_follower__tc);
      v_315 = (v_313&&v_314);
      v_317 = (v_315&&v_316);
      v_319 = (v_317&&v_318);
      v_321 = (v_319&&v_320);
      v_310 = (sen4>=Line_follower__tc);
      v_308 = (sen3>=Line_follower__tc);
      v_306 = (sen2<=Line_follower__tc);
      v_304 = (sen1>=Line_follower__tc);
      v_303 = (sen0<=Line_follower__tc);
      v_305 = (v_303&&v_304);
      v_307 = (v_305&&v_306);
      v_309 = (v_307&&v_308);
      v_311 = (v_309&&v_310);
      v_300 = (sen4<=Line_follower__tc);
      v_298 = (sen3>=Line_follower__tc);
      v_296 = (sen2<=Line_follower__tc);
      v_294 = (sen1>=Line_follower__tc);
      v_293 = (sen0>=Line_follower__tc);
      v_295 = (v_293&&v_294);
      v_297 = (v_295&&v_296);
      v_299 = (v_297&&v_298);
      v_301 = (v_299&&v_300);
      v_291 = (sen4>=Line_follower__tc);
      v_289 = (sen3>=Line_follower__tc);
      v_287 = (sen2>=Line_follower__tc);
      v_285 = (sen1>=Line_follower__tc);
      v_284 = (sen0>=Line_follower__tc);
      v_286 = (v_284&&v_285);
      v_288 = (v_286&&v_287);
      v_290 = (v_288&&v_289);
      v_292 = (v_290&&v_291);
      v_302 = (v_292||v_301);
      v_312 = (v_302||v_311);
      v_322 = (v_312||v_321);
      if (v_322) {
        nr_St_Whiteline = true;
        ns_St_Whiteline = Line_follower__St_Blackline;
      } else {
        nr_St_Whiteline = false;
        ns_St_Whiteline = Line_follower__St_Whiteline;
      };
      t = t_St_Whiteline;
      time = time_St_Whiteline;
      ns = ns_St_Whiteline;
      nr = nr_St_Whiteline;
      switch (ck_2) {
        case Line_follower__Fwd:
          v_338 = (Line_follower__limit+pid_1);
          Mc_ext__int_of_float_step(v_338, &Mc_ext__int_of_float_out_st);
          v_r_St_Whiteline_Fwd = Mc_ext__int_of_float_out_st.o;
          v_337 = (Line_follower__limit-pid_1);
          Mc_ext__int_of_float_step(v_337, &Mc_ext__int_of_float_out_st);
          v_l_St_Whiteline_Fwd = Mc_ext__int_of_float_out_st.o;
          dir_St_Whiteline_Fwd = 1;
          v_l_St_Whiteline = v_l_St_Whiteline_Fwd;
          v_r_St_Whiteline = v_r_St_Whiteline_Fwd;
          dir_St_Whiteline = dir_St_Whiteline_Fwd;
          break;
        case Line_follower__Sleft:
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_Whiteline_Sleft = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_Whiteline_Sleft = Mc_ext__int_of_float_out_st.o;
          dir_St_Whiteline_Sleft = 21;
          v_l_St_Whiteline = v_l_St_Whiteline_Sleft;
          v_r_St_Whiteline = v_r_St_Whiteline_Sleft;
          dir_St_Whiteline = dir_St_Whiteline_Sleft;
          break;
        case Line_follower__Sright:
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_Whiteline_Sright = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_Whiteline_Sright = Mc_ext__int_of_float_out_st.o;
          dir_St_Whiteline_Sright = 31;
          v_l_St_Whiteline = v_l_St_Whiteline_Sright;
          v_r_St_Whiteline = v_r_St_Whiteline_Sright;
          dir_St_Whiteline = dir_St_Whiteline_Sright;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_Whiteline;
      _out->v_r = v_r_St_Whiteline;
      _out->dir = dir_St_Whiteline;
      self->v_325 = time;
      self->v_323 = false;
      break;
    case Line_follower__St_Blackline:
      v_280 = (pidvalue<=-45.000000);
      if (v_280) {
        v_281 = -45.000000;
      } else {
        v_281 = pidvalue;
      };
      v_279 = (pidvalue>=Line_follower__limit);
      if (v_279) {
        pid_2 = 45.000000;
      } else {
        pid_2 = v_281;
      };
      v_276 = (sen4>=Line_follower__tc);
      v_275 = (sen0<=Line_follower__tc);
      v_277 = (v_275&&v_276);
      if (v_277) {
        v_278 = Line_follower__Sleft;
      } else {
        v_278 = Line_follower__Fwd;
      };
      v_273 = (sen0>=Line_follower__tc);
      v_272 = (sen4<=Line_follower__tc);
      v_274 = (v_272&&v_273);
      if (v_274) {
        temp_2 = Line_follower__Sright;
      } else {
        temp_2 = v_278;
      };
      ck_3 = temp_2;
      t_St_Blackline = self->t_1;
      v_269 = (senRight==0);
      if (v_269) {
        v_271 = 0;
      } else {
        v_271 = self->v_270;
      };
      if (self->v_267) {
        v_268 = true;
      } else {
        v_268 = r;
      };
      if (v_268) {
        rightspace = 1;
      } else {
        rightspace = v_271;
      };
      v_264 = (senLeft==0);
      if (v_264) {
        v_266 = 0;
      } else {
        v_266 = self->v_265;
      };
      if (self->v_262) {
        v_263 = true;
      } else {
        v_263 = r;
      };
      if (v_263) {
        leftspace = 1;
      } else {
        leftspace = v_266;
      };
      v_261 = (self->v_260+1);
      if (self->v_258) {
        v_259 = true;
      } else {
        v_259 = r;
      };
      if (v_259) {
        time_St_Blackline = 0;
      } else {
        time_St_Blackline = v_261;
      };
      v_246 = (leftspace==0);
      v_244 = (rightspace==0);
      v_239 = (rightspace==1);
      v_234 = (leftspace==1);
      v_225 = (sen4<=Line_follower__tc);
      v_223 = (sen3<=Line_follower__tc);
      v_222 = (sen2<=Line_follower__tc);
      v_224 = (v_222&&v_223);
      v_226 = (v_224&&v_225);
      v_219 = (sen3<=Line_follower__tc);
      v_217 = (sen2<=Line_follower__tc);
      v_216 = (sen1<=Line_follower__tc);
      v_218 = (v_216&&v_217);
      v_220 = (v_218&&v_219);
      v_214 = (sen2<=Line_follower__tc);
      v_212 = (sen1<=Line_follower__tc);
      v_211 = (sen0<=Line_follower__tc);
      v_213 = (v_211&&v_212);
      v_215 = (v_213&&v_214);
      v_221 = (v_215||v_220);
      v_227 = (v_221||v_226);
      v_209 = (f==3);
      v_207 = (f==2);
      v_206 = (f==1);
      v_208 = (v_206||v_207);
      v_210 = (v_208||v_209);
      t = t_St_Blackline;
      v_241 = (t==6);
      v_236 = (t==6);
      v_231 = (t==6);
      v_228 = (t==2);
      time = time_St_Blackline;
      v_242 = (time>55);
      v_243 = (v_241&&v_242);
      v_245 = (v_243&&v_244);
      v_247 = (v_245&&v_246);
      if (v_247) {
        v_249 = true;
        v_248 = Line_follower__St_Wait;
      } else {
        v_249 = false;
        v_248 = Line_follower__St_Blackline;
      };
      v_237 = (time>55);
      v_238 = (v_236&&v_237);
      v_240 = (v_238&&v_239);
      if (v_240) {
        v_251 = true;
        v_250 = Line_follower__St_ParkRight;
      } else {
        v_251 = v_249;
        v_250 = v_248;
      };
      v_232 = (time>55);
      v_233 = (v_231&&v_232);
      v_235 = (v_233&&v_234);
      if (v_235) {
        v_253 = true;
        v_252 = Line_follower__St_ParkLeft;
      } else {
        v_253 = v_251;
        v_252 = v_250;
      };
      v_229 = (time>20);
      v_230 = (v_228&&v_229);
      if (v_230) {
        v_255 = true;
      } else {
        v_255 = v_253;
      };
      if (v_227) {
        v_257 = true;
      } else {
        v_257 = v_255;
      };
      if (v_210) {
        nr_St_Blackline = true;
      } else {
        nr_St_Blackline = v_257;
      };
      if (v_230) {
        v_254 = Line_follower__St_Nodecount;
      } else {
        v_254 = v_252;
      };
      if (v_227) {
        v_256 = Line_follower__St_Nodecount;
      } else {
        v_256 = v_254;
      };
      if (v_210) {
        ns_St_Blackline = Line_follower__St_Pause;
      } else {
        ns_St_Blackline = v_256;
      };
      ns = ns_St_Blackline;
      nr = nr_St_Blackline;
      switch (ck_3) {
        case Line_follower__Fwd:
          v_283 = (Line_follower__limit-pid_2);
          Mc_ext__int_of_float_step(v_283, &Mc_ext__int_of_float_out_st);
          v_r_St_Blackline_Fwd = Mc_ext__int_of_float_out_st.o;
          v_282 = (Line_follower__limit+pid_2);
          Mc_ext__int_of_float_step(v_282, &Mc_ext__int_of_float_out_st);
          v_l_St_Blackline_Fwd = Mc_ext__int_of_float_out_st.o;
          dir_St_Blackline_Fwd = 1;
          v_l_St_Blackline = v_l_St_Blackline_Fwd;
          v_r_St_Blackline = v_r_St_Blackline_Fwd;
          dir_St_Blackline = dir_St_Blackline_Fwd;
          break;
        case Line_follower__Sleft:
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_Blackline_Sleft = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_Blackline_Sleft = Mc_ext__int_of_float_out_st.o;
          dir_St_Blackline_Sleft = 2;
          v_l_St_Blackline = v_l_St_Blackline_Sleft;
          v_r_St_Blackline = v_r_St_Blackline_Sleft;
          dir_St_Blackline = dir_St_Blackline_Sleft;
          break;
        case Line_follower__Sright:
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_Blackline_Sright = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limit,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_Blackline_Sright = Mc_ext__int_of_float_out_st.o;
          dir_St_Blackline_Sright = 3;
          v_l_St_Blackline = v_l_St_Blackline_Sright;
          v_r_St_Blackline = v_r_St_Blackline_Sright;
          dir_St_Blackline = dir_St_Blackline_Sright;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_Blackline;
      _out->v_r = v_r_St_Blackline;
      _out->dir = dir_St_Blackline;
      self->v_270 = rightspace;
      self->v_267 = false;
      self->v_265 = leftspace;
      self->v_262 = false;
      self->v_260 = time;
      self->v_258 = false;
      break;
    case Line_follower__St_Blackfast:
      v_202 = (pidvalueF<=-100.000000);
      if (v_202) {
        v_203 = -100.000000;
      } else {
        v_203 = pidvalueF;
      };
      v_201 = (pidvalueF>=Line_follower__limitF);
      if (v_201) {
        pid_3 = 100.000000;
      } else {
        pid_3 = v_203;
      };
      v_198 = (sen4>=Line_follower__tc);
      v_197 = (sen0<=Line_follower__tc);
      v_199 = (v_197&&v_198);
      if (v_199) {
        v_200 = Line_follower__Sleft;
      } else {
        v_200 = Line_follower__Fwd;
      };
      v_195 = (sen0>=Line_follower__tc);
      v_194 = (sen4<=Line_follower__tc);
      v_196 = (v_194&&v_195);
      if (v_196) {
        temp_3 = Line_follower__Sright;
      } else {
        temp_3 = v_200;
      };
      ck_4 = temp_3;
      t_St_Blackfast = self->t_1;
      v_193 = (self->v_192+1);
      if (self->v_190) {
        v_191 = true;
      } else {
        v_191 = r;
      };
      if (v_191) {
        time_St_Blackfast = 0;
      } else {
        time_St_Blackfast = v_193;
      };
      v_185 = (f==3);
      v_183 = (f==2);
      v_182 = (f==1);
      v_184 = (v_182||v_183);
      v_186 = (v_184||v_185);
      t = t_St_Blackfast;
      time = time_St_Blackfast;
      v_187 = (time>60);
      if (v_187) {
        v_189 = true;
      } else {
        v_189 = false;
      };
      if (v_186) {
        nr_St_Blackfast = true;
      } else {
        nr_St_Blackfast = v_189;
      };
      if (v_187) {
        v_188 = Line_follower__St_Wait;
      } else {
        v_188 = Line_follower__St_Blackfast;
      };
      if (v_186) {
        ns_St_Blackfast = Line_follower__St_Pause;
      } else {
        ns_St_Blackfast = v_188;
      };
      ns = ns_St_Blackfast;
      nr = nr_St_Blackfast;
      switch (ck_4) {
        case Line_follower__Fwd:
          v_205 = (Line_follower__limitF-pid_3);
          Mc_ext__int_of_float_step(v_205, &Mc_ext__int_of_float_out_st);
          v_r_St_Blackfast_Fwd = Mc_ext__int_of_float_out_st.o;
          v_204 = (Line_follower__limitF+pid_3);
          Mc_ext__int_of_float_step(v_204, &Mc_ext__int_of_float_out_st);
          v_l_St_Blackfast_Fwd = Mc_ext__int_of_float_out_st.o;
          dir_St_Blackfast_Fwd = 1;
          v_l_St_Blackfast = v_l_St_Blackfast_Fwd;
          v_r_St_Blackfast = v_r_St_Blackfast_Fwd;
          dir_St_Blackfast = dir_St_Blackfast_Fwd;
          break;
        case Line_follower__Sleft:
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_Blackfast_Sleft = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_Blackfast_Sleft = Mc_ext__int_of_float_out_st.o;
          dir_St_Blackfast_Sleft = 2;
          v_l_St_Blackfast = v_l_St_Blackfast_Sleft;
          v_r_St_Blackfast = v_r_St_Blackfast_Sleft;
          dir_St_Blackfast = dir_St_Blackfast_Sleft;
          break;
        case Line_follower__Sright:
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_r_St_Blackfast_Sright = Mc_ext__int_of_float_out_st.o;
          Mc_ext__int_of_float_step(Line_follower__limitF,
                                    &Mc_ext__int_of_float_out_st);
          v_l_St_Blackfast_Sright = Mc_ext__int_of_float_out_st.o;
          dir_St_Blackfast_Sright = 3;
          v_l_St_Blackfast = v_l_St_Blackfast_Sright;
          v_r_St_Blackfast = v_r_St_Blackfast_Sright;
          dir_St_Blackfast = dir_St_Blackfast_Sright;
          break;
        default:
          break;
      };
      _out->v_l = v_l_St_Blackfast;
      _out->v_r = v_r_St_Blackfast;
      _out->dir = dir_St_Blackfast;
      self->v_192 = time;
      self->v_190 = false;
      break;
    case Line_follower__St_Nodecount:
      t_St_Nodecount = (self->t_1+1);
      Mc_ext__int_of_float_step(0.000000, &Mc_ext__int_of_float_out_st);
      v_r_St_Nodecount = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(0.000000, &Mc_ext__int_of_float_out_st);
      v_l_St_Nodecount = Mc_ext__int_of_float_out_st.o;
      dir_St_Nodecount = 11;
      time_St_Nodecount = 1;
      t = t_St_Nodecount;
      v_170 = (t==6);
      v_167 = (t==5);
      v_164 = (t==4);
      v_161 = (t==3);
      v_158 = (t==2);
      v_155 = (t==1);
      time = time_St_Nodecount;
      v_169 = (time>0);
      v_171 = (v_169&&v_170);
      if (v_171) {
        v_173 = true;
        v_172 = Line_follower__St_Node5;
      } else {
        v_173 = false;
        v_172 = Line_follower__St_Nodecount;
      };
      v_166 = (time>0);
      v_168 = (v_166&&v_167);
      if (v_168) {
        v_175 = true;
        v_174 = Line_follower__St_Node4;
      } else {
        v_175 = v_173;
        v_174 = v_172;
      };
      v_163 = (time>0);
      v_165 = (v_163&&v_164);
      if (v_165) {
        v_177 = true;
        v_176 = Line_follower__St_Node3;
      } else {
        v_177 = v_175;
        v_176 = v_174;
      };
      v_160 = (time>0);
      v_162 = (v_160&&v_161);
      if (v_162) {
        v_179 = true;
        v_178 = Line_follower__St_Blackfast;
      } else {
        v_179 = v_177;
        v_178 = v_176;
      };
      v_157 = (time>0);
      v_159 = (v_157&&v_158);
      if (v_159) {
        v_181 = true;
        v_180 = Line_follower__St_Node2;
      } else {
        v_181 = v_179;
        v_180 = v_178;
      };
      v_154 = (time>0);
      v_156 = (v_154&&v_155);
      if (v_156) {
        nr_St_Nodecount = true;
        ns_St_Nodecount = Line_follower__St_Node1;
      } else {
        nr_St_Nodecount = v_181;
        ns_St_Nodecount = v_180;
      };
      ns = ns_St_Nodecount;
      nr = nr_St_Nodecount;
      _out->v_l = v_l_St_Nodecount;
      _out->v_r = v_r_St_Nodecount;
      _out->dir = dir_St_Nodecount;
      break;
    case Line_follower__St_Node1:
      t_St_Node1 = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_Node1 = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_Node1 = Mc_ext__int_of_float_out_st.o;
      dir_St_Node1 = 2;
      v_153 = (self->v_152+1);
      if (self->v_150) {
        v_151 = true;
      } else {
        v_151 = r;
      };
      if (v_151) {
        time_St_Node1 = 0;
      } else {
        time_St_Node1 = v_153;
      };
      v_148 = (sen4>=Line_follower__tc);
      v_146 = (sen3>=Line_follower__tc);
      v_144 = (sen2<=Line_follower__tc);
      v_142 = (sen1>=Line_follower__tc);
      v_141 = (sen0>=Line_follower__tc);
      v_143 = (v_141&&v_142);
      v_145 = (v_143&&v_144);
      v_147 = (v_145&&v_146);
      v_149 = (v_147&&v_148);
      if (v_149) {
        nr_St_Node1 = true;
        ns_St_Node1 = Line_follower__St_Blackline;
      } else {
        nr_St_Node1 = false;
        ns_St_Node1 = Line_follower__St_Node1;
      };
      t = t_St_Node1;
      time = time_St_Node1;
      ns = ns_St_Node1;
      nr = nr_St_Node1;
      _out->v_l = v_l_St_Node1;
      _out->v_r = v_r_St_Node1;
      _out->dir = dir_St_Node1;
      self->v_152 = time;
      self->v_150 = false;
      break;
    case Line_follower__St_Node2:
      t_St_Node2 = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_Node2 = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_Node2 = Mc_ext__int_of_float_out_st.o;
      dir_St_Node2 = 3;
      v_140 = (self->v_139+1);
      if (self->v_137) {
        v_138 = true;
      } else {
        v_138 = r;
      };
      if (v_138) {
        time_St_Node2 = 0;
      } else {
        time_St_Node2 = v_140;
      };
      v_135 = (sen4>=Line_follower__tc);
      v_133 = (sen3>=Line_follower__tc);
      v_131 = (sen2<=Line_follower__tc);
      v_129 = (sen1>=Line_follower__tc);
      v_128 = (sen0>=Line_follower__tc);
      v_130 = (v_128&&v_129);
      v_132 = (v_130&&v_131);
      v_134 = (v_132&&v_133);
      v_136 = (v_134&&v_135);
      if (v_136) {
        nr_St_Node2 = true;
        ns_St_Node2 = Line_follower__St_Blackline;
      } else {
        nr_St_Node2 = false;
        ns_St_Node2 = Line_follower__St_Node2;
      };
      t = t_St_Node2;
      time = time_St_Node2;
      ns = ns_St_Node2;
      nr = nr_St_Node2;
      _out->v_l = v_l_St_Node2;
      _out->v_r = v_r_St_Node2;
      _out->dir = dir_St_Node2;
      self->v_139 = time;
      self->v_137 = false;
      break;
    case Line_follower__St_Node3:
      t_St_Node3 = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_Node3 = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_Node3 = Mc_ext__int_of_float_out_st.o;
      dir_St_Node3 = 2;
      v_127 = (self->v_126+1);
      if (self->v_124) {
        v_125 = true;
      } else {
        v_125 = r;
      };
      if (v_125) {
        time_St_Node3 = 0;
      } else {
        time_St_Node3 = v_127;
      };
      v_122 = (sen4>=Line_follower__tc);
      v_120 = (sen3>=Line_follower__tc);
      v_118 = (sen2<=Line_follower__tc);
      v_116 = (sen1>=Line_follower__tc);
      v_115 = (sen0>=Line_follower__tc);
      v_117 = (v_115&&v_116);
      v_119 = (v_117&&v_118);
      v_121 = (v_119&&v_120);
      v_123 = (v_121&&v_122);
      if (v_123) {
        nr_St_Node3 = true;
        ns_St_Node3 = Line_follower__St_Blackline;
      } else {
        nr_St_Node3 = false;
        ns_St_Node3 = Line_follower__St_Node3;
      };
      t = t_St_Node3;
      time = time_St_Node3;
      ns = ns_St_Node3;
      nr = nr_St_Node3;
      _out->v_l = v_l_St_Node3;
      _out->v_r = v_r_St_Node3;
      _out->dir = dir_St_Node3;
      self->v_126 = time;
      self->v_124 = false;
      break;
    case Line_follower__St_Node4:
      t_St_Node4 = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_Node4 = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_Node4 = Mc_ext__int_of_float_out_st.o;
      dir_St_Node4 = 2;
      v_114 = (self->v_113+1);
      if (self->v_111) {
        v_112 = true;
      } else {
        v_112 = r;
      };
      if (v_112) {
        time_St_Node4 = 0;
      } else {
        time_St_Node4 = v_114;
      };
      v_109 = (sen4>=Line_follower__tc);
      v_107 = (sen3>=Line_follower__tc);
      v_105 = (sen2<=Line_follower__tc);
      v_103 = (sen1>=Line_follower__tc);
      v_102 = (sen0>=Line_follower__tc);
      v_104 = (v_102&&v_103);
      v_106 = (v_104&&v_105);
      v_108 = (v_106&&v_107);
      v_110 = (v_108&&v_109);
      if (v_110) {
        nr_St_Node4 = true;
        ns_St_Node4 = Line_follower__St_Blackline;
      } else {
        nr_St_Node4 = false;
        ns_St_Node4 = Line_follower__St_Node4;
      };
      t = t_St_Node4;
      time = time_St_Node4;
      ns = ns_St_Node4;
      nr = nr_St_Node4;
      _out->v_l = v_l_St_Node4;
      _out->v_r = v_r_St_Node4;
      _out->dir = dir_St_Node4;
      self->v_113 = time;
      self->v_111 = false;
      break;
    case Line_follower__St_Node5:
      t_St_Node5 = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_Node5 = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_Node5 = Mc_ext__int_of_float_out_st.o;
      dir_St_Node5 = 1;
      v_101 = (self->v_100+1);
      if (self->v_98) {
        v_99 = true;
      } else {
        v_99 = r;
      };
      if (v_99) {
        time_St_Node5 = 0;
      } else {
        time_St_Node5 = v_101;
      };
      v_95 = (sen4<=Line_follower__tc);
      v_93 = (sen3>=Line_follower__tc);
      v_91 = (sen2>=Line_follower__tc);
      v_89 = (sen1>=Line_follower__tc);
      v_88 = (sen0>=Line_follower__tc);
      v_90 = (v_88&&v_89);
      v_92 = (v_90&&v_91);
      v_94 = (v_92&&v_93);
      v_96 = (v_94&&v_95);
      v_85 = (sen4>=Line_follower__tc);
      v_83 = (sen3<=Line_follower__tc);
      v_81 = (sen2>=Line_follower__tc);
      v_79 = (sen1>=Line_follower__tc);
      v_78 = (sen0>=Line_follower__tc);
      v_80 = (v_78&&v_79);
      v_82 = (v_80&&v_81);
      v_84 = (v_82&&v_83);
      v_86 = (v_84&&v_85);
      v_75 = (sen4>=Line_follower__tc);
      v_73 = (sen3>=Line_follower__tc);
      v_71 = (sen2>=Line_follower__tc);
      v_69 = (sen1<=Line_follower__tc);
      v_68 = (sen0>=Line_follower__tc);
      v_70 = (v_68&&v_69);
      v_72 = (v_70&&v_71);
      v_74 = (v_72&&v_73);
      v_76 = (v_74&&v_75);
      v_65 = (sen4>=Line_follower__tc);
      v_63 = (sen3>=Line_follower__tc);
      v_61 = (sen2>=Line_follower__tc);
      v_59 = (sen1>=Line_follower__tc);
      v_58 = (sen0<=Line_follower__tc);
      v_60 = (v_58&&v_59);
      v_62 = (v_60&&v_61);
      v_64 = (v_62&&v_63);
      v_66 = (v_64&&v_65);
      v_56 = (sen4>=Line_follower__tc);
      v_54 = (sen3>=Line_follower__tc);
      v_52 = (sen2<=Line_follower__tc);
      v_50 = (sen1>=Line_follower__tc);
      v_49 = (sen0>=Line_follower__tc);
      v_51 = (v_49&&v_50);
      v_53 = (v_51&&v_52);
      v_55 = (v_53&&v_54);
      v_57 = (v_55&&v_56);
      v_67 = (v_57||v_66);
      v_77 = (v_67||v_76);
      v_87 = (v_77||v_86);
      v_97 = (v_87||v_96);
      if (v_97) {
        nr_St_Node5 = true;
        ns_St_Node5 = Line_follower__St_Wait;
      } else {
        nr_St_Node5 = false;
        ns_St_Node5 = Line_follower__St_Node5;
      };
      t = t_St_Node5;
      time = time_St_Node5;
      ns = ns_St_Node5;
      nr = nr_St_Node5;
      _out->v_l = v_l_St_Node5;
      _out->v_r = v_r_St_Node5;
      _out->dir = dir_St_Node5;
      self->v_100 = time;
      self->v_98 = false;
      break;
    case Line_follower__St_Pause:
      t_St_Pause = self->t_1;
      Mc_ext__int_of_float_step(0.000000, &Mc_ext__int_of_float_out_st);
      v_r_St_Pause = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(0.000000, &Mc_ext__int_of_float_out_st);
      v_l_St_Pause = Mc_ext__int_of_float_out_st.o;
      dir_St_Pause = 0;
      v_48 = (self->v_47+1);
      if (self->v_45) {
        v_46 = true;
      } else {
        v_46 = r;
      };
      if (v_46) {
        time_St_Pause = 0;
      } else {
        time_St_Pause = v_48;
      };
      v_44 = (f==0);
      if (v_44) {
        nr_St_Pause = true;
        ns_St_Pause = Line_follower__St_Blackline;
      } else {
        nr_St_Pause = false;
        ns_St_Pause = Line_follower__St_Pause;
      };
      t = t_St_Pause;
      time = time_St_Pause;
      ns = ns_St_Pause;
      nr = nr_St_Pause;
      _out->v_l = v_l_St_Pause;
      _out->v_r = v_r_St_Pause;
      _out->dir = dir_St_Pause;
      self->v_47 = time;
      self->v_45 = false;
      break;
    case Line_follower__St_Wait:
      t_St_Wait = self->t_1;
      Mc_ext__int_of_float_step(0.000000, &Mc_ext__int_of_float_out_st);
      v_r_St_Wait = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(0.000000, &Mc_ext__int_of_float_out_st);
      v_l_St_Wait = Mc_ext__int_of_float_out_st.o;
      dir_St_Wait = 0;
      v_43 = (self->v_42+1);
      if (self->v_40) {
        v_41 = true;
      } else {
        v_41 = r;
      };
      if (v_41) {
        time_St_Wait = 0;
      } else {
        time_St_Wait = v_43;
      };
      t = t_St_Wait;
      time = time_St_Wait;
      v_39 = (time>5);
      if (v_39) {
        nr_St_Wait = true;
        ns_St_Wait = Line_follower__St_Blackline;
      } else {
        nr_St_Wait = false;
        ns_St_Wait = Line_follower__St_Wait;
      };
      ns = ns_St_Wait;
      nr = nr_St_Wait;
      _out->v_l = v_l_St_Wait;
      _out->v_r = v_r_St_Wait;
      _out->dir = dir_St_Wait;
      self->v_42 = time;
      self->v_40 = false;
      break;
    case Line_follower__St_ParkLeft:
      t_St_ParkLeft = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_ParkLeft = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_ParkLeft = Mc_ext__int_of_float_out_st.o;
      dir_St_ParkLeft = 21;
      v_38 = (self->v_37+1);
      if (self->v_35) {
        v_36 = true;
      } else {
        v_36 = r;
      };
      if (v_36) {
        time_St_ParkLeft = 0;
      } else {
        time_St_ParkLeft = v_38;
      };
      t = t_St_ParkLeft;
      time = time_St_ParkLeft;
      v_34 = (time>15);
      if (v_34) {
        nr_St_ParkLeft = true;
        ns_St_ParkLeft = Line_follower__St_Move;
      } else {
        nr_St_ParkLeft = false;
        ns_St_ParkLeft = Line_follower__St_ParkLeft;
      };
      ns = ns_St_ParkLeft;
      nr = nr_St_ParkLeft;
      _out->v_l = v_l_St_ParkLeft;
      _out->v_r = v_r_St_ParkLeft;
      _out->dir = dir_St_ParkLeft;
      self->v_37 = time;
      self->v_35 = false;
      break;
    case Line_follower__St_ParkRight:
      t_St_ParkRight = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_ParkRight = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_ParkRight = Mc_ext__int_of_float_out_st.o;
      dir_St_ParkRight = 31;
      v_33 = (self->v_32+1);
      if (self->v_30) {
        v_31 = true;
      } else {
        v_31 = r;
      };
      if (v_31) {
        time_St_ParkRight = 0;
      } else {
        time_St_ParkRight = v_33;
      };
      t = t_St_ParkRight;
      time = time_St_ParkRight;
      v_29 = (time>15);
      if (v_29) {
        nr_St_ParkRight = true;
        ns_St_ParkRight = Line_follower__St_Move;
      } else {
        nr_St_ParkRight = false;
        ns_St_ParkRight = Line_follower__St_ParkRight;
      };
      ns = ns_St_ParkRight;
      nr = nr_St_ParkRight;
      _out->v_l = v_l_St_ParkRight;
      _out->v_r = v_r_St_ParkRight;
      _out->dir = dir_St_ParkRight;
      self->v_32 = time;
      self->v_30 = false;
      break;
    case Line_follower__St_Move:
      t_St_Move = self->t_1;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_r_St_Move = Mc_ext__int_of_float_out_st.o;
      Mc_ext__int_of_float_step(Line_follower__limit,
                                &Mc_ext__int_of_float_out_st);
      v_l_St_Move = Mc_ext__int_of_float_out_st.o;
      dir_St_Move = 1;
      v_28 = (self->v_27+1);
      if (self->v_25) {
        v_26 = true;
      } else {
        v_26 = r;
      };
      if (v_26) {
        time_St_Move = 0;
      } else {
        time_St_Move = v_28;
      };
      t = t_St_Move;
      time = time_St_Move;
      v_24 = (time>30);
      if (v_24) {
        nr_St_Move = true;
        ns_St_Move = Line_follower__St_Park;
      } else {
        nr_St_Move = false;
        ns_St_Move = Line_follower__St_Move;
      };
      ns = ns_St_Move;
      nr = nr_St_Move;
      _out->v_l = v_l_St_Move;
      _out->v_r = v_r_St_Move;
      _out->dir = dir_St_Move;
      self->v_27 = time;
      self->v_25 = false;
      break;
    case Line_follower__St_Park:
      t_St_Park = self->t_1;
      v_r_St_Park = 0;
      v_l_St_Park = 0;
      dir_St_Park = 0;
      time_St_Park = 1;
      t = t_St_Park;
      time = time_St_Park;
      v_23 = (time>6);
      if (v_23) {
        nr_St_Park = true;
        ns_St_Park = Line_follower__St_Blackline;
      } else {
        nr_St_Park = false;
        ns_St_Park = Line_follower__St_Park;
      };
      ns = ns_St_Park;
      nr = nr_St_Park;
      _out->v_l = v_l_St_Park;
      _out->v_r = v_r_St_Park;
      _out->dir = dir_St_Park;
      break;
    default:
      break;
  };
  self->error_1 = error;
  self->t_1 = t;
  self->pnr = nr;
  self->ck = ns;
  self->v_5 = i;
  self->v_4 = false;
  self->v_2 = false;;
}

