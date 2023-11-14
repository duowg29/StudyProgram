//Viet ham tim vi tri 1 so
#include <stdio.h>
int timvitri(int n, int k, int a[])
{
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
    }
    printf ("Nhap phan tu ban muon tim: ");
    scanf("%d", &k);
    int bien=0;
    int m;
   	for (int i=0; i<n; i++)
	{
        if(a[i]==k)
        {
        	m=i;
         	bien++;
     	}
    }
    if (bien>0)
    {
    	printf ("\nTim thay phan tu %d voi vi tri thu %d", k, m);
	}
    else
	{
    	printf ("Khong tim thay phan tu trong mang");
		return -1;	
	}
}
int main()
{
	int n,k;
	int a[100];
    timvitri (n,k,a);
}
