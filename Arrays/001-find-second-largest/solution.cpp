//Author: Aryan SIngh
//Date: 13/01/2026
//Description: 

class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int slargest = -1;
        int largest = arr[0];
        for(int i = 0; i<arr.size(); i++){   
            if(arr[i] > largest){
                 slargest = largest;
                 largest = arr[i];
            }
            else if(arr[i] < largest && arr[i] > slargest){
                slargest = arr[i];
            }
        }
        return slargest;
        
    }

    
};
