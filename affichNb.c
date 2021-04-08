#include <stdio.h>

int main(void){
	int n;
	printf("combien de nombre veux-tu calculer ? : "); 
	scanf("%d", &n);
		int nombre[50];//sizeof(int) * 100 ca fonctionne aussi 
		int i = 0;
		int resultat;
		while(i < n){
			printf("entrez un nombre : ");
			scanf("%d", &nombre[i]);
			resultat += nombre[i];
			i++;
		}
		printf("%d\n",resultat);
}
