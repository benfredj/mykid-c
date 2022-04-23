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
	
	if(heure<=23 && minute<=59 && seconde<=59 ){
		if(seconde==59){
			seconde=0;
			if(minute==59){
				minute=0;
		   		if(heure==23){
		    		heure=0;	    		
				}else{
					heure=heure+1;
				}		
			}else{
				minute=minute+1;	
			}
		}else{
		seconde=seconde+1;	
		}
	
		printf("%d:%d:%d",heure,minute,seconde);	
	}else{
		printf("heure invalide\n");
	}
 
	return 0;
}