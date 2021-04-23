
#include <iostream>

using namespace std;
//Write a program in C to find the square of any number using the function

int square(int a){
    int sq=a*a;
    return sq;
}

int main()
{
 //   2=>2*2
//5=>5*5

int n;
cout<<"enter the number ...\n";
cin>>n;

int sq=square(n);
cout<<"square of "<<n<<" is :: "<<sq;
    return 0;
}
