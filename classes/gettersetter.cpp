//getter setter 

#include <iostream>

using namespace std;


class Car{
    
private:
    int cno;
    int cost=80000;
    int amount;
    
public:
    int  getcost(){
        return cost;
    }
    
    void setcost(int c){
   //constraints check     
        if(c>9000){
            if(cno=1234)
            cost=c;
        }
        else{
            
        
        }
    }
    
};

int main()
{
   Car c;
   
   
   int costofcar;
   cin>>costofcar;
   
   
   //c.cost=costofcar;
   c.setcost(costofcar);
   cout<<c.getcost();
    return 0;
}
