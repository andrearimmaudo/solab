#include "stdlib.h"
#include "stdio.h"

int mul(int a, int b);
int divid(int a, int b);
int sum(int a, int b);
int sub(int a, int b);

int main(int argc, char const *argv[]) {
  int (*fp)(int,int);
  if (argc!=4) {
    printf("%s\n", 'E');
  } else {
    if (argv[3] == 'x') {
        fp = mul;
      } else {

      } if (argv[3] == '-') {
          fp = sub;
        } else {
          if (argv[3] == '/') {
              fp = divid;
            } else {
              if (argv[3] == '+') {
                  fp = sum;
                } else {
                  printf("%s\n", 'E');
                }
            }
        }
      printf("%d\n", fp((*argv+2), (argv+4)));
    }
  return 0;
}

int sub(int a, int b) {
  printf("%s\n", 'b');
  return (a - b);
}
int mul(int a, int b) {
  printf("%s\n", 'l');
  return (a * b);
}
int sum(int a, int b) {
  return (a + b);
}
int divid(int a, int b) {
  return (a / b);
}
