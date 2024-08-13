/* --- Generated the 3/5/2024 at 21:25 --- */
/* --- heptagon compiler, version 1.05.00 (compiled tue. jan. 23 21:2:58 CET 2024) --- */
/* --- Command line: /usr/local/bin/heptc -target c -s main -hepts line_follower.ept --- */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "line_follower_types.h"

Line_follower__st Line_follower__st_of_string(char* s) {
  if ((strcmp(s, "St_Whiteline")==0)) {
    return Line_follower__St_Whiteline;
  };
  if ((strcmp(s, "St_WhiteFast")==0)) {
    return Line_follower__St_WhiteFast;
  };
  if ((strcmp(s, "St_Wait")==0)) {
    return Line_follower__St_Wait;
  };
  if ((strcmp(s, "St_Pause")==0)) {
    return Line_follower__St_Pause;
  };
  if ((strcmp(s, "St_ParkRight")==0)) {
    return Line_follower__St_ParkRight;
  };
  if ((strcmp(s, "St_ParkLeft")==0)) {
    return Line_follower__St_ParkLeft;
  };
  if ((strcmp(s, "St_Park")==0)) {
    return Line_follower__St_Park;
  };
  if ((strcmp(s, "St_Nodecount")==0)) {
    return Line_follower__St_Nodecount;
  };
  if ((strcmp(s, "St_Node5")==0)) {
    return Line_follower__St_Node5;
  };
  if ((strcmp(s, "St_Node4")==0)) {
    return Line_follower__St_Node4;
  };
  if ((strcmp(s, "St_Node3")==0)) {
    return Line_follower__St_Node3;
  };
  if ((strcmp(s, "St_Node2")==0)) {
    return Line_follower__St_Node2;
  };
  if ((strcmp(s, "St_Node1")==0)) {
    return Line_follower__St_Node1;
  };
  if ((strcmp(s, "St_Move")==0)) {
    return Line_follower__St_Move;
  };
  if ((strcmp(s, "St_Blackline")==0)) {
    return Line_follower__St_Blackline;
  };
  if ((strcmp(s, "St_Blackfast")==0)) {
    return Line_follower__St_Blackfast;
  };
}

char* string_of_Line_follower__st(Line_follower__st x, char* buf) {
  switch (x) {
    case Line_follower__St_Whiteline:
      strcpy(buf, "St_Whiteline");
      break;
    case Line_follower__St_WhiteFast:
      strcpy(buf, "St_WhiteFast");
      break;
    case Line_follower__St_Wait:
      strcpy(buf, "St_Wait");
      break;
    case Line_follower__St_Pause:
      strcpy(buf, "St_Pause");
      break;
    case Line_follower__St_ParkRight:
      strcpy(buf, "St_ParkRight");
      break;
    case Line_follower__St_ParkLeft:
      strcpy(buf, "St_ParkLeft");
      break;
    case Line_follower__St_Park:
      strcpy(buf, "St_Park");
      break;
    case Line_follower__St_Nodecount:
      strcpy(buf, "St_Nodecount");
      break;
    case Line_follower__St_Node5:
      strcpy(buf, "St_Node5");
      break;
    case Line_follower__St_Node4:
      strcpy(buf, "St_Node4");
      break;
    case Line_follower__St_Node3:
      strcpy(buf, "St_Node3");
      break;
    case Line_follower__St_Node2:
      strcpy(buf, "St_Node2");
      break;
    case Line_follower__St_Node1:
      strcpy(buf, "St_Node1");
      break;
    case Line_follower__St_Move:
      strcpy(buf, "St_Move");
      break;
    case Line_follower__St_Blackline:
      strcpy(buf, "St_Blackline");
      break;
    case Line_follower__St_Blackfast:
      strcpy(buf, "St_Blackfast");
      break;
    default:
      break;
  };
  return buf;
}

Line_follower__mode Line_follower__mode_of_string(char* s) {
  if ((strcmp(s, "Fwd")==0)) {
    return Line_follower__Fwd;
  };
  if ((strcmp(s, "Sleft")==0)) {
    return Line_follower__Sleft;
  };
  if ((strcmp(s, "Sright")==0)) {
    return Line_follower__Sright;
  };
}

char* string_of_Line_follower__mode(Line_follower__mode x, char* buf) {
  switch (x) {
    case Line_follower__Fwd:
      strcpy(buf, "Fwd");
      break;
    case Line_follower__Sleft:
      strcpy(buf, "Sleft");
      break;
    case Line_follower__Sright:
      strcpy(buf, "Sright");
      break;
    default:
      break;
  };
  return buf;
}

