//viet ham cat string them vi tri bat dau va so ki tu
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
    printf("Nhap so ki tu can cat: ");
    scanf("%d", &b);
    int dodai = strlen(str);
    char ketqua[b+1];
    strncpy(ketqua, str + a, b);
    ketqua[b = '\0'];
    printf("Chuoi sau khi cat la: %s\n", ketqua);
}
int main()
{
    catchuoi();
}
