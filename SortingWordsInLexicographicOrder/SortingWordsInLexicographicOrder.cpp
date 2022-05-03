﻿// SortingWordsInLexicographicOrder.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <set>
#include <string>

int main()
{
	size_t n;
	std::cin >> n;
	std::set<std::string> ans;
	std::generate_n(std::inserter(ans, ans.begin()), n, []()
		{ 
			std::string s;
			std::cin >> s;
			std::transform(s.begin(), s.end(), s.begin(), std::tolower);
			return s;
		});
	std::for_each(ans.rbegin(), ans.rend(), [](std::string s)
		{
			std::cout << s << '\n';
		});
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
