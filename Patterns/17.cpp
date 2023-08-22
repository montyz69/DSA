#include<iostream>
using namespace std;

void pattern1(int N){
    for(int i=0;i<N;i++){
        //space
        for(int j=0;j<N-i-1;j++){
            cout<<" ";
        }
        //char
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j=1;j<=2*i+1;j++){
            cout<<ch;
            if(j<=breakpoint) ch++;
            else ch--;
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
