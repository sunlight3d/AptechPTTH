var isHide = true
function buttonShow() {
    /*
    var divAgree = document.getElementById("agree")
    isHide = !isHide
    divAgree.style.display = isHide === true ? 'none':'block'
    */
   
 }

$(document).ready(function(){
    $('#btnSubmit').click(function(){
        alert('you clicked submit !')
    })    
    $("#buttonShow").click(function() {
        debugger
        isHide = !isHide
        debugger
        if (isHide === true) {
            $('#agree').hide()
        } else {
            $('#agree').show()
        }
    })
})

