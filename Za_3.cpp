#include <iostream>
#include <vector>
#include "Za_1.cpp"
#include "Za_2.cpp"

using namespace std;

int Student::count = 0;

int main()
{
	vector<Student> students;

	students.emplace_back("Ilya", 24, GENDER_MAN, 70.3, 2022);
	students.emplace_back("Dima", 20, GENDER_MAN, 85.7, 2022);

	Student::printCount();

	students.emplace_back("Anna", 27, GENDER_WOM, 52.1, 2022);
	students.emplace_back("Olga", 22, GENDER_WOM, 47.3, 2022);
	students.emplace_back("Kriss", 18, GENDER_WOM, 63.8, 2022);

	Student::printCount();

	// Za_2

	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

	// Za_3
	/*
		Для реализации игры в Блэкджек необходимы объекты:

		1. Колода карт
		2. Игрок
		3. Дилер

		Классы:

		1. Карта
			- номинал
			- масть
		2. Колода
			- массив ссылок на объекты класса Карта
		3. Игрок (абстрактный класс)
			- Имя игрока
		4. Игрок 
		5. Дилер 
		6. Рука (набор карт)
			- массив ссылок на карты каждого игрока
		7. Игра
			- текущая Колода
			- текущий Дилер
			- текущий Игрок
	*/

	return 0;
}