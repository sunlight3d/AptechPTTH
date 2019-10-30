function findMax() {
    var numbers = [1, 3, 5, 6 ,9]
    var max = -1000
    for(var i =0; i < numbers.length; i++) {
        if(numbers[i] > max) {
            max = numbers[i]
        }
    }
    return max;
}
function findGoodStudents() {
    //Bia ra 5 sinh vien
    var students = [
        {
            name: "Khanh",
            age: 18,
            marks: 8
        }, {
            name: "An",
            age: 20,
            marks: 7
        }, {
            name: "Tien",
            age: 20,
            marks: 9
        }, {
            name: "Minh",
            age: 21,
            marks: 6
        }, {
            name: "Cuong",
            age: 22,
            marks: 7.5
        }
    ]
    students = students.sort((s1, s2) => {
        return s2.marks - s1.marks
    })
    var results = []
    for(var i = 0; i < 3; i++) {
        results.push(students[i])
    }
    alert(JSON.stringify(results))
}
function login(){
    var email = document.getElementById("email").value
    var password = document.getElementById("password").value
    if(email == "hoang@gmail.com" && password == "123456") {
        alert("Dang nhap thanh cong")
    } else {
        alert("Dang nhap that bai")
    }
}