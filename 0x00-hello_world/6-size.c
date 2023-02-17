#include <stdio>
/**
 * main - Program that prints size
 * Description: A progam that print the size
 * Retrun: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f:
printf("char size: %lu bytes\n", sizeof(a));
printf("int size: %lu bytes\n", sizeof(b));
printf("long int size: %lu bytes\n", sizeof(c));
printf("long long int size: %lu bytes\n", sizeof(d));
printf("float size: %lu bytes\n", sizeof(f));
return (0);
}
