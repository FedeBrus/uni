fun fact 0 = 0
  | fact n = n * fact (n - 1);

fun cyclei nil _ = nil
  | cyclei L 0 = L
  | cyclei (x::xs) i = cyclei (xs @ [x]) (i - 1);

cyclei [1, 2, 3, 4] 2;
cyclei ["a", "b", "c", "d", "e"] 4;

fun duplicate nil = nil 
  | duplicate (x::xs) = x :: x :: (duplicate xs);

duplicate [1, 2, 3, 4];
duplicate ["a", "b", "c"];

fun len nil = 0
  | len (x::xs) = 1 + (len xs);

len [1, 2, 3, 4];
len ["a", "b", "c"];

fun pow x 0 = 1.0
  | pow x i = if i > 0 then x * (pow x (i - 1))
              else 1.0 / (x * (pow x (~i - 1)));

pow 2.1 3;
pow 2.0 ~3;

fun maxList nil = ""
  | maxList (x::xs) = let 
    val other = maxList xs
  in 
    if x > other then x else other
  end;

maxList ["a", "abc", "ab", "abb"];
