#include <stdio.h>
int main()
{
	char string[20]= "abcd";
	int i;
	
	printf("%d", sizeof(string));
	i = printf("%s\n", string);
	printf("%d\n", i);
	
	return 0;
}
