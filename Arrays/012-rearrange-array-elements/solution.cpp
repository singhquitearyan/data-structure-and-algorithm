//Author: Aryan SIngh
//Date: 15/01/16
//Description:
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        vector<int> pos, neg;
        int n = arr.size();
        for(int i = 0; i< n; i++){
            if(arr[i] >= 0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        int i =0;
        int posind = 0, negind = 0;
        while(posind < pos.size() && negind < neg.size()){
            if(i % 2 == 0){
                arr[i] = pos[posind];
                i++;
                posind++;
            }
            else{
                arr[i++] = neg[negind++];
            }
        }
        while( posind < pos.size()){
            arr[i++] = pos[posind++];
        }
        
        while ( negind < neg.size()){
            arr[i++] = neg[negind++];
        }
    }
};
