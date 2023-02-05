#include<iostream>
using namespace std;
main()
{ 
int size;
int times;
cout<< "enter the size :";
cin>> size;
cout<< "enter number of times even or odd transformation is  to be done :";
cin>> times;
int number[size];
for(int idx=0;idx<size;idx++){
    cout<< "enter elements of array :";
    cin>> number[idx];
}
for(int n=0;n<size;n++){
if(number[n]%2==0){
    number[n]=number[n]-2*times;
    cout<< "["<<number[n]<<"]";
}
else{
    cout<<"[" <<number[n]+2*times<<"]"; 
  
}
}
}
