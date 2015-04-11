<?php
for($i = 1; $i<101; $i++){
  if($i%3 == 0 && $i%5 == 0){
    echo("fizzbuzz\n");
    continue;
  }
  if($i%3 == 0){
    echo("fizz\n");
    continue;
  }
  if($i%5 == 0){
    echo("buzz\n");
    continue;
  }
  echo($i."\n");
}
?>
