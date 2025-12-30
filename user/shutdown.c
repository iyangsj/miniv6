#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  printf("shutdown system in 3 seconds...\n");
  pause(30);
  shutdown();

  printf("shutdown failed");
  exit(1);
}
