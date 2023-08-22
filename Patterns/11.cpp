#include<iostream>
using namespace std;
void pattern11(int N){
    int start=1;
    for (int i = 0; i <N; i++)
    {
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<=i;j++){
            cout<<start;
            start=1-start;
        }
        cout<<endl;

    }
    

}
int main()
{
    int N;
    cin>>N;
    pattern11(N);

}