/* --- Generated the 3/5/2024 at 21:25 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. jan. 23 21:2:58 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_H
#define LINE_FOLLOWER_H

#include "line_follower_types.h"
#include "mc_ext.h"
typedef struct Line_follower__main_mem {
  int v_27;
  int v_25;
  int v_32;
  int v_30;
  int v_37;
  int v_35;
  int v_42;
  int v_40;
  int v_47;
  int v_45;
  int v_100;
  int v_98;
  int v_113;
  int v_111;
  int v_126;
  int v_124;
  int v_139;
  int v_137;
  int v_152;
  int v_150;
  int v_192;
  int v_190;
  int v_270;
  int v_267;
  int v_265;
  int v_262;
  int v_260;
  int v_258;
  int v_325;
  int v_323;
  int v_342;
  int v_340;
  Line_follower__st ck;
  int v_5;
  int v_4;
  int v_2;
  int pnr;
  int error_1;
  int t_1;
} Line_follower__main_mem;

typedef struct Line_follower__main_out {
  int v_l;
  int v_r;
  int dir;
} Line_follower__main_out;

void Line_follower__main_reset(Line_follower__main_mem* self);

void Line_follower__main_step(int sen0, int sen1, int sen2, int sen3,
                              int sen4, int senLeft, int senRight, int f,
                              Line_follower__main_out* _out,
                              Line_follower__main_mem* self);

#endif // LINE_FOLLOWER_H
