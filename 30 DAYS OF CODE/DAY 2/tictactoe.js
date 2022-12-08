var playerPiece = '';
var x = 'X', o = 'O';

function disableBtn() {
    document.querySelectorAll('input[type="button"]').disabled = true;
}
function enableBtn() {
    document.querySelectorAll('input[type="button"]').disabled = false;
}


function preGame() {
    disableBtn();
    
}

function playerSelect(){

}

const btn = document.getElementById('1');

btn.addEventListener('click', function handleClick() {
  btn.textContent = 'X';
});

