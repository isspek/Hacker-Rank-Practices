#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    std::vector<int> a;
    
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    
    std::reverse(a.begin(), a.end());
    for (std::vector<int>::iterator it=a.begin(); it!=a.end(); ++it)
        std::cout << *it << ' ';
    
    return 0;
}
