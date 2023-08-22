#include<iostream>
using namespace std;
void pattern19(int N){
int space=0;
    for(int i=0;i<N;i++){
        
        //stars
        for(int j=0;j<N-i;j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<space;j++){
            cout<<" ";
            
        }

        //stars
        for(int j=0;j<N-i;j++){
            cout<<"*";
        }  
        space+=2;
        cout<<endl; 
    }
    space=2*N-2;
    for(int i=1;i<=N;i++){
        
        //stars
        for(int j=0;j<i;j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<space;j++){
            cout<<" ";
            
        }

        //stars
        for(int j=0;j<i;j++){
            cout<<"*";
        }  
        space-=2;
        cout<<endl; 
    }
    

}

int main()
{
    int N;
    cin>>N;
    pattern19(N);

}