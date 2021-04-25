#include <stdio.h>

struct point{
int x;
int y;
};

int main ()
{
	struct point p1;
	scanf("%d %d",&p1.x,&p1.y);

if(-10000<=p1.x && p1.x <=1000 && p1.x!=0){
 if(-10000<=p1.y && p1.y <=1000 && p1.y!=0){
	if(p1.x > 0 && p1.y > 0)
	printf("1\n");

	else if(p1.x <0 && p1.y >0)
	printf("2\n");

	else if(p1.x < 0 && p1.y < 0)
	printf("3\n");

	else 
	printf("4\n");
   	
}	else printf("error\n");
}
else
printf("error\n");



return 0;
}
