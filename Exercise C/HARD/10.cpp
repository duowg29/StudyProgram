//Viet ham xao tron cac phan tu trong mang
#include <stdio.h>
#include <stdlib.h>
void xaotron()
{
	int n;
	int a[100];
	printf("Nhap so luong phan tu trong mang:");
	scanf("%d", &n);
	for (int i=0;i<n;i++)
	{
		printf("Nhap phan tu %d: ",i);
		scanf("%d", &a[i]);
	}
	printf("\nMang truoc khi duoc xao tron: ");
	for (int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for (int i=0;i<n;i++)
	{
		int j = rand() % (i + 1);
		int tmp = a[i];
		a[i]=a[j];
		a[j]=tmp;
	}
	printf("\nMang sau khi duoc xao tron: ");
	for (int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

}
int main()
{
	xaotron();
}

