#include <stdlib.h> 
 #include <time.h> 
 /* more headers goes there */ 
 #include <stdio.h>
 /* betty style doc for function main goes there */
 /**
  * main - main function
  *
  * Return (0); always 0
  */

 int main(void) 
 { 
         int n;
	 int m; 
  
         srand(time(0)); 
         n = rand() - RAND_MAX / 2; 
         /* your code goes there */
	 m = n % 10;
	 if (m > 5)
		printf("last digit %d is %d and is greater than 5", n, m);
	 else if (n == 0)
		printf("last digit of %d is %d and is 0", n, m);
	 else if (n < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not 0", n, m); 
         return (0); 
 }