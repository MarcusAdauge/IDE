#include <iostream>
using namespace std;

int main()
{
	int* array = new int[20];
	for(int i = 0; i < 20; i++)
	{
		if(i%2 == 0) 
		{ 
		  array[i] = i;
		  continue;
		}

	     array[i] = i + 1;
	}

	return 0;
}
