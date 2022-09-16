#include "MyContainer.hpp"

int main(){
    MyContainer m1(3);
    m1.add(2);
    m1.add(4);
    m1.add(11);

    m1.print_content();

    MyContainer m3(1);
    m3.add(2);
    std::cout << "\n";
    m3.print_content();

    std::cout << "\n";
    MyContainer m2(m1);
    m2.print_content();    

    return 0;
}