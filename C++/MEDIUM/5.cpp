//Viet ham nhan gia tri cua 2 mang so
#include <stdio.h>
void nhan()
{
	int n;
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d", &n);
	if(n<0)
	{
		printf("Vui long nhap lai so duong: ");
		scanf("%d", &n);
	}
	int a[n];
	int b[n];
	int c[n];
	printf("Nhap vao mang a:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d = ", i);
        scanf("%d", &a[i]);
    }
    printf("Nhap vao mang b:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d = ", i);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) 
	{
		c[i]=a[i]*b[i];
    }   
	printf("Mang c sau khi nhan la: ");
    for (int i = 0; i < n; i++) {
        printf(" %d", c[i]);
    }
}
int main()
{
    int n;
    nhan();
}
