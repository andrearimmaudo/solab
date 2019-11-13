#include <signal.h>
#include <stdio.h>
#include <unistd.h>

void ouch(int sig) {
  printf("UCH! - I got signal %d\n", sig);
}

int main() {
  struct sigaction act;

  act.sa_handler = ouch;
  sigemptyset(&act.sa_mask);
  act.sa_flags = 0;

  printf("ProcessId: %d\n",getpid());

  sigaction(SIGINT, &act, 0);

  while(1) {
    printf("Hello World!\n");
    sleep(1);
  }

}
