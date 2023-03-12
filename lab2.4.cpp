#include <iostream>
#include <set>
#include <string>

int main()
{
	std::set<std::string> setV;
	std::string operation, expr;

	while (std::cin >> operation >> expr)
	{
		if (operation == "+")
		{
			setV.insert(expr);
		}
		else if (operation == "-")
		{
			setV.erase(expr);
		}
		else if (operation == "?")
		{
			if (setV.count(expr) > 0)
			{
				std::cout << "YES" << std::endl;
			}
			else
			{
				std::cout << "NO" << std::endl;
			}
		}
		else if (operation == "#")
		{ 
			break;
		}
			

	}




	return 0;
}



