let arr1 = [100, 200, 300, 400];
let arr2 = [100, 200, 300, 400];

console.log(arr1 === arr2); // this is returning false because it is comparing the exact same physical object in memory

const result = JSON.stringify([arr1]) === JSON.stringify([arr2]);
console.log(result);

console.log(JSON.stringify([arr1]));

const areEqual =
  arr1.length === arr2.length &&
  arr1.every((val, index) => {
   return val === arr2[index];
  });

console.log(areEqual);
