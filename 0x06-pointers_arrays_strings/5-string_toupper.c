#include "main.h" 
  
/** 
* string_toupper - convert elements of an array to uppercase 
* 
* @p: param array p 
* 
* Return: p 
*/ 
  
	char *string_toupper(char *p) 
{ 
	int a; 
  
	for (a = 0; p[a] != '\0'; a++) 
{ 
	if (p[a] >= 97 && p[a] <= 122) 
	p[a] -= 32; 
} 
	return (p); 
}
