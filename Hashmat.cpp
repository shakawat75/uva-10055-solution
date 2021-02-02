#include<iostream>
using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

int a,b;

while(scanf("%d %d",&a,&b)==2){
    if(a>b)
        cout<<a-b<<endl;
    else
        cout<<b-a<<endl;

}

    }
