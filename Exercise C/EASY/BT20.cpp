//chuoi logic !(!(true||false)&&(!true&&false))&&(true&&!false) tra ve true hay false
#include <stdio.h>
int main()
{
    if (!(!(true||false)&&(!true&&false))&&(true&&!false))
    {
    	printf ("true");
	}else printf ("False");
}
