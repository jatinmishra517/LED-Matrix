console.log("hi");
for(var i=0;i<64;i++){
    var a=document.getElementsByClassName('buttons');
    a[i].addEventListener("click",function(e){
       // console.log(e.target);
       if(e.target.innerHTML=='0'){
        e.target.style.backgroundColor="red";
        e.target.innerHTML="1";}
        else{
        e.target.style.backgroundColor="white";
        e.target.innerHTML="0";
        }     
    })
}
function check(){
    var b=document.getElementsByClassName("buttons");
    var c="B";
    for(var d=0;d<64;d++){
        {if(b[d].innerHTML=='0'){
            c=c+"0";
        }
        else {
            c=c+"1";
        }}
        if(d%8==7){
            c=c+";<br>B";
        }
    }
    
var x= document.getElementsByClassName("output");
x[0].innerHTML=c.substr(0,c.length-1);
}
