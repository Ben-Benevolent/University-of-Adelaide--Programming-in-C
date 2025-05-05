#include <stdio.h>

int main(void) {
  
  // stores user input
  int years;
  
  // strings to be printed according to user input
  char primary[24]   = "primary level education\0";
  char secondary[26] = "secondary level education\0";
  char tertiary[25]  = "tertiary level education\0";
    
  printf("Please enter your number of years in school: ");
  int inputs = scanf("%d", &years);
    
  if (inputs <= 0 || years < 0)
    {  printf("Invalid input- aborting program\n\n");
       return 0;
    }
    
  if(years >= 0 && years <= 7) {
      printf("\nYou have entered %s\n\n", primary);
  }
    
  if(years >= 8 && years <= 12) {
    printf("\nYou have attained %s, and entered %s\n\n", primary, secondary);
    }
    
  if(years >= 13) {
    printf("You have attained %s, and have entered %s\n\n", secondary, tertiary);
  }	 
    
  return 0;
}
