// TheMostPopularWord.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <set>
#include <map>
#include <string>
#include <algorithm>

int main()
{
	size_t n;
	std::cin >> n;
	std::multiset<std::string> ans;
	std::generate_n(std::inserter(ans, ans.begin()), n, []()
		{
			std::string s;
			std::cin >> s;
			std::transform(s.begin(), s.end(), s.begin(), std::tolower);
			return s;
		});
	std::map<std::string, size_t> ms;
	std::transform(ans.begin(), ans.end(), std::inserter(ms, ms.begin()), [&ans](std::string s)
		{
			return std::make_pair(s, ans.count(s));
		});
	auto res = std::max_element(ms.begin(), ms.end(), [](auto& const a, auto& const b)
		{
			return a.second < b.second;
		});
	std::cout << (*res).first << ' ' << (*res).second << '\n';
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
