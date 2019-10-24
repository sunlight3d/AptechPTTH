
function btnSum(){
    //alert("chuan bi tinh tong")
    var x = parseFloat(document.getElementById("x").value)
    var y = parseFloat(document.getElementById("y").value)
    var sum = x / y
    alert(`sum = ${sum}`)
    document.getElementById("sum").value = `${sum}`;
}