#include "MyContainer.hpp"

MyContainer::MyContainer(std::size_t size):
    size(size),
    numbers(new int[size]), 
    count(0){
        container_number++;
    }

MyContainer::MyContainer(const MyContainer& other):
    size(other.size), 
    numbers(other.numbers), 
    count(other.count){
        container_number++;
    }

MyContainer::MyContainer(MyContainer&& other):
    size(other.size),
    numbers(other.numbers),
    count(other.count){
        container_number++;
        other.numbers = nullptr;
    }

MyContainer::MyContainer(std::initializer_list<int> data){
    container_number++;
    size = data.size();
    numbers = new int[size];
    int i {0};
    for(auto j : data) {
        numbers[i++] = j;
        count++;
    }
}

MyContainer::~MyContainer(){
    delete [] numbers;
}

void MyContainer::operator=(const MyContainer& other){
    container_number++;
    size = other.size;
    numbers = other.numbers;
    count = other.count;
}

void MyContainer::operator=(MyContainer&& other){
    container_number++;
    size = other.size;
    numbers = other.numbers;
    count = other.count;
    numbers = nullptr;
}

void MyContainer::add(int n){
    if(count >= size){
        throw std::invalid_argument("Invalid argument\n");
    }
    else{
        numbers[count] = n;
        count++;
    }
}

void MyContainer::print_content(){
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

int MyContainer::container_number = 0;