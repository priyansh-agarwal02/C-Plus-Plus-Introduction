#include<iostream>
#include<exception>
using namespace std;
void test() throw(int , char , runtime_error){
    throw runtime_error("what the fuck");
}
int main()
{
try{
    test();

    }catch(runtime_error &e){
        cout << "Exception occured" << endl;
        cout << e.what();
    }
    catch(int error){
        cout << error << endl;
    }
    catch(int e){
        cout << "enterger type error" << endl;
    }
}