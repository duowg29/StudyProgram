//viet ham kiem tra tinh dong nhat chan le cua 2 so
#include <stdio.h>
void Check (int &a, int &b)
{
	printf ("Nhap a: ");
	scanf ("%d", &a);
	printf ("Nhap b: ");
	scanf ("%d", &b);
	if(a%2==0&&b%2==0)
	{
		printf ("a va b deu la so chan");
	if(a%2!=0&&b%2!=0)
	{
		printf ("a va b deu la so le");
	}
	}  else printf ("1 so chan 1 so le");
}
int main()
{
	int a,b;
	Check(a,b);
}
