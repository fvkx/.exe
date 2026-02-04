#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main () {
	char enter_Password[50];
	const char * password = "kauhgdiuaw";
while (true){ 	
	scanf(":%s\n",enter_Password);


	if (strcmp (enter_Password, password ) == 0 ){
		printf("correct_password");
	}
	else 
	{
		printf("incorrect_password");
	}
}
return 0;
}
