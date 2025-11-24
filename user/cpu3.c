#include "kernel/types.h"
#include "user/user.h"

int main(void)
{
  settickets(10); // 10 ticket
  volatile int x = 0;
  while (1) x++;
  return 0;
}
