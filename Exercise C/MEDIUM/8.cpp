//Viet ham tim vi tri mot chuoi trong mot chuoi khac 
#include <stdio.h>
#include <string.h>
void tim()
{
	char a[100];
	char b[100];
	int vitri;
	printf("Nhap chuoi ki tu ban dau: ");
	gets(b);
	printf ("Chuoi can tim la: ");
	gets(a);
	char *p=strstr(b,a);
	if (p != NULL) 
	{
    vitri = p - b + 1;
    printf("Chuoi can tim duoc tim thay tai vi tri %d \n",vitri);
    } else
	{
        printf("Chuoi can tim khong duoc tim thay\n");
    }
}
int main()
{
	char a[100];
	char b[100];
	int vitri;
	tim();
}
