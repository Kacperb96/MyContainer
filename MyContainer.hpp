#include <iostream>
#include <exception>
#include <initializer_list>

template <typename T>
class MyContainer{
public:
    MyContainer(std::size_t size)
        : size(size),
        numbers(new T[size]), 
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

    MyContainer(std::initializer_list<T> data){
        container_number++;
        size = data.size();
        numbers = new T[size];
        int i {0};
        for(auto j : data) {
            numbers[i++] = j;
            count++;
        }
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

    void add(T n){
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
                std::cout << "Container nr: " << container_number << " is empty\n";
            }
    }

private:
    T* numbers;
    int count{};
    std::size_t size;
    static int container_number;
};

template <typename T>
int MyContainer<T>::container_number = 0;