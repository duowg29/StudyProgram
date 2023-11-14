//Viet ham tinh tong so le trong mot mang
#include <stdio.h>
void tongchan(int a[], int n)
{
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
    }
    int tong=0;
    for (int i=0;i<n;i++)
    {
    	if(a[i]%2!=0)
    	{
    		tong+=a[i];
		}
	}
	printf ("Tong so le la: %d", tong);
}
int main()
{
	int a[100];
	int n;
	tongchan(a, n);
}
