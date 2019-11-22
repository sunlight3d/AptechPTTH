var selectedIndex = 0
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
    var studentTable = document.getElementById("table2")
    var newStudent = getInputStudent()
    selectedIndex++
    var row = studentTable.insertRow(selectedIndex);
    var cell0 = row.insertCell(0)
    cell0.innerHTML = newStudent.name

    var cell1 = row.insertCell(1)
    cell1.innerHTML = newStudent.className

    var cell2 = row.insertCell(2)
    cell2.innerHTML = newStudent.dob

    var cell3 = row.insertCell(3)
    cell3.innerHTML = newStudent.gender
        
    var cell4 = row.insertCell(4)
    cell4.innerHTML = newStudent.checkedlanguages
    
    var cell5 = row.insertCell(5)
    cell5.innerHTML = `<button onclick="deleteStudent(${selectedIndex})">Delete</button>`
}
function deleteStudent(rowIndex) {
    var yesOrNo = confirm("Do you want to delete this ?")
    if(yesOrNo === true) {
        var studentTable = document.getElementById("table2")
        studentTable.deleteRow(rowIndex)
        selectedIndex--
    }
    
}