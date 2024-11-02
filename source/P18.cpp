#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int Header_5(void) //P.18
{
	char string1[60] = "Welcome";
	char string2[60];

	int len;

	strcpy_s(string2,string1);
	printf("string2=%s\n", string2);

	len = strlen(string2);
	printf("¦r¦êªø«×%d\n", len);

	system("pause");
	return 0;
}
