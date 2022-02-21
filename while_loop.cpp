#include <iostream>
using namespace std;

int main(){
    int index = 1;
    while(index <= 5){
        cout << "A: " << index << endl;
        index++;
    }
    cout << endl;

    
    index = 6;
    do{
        cout << "B: " << index << endl;
        index++;
    }while(index <= 5);


    return 0;
}