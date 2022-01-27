#include <iostream> 
#include <string>

auto main(int argc, char *argv[]) -> int {

auto arg1 = std::string{argv[1]};
auto arg2 = std::string{argv[2]};

if ( argc > 1 ) 
{ 

if (arg1 == "-r" | arg2 == "-r") 
{

int arg_reverse;
for( arg_reverse = argc-1; arg_reverse > 0; arg_reverse-- ) 
{

auto argument = std::string{argv[arg_reverse]}; 
std::cout << argument;
if ( arg1 == "-l" | arg2 =="-l") {std::cout << " \n";} else {std::cout << " ";} ; }
}

else 
{ 

int arg_normal;
for ( arg_normal = 1; arg_normal <= argc-1; arg_normal++) {

auto argument = std::string{argv[arg_normal]}; 
std::cout << argument;
if ( arg1 == "-l" | arg2 =="-l") {std::cout << " \n";} else {std::cout << " ";} ; } 
}



if ( arg1 == "-n" | arg2 == "-n") {std::cout << " ";} else {std::cout << " \n";} 
return 0;

} else std::cout << "Wrong number of arguments! You need at least 2. \n";
return 1;

}