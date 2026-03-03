// LC - 151

// Given an input string s, reverse the order of the words.
// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.
// Return a string of the words in reverse order concatenated by a single space.
// Note that s may contain leading or trailing spaces or multiple spaces between two words.
// The returned string should only have a single space separating the words. Do not include any extra spaces.

//  s = "the sky is blue"
//  o = "blue is sky the"


class Solution {
public:
    string reverseWords(string s) {

        string a ;
        stack<string> st ;
        int size = s.size() ;

        string word ;
        for(int i = 0 ; i<size ; i++){
            if(s[i] != ' '){
                word.push_back(s[i]);
            }
            else if(!word.empty()){
                st.push(word);
                word.clear() ;
            }
        
        }
        if(!word.empty())
            st.push(word) ;

        while(!st.empty()){
            a += st.top()+ ' ';
            st.pop();
        }
        a.pop_back();
        return a ;
        
    }
};