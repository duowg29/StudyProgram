//Doi so tien bang so sang so tien bang chu
#include <stdio.h>
#include <math.h>
#include <string.h>
const char* mot[] = {"","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
const char* muoi[] = {"muoi","muoi mot","muoi hai","muoi ba","muoi bon","muoi nam","muoi sau","muoi bay","muoi tam","muoi chin"};
void chuc(int tien)
{
    if(tien == 0) 
    printf("");
    else if (tien < 10) {
    printf("%s ", mot[tien]);
    } else if (tien < 20)
    printf("%s ", muoi[tien - 10]); 
	else {
        int ten = tien / 10;
        int one = tien % 10;
        printf("%s muoi ", muoi[ten]);
        if (one != 0) 
        printf("%s ", mot[one]);
    }
}
void tramnghin(int tien)
{
	int hundred = tien / 100;
    int ten = tien % 100;

    if (hundred != 0) {
        printf("%s tram ", mot[hundred]);
    }
    
    chuc(ten);
}
void doctien(int tien)
{
	int billion = tien / 1000000000;
    int million = (tien / 1000000) % 1000;
    int thousand = (tien / 1000) % 1000;
    int k = tien % 1000;
    tramnghin(billion);
    if (billion != 0) {
        printf("ti");
    }
    tramnghin(million);
    if (million != 0) {
        printf("trieu ");
    }
    tramnghin(thousand);
    if (thousand != 0) {
        printf("nghin ");
    }
    tramnghin(k);
    printf("dong\n");
}
int main()
{
	int tmp;
	printf("Nhap so tien(Dong): ");
	scanf("%d", &tmp);
	doctien(tmp);
	return 0;
}
