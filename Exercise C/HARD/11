//viet ham tra ve chu so cuoi cung khac 0 cua n giai thua
#include <stdio.h>
void giaithua()
{
	int n;
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n);
	int giaithua=1;
	for (int i=1;i<n+1;i++)
	{
		giaithua=giaithua*i;
	}
	printf("n giai thua=%d", giaithua);
	int tmp=giaithua;
	while(tmp % 10 == 0)
	{
		tmp /=10;
	}
	tmp%=10;
	printf ("\nChu so cuoi cung khac 0 cua n giai thua la: %d", tmp);
}
int main()
{
	giaithua();
}
