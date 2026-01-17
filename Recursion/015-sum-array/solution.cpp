//aUTHOR: aRYAN siNGH
//dATE: 17/01/16
//dESCRIPTION: can also do it by a size reduction but it takes up the extra memory

//SUM FROM THE BACK OF THE ARRAY
class Solutio{
public:
int SumArray(vector<int>& arr, int n){
  if( n == 0) return 0;

  return arr[n-1] + SumArray( arr, n-1)
    }
};

//SUM FROM THE FRONT OF THE ARRAY
class Solution{
public: 
int SumArray(vector<int>& arr, int i){
  if( i >= arr.size()) return 0;

  return arr[i] + SumArray(arr, i+1);
   }
};
