#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"

char buf[512];

int
main(int argc, char *argv[])
{
  int fd1, fd2, n;

  if(argc != 3){
    fprintf(2, "Usage: cp fromfile tofile\n");
    exit(1);
  }

  if((fd1 = open(argv[1], O_RDONLY)) < 0){
      fprintf(2, "cp: cannot open %s\n", argv[1]);
      exit(1);
  }

  if((fd2 = open(argv[2], O_WRONLY|O_CREATE)) < 0){
      fprintf(2, "cp: cannot create %s\n", argv[2]);
      exit(1);
  }

  while((n = read(fd1, buf, sizeof(buf))) > 0) {
    if (write(fd2, buf, n) != n) {
      fprintf(2, "cp: write %s error\n", argv[2]);
      exit(1);
    }
  }

  if(n < 0){
    fprintf(2, "cp: read %s error\n", argv[1]);
    exit(1);
  }

  close(fd1);
  close(fd2);
  exit(0);
}
