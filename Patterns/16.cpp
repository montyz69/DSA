#include<iostream>
using namespace std;

void pattern1(int N){
    for(int i=0;i<N;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
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