//viet ham lay 1 so phan tu cua mang so dua vao vi tri dau va cuoi
#include <stdio.h>
void sapxep()
{
	int a[100];
	int dau,cuoi,n;
	printf ("Nhap so luong phan tu: ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("Vui long nhap lai so duong: ");
		scanf("%d", &n);
	}
	for (int i=0;i<n;i++)
	{
		printf ("Phan tu thu %d= ", i);
		scanf("%d", &a[i]);
	}
	printf ("Mang vua nhap la: ");
	for (int i=0;i<n;i++)
	{
		printf ("%d ", a[i]);
	}
	printf ("\nChon vi tri dau: ");
	scanf("%d", &dau);
	printf ("\nChon vi tri cuoi: ");
	scanf("%d", &cuoi);
	for (dau-1;dau<cuoi+1;dau++)
	{
		printf ("%d", a[dau-1]);
	}
}
int main()
{
	int a[100];
	sapxep();
}
