var x = 10;
var y = x;//assign
x = 120;
alert(`y = ${y}`)
var person1 = {
    name: "Hoang",
    age: 20
};
var person2 = person1;//reference = tham chieu
person1.age = 30;
/*
var person3 = {};
person3.name = person1.name;
person3.age = person1.age;
person1.age = 100;
*/
//var person3 = {...person1} //assign/clone 1 object
var person3 = JSON.parse(JSON.stringify(person1))////assign/clone 1 object
person1.age = 100
alert(JSON.stringify(person3.age));