#include<iostream>
using namespace std;

void pattern20(int N){
    int spaces=2*N-2;
    for(int i=1;i<=2*N-1;i++){
        int stars=i;
        if(i>N) stars=2*N-i;
        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        //space
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }

        //stars
        for(int j=1;j<=stars;j++){
            cout<<"*";
        }
        if(i<N) spaces-=2;
        else spaces +=2;
        cout<<endl;

    }

}

int main()
{
    int N;
    cin>>N;
    pattern20(N);

}