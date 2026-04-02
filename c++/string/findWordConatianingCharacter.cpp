class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> answer ;

            for(auto it : words){
                for( char c : it){
                    if( c == x) answer.push_back(it) ;
                }
            }


        return ans ;
    }
};