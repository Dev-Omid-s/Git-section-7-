#include <iostream>
#include <string>



void parent_name ( std::string fName , std::string faName , std::string moName ) {

std::cout << " Good Well \"" << fName << "\" your father Name is \'" << faName <<"\' & your Mother Name is \'" << moName << "\' ." << std::endl ;
}

int main () {

    std::cout << " Hi , Please Enter your First Name : " << std::endl ;
    std::string fName ;
    std::cin >> fName ;

    std::cout << " Welcome to programing World \"" << fName << "\" Please Enter your last Name : " << std::endl ;
    std::string lName ;
    std::cin >> lName ;

    std::cout << "  its Great , your full Name is \"" << fName + lName << "\" ." << std::endl ;
    std::cout << " Please Enter your Age : " << std::endl ;
    int Age ;
    std::cin >> Age ;

    std::cout << " Good job , Please Enter your Father & Mother Name in order . " << std::endl ;
    std::string faName ;
    std::getline(std::cin >> std::ws , faName) ;

    std::string moName ; 
    std::getline(std::cin >> std::ws , moName) ;
 
    parent_name ( fName , faName , moName ) ;

    return 0 ;
}