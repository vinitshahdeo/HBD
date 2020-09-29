object birthday {

  1 to 4 map { i => "Happy Birthday " + (if (i == 3) "dear Scala" else "to you") } foreach println

 (1 to 4).foldLeft("")((r,c) => r + ("\nHappy Birthday " + (if (c == 3) "dear Scala" else "to you")))
 
}
