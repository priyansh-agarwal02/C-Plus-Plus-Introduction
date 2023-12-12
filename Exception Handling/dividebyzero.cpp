#include<iostream>
using namespace std;
int main()
{ int a = 10;
int b = 0;
int c;
try{
    if(b==0)
    throw "Divide by error exception";
    c= a/b; 
    cout << c << endl;
}catch(const char *e){
    cout << "Exception occired" << endl << e;
}

    
}