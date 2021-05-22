//static keyword
#include <iostream>

using namespace std;

class Students{
    public:
    string name;
    static string schoolname;
    
};

string Students::schoolname="abc public scchool";

int main()
{
   
   Students s;
   s.name="abcdfds";
   Students s2;
   s2.name="dgfdgfd";
   cout<<s.name<<"  "<<s2.name<<endl;
  // cout<<Students::schoolname;
   cout<<s.schoolname<<endl;
   s.schoolname="hasjkdkfjkdklflskdf";
   cout<<s2.schoolname<<endl;
   
    return 0;
}
