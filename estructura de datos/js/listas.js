
function mostrar_input() {
    let milista = [];

    milista.push(document.getElementById("num1").value); // agregar numeros
    console.log(milista);

    milista.push(document.getElementById("num2").value);
    console.log(milista);

    milista.push(document.getElementById("num3").value);
    console.log(milista);

    milista.pop(); //elimina el ultimo
    console.log(milista);

    milista.unshift(10); //agregar al primer espacio
    console.log(milista);

    milista.shift(); // remueve el primer numero
    console.log(milista);

}
