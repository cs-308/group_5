#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    int n;cin>>n;
    int ans = factorial(n);
    cout<<"By group-5\n";
    cout<<(ans == -1?"Invalid input, re-enter by again starting program":"Factorial of "+to_string(n)+" is "+to_string(ans));
    return 0;
}
