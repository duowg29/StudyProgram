//Viet ham hoan doi gia tri cua 3 so a, b va c voi nhau 
#include <stdio.h>
void Nhap(int &a, int &b, int &c) 
{
	printf ("Nhap so a: ");
	scanf ("%d", &a);
	printf ("Nhap so b: ");
	scanf ("%d", &b);
	printf ("Nhap so c: ");
	scanf ("%d", &c);
}
void Hoandoi(int a, int b, int c)
{
	int k = a;
	a = b;
	b = c;
	c = k;
	printf ("3 so a,b,c duoc hoan doi la: %d%d%d", a,b,c);
}
int main ()
{
	int a,b,c;
	Nhap(a,b,c);
	Hoandoi(a,b,c);
}
