#include <stdio.h>

int main()
{
	int day;
	printf(" Enter Day 1. Monday\n 2. Tuesday\n 3. Wednesday\n 4. Thursday \n 5. Friday \n 6. Saturday \n 7. Sunday ");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Your Monday Dinner is Biryani\t");
			break;
		case 2:
			printf("Your Tuesday Dinner is Sabzi\t");
			break;
		case 3:
			printf("Your Tuesday Dinner is Aloo Gosht\t");
			break;
		case 4:
			printf("Your Thursday Dinner is KFC\t");
			break;
		case 5:
			printf("Your Friday Dinner is Daal Chawal \t");
			break;
		case 6:
			printf("Your Saturday Dinner is Chicken Pulao \t");
			break;
		case 7:
			printf("Outing\t");
			break;
		default:
			printf("None\t");
	}
}
