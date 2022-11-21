class node {
    constructor(value) {
        this.value = value;
        this.left = null;
        this.right = null;
    }


    add(value) {
        if (value < this.value) {
            this.addToTheLeft(value);
        } else {
            this.addToTheRight(value);
        }
    }

    addToTheLeft(value) {
        if (this.left) {
            this.left.add(value);
        } else {
            this.left = new node(value);
        }
    }

    addToTheRight(value) {
        if (this.right) {
            this.right.add(value);
        } else {
            this.right = new node(value);
        }
    }
}
function mostrar_input() {
// segun el valor, a la izquierda siempre va el menor y a la derecha el mayor
const head = new node(document.getElementById("principal").value);

head.add(document.getElementById("num1").value);

head.add(document.getElementById("num2").value);

head.add(document.getElementById("num3").value);

head.add(document.getElementById("num4").value);

console.log(head);
}