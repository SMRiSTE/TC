#include <iomanip>
#include <algorithm>
#include"RACE.h"
#include"TC.h"
void RACE::pr_res() {
	int choice0;
	std::cout << "Добро пожаловать в гоночный симулятор!\n" << "1. Гонка для наземного транспорта\n" << "2. Гонка для воздушного транспорта\n" << "3. Гонка для наземного и воздушного транспорта\n" << "Выберите тип транспорта: ";
	std::cin >> choice0;
	if (choice0 == 1) {
		std::string TCname = " ";
		int dis;
		std::cout << "Введите длину дистанции (должна быть положительнна): ";
		std::cin >> dis;
		system("cls");
		int choice;
		std::cout << "Должно быть зарегестрировано хотя бы 2 транспортных средства\n 1.Зарегистрировать транспорт\n Выберите действие: ";
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
			std::cout << "Гонка для наземного транспорта. Расстояние: " << dis << std::endl << "Зарегестрированные транспортные средства: " << TCname << std::endl;
			std::cout << "1.Ботинки-вездеходы\n2.Метла\n3.Верблюд\n4.Кентавр\n5.Орёл\n6.Верблюд-быстроход\n7.Ковёр-самолёт\n0.Закончить регестрацию\n";
			choice = -1;
			std::cout << "Выберите транспорт или 0 для окончания регестрации: ";
			std::cin >> choice;
			if (choice == 0) {
				int choice1;
				std::cout << std::endl << "Выберите действие: " << std::endl << "1.Зарегестрировать транспорт" << std::endl << "2.Начать гонку" << std::endl;
				std::cin >> choice1;
				std::cout << std::endl;
				if (choice1 == 1) {
					continue;
				}
				else if (choice1 == 2) {
					if (num < 2) {
						std::cout << "Зарегестрированно недостаточно транспорта" << std::endl;
					}
					else {
						for (int k = 0; k < 4; k++) {
							for (int i = 0; i < 4; i++) {
								for (int j = 0; j < 3; j++) {
									if (arr[j] == 0) {
										double b = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = b;
										std::string str = strarr[j];
										strarr[j] = strarr[j + 1];
										strarr[j + 1] = str;
									}
									if (arr[j] > arr[j + 1] && arr[j + 1] != 0) {
										double b = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = b;
										std::string str = strarr[j];
										strarr[j] = strarr[j + 1];
										strarr[j + 1] = str;
									}
									else {
										continue;
									}
								}
							}
							if (arr[k] != 0) {
								std::cout << k + 1 << ". " << strarr[k] << std::endl;
							}
							else {
								continue;
							}
						}


						choice1 = -1;
						std::cout << std::endl << "1. Провести ещё одну гонку\n2. Выйти" << std::endl;
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
				if (arr[0] == 0) {
					num++;
					TC::Boots B;
					arr[0] = B.get_time(dis);
					strarr[0] = B.get_res();
					std::cout << std::endl << "Ботинки-вездеходы зарегестрированны\n";
					TCname += ", Ботинки-вездеходы";
				}
				else {
					std::cout << std::endl << "Ботинки-вездеходы уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 3) {
				if (arr[1] == 0) {
					num++;
					TC::Camel Cam;
					arr[1] = Cam.get_time(dis);
					strarr[1] = Cam.get_res();
					std::cout << std::endl << "Верблюд зарегестрированны\n";
					TCname += ", Верблюд";
				}
				else {
					std::cout << std::endl << "Верблюд уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 4) {
				if (arr[2] == 0) {
					num++;
					TC::Centavr Cent;
					arr[2] = Cent.get_time(dis);
					strarr[2] = Cent.get_res();
					std::cout << std::endl << "Кентавр зарегестрированны\n";
					TCname += ", Кентавр";
				}
				else {
					std::cout << std::endl << "Кентавр уже зарегестрирован!" << std::endl;
				}

			}
			else if (choice == 6) {
				if (arr[3] == 0) {
					num++;
					TC::FastCam FC;
					arr[3] = FC.get_time(dis);
					strarr[3] = FC.get_res();
					std::cout << std::endl << "Верблюд-быстроход зарегестрированны\n";
					TCname += ", Верблюд-быстроход";
				}
				else {
					std::cout << std::endl << "Верблюд-быстроход уже зарегестрирован!" << std::endl;
				}
			}
			else {
				std::cout << std::endl << "Попытка зарегестрировать неправильный тип транспортного средства" << std::endl;
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
		std::cout << "Введите длину дистанции (должна быть положительнна): ";
		std::cin >> dis;
		system("cls");
		int choice;
		std::cout << "Должно быть зарегестрировано хотя бы 2 транспортных средства\n 1.Зарегистрировать транспорт\n Выберите действие: ";
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
			std::cout << "Гонка для воздушного транспорта. Расстояние: " << dis << std::endl << "Зарегестрированные транспортные средства: " << TCname << std::endl;
			std::cout << "1.Ботинки-вездеходы\n2.Метла\n3.Верблюд\n4.Кентавр\n5.Орёл\n6.Верблюд-быстроход\n7.Ковёр-самолёт\n0.Закончить регестрацию\n";
			choice = -1;
			std::cout << "Выберите транспорт или 0 для окончания регестрации: ";
			std::cin >> choice;
			if (choice == 0) {
				int choice1;
				std::cout << std::endl << "Выберите действие: " << std::endl << "1.Зарегестрировать транспорт" << std::endl << "2.Начать гонку" << std::endl;
				std::cin >> choice1;
				std::cout << std::endl;
				if (choice1 == 1) {
					continue;
				}
				else if (choice1 == 2) {
					if (num < 2) {
						std::cout << "Зарегестрированно недостаточно транспорта" << std::endl;
					}
					else {
						for (int k = 0; k < 3; k++) {
							for (int i = 0; i < 3; i++) {
								for (int j = 0; j < 2; j++) {
									if (arr[j] == 0) {
										double b = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = b;
										std::string str = strarr[j];
										strarr[j] = strarr[j + 1];
										strarr[j + 1] = str;
									}
									if (arr[j] > arr[j + 1] && arr[j + 1] != 0) {
										double b = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = b;
										std::string str = strarr[j];
										strarr[j] = strarr[j + 1];
										strarr[j + 1] = str;
									}
									else {
										continue;
									}
								}
							}
							if (arr[k] != 0) {
								std::cout << k + 1 << ". " << strarr[k] << std::endl;
							}
							else {
								continue;
							}
						}

						choice1 = -1;
						std::cout << std::endl << "1. Провести ещё одну гонку\n2. Выйти" << std::endl;
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
				if (arr[0] == 0) {
					num++;
					TC::Broom B;
					arr[0] = B.get_time(dis);
					strarr[0] = B.get_res();
					std::cout << std::endl << "Метла зарегестрированны\n";
					TCname += ", Метла";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "Метла уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 5) {
				if (arr[1] == 0) {
					num++;
					TC::Eagle E;
					arr[1] = E.get_time(dis);
					strarr[1] = E.get_res();
					std::cout << std::endl << "Орёл зарегестрированны\n";
					TCname += ", Орёл";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "Орёл уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 7) {
				if (arr[2] == 0) {
					num++;
					TC::Carpet C;
					arr[2] = C.get_time(dis);
					strarr[2] = C.get_res();
					std::cout << std::endl << "Ковёр-самолёт зарегестрированны\n";
					TCname += ", Ковёр-самолёт";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "Ковёр-самолёт уже зарегестрирован!" << std::endl;
				}

			}
			else {
				std::cout << std::endl << "Попытка зарегестрировать неправильный тип транспортного средства" << std::endl;
			}
			counter += 1;
		}
		delete[] strarr;
		delete[] arr;
	}

	if (choice0 == 3) {
		std::string TCname = " ";
		int dis;
		std::cout << "Введите длину дистанции (должна быть положительнна): ";
		std::cin >> dis;
		system("cls");
		int choice;
		std::cout << "Должно быть зарегестрировано хотя бы 2 транспортных средства\n 1.Зарегистрировать транспорт\n Выберите действие: ";
		std::cin >> choice;
		std::cout << std::endl;
		system("cls");
		std::string* strarr = new std::string[7];
		double* arr = new double[7];
		for (int i = 0; i < 7; i++) {
			arr[i] = 0;
			strarr[i] = ", Ковёр-самолёт";
		}
		int num = 0;
		int counter = 0;
		while (true) {
			std::cout << "Гонка для воздушного транспорта. Расстояние: " << dis << std::endl << "Зарегестрированные транспортные средства: " << TCname << std::endl;
			std::cout << "1.Ботинки-вездеходы\n2.Метла\n3.Верблюд\n4.Кентавр\n5.Орёл\n6.Верблюд-быстроход\n7.Ковёр-самолёт\n0.Закончить регестрацию\n";
			choice = -1;
			std::cout << "Выберите транспорт или 0 для окончания регестрации: ";
			std::cin >> choice;
			if (choice == 0) {
				int choice1;
				std::cout << std::endl << "Выберите действие: " << std::endl << "1.Зарегестрировать транспорт" << std::endl << "2.Начать гонку" << std::endl;
				std::cin >> choice1;
				std::cout << std::endl;
				if (choice1 == 1) {
					continue;
				}
				else if (choice1 == 2) {
					if (num < 2) {
						std::cout << "Зарегестрированно недостаточно транспорта" << std::endl;
					}
					else {
						for (int k = 0; k < 7; k++) {
							for (int i = 0; i < 7; i++) {
								for (int j = 0; j < 6; j++) {
									if (arr[j] == 0) {
										double b = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = b;
										std::string str = strarr[j];
										strarr[j] = strarr[j + 1];
										strarr[j + 1] = str;
									}
									if (arr[j] > arr[j + 1] && arr[j + 1] != 0) {
										double b = arr[j];
										arr[j] = arr[j + 1];
										arr[j + 1] = b;
										std::string str = strarr[j];
										strarr[j] = strarr[j + 1];
										strarr[j + 1] = str;
									}
									else {
										continue;
									}
								}
							}
							if (arr[k] != 0) {
								std::cout << k + 1 << ". " << strarr[k] << std::endl;
							}
							else {
								continue;
							}
						}
						choice1 = -1;
						std::cout << std::endl << "1. Провести ещё одну гонку\n2. Выйти" << std::endl;
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
			if (choice == 1) {
				if (arr[0] == 0) {
					num++;
					TC::Boots B;
					arr[0] = B.get_time(dis);
					strarr[0] = B.get_res();
					std::cout << std::endl << "Ботинки-вездеходы зарегестрированны\n";
					TCname += ", Ботинки-вездеходы";
				}
				else {
					std::cout << std::endl << "Ботинки-вездеходы уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 3) {
				if (arr[1] == 0) {
					num++;
					TC::Camel Cam;
					arr[1] = Cam.get_time(dis);
					strarr[1] = Cam.get_res();
					std::cout << std::endl << "Верблюд зарегестрированны\n";
					TCname += ", Верблюд";
				}
				else {
					std::cout << std::endl << "Верблюд уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 4) {
				if (arr[2] == 0) {
					num++;
					TC::Centavr Can;
					arr[2] = Can.get_time(dis);
					strarr[2] = Can.get_res();
					std::cout << std::endl << "Кентавр зарегестрированны\n";
					TCname += ", Кентавр";
				}
				else {
					std::cout << std::endl << "Кентавр уже зарегестрирован!" << std::endl;
				}

			}
			else if (choice == 6) {
				if (arr[3] == 0) {
					num++;
					TC::FastCam FC;
					arr[3] = FC.get_time(dis);
					strarr[3] = FC.get_res();
					std::cout << std::endl << "Верблюд-быстроход зарегестрированны\n";
					TCname += ", Верблюд-быстроход";
				}
				else {
					std::cout << std::endl << "Верблюд-быстроход уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 2) {
				if (arr[4] == 0) {
					num++;
					TC::Broom B;
					arr[4] = B.get_time(dis);
					strarr[4] = B.get_res();
					std::cout << std::endl << "Метла зарегестрированны\n";
					TCname += ", Метла";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "Метла уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 5) {
				if (arr[5] == 0) {
					num++;
					TC::Eagle E;
					arr[5] = E.get_time(dis);
					strarr[5] = E.get_res();
					std::cout << std::endl << "Орёл зарегестрированны\n";
					TCname += ", Орёл";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "Орёл уже зарегестрирован!" << std::endl;
				}
			}
			else if (choice == 7) {
				if (arr[6] == 0) {
					num++;
					TC::Carpet C;
					arr[6] = C.get_time(dis);
					strarr[6] = C.get_res();
					std::cout << std::endl << "Ковёр-самолёт зарегестрированны\n";
					TCname += ", Ковёр-самолёт";
					TCname[1] = ' ';
				}
				else {
					std::cout << std::endl << "Ковёр-самолёт уже зарегестрирован!" << std::endl;
				}

			}
			else {
				std::cout << std::endl << "Попытка зарегестрировать неправильный тип транспортного средства" << std::endl;
			}
			counter += 1;
		}
		delete[] strarr;
		delete[] arr;
	}

	/*system("cls");*/
};