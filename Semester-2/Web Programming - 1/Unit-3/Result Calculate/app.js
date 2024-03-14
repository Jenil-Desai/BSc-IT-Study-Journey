let submitBtn = document.querySelector('#submit');
let resetBtn = document.querySelector('#reset');

let ds = document.querySelector('#ds');
let wp = document.querySelector('#wp');
let math = document.querySelector('#math');

let totalDisplay = document.querySelector('#total');
let perDisplay = document.querySelector('#per');
let gradeDisplay = document.querySelector('#grade');
let resDisplay = document.querySelector('#res');

submitBtn.addEventListener("click", function (event) {
    event.preventDefault();

    let FinaleDS = parseInt(ds.value);
    let FinaleWP = parseInt(wp.value);
    let FinaleMath = parseInt(math.value);

    let total = FinaleDS+FinaleWP+FinaleMath;
    totalDisplay.innerHTML = total;

    let per = (total/300)*100;
    perDisplay.innerHTML = per;
    
    if (per >= 90) {
        gradeDisplay.innerHTML = "A";
    } else if (per >= 80 && per <= 89) {
        gradeDisplay.innerHTML = "B";
    } else if (per >= 70 && per <= 79) {
        gradeDisplay.innerHTML = "C";
    } else if (per >= 60 && per <= 69) {
        gradeDisplay.innerHTML = "D";
    } else {
        gradeDisplay.innerHTML = "E";
    }

    if (FinaleDS >= 32 && FinaleWP >= 32 && FinaleMath >= 32) {
        resDisplay.innerHTML = "PASS";
    } else {
        resDisplay.innerHTML = "FAIL";
    }

});

resetBtn.addEventListener("click", function () {
    totalDisplay.innerHTML = "";
    perDisplay.innerHTML = "";
    gradeDisplay.innerHTML = "";
    resDisplay.innerHTML = "";
    ds.focus();
});