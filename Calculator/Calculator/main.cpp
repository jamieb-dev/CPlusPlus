//
//  main.cpp
//  Calculator
//
//  Created by Jamie Brown on 08/09/2024.
//

#include <iostream>

using namespace std;

string sayHello(string name){
    return "hello " + name + "\n";
}








int main(void){
    
    string name;
    cout << "What's your name?\n";
    cin >> name;
    cout << sayHello(name);
    cout << "hello";
    
    
    return 0;
}




