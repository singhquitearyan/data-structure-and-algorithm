//Author: Aryan Singh
//Date: 22/09/25
//Description: check for palindrome

using namespace std;
bool palindrome(string &s, int start, int end){
    if(start >= end) return true;
    if(s[start] != s[end]) return false;

    return palindrome(s, start+1, end-1);
        
    }

int main(){
    string s;
    cin >> s;

if(palindrome(s, 0, s.size() -1))
cout << "yes Palindrome";
else
    cout<< " Not a palindrome";


    return 0;
}
