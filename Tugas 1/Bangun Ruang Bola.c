#include <stdio.h>

int main ()
{
	float d, phi, r, v;
	d = 15;
	phi = 3.14;
	r = d/2;
	v = (4.0/3)*phi*r*r*r;
	printf("hasil :%2.f\n", v);
	return 0;
}
