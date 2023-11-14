//viet ham dem so luong so chan trong 1 mang
#include <stdio.h>
void Dem(int &n, int dem)
{
	dem=0;
	int a[100];
	printf ("Nhap so luong phan tu: ");
	scanf ("%d", &n);
	if(n<0)
	{ 
	   printf("Vui long nhap lai so duong: ");
	   scanf ("%d", &n);
	}
	for (int i=0;i<n;i++)
	{
		printf ("Nhap phan tu thu %d: ",i);
		scanf ("%d", &a[i]);
		if (a[i]%2==0)
		{
			dem++;
		}
	}
	printf ("so luong so chan la: %d", dem);
}
int main()
{
	int a[100];
	int n,dem;
	Dem(n,dem);
}
