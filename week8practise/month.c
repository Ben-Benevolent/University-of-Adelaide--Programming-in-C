#include <stdio.h>

int main(void) {

  // Input to be switched with the month output
  int input;
  printf("Please enter the number of the month: ");
  scanf("%d", &input);
    
  switch (input) {
    case 1:
      printf("The month of this number is Jan\n\n");
      break;
    case 2:
      printf("The month of this number is Feb\n\n");
      break;    	
    case 3:
      printf("The month of this number is Mar\n\n");
      break;    	
    case 4:
      printf("The month of this number is Apr\n\n");
      break;    	
    case 5:
      printf("The month of this number is May\n\n");
      break;    	
    case 6:
      printf("The month of this number is Jun\n\n");
      break;    	
    case 7:
      printf("The month of this number is Jul\n\n");
      break;    	
    case 8:
      printf("The month of this number is Aug\n\n");
      break;    	
    case 9:
      printf("The month of this number is Sep\n\n");
      break;    	
    case 10:
      printf("The month of this number is Oct\n\n");
      break;    	
    case 11:
      printf("The month of this number is Nov\n\n");
      break;    	
    case 12:
      printf("The month of this number is Dec\n\n");
      break;    	
    default:
      printf("\nInvalid input. Aborting program\n\n");
      return 0;   
  }
  return 0;
}
	    
    	    
    	    
    	    
    	    
    	    
