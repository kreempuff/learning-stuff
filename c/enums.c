#include <stdio.h>

enum months { JAN=1, FEB, MAR, APR, MAY, JUN,
              JUL, AUG, SEP, OCT, NOV, DEC };

int main(int argc, char const *argv[]) {
  enum months the_month = DEC;
  printf("%d\n", the_month);
  return 0;
}
