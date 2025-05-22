#include<iostream>
using namespace std;

void sayHello(){
    cout << "Hello!" <<endl;
}

int sayhi(string name){ // function with parameters
    cout << "Hi," << name << endl; 
}

int greet(string fname,string lname, int age){ // function with parameters
    cout << "Hi," << fname << " " << lname << ",Age:"<< age << endl; 
}

int main(){ 
    string firstName,lastName, friendName;
    int Age;
    cout << "Enter your first name:";
    cin >> firstName;
    cout << "Enter your last name:";
    cin >> lastName;
    cout << "Enter your age:";
    cin >> Age;
    cout << "Enter your friend's name:";
    cin >> friendName;
    sayHello(); // function call
    sayhi(firstName); // function call with arguments
    sayhi(friendName);
    greet(firstName, lastName,Age);
}








