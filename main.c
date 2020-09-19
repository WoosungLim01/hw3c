#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n){
  return n == 0 ? 0 : n%10 + digit_sum(n/10) ;
}
int main(void) {
  char *num = readline("Enter an int: ");
  int numinput = atoi(num);
  printf("sum of digits of %d is %d", numinput, digit_sum(numinput));
  return 0;
}