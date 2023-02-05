#include<iostream>
using namespace std;
main()
{
    string movies[5]={"galidator","starWars","terminator","takingLives","tombRider"};
    string movieName;
    float discount;
    cout<<  "enter name of movie :";
    cin>> movieName;
    for(int idx=0;idx<5;idx++){
        if(movies[idx]==movieName){
            
        if(idx%2!=0){
            // discount=5/100;
            // caldisc=discount*500;
            // disc=500-caldisc;
            discount=500-(500*0.05);
        }
        else{
             discount=500-(500*0.1);
            
        }
        cout<< "the discount on tiket is :"<< discount;
    }
}
}