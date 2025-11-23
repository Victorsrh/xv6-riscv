#ifndef _PSTAT_H_
#define _PSTAT_H_

#include "param.h"   // for NPROC

// This is a big box that will hold info about ALL processes.
struct pstat {
  int inuse[NPROC];   // 1 if that slot has a process, 0 if empty
  int tickets[NPROC]; // how many tickets that process has
  int pid[NPROC];     // pid of that process
  int ticks[NPROC];   // how many scheduler ticks it has used
};

#endif

