//viet ham cat string them vi tri bat dau va vi tri ket thuc
#include <stdio.h>
#include <string.h>
void catchuoi()
{
	char str[100];
	int a,b;
	printf ("Nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
	str[strcspn(str, "\n")] = '\0';
	printf("Nhap vi tri bat dau: ");
    scanf("%d", &a);
    printf("Nhap vi tri ket thuc: ");
    scanf("%d", &b);
    int dodai = strlen(str);
    int dodaimoi = b - a + 1;
    char ketqua[dodaimoi + 1];
    strncpy(ketqua, str + a, dodaimoi);
    ketqua[dodaimoi] = '\0';
    printf("Chuoi sau khi cat la: %s\n", ketqua);
}
int main()
{
    catchuoi();
}
