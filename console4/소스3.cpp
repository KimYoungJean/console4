#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void main()
{
	/*
	4. 조건문
	조건문이란?
	- 프로그램이 실행되는 동안 정해져 있는 경우의 수에 맞춰서 서로 다른 결과를 도출하기 위한 문법을 의미한다.
	- 조건문을 이용하면 다양한 결과를 출력하는 프로그램을 작성하는 것이 가능하다.
	- 조건문, 그리고 반복문은 순서대로 가장 시간 복잡도에 좋지 않은 영향을 끼친다.
	조건문의 종류

	1.if~ else 조건문
	- 조건적 실행(조건에 따라 실행 유무를 결정)
	- 조건을 만족하는 if문을 발견하면 나머지 if문을 건너뛴다.
	- if 와 else가 만나는 이루는 문장의 수는 둘이 아니라 하나이다.
	- if~else문에서 조건의 만족여부 검사는 위에서 아래로 전차지향적으로 진행이 된다.
	- 조건이 만족되어 해당 블록을 실행하고나면, 마지막 else까지는 건너뛴다.
	- 조건을 만족하지 않으면 마지막의 else문을 실행한다.
	ex)

	if(조건식)
	{
		조건식이 참이맨 실행될 코드
	}
	else if (조건식)
	{
		조건식이 참이맨 실행될 코드
	}
	else
	{
		위 조건들이 만족되지 않으면 실행될 코드
	}

	//2.
	if(조건식)
	{
		조건식이 참이맨 실행될 코드
	}
	if (조건식)
	{
		조건식이 참이맨 실행될 코드
	}
	else
	{
		위 조건들이 만족되지 않으면 실행될 코드
	}

	2. switch~case조건문
	-스위치 문을 사용하는 경우는 일일히 조건별로 세팅을 해주기가 용이함.
	- 상태 변화/ 조건이 많은 경우에 사용하면 좋은 효율을 낼 수 있다.

	그리고 if문과 매우 흡사하다는 특징이 있으며, 스위치 문으로 작성이 되는 로직은 if문으로도 전부 교체가 가능하다.
	> 단, 코드량이 엄청나게 길어질 수 있으니 주의 요망


	witch(Data Type(인자 값))
	{
		case 1:

		case 2:

		case 3:

		default:

		-인자값에는 int형과 char형이 들어올 수 있다.
		ㄴ 하지만 보통 int형을 많이 쓴다.(cpu연산 우선순위가 높기 때문)

		-스위치문은 인자값에 따라서 실행할 영역을 결정한다.
		ex: 인자 값이 1이면 case 1: 이 실행되고/ 인자값이 2이면 case 2:이 실행된다.

		switch ~case조건문의 default는 if~else문의 else문에 해당하는 역할을 수행한다.

		또한 switch ~case 조건문은 if~else문과는 다르게 범위에 해당하는 조건을 줄 수 없을 뿐더러 조건문을 사용할 수 있는 자료형은 정수형만 취급을 한다.

		data type 자체에는 실수를 받으나 실수를 받아도 어차피 case 1.4 이런게 안되기 때문에 쓸 필요자체가 없다.


		c/c++언어 제어문의 종류

		1. return
		ㄴ 조건문일떄는 다시 돌려 보낸다. / 함수에서는 값을 반환하고 초기화 한다.

		2. continue
		ㄴ 조건문일때는 연산을 하지않고 건너 뛴다./ while문에서는 바로 이전 문항으로.

		3. break
		ㄴ 만나면 멈춘다./ while문 안에서는 while문을 탈출하는 용도로 사용할 수 있다.

		4. go to
		ㄴ. 보통 점프문이라고 불리며 goto에 라벨을 지정하면 중간에 있는 흐름과 코드는 무시하고 해당 라벨로 이동한다.

		ㄴ 권장(x) 그래도 go to가 뭔지 알고는 있어야한다. 객체지향 파괴범

		ㄴ break로 빠지면 메모리는 다 남아있는상태에서 탈출하는데 go to로 빠지면 메모리 다 없애면서 나간다.

		5, break문은 반복문을 탈출하는 용도로 자주 사용이 된다.
		ㄴ 이 친구의 유무에 따라서 결과값이 완전히 달라지니 주의 한다.

	*/

	int nOperator;

	cout << "내가 입력한 숫자=";
	cin >> nOperator;

	if (nOperator == 0)
	{
		cout << "리그 오브 레전드" << endl;
	}

	else if (nOperator == 1)
	{
		cout << "로스트 아크" << endl;
	}

	else
	{
		cout << "블러드" << endl;
	}

	cout << "\n";



	int inputNumber;
	cout << "0,1,2 중 하나를 선택하시오" << endl;
	cout << "내가 입력한 숫자:" << endl;
	cin >> inputNumber;

	switch (inputNumber)
	{
	case 0:
	cout << "0번 입력시 출력" << endl;
	case 1:
	cout << "1번 입력시 출력" << endl;
	case 2:
	cout << "2번 입력시 출력" << endl;
	default:
	cout << "그 외 입력시 출력" << endl;
	break;
	}
	cout << "\n";

//전위 증/감 연산자는 해당 변수의 값을 증/감 시킨 후 연산에 활용하는 반면 ++i
//후위 증/감 연산자는 연산에 활용이 된 후 해당 변수의 값이 변경된다.i++

	int nValue = 10;

	cout << "증/감 연산 결과 출력:" << endl;

	cout << " 값은:" << ++nValue << endl;  //11

	cout << " 값은:" << --nValue << endl; //10

	cout << " 값은:" << nValue++ << endl; //10

	cout << " 값은:" << nValue-- << endl; //11

	cout << " 값은:" << ++nValue << endl;

	int nValueA, nValueB, nValueC, nValueD,
	nValueA, nValueB, nValueC, nValueD = 10;

	if ((nValueA == nValueB++) && (nValueC < ++nValueD))
	{

	cout << nValueA << endl;
	cout << nValueA << endl;
	cout << nValueA << endl;
	cout << nValueA << endl;

	}
/*
goto문
객체 지향에서는 사용할때 극 주의가 필요하다.
잘못사용한 /남발한 goto문은 가독성을 심하게 떨어뜨리게 코드의 흐름을 방해한다
스파게티 코드가 될 가능성이 높음

ex)

goto 레이블;

레이블:

*/
}
