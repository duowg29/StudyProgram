//viet ham tinh so tien it nhat de quy doi
#include <stdio.h>
void quydoi()
{
	int cnt=0;
	int m;
	int tien[]={500,200,100,50,20,10,5,2,1};
	int n=sizeof(tien)/sizeof(tien[0]);
	printf("Nhap so tien can doi: ");
	scanf("%d", &m);
	for (int i = 0; i < n; i++) {
        cnt += m / tien[i];
        m %= tien[i];
    }
    printf("So dong tien it nhat de quy doi: %d",cnt);
}
int main()
{
	quydoi();
}
