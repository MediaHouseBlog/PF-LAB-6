#include <stdio.h>

main()
{
	int t, i;
	printf("Enter the Number ");
	scanf("%d",&t);
	while(i <= t)
	{
		printf("%d \t x \t %d \t = \t %d\n",t,i,t&i);
		i++;
	}
}
