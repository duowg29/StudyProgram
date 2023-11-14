//Tim so nho nhat cua mang
#include <stdio.h>
void Min(int a[], int n, int min)
{
	printf ("Nhap so luong phan tu: ");
	scanf ("%d", &n);
	if(n<0)
	{ 
	   printf("Vui long nhap lai so duong: ");
	   scanf ("%d", &n);
	}
	for (int i=0; i<n;i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf ("%d", &a[i]);
	}
	min=a[0];
	for (int i=0;i<n;i++)
	{
		if(min>a[i])	
      	min=a[i];
	}
	printf ("So nho nhat trong day la: %d", min);
}
int main()
{
	int a[100];
	int n,min;
	Min(a,n,min);
}

