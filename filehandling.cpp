#include <iostream>//standard input output=>function =:>cout,cin
#include <fstream>

using namespace std;


int main(){

ofstream fout;
fout.open("filehandling.cpp",ios::app);

if(fout){
    cout<<"file opened successfully";
}
else{
    cout<<"not opened";
}

fout.close();

return 0;
}