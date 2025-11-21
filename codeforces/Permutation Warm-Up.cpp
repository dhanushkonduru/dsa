#include <iostream>
void Permutation_Warm_Up (){
int n;
cin >> n;
int x = n / 2;
int sum = x * (2 * n - 2 - (x - 1) * 2);
int ans = sum / 2 + 1;
cout << ans << '\n';
}