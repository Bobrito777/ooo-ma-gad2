#include <iostream>
#include <iomanip>
int main()
{
    char f = ' ';
    char c = '3';
    std::cout << std::setfill(f)<<std::setw(1)<<"";
    std::cout << std::setfill(c)<<std::setw(4)<<"";
    std::cout << std::setfill(f)<<std::setw(1)<<"";
    std::cout << std::endl;

    std::cout << std::setfill(c)<<std::setw(2)<<"";
    std::cout << std::setfill(f)<<std::setw(2)<<"";
    std::cout << std::setfill(c)<<std::setw(2)<<"";
    std::cout << std::endl;
    
    std::cout << std::setfill(f)<<std::setw(3)<<"";
    std::cout << std::setfill(c)<<std::setw(3)<<"";
    std::cout << std::endl;

     std::cout << std::setfill(c)<<std::setw(2)<<"";
    std::cout << std::setfill(f)<<std::setw(2)<<"";
    std::cout << std::setfill(c)<<std::setw(2)<<"";
    std::cout << std::endl;

    std::cout << std::setfill(f)<<std::setw(1)<<"";
    std::cout << std::setfill(c)<<std::setw(4)<<"";
    std::cout << std::setfill(f)<<std::setw(1)<<"";
    std::cout << std::endl;

}