#include <iostream.h>
#include <cstring>


void main()
{
	char s[] = "how-are-you-doing-?";
	char *tokenPtr;

	cout<< "We are going to tokenize the following string :\n";
	cout<< s;

	tokenPtr = strtok(s, "-");

	while(tokenPtr != NULL)
	{
		cout<< tokenPtr << "\n";
		tokenPtr = strtok(NULL, "-");
	}
	return;
}