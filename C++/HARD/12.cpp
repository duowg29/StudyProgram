//viet ham tra ve so chu so 0 cua n giai thua
#include <stdio.h>
void number()
{
	int n;
	printf("Nhap gia tri cua n: ");
	scanf("%d", &n);
	int giaithua=1;
	int cnt=0;
	for (int i=1;i<n+1;i++)
	{
		giaithua=giaithua*i;
	}
	int tmp=giaithua;
	while(tmp>0)
	{
		if(tmp%10==0&&tmp>=10)
		{
			cnt++;
	    }
	    tmp/=10;
	}
	printf("n giai thua=%d", giaithua);
	printf("\nso chu so 0 la cua n giai thua=%d", cnt);

}
int main()
{
	number();
}
