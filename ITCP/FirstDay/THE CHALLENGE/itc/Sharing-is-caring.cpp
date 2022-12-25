#include<iostream>
#include<conio.h>
using namespace std;
int n,i,a;
int main(){
      int t[n];
      cout<<"how much nbr on the list";
      cin>>n;
          for(i=0;i<n;i++){
          cout<<"original number"<<i+1<<endl;
          cin>>t[i];
          
          }
             cout<<t[0];
        for(i=1;i<n;i++){
                     
        if (t[i]!=t[i-1]){
                         
        cout<<t[i];
        }
        }
        getch();
}
