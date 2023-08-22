#include<iostream>
using namespace std;

void pattern1(int N){
    int number=1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<number<<" ";
            number+=1;
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