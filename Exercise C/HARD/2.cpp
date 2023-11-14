//viet ham random tra ve gia tri random trong khoang a,b
#include <stdio.h>
#include <stdlib.h>
int randomnumber(int a, int b)
{
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	int random = rand() % (b - a +1) + a;
	printf ("%d", random); 
}
int main()
{
	int a,b;
	randomnumber(a,b);
}
