//viet ham dao nguoc thu cua mang
#include <stdio.h>
void daonguoc(int a[], int &n)
{
	printf ("Nhap so luong phan tu: ");
	scanf("%d", &n);
	if(n<0)
	{ 
	   printf("Vui long nhap lai so duong: ");
	   scanf ("%d", &n);
	}
	for (int i=0; i<n; i++)
	{
		printf ("Nhap phan tu thu %d: ", i);
		scanf("%d", &a[i]);
	}
}
int main()
{
	int a[100];
	int n;
	daonguoc(a, n);
	printf ("Day vua nhap la: ");
	for (int i=0;i<n;i++)
	{
		printf ("%d", a[i]);
	}
	printf ("\nDay dao nguoc la: ");
	for (int i=n-1;i>=0; i--)
	{
		printf ("%d", a[i]);
	}
}
