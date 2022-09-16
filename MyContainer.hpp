#include <iostream>
#include <exception>

class MyContainer{
public:
    MyContainer(std::size_t size)
        : size(size),
        numbers(new int[size]), 
        count(0){
            container_number++;
        }

    MyContainer(const MyContainer& other)
        : size(other.size), 
        numbers(other.numbers), 
        count(other.count){
            container_number++;
        }

    MyContainer(MyContainer&& other):
        size(other.size),
        numbers(other.numbers),
        count(other.count){
            container_number++;
            other.numbers = nullptr;
        }

    ~MyContainer(){
        delete [] numbers;
    }

    void operator=(const MyContainer& other){
        container_number++;
        size = other.size;
        numbers = other.numbers;
        count = other.count;
    }

    void operator=(MyContainer&& other){
        container_number++;
        size = other.size;
        numbers = other.numbers;
        count = other.count;
        numbers = nullptr;
    }

    void add(int n){
        if(count >= size){
            throw std::invalid_argument("Invalid argument\n");
        }
        else{
            numbers[count] = n;
            count++;
        }
    }

    void print_content(){
        if(count > 0){
            std::cout << "Container nr: " << container_number << std::endl; 
            for(std::size_t i = 0; i < count; i++){
                std::cout << "[" << i << "]\tval: " << numbers[i] << std::endl;
                }
            }
            else{
                std::cout << "Container is empty\n";
            }
    }

private:
    int* numbers;
    int count{};
    std::size_t size;
    static int container_number;
};

int MyContainer::container_number = 0;