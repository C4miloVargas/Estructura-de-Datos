class Cola {
  elementos = [];

  add = (elemento) => {
    return this.elementos.push(elemento);
  }
  remove = () => {
    return this.elementos.shift();
  }
  isempty = () => {
    return this.elementos.length === 0;
  }
  empty = () => {
    this.elementos.length = 0;
  }
  size = () => {
    return this.elementos.length;
  }
  print = () => {
    console.log(this.elementos);
  }
};
function mostrar_input() {
  const cola = new Cola();
  cola.add(document.getElementById("num1").value);
  cola.add(document.getElementById("num2").value);
  cola.add(document.getElementById("num3").value);
  console.log(cola.size()); //3
  cola.print();
  console.log(cola.remove()); // 1
  cola.print();
  //console.log(cola.size());
  console.log(cola.remove()); // 2
  console.log(cola.empty()); // 3
  cola.print();
};