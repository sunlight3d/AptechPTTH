$(document).ready(function(){
    var isShow = true
    setInterval(function(){
        isShow = !isShow
        if(isShow == true) {
            //$("#myInfo").show()
            $("#myInfo").css("color", 'black')
        } else {
            //$("#myInfo").hide()
            $("#myInfo").css("color", 'white')
        }
    }, 5000)
    $("#btnShow").click(function() {
        // alert("Ban bam nut show")
        
        
    })
    $("#myWarning").mouseenter(function() {
        $("#mymouse").text("You enter this")
        
    })
    $("#myWarning").mouseleave(function() {
        $("#mymouse").text("You leave this")        
    })
    $("#myWarning").hover(function(){
        $("#myWarning").css("background-color", "red")
    }, function(){
        $("#myWarning").css("background-color", "white")
    })
    $("input").focus(function(){
        $(this).css("background-color", "red")
    })
    $("input").blur(function(){
        $(this).css("background-color", "#ffffff");
      });
})