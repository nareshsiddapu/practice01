#include<stdio.h>
int main ()
{
	float a1,b1,a2,b2,a3,b3;
	a1=2;
	b1=6.8;
	a2=4.2;
	b2=3.57;
	a3=9.82;
	b3=85.673;
	printf("%3.1000f,%4.200000f\n",a1,b1);
	printf("%5.10f,%6.200000f\n",a2,b2);
	printf("%7.10000000f,%8.20000000000f\n",a3,b3);
	return 0;
}

