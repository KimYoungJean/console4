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
			j = +1;
		}
	}
	k += 1;
	cout << endl;
}