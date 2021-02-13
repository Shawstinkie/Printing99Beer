#include <iostream>

using namespace std;

void bottles(int x)
{	
	while(x !=0)
	{
		cout << x << " bottles of beer on the wall, " << endl;
		cout << x << " bottles of beer, " << endl;
		cout << "Take one down, pass it around, " << --x << " bottles of beer on the wall... " << endl;
		
	}
	bottles(x);
}

int main()
{
	bottles(99);
}
