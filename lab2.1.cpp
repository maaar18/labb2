//task A

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>

int main()
{
	int number;
	std::cin >> number;

	std::string input;
	getline(std::cin >> std::ws, input);

	std::vector<int> vectorD;
	std::stringstream ss(input);
	int digit;
	while (ss >> digit)
	{
		vectorD.push_back(digit);
	}

	std::sort(vectorD.begin(), vectorD.end()); 

	auto result = unique(begin(vectorD), end(vectorD));

	vectorD.erase(result, vectorD.end());

	std::cout << vectorD.size();

	return 0;
}