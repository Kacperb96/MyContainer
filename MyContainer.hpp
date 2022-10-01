#include <iostream>
#include <exception>
#include <initializer_list>

class MyContainer{
public:
    MyContainer(std::size_t);

    MyContainer(const MyContainer&);

    MyContainer(MyContainer&&);

    MyContainer(std::initializer_list<int>);

    ~MyContainer();

    void operator=(const MyContainer&);

    void operator=(MyContainer&&);

    void add(int n);

    void print_content();

private:
    int* numbers;
    int count{};
    std::size_t size;
    static int container_number;
};