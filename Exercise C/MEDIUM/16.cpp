//in ra n so dau tien trong chuoi fibonaci
#include <stdio.h>
void fibonaci()
{
	int a[10000];
	int n;
	printf("Nhap n so: ");
	scanf("%d", &n);
	a[0]=1;
	a[1]=1;
	for (int i=0;i<n;i++)
	{
		a[i+1]=a[i]+a[i-1];
	}
	printf("Chuoi fibonaci gom %d so la: ", n);
	for (int i=0;i<n;i++)
	{
		printf(" %d", a[i]);
	}
}
int main()
{
	fibonaci();
}

