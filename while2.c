#include <stdio.h>

int main()
{
	int balance = 1000;
	int withdraw;
	printf("Enter the amount you want to withdraw ");
	scanf("%d",&withdraw);
	while(withdraw > balance)
	{
		printf("Insufficient Balance, Try Again ");
		scanf("%d",&withdraw);
	}
	{
		balance -= withdraw;
		printf("Transaction Succeed The remaining balance is %d",balance);
	}
}
