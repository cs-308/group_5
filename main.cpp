#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int n;cin>>n;
    int ans = factorial(n);
    // printf("By group-5\n");
    cout<<"By group-5\n";
    // printf("Factorial of %d is %d",n,ans);
    cout<<(ans == -1?"Invalid input, re-enter by again starting program":"Factorial of "+to_string(n)+" is "+to_string(ans));
    return 0;
}
