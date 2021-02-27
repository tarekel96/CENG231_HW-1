#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <errno.h>

extern int errno;

int main(){

  // declare var and init to NULL and 0
  char c = '\n';
  int in, out = 0;
  int errnum = errno;

  // open file - read only 
  in = open("file.in", O_RDONLY);
  if(in == -1){
    fprintf(stderr, "Value of errno: %d\n", errnum);
    perror("Error printed by perror");
    exit(EXIT_FAILURE);
  }

  // open args: [file name, create file if not already, give read and write permissions to the user]
  out = open("file.out", O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR);
  if(out == -1){
    fprintf(stderr, "Value of errno: %d\n", errnum);
    perror("Error printed by perror");
    exit(EXIT_FAILURE);
  }

  // read args: [file being read, buffer storing var, read up to 1 byte into the buffer] 
  while(read(in, &c, 1) == 1){
    write(out, &c, 1);
  }

  if(close(out) == 0){
    if(close(in) == 0){
      exit(EXIT_SUCCESS);
    }
    else{
      fprintf(stderr, "Error in closing in file: %d\n", errnum);    
      exit(EXIT_FAILURE);
    }
  }
  else{
    fprintf(stderr, "Error in closing out file: %d\n", errnum);
    exit(EXIT_FAILURE);
  }
}
