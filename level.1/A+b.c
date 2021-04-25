#include <stdio.h>

int main(){
	int A;
	int B;
	
	scanf("%d",&A);
	scanf("%d",&B);

	if(0<A && A<10 && 0<B && B<10)
		printf("%d\n",A+B);
	else
		printf("error\n");
	
	return 0;
}

