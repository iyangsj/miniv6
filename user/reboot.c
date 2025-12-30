#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("reboot system in 3 seconds...\n");
  pause(30);
  reboot();

  printf("reboot failed");
  exit(1);
}
