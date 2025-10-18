#include <iostream>
#include <string>

int main () {

    std::cout << " Hi , Please Enter your First Name : " << std::endl ;
    std::string fName ;
    std::cin >> fName ;

    std::cout << " Welcome to programing World \"" << fName << "\" Please Enter your last Name : " << std::endl ;
    std::string lName ;
    std::cin >> lName ;

    std::cout << "  its Great , your full Name is \"" << fName + lName << "\"" << std::endl ;

    return 0 ;
}