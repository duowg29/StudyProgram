//Tim so lon nhat cua mang
#include <stdio.h>
void Max(int a[], int &n, int &max)
{
	printf ("Nhap so luong phan tu: ");
	scanf ("%d", &n);
	if(n<0)
	{ 
	   printf("Vui long nhap lai so duong: ");
	   scanf ("%d", &n);
	}
	max=a[0];
	for (int i=0; i<n;i++)
	{
		printf("Nhap phan tu thu %d: ", i);
		scanf ("%d", &a[i]);
		if(max<a[i])
		{	
		max=a[i];
	    }
	}
	printf ("So lon nhat trong day la: %d", max);
}
int main()
{
	int a[100];
	int n, max;
	Max(a,n,max);
}

