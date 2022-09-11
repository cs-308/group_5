#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int n;cin>>n;
    int ans = factorial(n);
    printf("By group-5\n");
    // cout<<"By group-5\n";
    if(ans==-1)printf("Invalid input, re-enter by again starting program. Status : %d",ans);
    else printf("Factorial of %d is %d",n,ans);
    // cout<<(ans == -1?"Invalid input, re-enter by again starting program":"Factorial of "+to_string(n)+" is "+to_string(ans));
    int x,y;
    x=56;
    y=98;
    int g = gcd(x,y);
    cout<<"GCD of "<<x<<" and "<<y<<" is "<<gcd(x,y);
    return 0;
}
