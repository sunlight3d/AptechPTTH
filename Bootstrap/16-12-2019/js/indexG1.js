$(document).ready(function() {
    var isShow = true
    $("#btnClicMe").click(function(){
        isShow = !isShow
        if(isShow === true) {
            $("#myInfo").css("color", 'black')
            //$("#myInfo").show()
        } else {
            // $("#myInfo").hide()
            $("#myInfo").css("color", 'white')
        }
        
    })
    $("#myInfo").mouseenter(function() {      
        $('#myInfo').css("background-color", "red")
    })
    $("#myInfo").mouseleave(function() {      
        $('#myInfo').css("background-color", "white")
    })
    $("input").focus(function(){
        $(this).css("background-color", "red")
    })
    $("input").blur(function(){
        $(this).css("background-color", "white")
    })
    $("#email").on("input", function() {        
        var emailContent = $("#email").val()
        $("#myEmail").text(emailContent)
    })
})