//viet ham kiem tra so nguyen to
#include <stdio.h>
void kiemtra()
{
	int n;
    printf ("Nhap so: ");
    scanf ("%d", &n);
    for (int i=2;i<n;i++)
	{
		if(n%i!=0)
		{
			printf ("La so nguyen to");
		}else
	     printf ("Khong phai so nguyen to");
	     break;
	}
}
int main()
{
	int n;
	kiemtra();
}
