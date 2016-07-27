//Assignment 3
//Test File
//File Name: ass3_13CS30041_test.c
/*
	**************************
	Name : Aishik Chakraborty
	Roll No. : 13CS30041
	**************************
*/
#include <stdio.h>
#include <complex.h>

extern int e;
enum
{
	Mon=1,
	Tue=2,
	Wed
};

typedef struct point
{
	int x;
	int y;
}point;

int main()
{	
	//Some arbitrary test cases to test the lexical analyser
	printf("**********************************Hello*******************************\n");
	_Bool bl=1;
	double _Complex compl;
	int x=3;
	int y=4;
	//Checking the relational operators
	if(x<y)
		printf("Less\n");
	else if(x<=y)
		printf("Less Equals\n");
	else if(x==y)
		printf("Equals\n");
	else if(x>=y)
		printf("Greater Equals\n");
	else if(x>y)
		printf("Greater\n");
	x-=1;
	y+=2;
	y/=2;
	x*=2;
	x^=3;
	auto int z=3;
	z/=1;
	volatile int z_vol=5;
	float f = .12;
	printf("Size of float is: %lu bytes\n",sizeof(f));
	int m1=2,m2=3;
	switch(m1)
	{
		case 2: m2>>=1;
			break;
		case 3:	m2<<=2;
			break;
		default: m2++;
	}
	char ch = 'a';
	char str[3] = "Hi";
	//Checking loop
	for(int i=0;i<3;i++)
	{
		if(ch=='a')
			printf("%d\n",x);
		else
			break;
	}
	
	double a = 3e+45;
	double b = -2E-7;
	double c = a*b;
	printf("Multiplying two doubles: %lf * %lf = %lf\n",a,b,c );
	
	point p;
	p.x=12;
	p.y=13;
	printf("We created a point (%d,%d)!\n",p.x,p.y);
	
	point *pt;
	pt=&p;
	printf("We are printing the point (%d,%d) again!\n",pt->x,pt->y);
	
	int t_int=2;
	
	int *r;
	r=&t_int;
	printf("The pointer r points to %d\n",*r);
	
	int arr[]={0,1,2};
	printf("The arr[] array elements are:\n");
	for(int i=0; i<3;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	return 0;
}