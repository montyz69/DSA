#include<iostream>
using namespace std;
void pattern18(int N){
    for(int i=0;i<N;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int N;
    cin>>N;
    pattern18(N);

}