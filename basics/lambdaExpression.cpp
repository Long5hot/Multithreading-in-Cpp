#include<iostream>
#include<thread>

using namespace std;

void hello() {
    std::cout << "This one is a thread" << std::endl;
}

void func(string &&s) {
    cout << "Ownership of \"" << s  << "\" Tranfferd to thread" << endl;
}


class greeter {
    public:
    void hello() {
        std::cout << "Hello Member function!" << std::endl;
    }
};


int main() {
    /*
    string s{"ABC"};

    cout << s << endl;

    thread t{func, std::move(s)};
    cout << s << endl;

    std::cout << "Doing some work" << std::endl;
    
    cout << s << endl;

    t.join();
    */


//    greeter greet;

//    thread t{ &greeter::hello, &greet };
//     cout << "I am doint some work here" << endl;
//    t.join();

    string s{"ABCD"};
    
    cout << s << endl;

    thread t{ [&s]() { s = "XYZ" ; } };

        t.join();

    cout << s << endl;  //Still has not been modified

    // cout << s << endl;
    cout << "I am doint some work here" << endl;

    cout << s << endl;

}