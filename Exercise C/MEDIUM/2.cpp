//Viet ham noi 2 mang voi nhau
#include <stdio.h>
void noi()
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
	int c[2*n];
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
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        c[i+n] = b[i];
    }
    printf("Mang c sau khi noi la: ");
    for (int i = 0; i < 2*n; i++) {
        printf("%d ", c[i]);
    }
}
int main()
{
   int n;
   noi();
}
