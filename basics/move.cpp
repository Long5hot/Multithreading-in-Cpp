#include<iostream>
#include<thread>

using namespace std;

void hello() {
    std::cout << "This one is a thread" << std::endl;
}

void func(string &&s) {
    cout << "Ownership of \"" << s  << "\" Tranfferd to thread" << endl;
}


void hello3(string &str) {
    str = "xyz";
}


int main() {

    string s{"ABC"};

    cout << s << endl;

    thread t{func, std::move(s)};
    cout << s << endl;

    std::cout << "Doing some work" << std::endl;
    
    cout << s << endl;

    t.join();
}