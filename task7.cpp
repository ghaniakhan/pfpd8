#include<iostream>
using namespace std;
main()
{
     string word1;
    string word2;
    cout<< "enter word1:";
    getline(cin,word1);
    cout<< "enter word2:";
    getline(cin,word2);
    int idx=0;
    int indx=0;
    int count=0;
    int cs=0;
    int sum;
    while(word1[idx]!='\0' ){
      if(word1[idx]==word1[idx+1]){
        count++;
      }
      idx++;
    }
   while(word2[indx]!='\0'){
     if(word2[indx]==word2[indx+1]){
        cs++;
     }
     indx++;
   }
   sum=count+cs;
   cout<< sum;
   }
