#include <stdio.h>

int main(){
	int mois, jour;
	printf("ahlan\n");
	printf("mois: ");
	scanf("%d",&mois);
	printf("jour: ");
	scanf("%d",&jour);
	
	if(mois==1 || mois==2 || (mois==3 && jour<21) || (mois==12 && jour>=21)){
		
		printf("hiver");
	}			
	if(mois==4 || mois==5 || (mois==6 && jour<21) || (mois==12 && jour>=21)){
		
		printf("le printemps");
	}
		if(mois==7 || mois==8 || (mois==9 && jour<21) || (mois==12 && jour>=21)){
		printf("lete");
	}
			if(mois==10 || mois==10 || (mois==12 && jour<21) || (mois==12 && jour>=21)){
		printf("automns");
	}
}