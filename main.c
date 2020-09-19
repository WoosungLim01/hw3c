// Author: Woosung Lim wml5207@psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>

int digit_sum(int n){
  if (n == 0){
    return 0 ;
  } 
  else{
    return n%10 + digit_sum(n/10) ;
  }
}

int main(void) {
  char *num = readline("Enter an int: ");
  int numinput = atoi(num);
  printf("sum of digits of %d is %d.\n", numinput, digit_sum(numinput));
  return 0;
}


