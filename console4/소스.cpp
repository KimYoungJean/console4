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
			j++;
		}
		k++ ;
	}
	
	cout << endl;

	int numD = 0;

	do
	{
		cout << "do ~ while문" << endl;
		numD++;
	} while (numD < -1);

		cout << "\n";

	do
	{
		cout << "2번째 do~while문"<<endl;
			numD++;
	} while (numD < 3);

	int total = 0, num = 0;
	
	do
	{
		cout << "숫자를 입력해라.(단,0 을 입력하면 프로그램을 종료하겠다.)" << endl;
		cin >> num;
		total += num;

	} while (num != 0);

	cout << "숫자의 합은:" << total << endl;
	cout << '\n';
}

//03. do ~while문
/*

int numD=0;

do
{
 cout<<"do ~ while문"<<endl;
 numD++
}
while(numD<-1);

cout<<"\n";

while문과 do while의 차이점
-반복의 횟수가 정해져 있다.
ㄴ 자연스럽게 전환이 된다. for or while

-반복의 횟수가 정해져 잇지 않다.
ㄴ 이럴떄는 고민이 필요하다. while?do while?

위에 do~while문을 while문을 바꾸면 프로그램은 바로 종료된다.
num=0으로 시작하기 때문에,
do while에서는 입력창이 뜨지만 while에서는 입력창 자체가 뜨지 않는다.

-코딩 스타일.
1. 주도적  (c#)
2. 방어적  (c,c++)  
3. 순응적(x) - 언리얼 방식

*/
//실습 
// ㄴ do~while구구단
// 그래서? -> 너는 언제 쓰는데?


