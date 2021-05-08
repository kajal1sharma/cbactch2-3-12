//getter setter 

#include <iostream>

using namespace std;


class Car{
    
private:
    int cno;
    int cost=80000;
    int amount;
    
public:
   //declaration of function
   int  getcost();
   void setcost(int c);
    void showdetail(){
        int s=getcost();
        cout<<s;
    }
    
};

//define function
int Car:: getcost(){
        return cost;
    }
void Car :: setcost(int c){   
        if(c>9000){
            if(cno=1234)
            cost=c;
        }
        else{
            
        
        }
    }
    

int main()
{
   Car c;
   
   
   int costofcar;
   cin>>costofcar;
   
   
   //c.cost=costofcar;
   c.setcost(costofcar);
   c.showdetail();
    return 0;
}
