//Viet ham tinh so tien thue phai nop trong n thang cua mot nguoi
#include <stdio.h>
void thue()
{
	int n;
	float thue;
	float tienthue=0;
	int a[100];
	printf ("Nhap vao so thang: ", &n);
	scanf ("%d", &n);
	for (int i=0; i<n;i++)
	{
		printf("Nhap luong(trieu) cua thang %d: ", i);
		scanf ("%d", &a[i]);
		if(a[i]>50)
		{
			thue=0.2;
		}
		if(a[i]>=20&&a[i]<=50)
		{
			thue=0.1;
		}
		if(a[i]<20)
		{
			thue=0.05;
		}
		tienthue=float(tienthue+a[i]*thue);
	}
	printf ("So tien thue phai dong la: %.2f trieu dong", tienthue);
	
	
}
int main()
{
    thue();
}
