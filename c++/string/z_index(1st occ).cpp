// Given two strings text and pattern, find the first index where pattern exactly matches with any substring of text. 
// Return -1 if pattern doesn't exist as a substring in text.



int findMatching(string text, string pat) {
    // Code here
    int n = text.size() ;
    int m  = pat.size() ;

    for(int i = 0 ; i < n ; i++) {
        int j = 0 ; 
        while( j < m && text[i+j] == pat[j])
            j++;
        if(j== m ) return i ;
    }
    return -1 ;
}