#include <iostream>

using namespace std;


void print(){
    
    throw('j');
}

int main()
{
    
    try{
        print();
        
    }
    catch(char a){
        cout<<"exception handled";
    }
    cout<<"fghjkl,";
    
//   try{
//       int b=89;
       
//       try{
//           int a=90;
//           if(a==90){
//               //throw(57);
//               throw('a');
//           }
//       }
//       catch(int a){
//           cout<<"it is child exception";
//       }
//   }
//   catch(...){
//       cout<<"it is exception"; 
//   }
    return 0;
}

/*
#include <iostream>
#include <stdexcept>
using namespace std;


void  print(){
   // throw(runtime_error("iam print exce"));
}
void  read(){
    throw(runtime_error("iam readd exce"));
}
int main()
{
 try{
     print();
     read();
     
 }
 catch(runtime_error& e){
     cout<<e.what();
 }
    return 0;
}
*/