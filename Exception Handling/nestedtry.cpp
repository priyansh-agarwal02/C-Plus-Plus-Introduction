#include<iostream>
#include<exception>
using namespace std;
int main()
{
try{
    try{
        throw("inner block");
    }catch(const char *c){
        cout << "exception iin ineeer" << endl << c ;
        cout << "rethrowing" << endl;
        throw runtime_error("fsdf");
    }
    }catch(runtime_error &e){
        cout << "Exception occured" << endl;
        cout << e.what();
    }
    catch(const char *e){
        cout << "exception in outer" << endl << e;
    }
}