#include <stdio.h>

int main(){
	int heure,minute,seconde;
	printf("ahlan\n");
	printf("heure:");
	scanf("%d",&heure);
	printf("minute:");
	scanf("%d",&minute);
	printf("seconde:");
	scanf("%d",&seconde);
	if(heure<=23 && minute<=59 && seconde<=59){
		
		printf("%d:%d:%d",heure,minute,seconde);
	}else{
		printf("heure invalide");
	}
 	
	return 0;
}