const numbers = [43,56,33,23,44,36,5];
const numbers2 = new Array(22,45,33,76,54);
const fruit = ['Apple', 'Banana', 'Orange', 'Pear'];
const mixed = [22,'Hello',true, undefined, null, {a:1, b:1},new Date()];

let val;
// Get Array length
val = numbers.length;

val = numbers[5];

numbers[6] = 6;

// Mutating arrays
// Adding on to end
numbers.push(1000);
// Adding on to front
numbers.unshift(120);
// Splice
numbers.splice(3,0,900);
// Take off from end
numbers.pop();
// Take off from end
numbers.shift();
// splice for remove
numbers.splice(2,1); 

// array, object, date, if,, forEach, for/in
// DOM


// numbers = [1,2];


document.body.innerHTML = numbers;
// console.log(val);