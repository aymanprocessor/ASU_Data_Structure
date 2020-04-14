#include <bits/stdc++.h> 
using namespace std; 
 
int getPairsCount(int arr[], int n, int sum) 
{ 
    map<int, int> m; 
    for (int i=0; i<n; i++) 
        m[arr[i]]++; 
    
    int cnt = 0; 
    for (int i=0; i<n; i++) 
    { 
        cnt += m[sum-arr[i]]; 
        if (sum-arr[i] == arr[i]) 
            cnt--; 
    } 
    return cnt/2; 
}  
int main() 
{ 
    int s_arr = 0;
	int sum = 0;
	cin >> s_arr >> sum;
    int arr_num[s_arr]  ; 
	for (int i = 0; i < s_arr; i++) {
		cin >> arr_num[i];
	}
   if(getPairsCount(arr_num, s_arr, sum) >0 ){
    
        cout << "YES"; 
    } else{
        cout << "NO"; 
    } 
    return 0; 
}  