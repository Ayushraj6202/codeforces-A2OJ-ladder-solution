#include<bits/stdc++.h>
using namespace std;

int main(){
    float ab, bc, ca;
    cin >> ab >> bc >> ca;
    float  a, b, c;
    float l = 4*(a + b + c);
    //a = (ca / bc) * b;
   // c = (bc / ab) * a;
    //ca = a * c;
    c = sqrt((bc * ca) / ab);
    b = ca / c;
    a = ab / b;
    cout << 4 * (a + b + c);
    return 0;
}