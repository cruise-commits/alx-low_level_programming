#include "main.h" 
  
/** 
* reverse_array - reverse an integer array 
* 
* @a: array param 
* @n: array length 
* 
* Return: nothing 
*/ 
  
	void reverse_array(int *a, int n) 
{ 
	int x, y, z; 
  
	for ((x = 0, y = n - 1); x < y; x++, y--) 
{ 
	z = a[x]; 
	a[x] = a[y]; 
	a[y] = z; 
} 
}
