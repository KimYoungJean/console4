#include <iostream>

using std::cout;
using std::cin;
using std::endl;
// do~while구구단 만들기
void main()
{
	int i = 2;
	int j = 2;
	do {
		int j = 2;
	do 
	{
		cout << i << "x" << j << "=" << i * j << endl;
		j++;
	}while(j<=9);
	i++;
	cout << endl;
	}while (i <= 9);
	

}