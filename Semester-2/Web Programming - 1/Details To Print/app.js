let submitBtn = document.querySelector('#submit');

let firstName = document.querySelector('#fname');
let lastName = document.querySelector('#lname');
let pass = document.querySelector('#pass');
let num = document.querySelector('#num');
let mail = document.querySelector('#mail');

let result = document.querySelector('.result');

// let rfirstName = document.querySelector('#r-fname'); 
// let rlastName = document.querySelector('#r-lname');
// let rpass = document.querySelector('#r-pass');
// let rnum = document.querySelector('#r-num');
// let rmail = document.querySelector('#r-mail');

submitBtn.addEventListener("click",function (event) {
    event.preventDefault();
    let cnt=0;
    let inputs = [firstName,lastName,pass,num,mail];
    let labels = ["First Name : ","Last Name : ","Password : ","Number : ","Mail Id : "];
    while (cnt!=5) {
        let newPara = document.createElement('p');
        newPara.innerText = labels[cnt] + inputs[cnt].value;
        result.appendChild(newPara);
        cnt++;
    }
});