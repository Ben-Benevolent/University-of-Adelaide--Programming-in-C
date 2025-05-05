#include <stdio.h>

int main(void) {
  
  // to store input of given and surnames
  char given_name[20];
  char sur_name[20];
  
  int age = 0;
  float emp_fraction = 0;
    
  // user input prompted
  printf("Enter your name, age, and employment fraction:\n");
  scanf("%19s" "%19s" "%d" "%f", given_name, sur_name, &age, &emp_fraction);

  // user input printed
  printf("\n\nYour name is %s %s, you are %d year's old, and your employment fraction is %.1f.\n\n", 
  given_name, sur_name, age, emp_fraction);
    
  return 0;
}
