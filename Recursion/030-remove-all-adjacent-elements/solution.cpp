//Author: Aryan Singh
//Date: 21/01/26
//Description: didn't understand some of the concepts like how it is removing
// when there is a duplicate elemnts

string removeDuplicates(string s) {
    if (s.length() <= 1)
        return s;

    string rest = removeDuplicates(s.substr(1));

    if (!rest.empty() && s[0] == rest[0])
        return rest;

    return s[0] + rest;
}
