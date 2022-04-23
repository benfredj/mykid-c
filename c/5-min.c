#include <stdio.h>

int main(){
	float a;
	float b;
	float min;
	printf("ahlan\n");
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	if(a>b){
		min=b;
	}else{
		min=a;
	}
	
	printf("min(%.2f,%.2f)=%.2f",a,b,min);

	return 0;
}