// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;
class Car{
    public :
    int number;
    int cost;
    //constructor name is same as class name
    //constructors are functions without return type
    
    //default constructor
    //without argument
    Car(){
        number=40;
        cost=70;
    }
    
    //parameterized constructor
    Car(int a,int b){
        
        number=a;
        cost=b;
        
    }
    //parameterized constructor
    Car(int a){
        
        number=a;
        cost=0;
        
    }
    
    //copy
    Car(Car &c){
        number=c.number;
        cost=c.cost;
    }
    
    
    
} ;
int main() {

//default constructor call
//Car c;
    
    //call para const
    Car c(89);
    //copy constructor
    
    Car c2=c;
    
    
    cout<<c2.number<<"  :  "<<c2.cost<<"\n";

    
    
    c.number=90;
    c.cost=900;
     cout<<c.number<<"  :  "<<c.cost<<"\n";
    return 0;
}
