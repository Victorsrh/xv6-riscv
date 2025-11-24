#include "kernel/types.h"
#include "user/user.h"

int main(void)
{
  settickets(20); // 20 tickets
  volatile int x = 0;
  while (1) x++;
  return 0;
}
