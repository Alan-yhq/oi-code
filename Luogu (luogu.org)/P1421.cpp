#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in_yuan , in_jiao , in_ans , sum;
    cin >> in_yuan >> in_jiao;
    in_ans = in_yuan * 10 + in_jiao;
    sum = in_ans / 19;
    cout << sum << endl;
    return 0;
}