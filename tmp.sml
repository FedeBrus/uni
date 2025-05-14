fun
	take nil = nil
	| take (x::xs) = skip xs
and
	skip nil = nil
	| skip (x::xs) = take xs;

fun merge nil M = M
	| merge L nil = L
	| merge (L as x::xs) (M as y::ys) = 
		if x < y then x::(merge xs M)
		else y::(merge L ys);

fun length L = case L of 
                    nil => 0 
                  | (x::xs) => 1 + length L;

exception OutOfRange of int * int

fun choose n m = if n <= 0 then raise OutOfRange(n, m) 
                 else if m < 0 orelse m > n then raise OutOfRange (n, m) 
                 else if m = 0 orelse m = n then 1 
                 else choose (n - 1) m + choose (n - 1) (m - 1)
                 handle OutOfRange (0, 0) => 1
                      | OutOfRange (n, m) => ( 
                            print ("out of range: n="); 
                            print (Int.toString(n)); 
                            print (" m="); 
                            print (Int.toString(m)); 
                            print ("\n"); 
                            0 
                          );

  type signal = int list;
val v:signal = [1, 2];
val w:int list = [1, 2];
v = w;

type ('c, 'd) mapping = ('c * 'd) list;
val words:(int, int) mapping = [(1,2), (2,3)];

datatype 
	'a evenTree = Empty 
			     | Enode of 'a * 'a oddTree * 'a oddTree
and
	'a oddTree = Onode of 'a * 'a evenTree * 'a evenTree;

fun minuslast nil = nil
  | minuslast (x::xs) = if xs = nil then nil else (x :: (minuslast xs));

fun prefix "" = nil
  | prefix s = s :: (prefix(implode(minuslast(explode s))));

prefix "Ciao";
prefix "Banana";

(*
fun sum_binary_aux nil nil carry = if carry = 0 then nil else [carry]
  | sum_binary_aux (x::xs) nil carry =
    let
      val (res, carry_out) = bit_add(x, 0, carry)
    in
      res :: (sum_binary_aux xs nil carry_out)
    end
  | sum_binary_aux nil (y::ys) carry =
    let
      val (res, carry_out) = bit_add(0, y, carry)
    in
      res :: (sum_binary_aux nil ys carry_out)
    end
  | sum_binary_aux (x::xs) (y::ys) carry =
    let
      val (res, carry_out) = bit_add(x, y, carry);
    in
      res :: (sum_binary_aux xs ys carry_out)
    end;
*)

fun length nil = 0
  | length (x::xs) = 1 + length xs;

fun longer a b = if length a > List.length b then a else b;
fun shorter a b = if length a <= List.length b then a else b;

fun reverse nil = nil
  | reverse (x::xs) = (reverse xs) @ [x];

fun bit_add (0, 0, 0) = (0, 0)
  | bit_add (0, 1, 0) = (1, 0)
  | bit_add (1, 0, 0) = (1, 0)
  | bit_add (1, 1, 0) = (0, 1)
  | bit_add (0, 0, 1) = (1, 0)
  | bit_add (0, 1, 1) = (0, 1)
  | bit_add (1, 0, 1) = (0, 1)
  | bit_add (1, 1, 1) = (1, 1)
  | bit_add (_, _, _) = (0, 0);

fun sum_binary_aux nil nil 0 = nil
  | sum_binary_aux nil nil carry = [carry]
  | sum_binary_aux op1 op2 carry =
    let
      val (x, xs) = case op1 of nil => (0, nil) | (w::ws) => (w, ws);
      val (y, ys) = case op2 of nil => (0, nil) | (z::zs) => (z, zs);
      val (res, carry_out) = bit_add(x, y, carry);
    in
      res :: (sum_binary_aux xs ys carry_out)
    end;

fun sum_binary op1 op2 = reverse (sum_binary_aux (reverse (longer op1 op2)) (reverse (shorter op1 op2)) 0);

sum_binary [] [];
sum_binary [1, 0] [1];
sum_binary [1, 0, 0, 1] [1, 1, 0];
sum_binary [1] [1, 1];
sum_binary [1, 1, 0, 0, 1, 1] [1, 0, 1, 0];
sum_binary [1, 0, 0, 1, 1] [1, 1, 1, 0, 1];

