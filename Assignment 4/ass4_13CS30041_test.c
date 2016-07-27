/*
Name: Aishik Chakraborty
Roll No: 13CS30041
*/

//#include <stdio.h>
static st_var=0;
extern int ext_var;

enum Day
{
	Mon = 1,
	Tue,
	Wed,
};

void func_random(int x, ...)
{
	x = x&2;
}
inline int mystery_func()
{
    st_var++;
	unsigned int u_var = 10;
	int temp = u_var/5;
	float f = 2.3;
	f = (float)(temp*3);
	
	int random[4] = {0,1,2,3};
	_Bool bl=1;
	double _Complex compl;
	
	return 1;
}

int sum(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int main()
{
	auto int x=3;
	x=3*4+4;
	short x3 = 0;
	restrict int a1=3;
	volatile double a2=4;
	int logic1 = ~(1);
	int logic2 = !(1);
	
	double d1 = 2e+4;
	
	node -> data =2; //arbitrary case, assume a struct node is present
	
	char c='r';
	char x1[]="This is a string!";
	
	func_random(2);
	int y = mystery_func();
	int z = sum(x,y);
	
	for(int i;i< 5;i++);
	
	for(int i=0;i<5;);
	int j=0;
	for(;j<2;j++)
		x++;
	int y = 10;
	if(x<30)
		y--;
	else if(x<=30)
		y+=1;
	else if(x>30)
		y=-y;
	else if(x>=30)
		y*=1;
	else
		y/=1;
	
	if(y==3 || y==2 )
		x=x<<1;
	
	int m=2,n=4;
	do
	{
		n=n&1;
		m--;
	}while(m>=0);
	
	m=2;
	n=4;
	while(m<n)
	{
		n--;
	}
	int temp=2;
	switch(temp)
	{
		case 1: n^=2;
			break;
		case 2: n|=3;
			break;
		case 3: n= sizeof(m);
		default:n<<=2;
	}
	char *str="This is another string";
	char c_str = *(str + 4);
	
	return 0;
}