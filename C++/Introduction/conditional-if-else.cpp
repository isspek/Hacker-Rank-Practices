#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    const string english_nums[]={"one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin >> n;
    // your code goes here
    cout<<((n>0 && n<10)?english_nums[n-1]:"Greater than 9")<<endl;
    return 0;
}
