#include <iostream>//standard input output=>function =:>cout,cin
#include <fstream>

using namespace std;


int main(){

ofstream fout;
fout.open("filehandling.cpp",ios::app);

if(fout){
    cout<<"file opened successfully";
    fout<<"//this  a new line that is inserted using file handling ";

}
else{
    cout<<"not opened";
}

fout.close();

ifstream fin;
fin.open("filehandling.cpp");
cout<<&fin<<endl;
while(fin){
    string a;
    getline(fin,a);
    cout<<"\n";
    cout<<a;
    
}cout<<&fin;
fin.close();
return 0;
}