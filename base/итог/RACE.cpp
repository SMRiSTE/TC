#include"RACE.h"
#include"kyrs.h"
void RACE::pr_resGR() {
	int dis;
	std::cout << "������� ����� ��������� (������ ���� �������������): ";
	std::cin >> dis;
	system("cls");
	int choice;
	std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n 1.���������������� ���������\n �������� ��������: ";
	std::cin >> choice;
	int* arr = new int;
	int num = 0;
	while (true) {
		std::cout << "����� ��� ��������� ����������. ����������: " << dis << std::endl;
		std::cout << "1.�������-���������\n2.�����\n3.�������\n4.�������\n5.���\n6.�������-���������\n7.����-������\n0.��������� �����������\n";
		int choise1;
		std::cout << "�������� ��������� ��� 0 ��� ��������� �����������: ";
		std::cin >> choise1;
		if (choise1 == 0) {
			break;
		}
		switch (choise1)
		{
		case 1:

#ifdef Boots
	std::cout << "ok";
#else 
	Boots B;
	arr[num] = B.get_time(dis);
	std::cout << "nk";
#endif 

		}
		num++;
		system("cls");
	}
	std::cout << arr[0];
	delete [] arr;
	
}