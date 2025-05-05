#include <stdio.h>

int main(void) {
  float input;
  float output;
  
  printf("Please give us a temperature in Celcius: ");
  // value of variable below indicates validity of user input
  float check = scanf("%f", &input);						
    
    // checks ot see if user inputted a number or not
    if (check <= 0)
   	{	printf("Input a number next time.\n\n");
    		return 0;
    	}
  
  // this sum converts Celcius to Farenheit
  output = ((input * 9) / 5) + 32;
  printf("\n%.2f degrees Celcius is %.2f degrees Farenheit\n\n", input, output);
  
  return 0;
} 
