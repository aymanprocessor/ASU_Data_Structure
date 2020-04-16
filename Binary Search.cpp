#include <bits/stdc++.h> 
#include <algorithm>
using namespace std; 
 
void search(int arr[], int start,int n, int x) 
{ 
   int found_index = -1;
    for (int i = start; i < n; i++) {
        cout<< arr[i] << " ";
    }
    
    cout<<endl;
    
    for (int i = start; i < n; i++) {
        if(arr[i] == x){
            found_index = i;
        }
        if(arr[i]>=x){
            cout << arr[i] << " ";
        }
    }
    
    cout<<endl;
    
    if(found_index != -1){
        cout<<"YES";
    }else if(found_index == -1){
        cout<<"NO";
    }
      
        
    
} 
  
int main() 
{ 
    int search_num,s_arr;
    cin >> search_num >> s_arr;
    int num_arr[s_arr];
    for(int i = 0; i < s_arr;i++){
        cin >> num_arr[i];
    }
    int mid =  (s_arr-1)/2;
    if( search_num<num_arr[mid]){
        
        search(num_arr,0,mid ,search_num);
    }else if( search_num>num_arr[mid] ){
        search(num_arr,mid +1,s_arr,search_num);
    }
   
    return 0; 
} 
