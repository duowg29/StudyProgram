//ham sap xep 1 mang cac so theo thu tu tang hoac giam dan
#include <stdio.h>
#include <string.h>
void sapxep()
{
	int a[100];
	int n,k;
	char str1[100];
	char str2[]="tang";
	printf ("Nhap so luong phan tu: ");
	scanf("%d", &n);
	if(n<0)
	{ 
	   printf("Vui long nhap lai so duong: ");
	   scanf ("%d", &n);
	}
    for (int i = 0; i < n; i++)
	{
        printf("Phan tu thu %d = ", i);
        scanf("%d", &a[i]);
    }
    printf ("Mang ban dau la: ");
    for (int i = 0; i < n; i++)
    printf("%d", a[i]);
	printf ("\nBan muon sap xep tang hay giam: ");
    scanf("%s", str1);
    k = strcmp (str1, str2);
    if (k==0)
    {
        printf("\nMang theo thu tu tang dan la: ");
        for (int i = 0; i<n-1; i++)
        {
        	for(int j=0; j<n-i-i;j++)
			{
        	if (a[i]>a[i+1])
        	{
        		int temp= a[i];
        		a[i]=a[i+1];
        		a[i+1]= temp;
			}
		    }
		}
		for (int i = 0; i < n; i++)
        printf("%d", a[i]);
	}
	else 
	{
		printf ("\nMang theo thu tu giam dan la: ");
	    for (int i = 0; i<n-1; i++)
        {
        	for(int j=0; j<n-i-i;j++)
			{
        	if (a[i]<a[i+1])
        	{
        		int temp= a[i];
        		a[i]=a[i+1];
        		a[i+1]= temp;
			}
		    }
		}
		for (int i = 0; i < n; i++)
        printf("%d", a[i]);
	} 
}
int main()
{
	int n, k;
	int a[100];
	sapxep();
}
