// clears all values
function clearScreen() {
    document.getElementById("result").value = "";
}

// display values
function display(value) {
    document.getElementById("result").value += value;
}

// evaluates the expression and returns result
function calculate() {
    var equation = document.getElementById("result").value;
    var solution = eval(equation);
    document.getElementById("result").value = solution;
}


    