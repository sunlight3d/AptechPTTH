//alert("Chao cac ban");
console.log('Hello how are you')
var x = 10;
var y = 12;
var name = 'Hoang';
console.log(`Gia tri x = ${x}, gia tri y = ${y}`);
//document.getElementById("mytest").innerText = `Gia tri x = ${x}, gia tri y = ${y}`;
var numbers = [3, 6, 8, 9, 10, 21, 22.4];
var max = Number.MIN_VALUE;
var min = Number.MAX_VALUE;
for(var i = 0; i < numbers.length; i++) {
    if(numbers[i] > max) {
        max = numbers[i];
    }
    if(numbers[i] < min) {
        min = numbers[i];
    }
}
console.log(`Gia tri max la: ${max}`);
console.log(`Gia tri min la: ${min}`);
numbers = numbers.sort(function(x1, x2){
    return x2 - x1;
});
//JSON = Javascript Object Notation
console.log(`numbers =${JSON.stringify(numbers)}`);
//object = like struct in C !
var studentA = {
    name: "Hoang",
    email: 'hoang@gmail.com',
    age: 29
};
console.log(`studentA = ${JSON.stringify(studentA)}`);
console.log(`name = ${studentA.name}`)
console.log(`email = ${studentA.email}`)
console.log(`age = ${studentA.age}`)
var students = [
    {
        name: "Hoang",
        email: 'hoang@gmail.com',
        age: 29
    },{
        name: "Minh",
        email: 'minh@gmail.com',
        age: 23
    },{
        name: "Nguyen",
        email: 'nguyen@gmail.com',
        age: 32
    },{
        name: "Chien",
        email: 'chien@gmail.com',
        age: 18
    }
];
students = students.sort(function(s1, s2){
    //return s2.age - s1.age;//sap xep theo age
    return (s2.name > s1.name) ? 1 : -1;
});
console.log(`students = ${JSON.stringify(students)}`)
//delete = filter
students = students.filter(function(s){
    return s.name != "Minh"
});
console.log(`students = ${JSON.stringify(students)}`)
//Modify an object
students[2].name = "xxx";
console.log(`students = ${JSON.stringify(students)}`);
//Ham = function
function tong2so(x1, x2) {
    return x1 + x2;
}
function nhan2so(x1, x2) {
    return x1 * x2;
}
console.log(`tong 2 so = ${tong2so(2,3)}`);
console.log(`nhan 2 so = ${nhan2so(2,3)}`);
//anh xa = mapping
var x = [1, 4, 5, 6, 8, 9, 10];
var y = x.map(function(x1){
    return x1 * x1;
});
console.log(`x = ${x}`);
console.log(`y = ${y}`);
document.getElementById("mytest").innerHTML = `y = ${y}`;
