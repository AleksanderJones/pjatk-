#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

auto sprawdz(std::string) -> bool;

auto main(int argc, char *argv[]) -> int {
if(argc <= 1) 
{
        std::cout << "Brak argumentow";
        return 1;
    } else if(argc > 2) {
        std::cout << "Za duzo argumentow\n";
        return 2;
    }
    std::string arg(argv[1]);
if(!sprawdz(arg)) 
{
        std::cout << "Ujemna liczba lub nie jest to liczba ";
        return 3;
    }
    int x;
    std::stringstream num;
    num << arg;
    num >> x;
if(x == 2147483647) 
{
        std::cout << "Liczba za duza na INT\n";
        return 4;
    }

do
{
        std::cout << x << ".\n";
        x--;
    } 
    while(x >= 0);

    return 0;
}

auto sprawdz(std::string y) -> bool
{
    std::locale abc;
for(auto const &a : y) {
    if(!std::isdigit(a, abc))
            return false;
    }
    return true;
}