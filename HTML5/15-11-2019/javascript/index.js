var i = 0;
i++; //unary operator
i--;
console.log(`i = ${i}`);
//ternary operators
var age = 0;
age = age < 18 ? 18 : age;
console.log(`age = ${age}`);

var moneyAmount = 3000000;
var interestRate = 12.00;
var total = (interestRate / 100)*moneyAmount + moneyAmount;

var x = 10;//number type
var y = '10';//string type
if(x == y) {
    document.write(`<h1>x bang y ve gia tri</h1>`);
}
var z = 10;
if(x === z) {
    //strict equal
    document.write(`<h1>x = y ve gia tri va KIEU(type)</h1>`);
    //alert(`x = y ve gia tri va KIEU(type)`);
}
document.write(`<h1>typeof z = ${typeof(z)}</h1>`);
/*
var x1 = parseFloat(prompt("Enter 1st number : ", "0.0")); //Giong printf/scanf trong C
var x2 = parseFloat(prompt("Enter 2nd number : ", "0.0")); //Giong printf/scanf trong C
document.write(`<h1>sum = ${x1 + x2}</h1>`);
*/
var pattern = /^\d{5}$/;
//test pattern
var checkPattern = pattern.exec("99887");
if(checkPattern != null) {
    alert("Pattern is ok");
} else {
    alert("Pattern is FAILED");
}
function sumOf10Ints() {
    var sum = 0.0;
    var i = 0;
    while(i < 1000) {
        sum = sum + i;
        i = i + 1;
    }
    console.log(`sum = ${sum}`);
}
sumOf10Ints();
var numbers = [2,3,5,7,6];
for(var i = 0; i < numbers.length; i++) {
    console.log(`number at i = ${numbers[i]}`)
}








