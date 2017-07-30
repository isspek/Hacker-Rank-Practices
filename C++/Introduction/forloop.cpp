#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    const string english_nums[]={"one","two","three","four","five","six","seven","eight","nine"};
    int a,b;
    cin>>a>>b;
    for(int i=a;i<b+1;i++)
    {
        if(i<10)
        {
            cout<<english_nums[i-1]<<endl;
        }
        else
        {
            cout<<((i%2==0)?"even":"odd")<<endl;
        }
    }
    return 0;
}
