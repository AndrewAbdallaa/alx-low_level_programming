#include <stdio>
/**
 * main - Prints the size of various computer types
 * Retrun: 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f:
printf("char size: %lu bytes\n", (unsigned long)sizeof(a));
printf("int size: %lu bytes\n", (unsigned long)sizeof(b));
printf("long int size: %lu bytes\n", (unsigned long)sizeof(c));
printf("long long int size: %lu bytes\n", (unsigned long)sizeof(d));
printf("float size: %lu bytes\n", (unsigned long)sizeof(f));
return (0);
}
