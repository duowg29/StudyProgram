//viet ham tinh tong cac chu so cua mot so nguyen
#include <stdio.h>
void tong()
{
	int n;
	printf ("Nhap mot so nguyen: ");
	scanf ("%d", &n);
	int tong=0;
	while (n!=0)
	{
		int m= n%10;
		tong+=m;
		n/=10;
	}
	printf ("Tong cac chu so la: %d", tong);
}
int main()
{
	tong();
}
