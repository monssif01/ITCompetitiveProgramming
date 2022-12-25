#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int x[6],y[5],i,n,a,e,l,z;
    cout<<"put the elts of x array then y array";
    for(i=0;i<6;i++){
    cin>>x[i];
    }
    for(i=0;i<5;i++){
    cin>>y[i];
    }
    for(a=0;a<6;a++){
             for(i=a+1;i<7;i++){
                   z=x[a];
                  if(x[a]>x[i]) 
                    {e=x[i];
                    if(x[a]>y[i-1]){
                      l=y[i-1];
                      x[a]=l;
                      y[i-1]=z;}
                      else { x[a]=e;
                             x[i]=z;
                           }
                      } 
                            }        
                      }
      cout<<"le vecteur x"<<x[i]<<endl<<"le vecteur  y"<<y[i];
    getch();  
}
