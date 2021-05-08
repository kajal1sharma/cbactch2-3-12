// Online C++ compiler to run C++ program online
#include <iostream>


class Car{
    public :
    int number;
    int cost;
    //constructor name is same as class name
    //constructors are functions without return type
    
    //default constructor
    //without argument
    // Car(){
    //     this.number=40;
    //     this.cost=70;
    // }
} 
int main() {
    Car c;
    cout<<c.number<<"  :  "<<c.cost<<"\n";
    
    c.number=90;
    c.cost=900;
     cout<<c.number<<"  :  "<<c.cost<<"\n";
    return 0;
}