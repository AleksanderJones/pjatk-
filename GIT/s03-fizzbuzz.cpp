#include <iostream>
#include <string>

auto main(int, char* argv[]) ->int
{

auto n = std::stoi(argv[1]);
int i = 1;

while (i < (n + 1))
{
    std::cout << "\n";
    std::cout << i;
    if (i % 3 == 0)
    {
        std::cout << "Fizz";
    }

    if (i % 5 == 0)
    {
        std::cout << "Buzz";
    }
    
    i += 1;
}

std::cout << "\n";

return 0;
}