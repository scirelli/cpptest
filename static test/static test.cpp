#include <iostream.h>

static int TestStatic(int);

void main()
{
	int x=0, y=0;

	for(x=0; x<=10; x++)
	{
		y = TestStatic(x);
		cout << y;
	}

	return;
}

static int TestStatic(int x) //the static doesn't translate through the function
{
	static int y=0;

	y += 1;

	return y;
}