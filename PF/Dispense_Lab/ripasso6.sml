exception NegativeArgument of int;

fun fact 0 = 1
  | fact n = if n > 0 then n * fact (n - 1) else raise NegativeArgument(n);

fact 4;
fact ~2 handle NegativeArgument(n) => fact (~n);

fun tabulate (a:real) d 0 f = []
  | tabulate a d n f = (a, f a) :: tabulate (a + d) d (n - 1) f;

fun printTable nil = ()
  | printTable ((x, y)::xs) = (
                  print "|";
                  print (Real.toString x); 
                  print "|";
                  print (Real.toString y);
                  print "|\n";
                  printTable xs
                );

printTable (tabulate 1.0 0.1 9 (fn x => x * x));

fun filterNegative L = map (fn x => if x > 0.0 then x else 0.0) L;

filterNegative [0.0, 1.0, ~2.1, ~2.3];

fun max nil = raise Empty
  | max (L as (x::xs)) = foldr (fn (x, y) => if x > y then x else y) x L;

max [1, 2, 5, 3, 4];

fun filterNegative L = List.filter (fn x => if x > 0.0 then true else false) L;

filterNegative [1.0, 2.0, ~3.0, 4.0];

fun getNumbers inputFile = if (TextIO.endOfStream inputFile) then 0
                           else (valOf (Int.fromString (valOf(TextIO.inputLine inputFile))) handle _ => 0) + getNumbers inputFile;

fun readAndSum filename = getNumbers (TextIO.openIn filename);

readAndSum "numbers.txt";
