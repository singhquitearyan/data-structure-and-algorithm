//Author: Aryan Singh
//Date: 30/01/26
//Description: Optimal approach explanation written in notebook


//=>BRUTE FORCE
//T/C -> O(n2)
//S/C -> O(n)
class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<bool>person(n, 0);
       return winner(person, n, 0, n, k) + 1;
    }
    // '+1' is done because  it started with '1' instead of '0'

    int winner(vector<bool>& person, int n, int index, int person_left, int k){
        //i.e. only one person left and is not kill yet so return it (as person[i] == 0 so, that last person is not killed yet)
        if(person_left == 1){
            for(int i = 0; i < n; i++){
                if(person[i] == 0)
                return i;
            }
        }
        int kill = (k-1)%person_left; //yha pe isliye person_left kiye hai instead of 'n' kyoki 'n' humesa constant rhega even jb element kill ho jayenge phir bhii

        //jb tk kill exist krega -> index aage badhao -> -> check for if it is 0 or 1 ->  make it 1(kill it accordingly)
        while(kill--){
            index = (index+1)%n;
            // agr person[index] phle se hi 1 hai to use skip kr denge by increasing index.
            while(person[index] == 1) 
            index = (index+1) % n;
        }
        person[index] = 1; //kill the person

        //find next alive person
        while(person[index] == 1) 
        index = (index+1) % n;
        return winner(person, n,index, person_left - 1, k);

    }
};


//=> OPTIMAL
// T/C -> O(n)
// S/C -> O(n)
class Solution {
public:
    int findTheWinner(int n, int k) {
        return winner(n, k) + 1;
    }

    int winner(int n, int k){
        if( n == 1) return 0; 

        return (winner(n-1, k) + k) % n;
    }
};
