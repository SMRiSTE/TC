#include"RACE.h"
#include"kyrs.h"
void RACE::pr_resGR() {
	int dis;
	std::cout << "Введите длину дистанции (должна быть положительнна): ";
	std::cin >> dis;
	system("cls");
	int choice;
	std::cout << "Должно быть зарегестрировано хотя бы 2 транспортных средства\n 1.Зарегистрировать транспорт\n Выберите действие: ";
	std::cin >> choice;
	int* arr = new int;
	int num = 0;
	while (true) {
		std::cout << "Гонка для наземного транспорта. Расстояние: " << dis << std::endl;
		std::cout << "1.Ботинки-вездеходы\n2.Метла\n3.Верблюд\n4.Кентавр\n5.Орёл\n6.Верблюд-быстроход\n7.Ковёр-самолёт\n0.Закончить регестрацию\n";
		int choise1;
		std::cout << "Выберите транспорт или 0 для окончания регестрации: ";
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