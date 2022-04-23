#include <stdio.h>

int main(){
	float a;
	float b;
	float division;
	printf("ahlan\n");
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	division=a/b;
	printf("%.2f/%.2f=%.2f",a,b,division);

	return 0;
}