function removeStudent(row) {
    var r = confirm("Do you want to delete this ?");
    if (r == true) {
        var i = row.parentNode.parentNode.rowIndex;
        document.getElementById("studentList").deleteRow(i);    
    }     
}
//function addStudent(studentName, dob, )