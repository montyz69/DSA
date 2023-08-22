#include<iostream>
using namespace std;

void pattern1(int N){
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<" ";
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