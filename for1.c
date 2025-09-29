#include <stdio.h>

main()
{
	int t;
	int i ;
	printf("Enter the number ");
	scanf("%d",&t);
	for( i=1 ; i <= t ; i++)
	{
		printf(" %d \t x \t %d \t = \t %d \n",t,i,t*i);
	}
}
