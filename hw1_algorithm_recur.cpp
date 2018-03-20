#include<iostream>  
#include<string>  
#include<vector>  
using namespace std;  
  
/*16 
-13 -3 -25 20 -3 -16 -23 18 20 -1 12 -5 -22 15 -4 7 
8 
1 2 3 4 5 6 7 -7  
7 10 49↵ 
0 6 28↵*/  
  
 void find_max_subarray(vector<int>input_array,int x){  
  int head,tail,max_head,max_tail,sum,max;  
  if(x==0){  
  head = 0;  
  tail = 0;  
  sum= 0;  
  max_head = 0;  
  max_tail = 0;  
  max = 0;  
  
    for(;;){  
        
      sum+=input_array[tail++];  
  
      if(sum > max){  
        max = sum ;  
        max_tail = tail - 1;  
        max_head=head;  
  
      }else if(sum<0){  
        sum=0;  
        head = tail;  
      }  
  
  
      if( tail ==  input_array.size()){  
        break;  
      }  
    }  
    cout << max_head << ' ' << max_tail << ' ' << max << endl;  
  }else {  
    x--;  
    find_max_subarray(input_array,x);  
  }  
    
 }  
  
int main(){  
  
    int input,input_number,x=100;  
    //int a[]={-13,-3,-25,20    ,-3,-16,-23,18,20,-1 ,12, -5, -22, 15, -4, 7};  
    cin >> input;  
    while(input != EOF){  
    vector<int>input_array;  
    while(input--){  
    cin >> input_number;  
    input_array.push_back(input_number);  
    }  
    //cout<< input_array.size();  
    //find_crossing_subarray(input_array,low,mid,high,max_left,max_right,sum);  
  
     //max_subarray(input_array,input_array.size());  
    find_max_subarray(input_array,x);  
     cin >> input;  
  }  
      
      
  
      
    return 0;  
}