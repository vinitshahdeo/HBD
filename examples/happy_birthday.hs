sayHbd :: String -> String
sayHbd name = do
          let lst1 = ["H","A","P","P","Y"," "]
          let lst2 = ["B","I","R","T","H"]
          let lst3 = ["D","A","Y"," "]
          let greet = lst1 ++ lst2 ++ lst3
          concat greet ++ name

main = do
  putStrLn "What's your name?"
  name <- getLine
  print (sayHbd name)
