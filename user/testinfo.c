#include "kernel/types.h"
#include "kernel/pstat.h"
#include "user/user.h"

int
main(void)
{
  struct pstat ps;

  printf("calling getpinfo()...\n");

  if (getpinfo(&ps) < 0) {
    printf("getpinfo failed!\n");
    exit(1);
  }

  printf("getpinfo succeeded.\n");

  printf("Listing processes:\n");
  printf("slot\tinuse\tpid\ttickets\tticks\n");

  for(int i = 0; i < NPROC; i++){
    if (ps.inuse[i]) {
      printf("%d\t%d\t%d\t%d\t%d\n",
              i,
              ps.inuse[i],
              ps.pid[i],
              ps.tickets[i],
              ps.ticks[i]);
    }
  }

  exit(0);
}
