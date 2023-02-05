#include<iostream>
using namespace std;
main()
{
   
    int size;
    bool dis;
    cout<< "enter size :";
    cin>> size;
    
    int numbers[size];
   

   for(int idx=0;idx<size;idx++){
    cout<< "enter elements of array :";
    cin>> numbers[idx];

   }
   for(int digit=0;digit<size;digit++){
     if(numbers[digit]==7)
     {
        dis = true;
       
     }
   }
   if (dis == true)
   {
    cout << "Boom!";
   }
   else
   {
    cout << "There is no number 7";
   }
   

}