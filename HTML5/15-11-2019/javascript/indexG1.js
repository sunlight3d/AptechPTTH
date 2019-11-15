var i = 0;
i++; //unary
function sum2Numbers(x, y) {
    return x + y;
}
var age = 10;
age = age > 18 ? age : 18;

document.write(`<h1>i = ${i}</h1>`);
document.write(`<h1>sum = ${i}</h1>`);
document.write(`<h1>age = ${age}</h1>`);
var x = 10;
var y = '10';
var z = 10;
if(x == y) {
    //so sanh gia tri 2 bien
    console.log("Hai gia tri bang nhau ve gia tri, khac kieu");
} 
if(x === z) {
    console.log("Hai gia tri bang nhau ve gia tri, cung kieu");
}
console.log(`type of z" is: ${typeof(z)}`);
var x1 = parseFloat(prompt("Enter x1 = ", "0.0"));
var x2 = parseFloat(prompt("Enter x2 = ", "0.0"));
var x3 = Math.sqrt(x1 + x2)
document.write(`<h1>sum = ${Math.floor(x3*1000)/1000}</h1>`);