//doan code sau tra ve gia tri bao nhieu
#include <stdio.h>
int main()
{
	int total =0; 
	for (int i =1; i<5;i++)
	{
		if(i%2==0){
		total=total+1;
	    }
	    else total=total*2;
	}
	printf ("%d", total);
}
