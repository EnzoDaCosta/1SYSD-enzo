#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int nbgen=rand()%10+1;

	printf("%d\n",nbgen);
	return 0;
}
