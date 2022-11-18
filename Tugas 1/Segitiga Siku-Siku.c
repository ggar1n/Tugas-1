#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
	float a, b, c;
	
	printf("mencari sisi miring (c) \n");
	printf("------------------------------\n");
	
	printf("masukkan nilai a: ");
	scanf("%f", &a);
	printf("masukkan nilai b: ");
	scanf("%f", &b);
	c = sqrt((a*a)+(b*b));
	printf("Nilai sisi miring adalah %2.f\n", c);
	return 0;
}
