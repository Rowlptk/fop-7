const name = 'John';
const age = 31;
const job = 'Web Developer';
const city = 'Miami';
let html;

html = '<ul><li>Name : ' + name + '</li><li>Age : '+ age + '</li><li>Job : '+job+ '</li><li>City : ' + city +'</li></ul>';

// With template strings (es6)
function hello()
{
    return 'Hello';
}
html = `
        <ul>
        <li>Name : ${name} </li> 
        <li>Age : ${age} </li> 
        <li>Job : ${job} </li> 
        <li>City : ${city} </li> 
        <li>${2 + 3} </li> 
        <li>${hello()} </li> 
        <li>${age > 30 ? 'Over 30' : 'Under 30'} </li> 
`

document.body.innerHTML = html;