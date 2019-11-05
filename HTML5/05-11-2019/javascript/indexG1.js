var songs = [
    {
        name: "Lai may bay",
        year: 2019,
        author: 'Binh Gold'
    },{
        name: "Em gi oi",
        year: 2019,
        author: 'Jack & K-ICM'
    },
    {
        name: "Boc bat ho",
        year: 2018,
        author: 'Binh Gold'
    },
    {
        name: "Het thuong can nho",
        year: 2017,
        author: 'Duc Phuc'
    },{
        name: "Song gio",
        year: 2019,
        author: 'Jack & K-ICM'
    },{
        name: "Something abc",
        year: 2018,
        author: 'Anyone 123'
    }, 
];
var tblSongs = document.getElementById("tblSongs")
for (var i = 0; i < songs.length; i++) {
    var song = songs[i];
    var row = tblSongs.insertRow();

    var cell0 = row.insertCell(0);
    cell0.innerHTML = song.name;

    var cell1 = row.insertCell(1);
    cell1.innerHTML = song.year;

    var cell2 = row.insertCell(2);
    cell2.innerHTML = song.author;
}
var analyze = {};
for(var i = 0; i < songs.length; i++) {
    /*
    if(analyze[songs[i].author] == null) {
        analyze[song[i].author] = 1;
    }  else {
        analyze[songs[i].author] += 1;
    }
    */
    analyze[songs[i].author] = analyze[songs[i].author] == null ?
                                1: analyze[songs[i].author] + 1;
}
//Bai giang
//key-value trong js ?
//key-value = dictionary
console.log(`analyze = ${JSON.stringify(analyze)}`);
function chooseType(){
    var value = document.getElementById("chooseType").value
    alert(`You choose : ${value}`)
}
