#include<stdio.h>
int main()
{
	int r;
	float pi=3.14,area;
	printf("\nEnter the radius of circle : ");
	scanf("%d",&r);
	area=pi*r*r;
	printf("\nArea of Circle=%f",area);
	
	float a;
	printf("\n Enter the A of square : ");
	scanf("%f",&a);
	printf("\n Area of square = %f",a*a);
	
	float b,c;
	printf("\n Enter the A and B of rectangle : ");
	scanf("%f%f",&b,&c);
	printf("\n Area of square = %f",b*c);
	
	float d,h;
	float ar;
	printf("\nENTER THE BASE VALUE OF TRIANGLE : ");
	scanf("%f",&d);
	printf("\nENTER THE PARPENDICULAR OF HEIGHT : ");
	scanf("%f",&h);
	ar = (d*h)/2;
	printf("\n Area of the triangle = %f",ar);
	
	float P,R,T;
	float simple_of_interest;
	printf("\nENTER THE PRINCIPALE AMOUNT : ");
	scanf("%f",&P);
	printf("\nENTER THE RATE OF INTEREST  : ");
	scanf("%f",&R);
	printf("\nENTER THE HOW MANY TIME, YEARS FOR INTEREST : ");
	scanf("%f",&T);
	simple_of_interest = (P*R*T)/100;
	printf("\n Simple Of Interest = %f",simple_of_interest);
	
	int q;
	float PI=3.14,are;
	printf("\nEnter the radius of circle : ");
	scanf("%d",&q);
	are=2*(PI*q*q);
	printf("\nPERIMETER of CIRCLE=%f",are);
	
	return 0;
}