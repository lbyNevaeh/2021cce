#include <stdio.h>

int main( void )
{
    int i,j;
    int n;

    printf("�п�J�j�p:\n");
    scanf("%d",&n);

	for(int i=1;i<=n;i++){
		//printf("%d: ",i);

		for(j=1;j<=i;j++) printf(" ");

		for(j=1;j<=n;j++) printf("*");

		printf("\n");}

   return 0;
}
