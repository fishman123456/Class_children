﻿// Class_children.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class children
{
private:
	string name;
	string soneme;
	int age;
public:
	void setChildren(string nameS, string sonemeS, int ageS)
	{
		name = nameS;
		soneme = sonemeS;
		age = ageS;
	}
	void getChildren()
	{
		cout << "Children: " << name << "-" << soneme << "-" << age << endl;
	}
}; // конец  класса

int main()
{ 
	children s;
	s.setChildren("oleg", "shakshin", 4);
	s.getChildren();
	children m;
	m.setChildren("georgiy", "polyshkin", 67);
	m.getChildren();
	children one;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.