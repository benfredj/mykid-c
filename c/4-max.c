#include <stdio.h>

int main(){
	float a;
	float b;
	float max;
	printf("ahlan\n");
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	if(a<b){
		max=b;
	}else{
		max=a;
	}
	
	printf("max(%.2f,%.2f)=%.2f",a,b,max);

	return 0;
}