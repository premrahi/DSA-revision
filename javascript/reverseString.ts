/**
 Do not return anything, modify s in-place instead.
 */
function reverseString(s: string[]): void {

    const size : number = s.length ;

    if(size <= 1) return ;

    let i:number = 0 ;
    let j:number = size-1 ;
    
    while(i<=j) {
        [s[i],s[j]] = [s[j],s[i]];
        i++;
        j--;
    }
};