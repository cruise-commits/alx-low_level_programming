#include "main.h" 
  
/** 
* _strcat - funcction to concatinate two strings 
* 
* @dest: param destination 
* @src: param source 
* 
* Return: return dest 
*/ 
  
	char *_strcat(char *dest, char *src) 
{ 
	int i; 
	int j; 
  
	j = 0; 
	i = 0; 
  
	while (dest[i] != '\0') 
	i++; 
  
	while (src[j] != '\0') 
{ 
	dest[i] = src[j]; 
	j++; 
	i++; 
} 
	dest[i] = '\0'; 
  
 	return (dest); 
}
