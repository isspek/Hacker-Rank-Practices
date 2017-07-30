#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num_array,num_query;
    cin>>num_array>>num_query;
    vector<vector<int>> main_array;
    for(int i=0;i<num_array;i++)
    {
        int len_array;
        cin>>len_array;
        vector<int> sub_array; 
        for(int j=0;j<len_array;j++)
        {
            int content;
            cin>>content;
            sub_array.push_back(content);
        }
        main_array.push_back(sub_array);
    }
    
    for(int i=0;i<num_query;i++)
    {
        int row,index;
        cin>>row>>index;
        cout<<main_array[row][index]<<endl;
    }
    return 0;
}