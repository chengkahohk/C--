#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout << "Hello " << name << ", you are age is " << age << endl;
}

double cube(double num){
    return num * num * num;

}

int main()
{

    sayHi("Ka Ho", 48);
    sayHi("Ka Ming", 40);   
    sayHi("Ka Chung", 42);

    cout << cube(5.0);
    return 0;
}

