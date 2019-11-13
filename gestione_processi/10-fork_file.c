#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


#define FILENAME "dati.txt"

int main()
{
  pid_t pid;

  FILE *fp;

  if ((fp = fopen(FILENAME, "w+")) == NULL) {
		fprintf(stderr, "Errore in apertura %s. Error: %d, MSG:%s\n", FILENAME, errno, strerror(errno));
		exit(0);
	}

  printf("fork program starting\n");
  pid = fork();
  switch(pid)
  {
    case -1:
      perror("fork failed");
      exit(1);
    case 0:
      printf("This is the child (%d)\n",getpid());
      for (int i=0;i<10;i++) {
        fprintf(fp,"%2d I have to do so many exercises!\n",i);
      }
      fflush(fp);
      printf("OK");

      break;
    default:

      printf("This is the parent\n");

      int *status=0;
      pid_t child=wait(status);

      if (child == -1) {
    		fprintf(stderr, "Errore in apertura WAIT. Error: %d, MSG:%s\n", errno, strerror(errno));
    		exit(EXIT_FAILURE);
    	}

      printf("Child terminated (%d)\n",child);

      char buf[100];

      printf("%ld\n",ftell(fp));

      fseek(fp, 0, SEEK_SET);

      printf("%ld\n",ftell(fp));

      while (fgets(buf,100,fp)!=NULL)
        printf("%s", buf);
      fclose(fp);

      break;
  }

  exit(EXIT_SUCCESS);
}
