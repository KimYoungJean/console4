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
		cout << "ü�� = " << playerHP << enld;


	}

	// �߰�ȣ �ȿ��� ��������� ���� = ��� ����

	cout << '\n';
	int numC = 0;
	while (numC < 5)
	{
		cout << "while���� ���ư���" << endl;
		numC++;
	}
	// while���� ������ �������� ����� �ִ°��� �����ִ°� ���� �߿��ϴ�

	// �ݺ����� ���ǹ� ��ü�� ����ϰ� ���鼭 ���Ŀ��� �����ִ°� �������� �پ��.
	cout << '\n';



  */

	cout << "while�� ������" << endl;

	int k = 2;
	while (k < 10)
	{
		int j = 1;
		cout << k << "�� ���" << endl;
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
		cout << "do ~ while��" << endl;
		numD++;
	} while (numD < -1);

		cout << "\n";

	do
	{
		cout << "2��° do~while��"<<endl;
			numD++;
	} while (numD < 3);

	int total = 0, num = 0;
	
	do
	{
		cout << "���ڸ� �Է��ض�.(��,0 �� �Է��ϸ� ���α׷��� �����ϰڴ�.)" << endl;
		cin >> num;
		total += num;

	} while (num != 0);

	cout << "������ ����:" << total << endl;
	cout << '\n';
}

//03. do ~while��
/*

int numD=0;

do
{
 cout<<"do ~ while��"<<endl;
 numD++
}
while(numD<-1);

cout<<"\n";

while���� do while�� ������
-�ݺ��� Ƚ���� ������ �ִ�.
�� �ڿ������� ��ȯ�� �ȴ�. for or while

-�ݺ��� Ƚ���� ������ ���� �ʴ�.
�� �̷����� ����� �ʿ��ϴ�. while?do while?

���� do~while���� while���� �ٲٸ� ���α׷��� �ٷ� ����ȴ�.
num=0���� �����ϱ� ������,
do while������ �Է�â�� ������ while������ �Է�â ��ü�� ���� �ʴ´�.

-�ڵ� ��Ÿ��.
1. �ֵ���  (c#)
2. �����  (c,c++)  
3. ������(x) - �𸮾� ���

*/
//�ǽ� 
// �� do~while������
// �׷���? -> �ʴ� ���� ���µ�?


