#include "MyContainer.hpp"

int main(){   
    std::cout << "Hello World!\n\n";
    MyContainer m1(2);
    m1.add(5);
    m1.add(99);
    m1.print_content();
    
    std::cout << "\n";

    MyContainer m2 = std::move(m1);
    m2.print_content();

    std::cout << "\n";
    MyContainer m3 {2, 9, 1, 24};
    m3.print_content();

    return 0;
}