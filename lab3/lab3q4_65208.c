#include <stdio.h>
int main(){
	int a=0;
	int b=0;
	float c=0.0;
	printf("enter number : ");
	while(scanf("%d", &a)){
		if(a > 0){	
			b = b + a;
			c+=1;
		}
		else{break;}
	}
	printf("summation = %d\n", b);
	printf("average = %0.2f\n" ,b/c);
	return 0;
}
