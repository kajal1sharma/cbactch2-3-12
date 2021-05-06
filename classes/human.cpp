//object ==>attributes/properties
//2:>  functionalities
//class =>object's functionalities and properties
#include <iostream>

using namespace std;

class Human{
  public:
  //property=>data members,attributes
  int height;
  int weight;
  int haircolor;
  
  
  //member functions
  void printsomething(){
      cout<<"hi iam a human object"<<"\n";
  }
  void print(){
      cout<<"hello"<<"\n";
  }
  
};

int main()
{
    //int arr[78];
    
    Human humanarr[5];
    
    //humanarr[0],humanarr[1],humanarr[2],humanarr[3],humanarr[4];
    humanarr[0].height=90;
    humanarr[3].height=67;
    
    // int a;
    // Human obj,obj2;
    // obj.height=90;
    // obj2.height=78;
    // obj.weight=78;
    // obj2.weight=90;
    // cin>>obj.weight;
    // cout<<obj.weight<<"  "<<obj2.height<<"\n";
    //cout<<sizeof(obj);
    
    // obj.printsomething();
    // obj2.print();
    // obj2.printsomething();

    return 0;
}
