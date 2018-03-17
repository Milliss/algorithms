#include <iostream>    
#include <string>    
#include <vector>    
using namespace std;  
//步驟1:讀取整串  
//步驟2:判斷->1.設max讀取當前最大情況 2.若相加<0,斷。   
int main()  
{  
    int input, input_num; //input1=有幾個  
    cin >> input;  
    while (input != EOF)//到讀完為止  
    {  
        vector<int>input_array;  
        while(input--)  
        {  
            cin >> input_num;  
            input_array.push_back(input_num);  
        }  
        int count = 0;  
        int start = 0;  
        int max = 0;  
        int sum = 0;  
        int end;  
        for(;;)  
        {  
            sum = sum + input_array[count];  
            count++;  
            if (sum > max)  
            {  
                max = sum;  
                end = count - 1;  
            }  
            else if (sum < 0)  
            {  
                sum = 0;  
                start = count;  
            }  
              
            if (count == input_array.size())  
                break;  
        }  
        cout << start << ' ' << end << ' ' << max << endl;  
        cin >> input;  
    }  
    return 0;  
}  