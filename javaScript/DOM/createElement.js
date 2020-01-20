// Create Element
const li = document.createElement('li');

// Add class
li.className = 'collection-item';

// Add id;
li.id = 'new-item';

// Add attribute
li.setAttribute('title', 'New Item');

// create text 
const text = document.createTextNode('Hello World');

// append
li.appendChild(text);

console.log(li);
console.log(text);