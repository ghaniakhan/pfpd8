#include<iostream>
using namespace std;
main()
{
    string fruits[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string fruitName;
    int quantity;
    int total=0;
    cout<< "enter fruit name:";
    cin>> fruitName;
    cout<< "enter quantity :";
    cin>> quantity;
for(int idx=0; idx<4 ; idx++)
{
    if(fruitName==fruits[idx]){
     total=quantity*price[idx];
     break;
    }
}
cout<< "price is :"<< total;
}