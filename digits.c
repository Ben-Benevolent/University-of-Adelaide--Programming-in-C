#include <stdio.h>

int main(void) {
 
  // Input to be processed
  int input = 0;
  printf("PLease input a 3-digit integer number: ");
  scanf("%d", &input);
  
  // splitting input into it's component units, tens and hundreds 
  int tens     = (input / 10)  % 10 ;
  int hundreds = (input / 100) % 100;
  int units    = input - ((tens * 10) + (hundreds * 100));
  
  // print result 
  printf("%d\n %d\n %d", units, tens, hundreds);
   
  return 0;
}
