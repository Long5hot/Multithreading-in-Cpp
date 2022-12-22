#include<iostream>
#include<thread>

using namespace std;

void hello() {
    std::cout << "This one is a thread" << std::endl;
}

void hello2(std::string str) {
    std::cout << str << std::endl;
}
void hello3(string &str) {
    str = "xyz";
}


int main() {

    string s{"ABC"};

    cout << s << endl;

    thread t{hello3, std::ref(s)};
    cout << s << endl;

    std::cout << "Doing some work" << std::endl;
    
    cout << s << endl;

    t.join();
}