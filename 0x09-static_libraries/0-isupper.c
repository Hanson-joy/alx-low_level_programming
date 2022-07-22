#include "main.h"
#include <ctype.h>
/**
*_isupper -> this is a function to check upper case alphas
*@c: variable whose character is to be checked
*Return: 1 is uppercase, 0 if lowercase
*/
int _isupper(int c)
{
if (isupper(c))
return (1);
return (0);
}
