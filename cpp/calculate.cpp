#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    //前置递增
    int a = 2;
    int b = ++a;
    cout << a << "," << b << '\n';

    //后置递增
    int x = 2;
    int y = x++;
    cout << x << "," << y << '\n';

    return 0;
}