#include "main.h"
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char str[8] = "_putchar";
int i;
i = 0;
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
return (0);
}
