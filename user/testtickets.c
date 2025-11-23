#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int r;

  printf("calling settickets(5)...\n");
  r = settickets(5);
  printf("settickets(5) returned %d (should be 0)\n", r);

  printf("calling settickets(0)...\n");
  r = settickets(0);
  printf("settickets(0) returned %d (should be -1)\n", r);

  exit(0);
}
