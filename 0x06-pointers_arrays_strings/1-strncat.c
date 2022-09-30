#include "main.h"   
/** 
* _strncat - concatinates two strings 
* 
*  @dest: param destination 
*  @src: param source 
*  @n: param n 
* 
*  Return:  pointer to dest 
*/ 
	char *_strncat(char *dest, char *src, int n) 
{ 
	int len, j; 
  
	for (len = 0; dest[len] != '\0'; len++) 
{ 
} 
	j = 0; 
  
	while (j < n && src[j] != '\0') 
{ 
	dest[len] = src[j]; 
	len++; 
	j++; 
} 
  
	return (dest); 
}
