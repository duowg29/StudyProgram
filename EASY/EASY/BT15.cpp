//tinh n giai thua
#include <stdio.h>
void giaithua()
{
	int n=1;
	int k;
	printf ("Nhap so n: ");
	scanf("%d", &k);
	if(n<0)
	{ 
	   printf("Vui long nhap lai so duong: ");
	   scanf ("%d", &n);
	}
	for (int i=1;i<k+1;i++)
	{
		n=i*n;
	}
	printf ("n!=%d", n);
}
int main()
{
	giaithua();
}
