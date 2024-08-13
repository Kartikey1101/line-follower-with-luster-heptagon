/* --- Generated the 3/5/2024 at 21:25 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. jan. 23 21:2:58 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#ifndef LINE_FOLLOWER_TYPES_H
#define LINE_FOLLOWER_TYPES_H

#include "stdbool.h"
#include "assert.h"
#include "pervasives.h"
#include "mc_ext_types.h"
typedef enum {
  Line_follower__St_Whiteline,
  Line_follower__St_WhiteFast,
  Line_follower__St_Wait,
  Line_follower__St_Pause,
  Line_follower__St_ParkRight,
  Line_follower__St_ParkLeft,
  Line_follower__St_Park,
  Line_follower__St_Nodecount,
  Line_follower__St_Node5,
  Line_follower__St_Node4,
  Line_follower__St_Node3,
  Line_follower__St_Node2,
  Line_follower__St_Node1,
  Line_follower__St_Move,
  Line_follower__St_Blackline,
  Line_follower__St_Blackfast
} Line_follower__st;

Line_follower__st Line_follower__st_of_string(char* s);

char* string_of_Line_follower__st(Line_follower__st x, char* buf);

static const int Line_follower__tc = 900;

static const float Line_follower__kp = 10.000000;

static const float Line_follower__ki = 0.000000;

static const float Line_follower__kd = 30.000000;

static const float Line_follower__limit = 45.000000;

static const float Line_follower__mul = 0.010000;

static const float Line_follower__kpF = 5.000000;

static const float Line_follower__kiF = 0.000000;

static const float Line_follower__kdF = 20.000000;

static const float Line_follower__limitF = 100.000000;

typedef enum {
  Line_follower__Fwd,
  Line_follower__Sleft,
  Line_follower__Sright
} Line_follower__mode;

Line_follower__mode Line_follower__mode_of_string(char* s);

char* string_of_Line_follower__mode(Line_follower__mode x, char* buf);

#endif // LINE_FOLLOWER_TYPES_H
