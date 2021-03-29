#include <stdio.h>
#define PI 3.14
int main ()
{
	printf ("welcome to C\n");
	printf ("program introdution C\n");
	printf ("my name is Binh NGuyen\n");
	printf ("nice to meet you\n");
	
	/*toan*/
	double r, c, ac, as, v;
	r = 548;
	printf("Radius = %f\n", r);
	c = 2.0 * PI * r;
	printf("Circle's circumference = %f\n", c);
	ac = PI * r * r;
	printf("Circle's area = %f\n", ac);
	as = 4.0 * PI * r * r;
	printf("Sphere's area = %f\n", as);
	v = 4.0/3.0 * PI * r * r * r;
	printf("Sphere's volume = %f\n", v);
	return 0;
}
