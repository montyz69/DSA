/*
1        1
12      21
123    321
1234  4321
1234554321
*/

#include<iostream>
using namespace std;


void pattern11(int N){
    int space=2*(N-1);
    for(int i=1;i<=N;i++){
        //numbers
        for(int j=1;j<=i;j++){
            cout<<j;
        }

        //space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }


        //numbers
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
int main()
{
    int N;
    cin>>N;
    pattern11(N);

}