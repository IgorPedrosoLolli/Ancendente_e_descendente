#include <stdio.h>

int main (void)
{
	int x, y;
	
	while(1){
		scanf("%d %d", &x, &y);
	
		if(x == y)
			break;
		else {
			if(x > y)
				printf("Decrescente\n");
			else
					printf("Crescente\n");
		}
	}
			
	return 0;
}
