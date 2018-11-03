//M9_Week10_pg166_4c_Amir
#include<stdio.h>
float gallonTolitres(float a);

main()
{
	float g, l;
	printf("Input volume in gallons >> ");
	scanf("%f",&g);
	l = gallonTolitres(g);
	printf("Volume in litres is %.4f L",l);
}

float gallonTolitres(float a)
{
	a*=3.7854;
	return a;
}
