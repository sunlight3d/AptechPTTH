var x = 10 //this is a number
var y = '2' //string
var z = x + parseInt(y)
//alert("Tong 2 so = "+z) //in cach 1
var N = 100
//alert(`Tong 2 so = ${z}`)
/*
for(var i = 0; i<10; i++){
    if(i%2 != 0){
        console.log(`so le la : ${i}`)
    }
}
*/
var i = 0
while(i < N) {
    if(i%2 != 0) {
        console.log(`so le la : ${i}`)
    }
    i++;
}
console.log('Ban cuu chuong')
//Bang cuu chuong so 5
N = 5;
for(var i = 1; i <= 10; i++) {
    console.log(`${N} x ${i} = ${N*i}`)
}
//array
var numbers = [3, 4, 9, 7, 16, 2]
var sum = 0;
for(var i = 0; i < numbers.length; i++) {
    sum += numbers[i]
}
console.log(`sum = ${sum}`)
//Tim max
var max = Number.MIN_SAFE_INTEGER
var min = Number.MAX_SAFE_INTEGER
for(var i = 0; i < numbers.length; i++) {
    if(numbers[i] > max) {
        max = numbers[i]
    }
    if(numbers[i] < min) {
        min = numbers[i]
    }
}
console.log(`max = ${max}`)    
console.log(`min = ${min}`)    
//object
var studentA = {
    name: 'Hoang',//fields= thuoc tinh
    age: 30,
    email: 'hoang@gmail.com'
}
//array of objects
var students = [
    {
        name: 'Hoang',//fields= thuoc tinh
        age: 30,
        email: 'hoang@gmail.com'
    },
    {
        name: 'Khanh',//fields= thuoc tinh
        age: 28,
        email: 'khanh@gmail.com'
    },
    {
        name: 'Cuong',//fields= thuoc tinh
        age: 22,
        email: 'cuong@gmail.com'
    },
]
//Them phan tu vao mang
students.push({
    name: 'Minh',
    age: 20,
    email: 'minh@gmail.com'
})
console.log(`students = ${JSON.stringify(students)}`)
//iterate an array
for(var i = 0; i < students.length; i++){
    console.log(`student = ${JSON.stringify(students[i])}`)
}
//sort = sap xep
students = students.sort(function(s1, s2) {
    //return s1.age - s2.age //sap xep theo tuoi
    //Sap xep theo name
    //return (s1.name > s2.name) ? 1 : -1
    //Sap xep theo email
    //return (s1.email > s2.email) ? 1 : -1
    //Sap xep theo chieu nguoc lai
    return (s1.email < s2.email) ? 1 : -1
})
console.log('Sau khi sap xep')
console.log(`students = ${JSON.stringify(students)}`)
//xoa 
students = students.filter(function(student){
    return student.name != 'Khanh'
})
console.log(`students = ${JSON.stringify(students)}`)
//modify an object
students[2].name = 'xxx'
console.log(`students = ${JSON.stringify(students)}`)
//Ham = function 
function tong2so(x, y) {
    return x + y
}
function tich2so(x, y) {
    return x * y
}
console.log(`tong 2 so = ${tong2so(3, 2)}`)
console.log(`tich 2 so = ${tich2so(3, 2)}`)
//Anh xa = mapping
var x = [1, 2, 3, 4, 5, 6]
var y = x.map(function(x1){
    return x1 * x1
})
console.log(`x = ${x}`)
console.log(`y = ${y}`)
var names = ["Hoang", "Minh", "Khanh"]
var outputNames = names.map(function(name){
    return "Hello "+name
})
console.log("name = "+JSON.stringify(names))//JSON = Javascript Oject Notation
console.log("outputNames = "+JSON.stringify(outputNames))

