#include <iomanip>
#include"RACE.h"
#include"kyrs.h"
void RACE::pr_res() {
	int choice0;
	std::cout << "����� ���������� � �������� ���������!\n" << "1. ����� ��� ��������� ����������\n" << "2. ����� ��� ���������� ����������\n" << "3. ����� ��� ��������� � ���������� ����������\n" << "�������� ��� ����������: ";
	std::cin >> choice0;
	if (choice0 == 1) {
		std::string TCname = " ";
		int dis;
		std::cout << "������� ����� ��������� (������ ���� �������������): ";
		std::cin >> dis;
		system("cls");
		int choice;
		std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n 1.���������������� ���������\n �������� ��������: ";
		std::cin >> choice;
		std::cout << std::endl;
		system("cls");
		std::string* strarr = new std::string[4];
		double* arr = new double[4];
		for (int i = 0; i < 4; i++) {
			arr[i] = 0;
			strarr[i] = " ";
		}
		int num = 0;
		int counter = 0;
		while (true) {
			std::cout << "����� ��� ��������� ����������. ����������: " << dis << std::endl << "������������������ ������������ ��������: " << TCname << std::endl;
			std::cout << "1.�������-���������\n2.�����\n3.�������\n4.�������\n5.���\n6.�������-���������\n7.����-������\n0.��������� �����������\n";
			choice = -1;
			std::cout << "�������� ��������� ��� 0 ��� ��������� �����������: ";
			std::cin >> choice;
			if (choice == 0) {
				int choice1;
				std::cout << std::endl << "�������� ��������: " << std::endl << "1.���������������� ���������" << std::endl << "2.������ �����" << std::endl;
				std::cin >> choice1;
				std::cout << std::endl;
				if (choice1==1) {
					continue;
				}
				else if (choice1 == 2) {
					if (num < 2) {
						std::cout << "����������������� ������������ ����������" << std::endl;
					}
					else {
						for (int i = 0; i < 4; i++) {
							for (int j = 0; j < 3; j++) {
								if (arr[i] < arr[j + 1]&&arr[j+1]!=0) {
									int b = arr[j];
									arr[j] = arr[j + 1];
									arr[j + 1] = b;
								}
								else {
									continue;
								}
							}
							if (arr[i] != 0) {
								std::cout << i+1 << ". " << strarr[i] << std::endl;
							}
							else {
								continue;
							}
						}
						choice1 = -1;
						std::cout << std::endl << "1. �������� ��� ���� �����\n2. �����" << std::endl;
						std::cin >> choice1;
						if (choice1 == 1) {
							RACE R;
							delete[] strarr;
							delete[] arr;
							R.pr_res();
						}
						else if (choice1 == 2) {
							exit(0);
						}
					}
				}
			}
			if (choice == 1) {
				if (arr[counter] == 0) {
					num++;
					Boots B;
					arr[counter] = B.get_time(dis);
					strarr[counter] = B.get_res();
					std::cout << std::endl << "�������-��������� �����������������\n";
					TCname += ", �������-���������";
				}
				else {
					std::cout << std::endl << "�������-��������� ��� ���������������!" << std::endl;
				}
			}
			else if (choice == 3) {
				if (arr[counter] == 0) {
					num++;
					Camel Cam;
					arr[counter] = Cam.get_time(dis);
					strarr[counter] = Cam.get_res();
					std::cout << std::endl << "������� �����������������\n";
					TCname += ", �������";
				}
				else {
					std::cout << std::endl << "������� ��� ���������������!" << std::endl;
				}
			}
			else if (choice == 4) {
				if (arr[counter] == 0) {
					num++;
					Centavr Can;
					arr[counter] = Can.get_time(dis);
					strarr[counter] = Can.get_res();
					std::cout << std::endl << "������� �����������������\n";
					TCname += ", �������";
				}
				else {
					std::cout << std::endl << "������� ��� ���������������!" << std::endl;
				}
			
			}
			else if (choice == 6) {
				if (arr[counter] == 0) {
					num++;
					FastCam FC;
					arr[counter] = FC.get_time(dis);
					strarr[counter] = FC.get_res();
					std::cout << std::endl << "�������-��������� �����������������\n";
					TCname += ", �������-���������";
				}
				else {
					std::cout << std::endl << "�������-��������� ��� ���������������!" << std::endl;
				}
			}
			else {
				std::cout << std::endl << "������� ���������������� ������������ ��� ������������� ��������" << std::endl;
			}
			TCname[1] = ' ';
			counter += 1;
		}
		delete[] strarr;
		delete[] arr;
	}
	if (choice0 == 2) {
		std::string TCname = " ";
		int dis;
		std::cout << "������� ����� ��������� (������ ���� �������������): ";
		std::cin >> dis;
		system("cls");
		int choice;
		std::cout << "������ ���� ���������������� ���� �� 2 ������������ ��������\n 1.���������������� ���������\n �������� ��������: ";
		std::cin >> choice;
		std::cout << std::endl;
		system("cls");
		std::string* strarr = new std::string[3];
		double* arr = new double[3];
		for (int i = 0; i < 3; i++) {
			arr[i] = 0;
			strarr[i] = " ";
		}
		int num = 0;
		int counter = 0;
		while (true) {
			std::cout << "����� ��� ��������� ����������. ����������: " << dis << std::endl << "������������������ ������������ ��������: " << TCname << std::endl;
			std::cout << "1.�������-���������\n2.�����\n3.�������\n4.�������\n5.���\n6.�������-���������\n7.����-������\n0.��������� �����������\n";
			choice = -1;
			std::cout << "�������� ��������� ��� 0 ��� ��������� �����������: ";
			std::cin >> choice;
			if (choice == 0) {
				int choice1;
				std::cout << std::endl << "�������� ��������: " << std::endl << "1.���������������� ���������" << std::endl << "2.������ �����" << std::endl;
				std::cin >> choice1;
				std::cout << std::endl;
				if (choice1 == 1) {
					continue;
				}
				else if (choice1 == 2) {
					if (num < 2) {
						std::cout << "����������������� ������������ ����������" << std::endl;
					}
					else {
						for (int i = 0; i < 3; i++) {
							for (int j = 0; j < 2; j++) {
								if (arr[i] < arr[j + 1] && arr[j + 1] != 0) {
									int b = arr[j];
									arr[j] = arr[j + 1];
									arr[j + 1] = b;
								}
								else {
									continue;
								}
							}
							if (arr[i] != 0) {
								std::cout << i + 1 << ". " << strarr[i] << std::endl;
							}
							else {
								continue;
							}
						}
						choice1 = -1;
						std::cout << std::endl << "1. �������� ��� ���� �����\n2. �����" << std::endl;
						std::cin >> choice1;
						if (choice1 == 1) {
							delete[] strarr;
							delete[] arr;
							RACE R;
							R.pr_res();
						}
						else if (choice1 == 2) {
							exit(0);
						}
					}
				}
			}
			if (choice == 2) {
				if (arr[counter] == 0) {
					num++;
					Broom B;
					arr[counter] = B.get_time(dis);
					strarr[counter] = B.get_res();
					std::cout << std::endl << "����� �����������������\n";
					TCname += ", �����";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "����� ��� ���������������!" << std::endl;
				}
			}
			else if (choice == 5) {
				if (arr[counter] == 0) {
					num++;
					Eagle E;
					arr[counter] = E.get_time(dis);
					strarr[counter] = E.get_res();
					std::cout << std::endl << "��� �����������������\n";
					TCname += ", ���";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "��� ��� ���������������!" << std::endl;
				}
			}
			else if (choice == 7) {
				if (arr[counter] == 0) {
					num++;
					Carpet Car;
					arr[counter] = Car.get_time(dis);
					strarr[counter] = Car.get_res();
					std::cout << std::endl << "������� �����������������\n";
					TCname += ", �������";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "������� ��� ���������������!" << std::endl;
				}

			}
			else {
				std::cout << std::endl << "������� ���������������� ������������ ��� ������������� ��������" << std::endl;
			}
			counter += 1;
		}
		delete[] strarr;
		delete[] arr;
	}
	
	/*system("cls");*/
	
}