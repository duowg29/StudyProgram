//Viet ham tinh so tien khach phai tra khi vao nha nghi dua theo gio khach vao va gio khach ra
#include <stdio.h>
void tinhtoan()
{
	int tongtien=0;
	int giovao,giora,sogio;
	printf ("Nhap gio vao: ");
	scanf ("%d", &giovao);
	printf ("Nhap gio ra: ");
	scanf ("%d", &giora);
	sogio=giora + (24-giovao);
	if(sogio<=2)
	{
		tongtien=70*sogio;
	}else tongtien=50*sogio;
	if (giora>= 8)
	{
		tongtien+=160;
		int themgio = giora - 8;
		tongtien+= themgio*40;
	}
	printf ("So tien khach phai tra la: %d", tongtien);
}
int main()
{
	tinhtoan();
}
