#include <stdio.h>
/**
 * main - fucntion that outputs the code
 * Return: 0
 */

int main(void)
{
int a;
for (a = 1; a < 101; a++)
{
if (a % 3 == 0 && a % 5 == 0)
{
printf("FizzBuzz ");
}
else if (a % 3 == 0)
{
printf("Fizz ");
}
else if (a % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", a);
}
}
printf("\n");
return (0);
}
