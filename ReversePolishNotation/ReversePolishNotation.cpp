﻿// ReversePolishNotation.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stack>
#include <string>

int main()
{
	std::stack<int32_t> opz;
	std::string s;
	while (std::getline(std::cin, s) && s[0] != '=') {
		if (s.length() == 1 && s[0] < '0') {
			int32_t n2 = opz.top();
			opz.pop();
			int32_t n1 = opz.top();
			opz.pop();
			switch (s[0]) {
			case '+':
				opz.push(n1 + n2);
				break;
			case '-':
				opz.push(n1 - n2);
				break;
			case '*':
				opz.push(n1 * n2);
				break;
			case '/':
				opz.push(n1 / n2);
				break;
			}
		}
		else
			opz.push(std::stoi(s));
	}
	std::cout << opz.top() << '\n';
	return 0;
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