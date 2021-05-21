
#include <iostream>

using namespace std;

//function overloading 
class Person{
    private:
    int aid;
    public:
    void setid(){
        aid=1234;
    }
    void setid(int id){
        aid=id;
    }
    void printid(){
        cout<<aid;
    }
};

int main()
{
    Person p;
    p.setid(456);
    p.printid();
    return 0;
}
