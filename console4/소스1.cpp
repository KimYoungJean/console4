#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void main() {

	/*
	int playerHP = 1000;

	while (playerHP > 0)
	{
		int hit = 100;
		playerHP -= hit;
		cout << "체력 = " << playerHP << enld;


	}

	// 중괄호 안에서 만들어지는 변수 = 멤버 변수

	cout << '\n';
	int numC = 0;
	while (numC < 5)
	{
		cout << "while문이 돌아간다" << endl;
		numC++;
	}
	// while문은 조건을 거짓으로 만들어 주는것을 적어주는게 정말 중요하다

	// 반복문은 조건문 자체는 깔끔하게 들어가면서 수식에서 적어주는게 가독성이 뛰어나다.
	cout << '\n';



  */

	cout << "while문 구구단" << endl;

	int k = 2;
	while (k < 10)
	{
		int j = 1;
		cout << k << "단 출력" << endl;
		while (j < 10)
		{
			cout << k << "X" << j << "=" << k * j << endl;
			j = +1;
		}
	}
	k += 1;
	cout << endl;
}