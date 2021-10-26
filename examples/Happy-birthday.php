<?php

function singHappyBirthday($nm) {
  for ($i = 0; $i < 4; $i++) {
    printf("Happy birthday %s!\n", (2 === $i) ? "dear {$nm}" : "to you");
  }
}
singHappyBirthday('name');