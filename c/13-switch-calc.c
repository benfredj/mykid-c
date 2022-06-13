#include <stdio.h>

int main(){
	float a,b,resultat;
	char operation;
	printf("ahlan\n");
	printf("operation: ");
	scanf("%c",&operation);
	printf("a: ");
	scanf("%f",&a);
	printf("b: ");
	scanf("%f",&b);
	
	switch(operation){
		case '/':
			resultat=a/b;
			break;	
		case '*':
			resultat=a*b;
			break;	
		case '-':
			resultat=a-b;
			break;
		case '+':
			resultat=a+b;
			break;
		default:
			printf("operation invalide");		
	}
	
	if(operation=='/' || operation=='*'|| 
		operation=='-'|| operation=='+' ){
		printf("%.2f%c%.2f=%.2f\n",a,operation,b,resultat);
	}
	return 0;
}