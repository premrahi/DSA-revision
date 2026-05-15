const first = document.getElementById('first') ;
const second = document.getElementById('second') ;
const third = document.getElementById('third') ;

// event bubbling
first.addEventListener('click',()=>{
    console.log('outermost clicked');
} )
second.addEventListener('click',()=>{
    console.log('middle clicked');
})
third.addEventListener('click',()=>{
    console.log('innermost clicked');
})


// event delegation or capturing
// first.addEventListener('click',()=>{
//     console.log('outermost clicked');
// } ,true)
// second.addEventListener('click',()=>{
//     console.log('middle clicked');
// },true)
// third.addEventListener('click',()=>{
//     console.log('innermost clicked');
// },true)