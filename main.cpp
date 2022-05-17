#include <iostream>

using namespace std;

int main() {
  int e=1;
  for(int i=0;i<6;i++){
    for(int j=5;j>i;j--){
      cout<<" ";
    }
    cout<<"*";
    if(i>0){
    for(int s=1;s<=e;s++){
      cout<<" ";
    }
    e+=2;
      cout<<"*";
  }
    cout<<endl;
  }
  e-=4;
  for(int i=0;i<=5;i++){
    for(int j=0;j<+i;j++){
      cout<<" ";
    }
    cout<<"*";
    for(int s=0;s<=e;s++)
      {
        cout<<" ";
      }
    e-=2;
    if(i!=5){
      cout<<"*";
    }
    cout<<endl;
  }
  
  

  return 0;
}