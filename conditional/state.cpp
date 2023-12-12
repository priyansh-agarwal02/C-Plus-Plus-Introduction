#include<iostream>
using namespace std;
main()
{
    
    int a = 100 ;
    int b = 25;
/*
    cout << " Enter value for a: " << endl;
    
       cout << " Enter value for b: " << endl;
   
       if ( a > b)
       cout << a << " > " << b << endl;
       else 
       cout << " this condition is not true" << endl;
       
         
               if ( 432435.45435)
               cout << " not 0 " << endl;

       if(( 12 > 5 || 6 > 4 ) && ( 2==5 ))
cout << " 12 > 5 || 6 > 4 " << endl ;
*/

  string message = ( a  > b ) ? " a > b " : "a <= b " ; 
  cout << (( a > b ? a : b ) + 20 ) << endl;

}
