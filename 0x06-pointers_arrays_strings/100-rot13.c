#include "main.h"
/**
 * *rot13 - function that encodes string rot13
 * @s: string
 * 
 * Return: encoded string
 */
char *rot13(char *s)
{
int x, y;

char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
  
for (x = 0; s[x] != '\0'; y++)
{
for (y = 0; input[y] != '\0'; y++)
{
if (s[x] == input[y])
{
s[x] = output[y];
break;
}
}
}
return (s);
)
