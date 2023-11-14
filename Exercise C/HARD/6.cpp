//viet ham noi 2 mang so da cho theo thu tu giam dan
#include <stdio.h>
void sapxep()
{
	int n,tmp;
	int c[100];
	printf("Nhap so luong phan tu cua moi mang: ");
	scanf("%d", &n);
	printf("Nhap theo thu tu tang dan\n");
	printf("Nhap mang a: \n");
	for (int i=0; i<n; i++)
	{
		printf ("Nhap so thu %d: ", i);
		scanf("%d", &c[i]);
	}
	printf("Nhap mang b: \n");
	for (int i=0; i<n; i++)
	{
		printf ("Nhap so thu %d: ", i);
		scanf("%d", &c[i+n]);
	}
	for (int i=0; i<2*n-1; i++)
	{
		for(int j=0; j<2*n-i-1; j++)
		{
	    	if (c[j]<c[j+1])
	    	{
			    tmp=c[j];
		    	c[j] = c[j+1];
		    	c[j+1] = tmp;
	    	}
	    }
	}
	printf("\nMang c la: ");
	for (int i=0; i<2*n;i++)
	{
		printf(" %d", c[i]);
	}
}
int main()
{
    sapxep();
}
