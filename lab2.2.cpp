//task D

#include <iostream>
#include <stack>
#include <string>

bool cor(const std::string& sequence) {
    std::stack<char> brackets;

    for (char bracket : sequence) {
        if (bracket == '(' || bracket == '{' || bracket == '[') 
        {
            brackets.push(bracket);
        }
        else 
        {
            if (brackets.empty()) 
            {
                return false;
            }
            char top = brackets.top();
            if ((top == '(' && bracket == ')') || (top == '{' && bracket == '}') || (top == '[' && bracket == ']')) 
            {
                brackets.pop();
            }
            else 
            {
                return false;
            }
        }
    }

    return brackets.empty();
}

int main() {
    std::string sequence;
    std::getline(std::cin, sequence);
    if (cor(sequence)) 
    {
        std::cout << "yes" << std::endl;
    }
    else 
    {
        std::cout << "no" << std::endl;
    }
}