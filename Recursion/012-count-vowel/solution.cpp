//Author: Aryan SIngh
//Date: 23/09/25
//Description: Count the number of vowel 

#include<bits/stdc++.h>
using namespace std;

int vowels(string &str, int index ){
    if(index == -1) return 0;
if( str[index] == 'a' || str[index] =='e' || str[index] == 'i' ||
    str[index] == 'o' || str[index] == 'u') {
        return 1 + vowels(str, index-1);
    }
else{
    return vowels(str, index-1);
}

}
int main(){
    string str;
    cin >> str;
    int index = str.size() - 1;

    cout << vowels(str, index);
    return 0;
}


// DEscription : using string
#include <bits/stdc++.h>
using namespace std;

int countVowels(const char str[], int index) {
    if (index == -1) return 0;

    char ch = str[index];
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1 + countVowels(str, index - 1);
    } else {
        return countVowels(str, index - 1);
    }
}

int main() {
    char str[100];
    cin >> str;

    int len = strlen(str);
    cout << countVowels(str, len - 1);
    return 0;
}
