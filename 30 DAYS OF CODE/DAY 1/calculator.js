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


    // Store Colour Theme Info
localStorage.setItem("colour-theme", "default");

// Store session info of the last 5 equations calculated
function recentCalcs() {
    for (let i = 1; i < 6; i++){
        var display = equation + solution;

    }
}