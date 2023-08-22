#include<iostream>
using namespace std;

void pattern1(int N){
    for(int i=0;i<N;i++){
        for(char ch='A';ch<='A'+(N-i-1);ch++){
            cout<<ch<<" ";
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