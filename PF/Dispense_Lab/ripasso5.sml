fun thousandthPower x:real = let 
    val x = x * x * x * x * x;
    val x = x * x * x * x * x;
    val x = x * x * x * x * x;
    val x = x * x * x * x;
  in
    x * x
  end;

thousandthPower 1.0;
thousandthPower 1.1;

fun split nil = (nil, nil)
  | split [x] = ([x], nil)
  | split (x::y::xs) = let
      val res = split xs;
      val M = #1 res;
      val N = #2 res
    in
      (x :: M, y :: N)
    end;

split [1, 2, 3, 4];

fun sumPairs nil = (0, 0)
  | sumPairs ((x, y)::xs) = let
      val (left, right) = sumPairs xs;
    in
      (x + left, y + right)
    end;

sumPairs [(1, 2), (3, 4), (5, 6)];

exception NegativeExponent of int;

fun doubleExp x 0 = x
  | doubleExp (x:real) i = if i > 0 then let val y = doubleExp x (i - 1) in y * y end
                         else raise NegativeExponent(i); 

doubleExp 1.1 3;

fun sumList L = let
    val (even, odd) = split L;
  in
    (case even of nil => 0 | S => foldr op+ 0 S, case odd of nil => 0 | S => foldr op+ 0 S)
  end;

fun sumList nil = (0, 0)
  | sumList [x] = (x, 0)
  | sumList (x::y::xs) = let val (even, odd) = sumList xs in (x + even, y + odd) end;

sumList [1, 2, 3, 4];
sumList [1];
sumList [];

fun printList nil = print("nil\n")
  | printList (x::xs) = (print(Int.toString x); print("\n"); printList(xs));

printList nil;
printList [1, 2, 3];

fun printXs 0 = print("X")
  | printXs n = (printXs (n - 1); printXs (n - 1));

printXs 3;

fun getWord input = case TextIO.inputN (input, 1) of
                  " " => ""
                  | "\t" => ""
                  | "\r" => ""
                  | "\n" => ""
                  | x => x ^ (getWord input);

fun whiteSpace input = if TextIO.endOfStream input then "" else 
                      case str (valOf (TextIO.lookahead input)) of 
                        " " => ((TextIO.input1 input); whiteSpace input)
                      | "\t" => ((TextIO.input1 input); whiteSpace input)
                      | "\r" => ((TextIO.input1 input); whiteSpace input)
                      | "\n" => ((TextIO.input1 input); whiteSpace input)
                      | x => "";

fun getWords input = if not (TextIO.endOfStream input) then
                       ((getWord input) ^ (whiteSpace input)) :: (getWords input)
                     else [];

fun getList filename = getWords (TextIO.openIn filename);

getList "input.txt";
