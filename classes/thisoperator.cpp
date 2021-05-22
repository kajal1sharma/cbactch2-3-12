//this keyword
#include <iostream>

using namespace std;

class Students{
    int a;
    int b;
    public:
    Students(int d1,int d2){
       cout<<this<<endl;
        this->a=d1;
        this->b=d2;
    }
    
};


int main()
{
    
    Students s=Students(1,2);
   cout<<&s<<endl;
   Students r=Students(4,5);
   cout<<&r<<endl;
    return 0;
}
