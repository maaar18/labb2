//task E

#include <iostream>
#include <string>
#include <vector>

int main() 
{
	std::vector <int> myVec;
	std::string str;
	std::getline(std::cin >> std::ws, str);

	int a = -1;
	int oper;

	for (auto it = str.begin(); it < str.end(); it++)
	{
		if (std::isdigit(*it))
		{
			myVec.push_back(*it - '0');
			a++;
		}

		if (*it == '+')
		{
			oper = myVec[a - 1] + myVec[a];
			myVec.pop_back();
			myVec.pop_back();
			myVec.push_back(oper);
			a--;
		}

		if (*it == '-')
		{
			oper = myVec[a - 1] - myVec[a];
			myVec.pop_back();
			myVec.pop_back();
			myVec.push_back(oper);
			a--;
		}

		if (*it == '*')
		{
			oper = myVec[a - 1] * myVec[a];
			myVec.pop_back();
			myVec.pop_back();
			myVec.push_back(oper);
			a--;
		}
	}

	std::cout << myVec[0] << std::endl;
	return 0;

}

