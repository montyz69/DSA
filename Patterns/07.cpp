#include<iostream>
using namespace std;

void pattern1(int N){
    for(int i=0;i<N;i++){
        //space
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        //star
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int N;
    cin>>N;
    pattern1(N);

}
