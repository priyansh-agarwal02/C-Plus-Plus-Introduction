#include<iostream>
#include<exception>
using namespace std;
int main()
{int a =10;int b=0;int c;
try{
    if(b==0)
    throw runtime_error("runtime error");
    c=a/b;
    cout << c <<endl;
    }catch(runtime_error &e){
        cout << "Exception occured" << endl;
        cout << e.what();

    }
}
    
