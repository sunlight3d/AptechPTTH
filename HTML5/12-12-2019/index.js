
function resetData() {
    // debugger
    document.getElementById("userId").value = ""
    document.getElementById("password").value = ""
    document.getElementById("confirmPassword").value = ""
    document.getElementById("email").value = ""
    document.getElementById("confirmEmail").value = ""
}
function validateForm(){
    debugger
    return false
    var retypePassword = document.getElementById("confirmPassword").value
    var password = document.getElementById("password").value
    if(retypePassword != password) {
        alert("password and retype password are not the same !!")
        return false
    }
    return true
}
