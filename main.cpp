#include "MyContainer.hpp"

int main(){   
    std::cout << "Hello World!\n\n";
    MyContainer<int> m1(2);
    m1.add(5);
    m1.add(99);
    m1.print_content();
    
    std::cout << "\n";

    MyContainer<int> m2 = std::move(m1);
    m2.print_content();

    std::cout << "\n";
    MyContainer<double> m3 {2.2, 9.1, 10.0, 24.99};
    m3.print_content();

    return 0;
}