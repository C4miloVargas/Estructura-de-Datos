class Pila {
    elementos = [];
    
    push = (elemento) => {
      return this.elementos.push(elemento);
    };
    pop = () => {
      return this.elementos.pop();
    };
    isempty = () => {
      return this.elementos.length === 0;
    };
    empty = () => { 
      this.elementos.length = 0;
    };
    size = () => {
      return this.elementos.length;
    };
    print = () =>{
        console.log(this.elementos);
    }
};
function mostrar_input(){
    const pila = new Pila();
    // Agregamos elementos a la pila
    pila.push(document.getElementById("num1").value);
    pila.push(document.getElementById("num2").value);
    pila.push(document.getElementById("num3").value);
    pila.print();
    console.log(pila.size()); 
    console.log(pila.pop()); 
    console.log(pila.size()); 
    console.log(pila.isempty());
    console.log(pila.empty());
    console.log(pila.size());
};