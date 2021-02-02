#include<iostream>
using namespace std;

int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);

long long a,b;

while(scanf("%lld %lld",&a,&b)==2){
    if(a>b)
        cout<<a-b<<endl;
    else
        cout<<b-a<<endl;

}

    }
