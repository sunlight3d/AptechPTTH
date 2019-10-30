let mobiles = [
    {
        name: "iphone 5",
        year: 2015
    },
    {
        name: "iphone 6",
        year: 2016
    },
    {
        name: "iphone 8",
        year: 2018
    },
    {
        name: "iphone X",
        year: 2019
    },
    {
        name: "iphone 7",
        year: 2017
    }
]
mobiles = mobiles.sort((m1, m2) => {
    return m2.year - m1.year
})

function login() {
    const email = document.getElementById("email").value
    const password = document.getElementById("password").value    
    if(email == "hoang@gmail.com" && password == "123456") {
        alert("Dang nhap thanh cong")
    } else {
        alert("Dang nhap that bai")
    }    
   //alert(JSON.stringify(mobiles))
}

