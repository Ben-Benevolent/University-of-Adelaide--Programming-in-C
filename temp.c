#include <stdio.h>

int main(void) {
  float input = 0;
  float output = 0;
  
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
  printf("\n%.0f degrees Celcius is %.0f degrees Farenheit", input, output);
  
  return 0;
} 
