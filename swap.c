#include<stdio.h>
int main()
{
        float x,y;
	printf("x:");
	scanf("%1f",&x);
	printf("y:");
	scanf("%1f",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("after swap x:",x);
	printf("after swap y:",y);
        return 0;
}	

