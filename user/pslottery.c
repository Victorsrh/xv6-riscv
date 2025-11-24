#include "kernel/types.h"
#include "kernel/pstat.h"
#include "user/user.h"

int main(void)
{
  struct pstat ps;

  if (getpinfo(&ps) < 0) {
    printf("getpinfo failed!\n");
    exit(1);
  }

  printf("PID\tTickets\tTicks\n");

  for (int i = 0; i < NPROC; i++) {
    if (ps.inuse[i]) {
      printf("%d\t%d\t%d\n", ps.pid[i], ps.tickets[i], ps.ticks[i]);
    }
  }

  exit(0);
}
