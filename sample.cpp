#include<iostream>
#include<cmath>
using namespace std;

int main()
{
 /*
    int age;
    cout << "Hello world!" << endl;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old";
*/
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Hello " << name;
   cout << endl;

    string color, pluralNoun, celebrity;
    cout << "Enter a color: ";
    getline(cin, color);
    cout << "Enter a plural noun: ";
    getline(cin, pluralNoun);
    cout << "Enter a celebrity: ";
    getline(cin, celebrity);
    cout << "Roses are " << color << endl;
    cout << pluralNoun << " are blue" << endl;
    cout << "I love " << celebrity << endl;

    cout << endl;
    return 0;
    
}
