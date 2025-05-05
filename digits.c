#include <stdio.h>

int main(void) {
 
  // Input to be processed
  int input;
  printf("PLease input a 3-digit integer number: ");
  scanf("%d", &input);
  
  // splitting input into it's component units, tens and hundreds 
  int tens     = (input / 10)  % 10 ;
  int hundreds = (input / 100) % 100;
  int units    = input - ((tens * 10) + (hundreds * 100));
  
  // print result 
  printf("\n %d\n %d\n %d\n\n", units, tens, hundreds);
   
  return 0;
}
