#include <stdio.h>
#include <math.h>
//tinh c bang a mu b
void tinhtoan(int &a, int &b, int &c)
{
	printf ("Nhap so a: ");
	scanf ("%d", &a);
	printf ("Nhap so b: ");
	scanf ("%d", &b);
	c=pow(a,b);
	printf ("c = %d",c);
}
int main()
{
	int a,b,c;
	tinhtoan(a,b,c);
} 
