/**
 Do not return anything, modify nums1 in-place instead.
 */
function merge(nums1: number[], m: number, nums2: number[], n: number): void {
  
    if(n === 0) return  ;
    if(m === 0) {
        for(let i = 0; i< n ;i++){
            nums1[i] = nums2[i] ;
        }
        return ;
    }  ;

    

    const temp : number[] = [] ;

    let i:number = 0 ; 
    let j:number = 0 ;


    while(i<m && j<n){
        if(nums1[i] <= nums2[j]){
            temp.push(nums1[i]);
            i++;
        }
        else{
            temp.push(nums2[j]);
            j++;
        }
    }
    while(i<m){
        temp.push(nums1[i]) ;
        i++;
    }
    while(j<n){
        temp.push(nums2[j]) ;
        j++;
    }


    i =0 ;

    while(i < m+n){
        nums1[i] = temp[i] ;
        i++;
    }
};