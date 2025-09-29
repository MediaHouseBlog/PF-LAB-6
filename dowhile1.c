#include <stdio.h>
#include <string.h>

int main()
{
	char userDbName[20] = "admin";
	char userDbPassword[20] = "1234";
	
	char userName[21];
	char userPassword[21];
	
	int loggedIn = 0;

	do{
		printf("Enter your UserName ");
		scanf("%s",userName);
		printf("Enter Your Password ");
		scanf("%s",&userPassword);
		if(strcmp( userName , userDbName)==0 && strcmp(userPassword, userDbPassword)==0 )
		{
			printf("Login Successful!");
			loggedIn=1;
		}
		else
		{
			printf("Invalid Credentials! Please Try Again\n");
		}
	}
	while(!loggedIn);

}
