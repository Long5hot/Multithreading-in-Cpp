#include<iostream>
#include<thread>

using namespace std;

void hello() {
    std::cout << "This one is a thread" << std::endl;
}

void hello2(std::string str) {
    std::cout << str << std::endl;
}



int main() {



    std::thread t{ hello2 , "Second thread yolo"};

    std::cout << "Doing some work" << std::endl;
 
    t.join();
}