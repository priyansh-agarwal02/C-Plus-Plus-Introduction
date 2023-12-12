#include<iostream>
#include<exception>
using namespace std;
int main()
{
try{
    throw runtime_error("runtime error");
    // throw ;

    }catch(runtime_error &e){
        cout << "Exception occured" << endl;
        cout << e.what();
    }
    catch(int error){
        cout << error << endl;
    }
    catch (...){
        cout << "Some exception occured" << endl;
    }
}