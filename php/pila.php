  <?php
  //Crea la pila
  $stack = new SplStack();

  //Añade elementos
  $stack->push('12');
  $stack->push('52');
  $stack->push('39');


  //Situa el puntero al final de la cola
  $stack->rewind();

  //Muestra los elementos (3, 2, 1)
  while( $stack->valid() )
  {
    echo "Valores ", $stack->current(), PHP_EOL ,"</br>";
    $stack->next();
  }
  
   //Saca de la pila el último elemento y lo muestra
   echo "Se elimina el ultimo elemento ", $stack->pop(),"</br>";

  //Situa el puntero al final de la cola
   $stack->rewind();

   //Muestra el número de elementos de la pila (2)
    $stack->count();

  //Muestra los elementos (2, 1)
   while( $stack->valid() )
   {
    echo "valores", $stack->current(), PHP_EOL,"</br>";
    $stack->next();
   }
?>