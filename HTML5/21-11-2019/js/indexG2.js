var students = []

function getInputStudent() {
    var name = document.getElementById("name").value
    var dob = document.getElementById("dob").value
    var genders  = document.getElementsByName("gender")
    var gender = ""
    for(var i = 0; i < genders.length; i++) {
        if(genders[i].checked == true ) {
            gender = genders[i].value
        }
    }
    var languages  = document.getElementsByName("language")
    var checkedlanguages = []
    for(var i = 0; i < languages.length; i++) {
        if(languages[i].checked == true ) {
            checkedlanguages.push(languages[i].value)
        }
    }
    checkedlanguages = checkedlanguages.join(", ")
    var classNames = document.getElementById("className").options
    var className = ""
    for(var i = 0; i < classNames.length; i++) {
        if(classNames[i].selected == true ) {
            className = classNames[i].value
        }
    }
    
    return {name, dob,gender,checkedlanguages,className}
}
function addStudent() {
    alert("Add student")
    var newStudent = getInputStudent()
    if(newStudent != null) {
        students.push(newStudent)
    }
    reloadStudentTable()
}
function reloadStudentTable() {
    var studentTable = document.getElementById("table2")
    var tableRows = studentTable.getElementsByTagName('tr');
    for (var x=studentTable.length; x>0; x--) {
        studentTable.removeChild(tableRows[x]);
     }
     
    for(var i = 0; i < students.length; i++){
        var student = students[i]
        var row = studentTable.insertRow(0);
        var cell0 = row.insertCell(0)
        cell0.innerHTML = student.name

        var cell1 = row.insertCell(1)
        cell1.innerHTML = student.dob

        var cell3 = row.insertCell(3)
        cell3.innerHTML = student.gender

        var cell4 = row.insertCell(4)
        cell4.innerHTML = student.checkedlanguages
        
        var cell1 = row.insertCell(1)
        cell1.innerHTML = student.className

    }

}