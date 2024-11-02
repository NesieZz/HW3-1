#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

long facrorial(long number);//P.27

int Header_9(void) //P.27
{
	int i;
	for (i = 0; i <= 10; i++)
	{
		printf("%2d! = %1d\n", i, facrorial(i));
	}
	system("pause");
	return 0;
}


long facrorial(long number) //P.27
{
	if (number <= 1)
	{
		return 1;
	}
	else
	{
		return (number * facrorial(number - 1));
	}
}
