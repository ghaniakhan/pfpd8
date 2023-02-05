#include<iostream>
using namespace std;
main()
{ 
    string name[4];
    for(int idx=0;idx<4;idx++){
        cout<< "enter the string :";
        cin>> name[idx];
    }
    if(name[0]==name[1] && name[0]==name[2]&& name[0]==name[3]){
        cout<< "true";
    }
    else{
        cout<< "false";
    }
}