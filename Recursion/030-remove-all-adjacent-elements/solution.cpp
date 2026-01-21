//Author: Aryan Singh
//Date: 21/01/26
//Description:

string removeDuplicates(string s) {
    if (s.length() <= 1)
        return s;

    string rest = removeDuplicates(s.substr(1));

    if (!rest.empty() && s[0] == rest[0])
        return rest;

    return s[0] + rest;
}
