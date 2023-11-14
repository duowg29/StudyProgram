//viet ham tim gia tri trung binh trong mang
#include <stdio.h>
void trungbinh(int a[], int &n)
{
	float tb=0;
	printf ("Nhap so luong phan tu: ");
	scanf ("%d", &n);
	if(n<0)
	{ 
	   printf("Vui long nhap lai so duong: ");
	   scanf ("%d", &n);
	}
	for (int i=0; i<n; i++)
	{
		printf ("Nhap phan tu thu %d: ", i);
		scanf ("%d", &a[i]);
		tb=tb+a[i];
	}
	tb=tb/n;
	printf ("Gia tri trung binh cua mang: %.2f", tb);
}
int main()
{
	int a[100];
	int n;
	trungbinh(a, n);
}
