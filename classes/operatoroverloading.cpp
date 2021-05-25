//operator overloading

#include <iostream>

using namespace std;

class Square{
    private:
    int length;
    int breadth;
    
    public:
    int getlength();
    int getbreadth();
    void setlength(int len);
    void setbreadth(int);
    
    Square operator+(const Square& b){
        Square result;
        
        result.length=this->length+b.length;
        result.breadth=this->breadth+b.breadth;
        
        return result;
    } 
};

int Square:: getlength(){
    return length;
}
int Square:: getbreadth(){
    return breadth;
}
void Square:: setlength(int len){
    length=len;
}
void Square:: setbreadth(int bre){
    breadth=bre;
}
int main()
{
   
   Square s1;
   s1.setbreadth(2);
   s1.setlength(2);
   
   Square s2;
   s2.setlength(4);
   s2.setbreadth(4);
  
   Square s3;
   s3=s2+s1;
   
   cout<<s3.getlength();
    return 0;
}
// ?: , ::,  .*, .