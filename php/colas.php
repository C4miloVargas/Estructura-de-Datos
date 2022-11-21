<?php
//Crea la cola
  $queue= new SplQueue();

  //Añade elementos
  $queue->enqueue('14');
  $queue->enqueue('89');
  $queue->enqueue('34');

 
  //Situa el puntero al principio de la cola
  $queue->rewind();

  //Muestra los elementos (1, 2, 3)
  while( $queue->valid() )
  {
    echo "valores ", $queue->current(), PHP_EOL,"<br>";
    $queue->next();
  }

   //Saca de la cola el primer elemento y lo muestra
    echo "Se elimina el primer elemento ", $queue->dequeue(),"<br>";

  //Situa el puntero al principio de la cola
   $queue->rewind();

   //Muestra el número de elementos de la cola(2)
    $queue->count();

  //Muestra los elementos (2, 3)
   while( $queue->valid() )
   {
    echo "Valores ", $queue->current(), PHP_EOL,"<br>";
    $queue->next();
   }
?>