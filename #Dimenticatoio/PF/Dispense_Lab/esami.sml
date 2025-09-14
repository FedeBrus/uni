datatype Naturale = Zero | Successivo of Naturale;

fun somma Zero n = n 
  | somma (Successivo(a)) n = Successivo(somma a n);

fun prodotto Zero n = Zero
  | prodotto (Successivo(a)) n = somma (prodotto a n) n;

fun converti Zero = 0
  | converti (Successivo(a)) = 1 + converti a;

fun crea 0 = Zero
  | crea n = Successivo(crea (n - 1));

val a = crea 5;
val b = crea 7;
val c = crea 2;

converti (prodotto a b);
converti (prodotto a c);
converti (prodotto b c);

datatype Expr = X | Y | Avg of Expr * Expr | Mul of Expr * Expr;

fun compute X x _ = x
  | compute Y _ y = y
  | compute (Mul(e1, e2)) x y = (compute e1 x y) * (compute e2 x y)
  | compute (Avg(e1, e2)) x y = ((compute e1 x y) + (compute e2 x y)) div 2;

(compute X) 4 2;
(compute Y) 4 2;
compute (Avg(X, Y)) 4 2;
compute (Mul(X, Y)) 4 2;
compute (Avg(X, Y)) 4 (compute (Mul(X, Y)) 4 2);

fun elementi_pari nil = nil
  | elementi_pari (x::nil) = nil
  | elementi_pari (x::y::xs) = y :: elementi_pari xs;

elementi_pari [1, 2, 3, 4, 5];
elementi_pari [1, 2, 3, 4];
elementi_pari [1, 2];
elementi_pari [1];

datatype Codice = Rosso of string
                | Giallo of string
                | Verde of string;

fun arriva nil x = [x]
  | arriva L (v as Verde(x)) = L @ [v]
  | arriva ((r as Rosso(y))::xs) x = r :: (arriva xs x)
  | arriva ((g as Giallo(y))::xs) (Giallo(x)) = g :: (arriva xs (Giallo(x)))
  | arriva L x = x :: L;


val listaAttesa = [];
val listaAttesa = arriva listaAttesa (Verde "pluto");
val listaAttesa = arriva listaAttesa (Verde "pippo");
val listaAttesa = arriva listaAttesa (Giallo "pluto");
val listaAttesa = arriva listaAttesa (Rosso "ciop");
val listaAttesa = arriva listaAttesa (Verde "cip");
arriva listaAttesa (Giallo "clarabella");

fun hist (nil: real list) (_, _) = 0
  | hist (x::xs) (c, d) = (if x > c - d andalso x < c + d then 1 else 0) + hist xs (c, d);

hist [0.1, 0.5, 1.0, 3.0, 2.5] (1.0, 0.5);
hist [0.1, 0.5, 1.0, 3.0, 2.5] (1.0, 0.6);

fun removeAll nil _ = nil
  | removeAll (x::xs) y = (if x = y then nil else [x]) @ removeAll xs y;

fun noduplen nil = 0
  | noduplen (x::xs) = 1 + noduplen (removeAll xs x);

noduplen ["pera", "pera", "pera", "pera"];
noduplen ["red", "red", "green", "blue"];
noduplen ["pera", "pera", "pera", "pera"];
noduplen ["red", "red", "green", "blue"];
noduplen ["red"];
noduplen [];
noduplen [1, 2, 4, 5, 6, 0, 1, 4, 5];
noduplen [true, false, true, false];
noduplen [#"A", #"a", #"B", #"b"];

datatype LambdaExpr = Var of string
                    | Lambda of string * LambdaExpr
                    | Apply of LambdaExpr * LambdaExpr;

fun is_free S (Var(x)) = (S = x)
  | is_free S (Lambda(x, e)) = (S <> x) andalso (is_free S e)
  | is_free S (Apply(e1, e2)) = (is_free S e1) orelse (is_free S e2);

is_free "a" (Var "a");
is_free "b" (Var "a");
is_free "a" (Lambda ("a", Apply((Var "a"), Var "b")));
is_free "b" (Lambda ("a", Apply((Var "a"), Var "b")));

fun is_bound S (Var(x)) = (S = x)
  | is_bound S (Lambda(x, e)) = (S = x) orelse (is_bound S e)
  | is_bound S (Apply(e1, e2)) = (is_bound S e1) orelse (is_bound S e2);

is_bound "a" (Var "a");
is_bound "b" (Var "a");
is_bound "a" (Lambda ("a", Apply((Var "a"), Var "b")));
is_bound "b" (Lambda ("a", Apply((Var "a"), Var "b")));

datatype Espressione = Costante of int
                     | Variabile of string
                     | Somma of Espressione * Espressione
                     | Sottrazione of Espressione * Espressione
                     | Prodotto of Espressione * Espressione
                     | Divisione of Espressione * Espressione
                     | Var of string * Espressione * Espressione;

exception NoVariableFound

fun lookup nil _ = raise NoVariableFound
  | lookup ((S, v)::xs) x = if S = x then v else (lookup xs x);

fun eval env (Costante(n)) = n
  | eval env (Variabile(S)) = lookup env S
  | eval env (Somma(e1, e2)) = (eval env e1) + (eval env e2)
  | eval env (Sottrazione(e1, e2)) = (eval env e1) + (eval env e2)
  | eval env (Prodotto(e1, e2)) = (eval env e1) * (eval env e2)
  | eval env (Divisione(e1, e2)) = (eval env e1) div (eval env e2)
  | eval env (Var(S, e1, e2)) = eval ((S, eval env e1) :: env) e2;

type int_set = int -> bool;

val eset:int_set = fn x => false;
fun add (f:int_set) x = fn n => if (n = x) then true else f n;
fun is_in (f:int_set) n = f n;

fun intersect (f:int_set) (g:int_set) = fn n => (is_in f n) andalso (is_in g n);
fun union (f:int_set) (g:int_set) = fn n => (is_in f n) orelse (is_in g n);

fun sommali n nil = n
  | sommali n (_::nil) = n
  | sommali n (x::y::xs) = y + sommali n xs;

sommali 0 [1, 2];
sommali 1 [1, 2, 3];
sommali 2 [1, 2, 3, 4];

datatype FOR = For of int * (int -> int);
exception NegativeIndex;

fun evalFor (For(1, f)) = f
  | evalFor (For(i, f)) = if (i > 0) then (f o (evalFor (For(i - 1, f)))) else raise NegativeIndex;

val g = evalFor(For(3, (fn x => x * 2)));
g 5;
g 2;

datatype IntOrNil = Nil | Int of int;
type env = string -> IntOrNil;

val empty_env = fn _:string => Nil;

fun lega env S v = fn x => if (x = S) then Int(v) else (env x);

((lega empty_env "a" 1) "a");
((lega empty_env "a" 1) "boh");
((lega (lega empty_env "a" 1) "boh" ~1) "boh");
((lega (lega empty_env "a" 1) "boh" ~1) "mah");

val env1 = (lega empty_env "a" 1);
val env1 = (lega env1 "a" 2);
env1 "a";

fun prod n m = if (n = m) then n
               else if (n > m) then n * (prod (n - 1) m)
               else prod m n;

fun comb n m = (prod (n - m + 1) n) div (prod m 1);

comb 5 3;
comb 7 5;
comb 9 1;

fun funz L = map (fn x => x * x + (if x < 0 then 1 else ~1)) L;

funz [~1, 2, 3, 0, ~5, 6];

fun is_space #" " = true
  | is_space #"\n" = true
  | is_space #"\t" = true
  | is_space #"\r" = true
  | is_space _ = false;

fun get_chars filename =
  let
    val inputfile = TextIO.openIn filename;
    val content = TextIO.inputAll inputfile
  in
    TextIO.closeIn inputfile;
    implode (List.filter (not o is_space) (explode content))
  end;

get_chars "text.txt";

fun is_ordered nil = true
  | is_ordered [x] = true
  | is_ordered (x::y::xs) = (x < y) andalso is_ordered (y::xs);

fun diff nil = 0
  | diff (x::xs) = x - sum(xs)
and sum nil = 0
  | sum (x::xs) = x + diff(xs);

diff [];
diff [1];
diff [1, 2];
diff [1, 2, 3];
diff [1, 2, 3, 4];
diff [3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3];
diff [3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3];

fun get_charpairs filename =
  let
    val inputfile = TextIO.openIn filename;
    val content = TextIO.inputAll inputfile;
    fun fetch_pair nil = nil
      | fetch_pair (x::nil) = nil
      | fetch_pair (x::y::xs) = (implode [x, y]) :: (skip_pair xs)
    and skip_pair nil = nil
      | skip_pair (x::nil) = nil
      | skip_pair (x::y::xs) = fetch_pair xs;

  in
    TextIO.closeIn inputfile;
    fetch_pair (explode content)
  end;

get_charpairs "text.txt";

fun stringhe L n = map (fn x => if (length (explode x)) < n then x 
                                else implode (tl (explode x))) L;

stringhe [" ", "ab", "abc", "abcd", "abcde"] 3;



fun conta_duplicati nil = nil
  | conta_duplicati (x::xs) =
    let
      fun conta nil _ = 0
        | conta (x::xs) y = (if x = y then 1 else 0) + conta xs y;

      fun rimuovi nil _ = nil
        | rimuovi (x::xs) y = if x = y then rimuovi xs y else x :: (rimuovi xs y);
    in
      (x, 1 + (conta xs x)) :: (conta_duplicati (rimuovi xs x))
    end;

conta_duplicati [2, 2, 2, 2];
conta_duplicati ["lunedi'", "lunedi'", "martedi'", "lunedi'"];
conta_duplicati ["blu", "verde", "verde", "blu", "rosso"];
conta_duplicati [1];
conta_duplicati [1, 1, 1, 1, 1, 1, 1, 1, 1, 1];

fun suffixes "" = nil
  | suffixes S = S :: suffixes (implode (tl (explode S)));

suffixes "ciao";
suffixes "";
suffixes "hi world";

fun removeLast nil = nil
  | removeLast (x::nil) = nil
  | removeLast (x::xs) = x :: (removeLast xs);

fun prefixes "" = nil
  | prefixes S = ((prefixes o implode o removeLast o explode) S) @ [S];

prefixes "ciao";
prefixes "";
prefixes "hi world";

fun reverse nil = nil
  | reverse (x::xs) = (reverse xs) @ [x];

fun bit_adder 0 0 0 = (0, 0)
  | bit_adder 0 0 1 = (1, 0)
  | bit_adder 0 1 0 = (1, 0)
  | bit_adder 0 1 1 = (0, 1)
  | bit_adder 1 0 0 = (1, 0)
  | bit_adder 1 0 1 = (0, 1)
  | bit_adder 1 1 0 = (0, 1)
  | bit_adder 1 1 1 = (1, 1)
  | bit_adder _ _ _ = (0, 0);

fun sum_binary_aux nil nil carry = if carry = 1 then [1] else []
  | sum_binary_aux (x::xs) nil carry = let val (res, c) = (bit_adder x 0 carry) in res :: (sum_binary_aux xs nil c) end
  | sum_binary_aux nil (y::ys) carry = let val (res, c) = (bit_adder 0 y carry) in res :: (sum_binary_aux nil ys c) end
  | sum_binary_aux (x::xs) (y::ys) carry = let val (res, c) = (bit_adder x y carry) in res :: (sum_binary_aux xs ys c) end;

fun sum_binary l r = reverse (sum_binary_aux (reverse l) (reverse r) 0);

sum_binary [] [];
sum_binary [1, 0] [1, 0];
sum_binary [1, 0] [0];
sum_binary [0] [1, 0];
sum_binary [1, 0, 0, 0] [1, 0];
sum_binary [1, 0, 1, 1] [1, 1, 1];

datatype ctree = Empty | Leaf of char | Node of char * ctree * ctree;

fun get_words Empty = ("", "")
  | get_words (Leaf(c)) = (str c, "")
  | get_words (Node(c, left, right)) = let
        val (lleaves, lnodes) = get_words left;
        val (rleaves, rnodes) = get_words right
      in
        (lleaves ^ rleaves, (str c) ^ lnodes ^ rnodes)
      end;

get_words (Node(#"a", Leaf #"c", Node(#"b", Leaf #"e", Leaf #"i")));

datatype Ptree = Empty | PLeaf of int * string | PNode of int * string * Ptree * Ptree

fun count_even Empty = 0
  | count_even (PLeaf(i, s)) = if i mod 2 = 0 then 1 else 0
  | count_even (PNode(i, s, left, right)) = (if i mod 2 = 0 then 1 else 0) + count_even left + count_even right;

count_even (PNode(2, "good", PNode(3, "good", PLeaf(6, "bad"), PLeaf(7, "bad")), PNode(5, "bad", PLeaf(1, "good"), Empty)));


fun introot m = 
  let fun introot_aux k m = if k * k > m then k - 1 else introot_aux (k + 1) m;
  in introot_aux 0 m end;

fun insert_ordinato nil e = [e]
  | insert_ordinato (L as x::xs) e = if (e < x) then e :: L
                                     else x :: (insert_ordinato xs e);

insert_ordinato [1, 2, 3, 4, 5, 6] 4;

fun is_ordered nil = true
  | is_ordered [x] = true
  | is_ordered (x::y::xs) = if x < y then is_ordered (y::xs) else false;

is_ordered [1, 2, 3, 4];
is_ordered [1, 2, 4, 3];

fun is_same nil nil = true
  | is_same nil (y::ys) = false
  | is_same (x::xs) nil = false
  | is_same (x::xs) (y::ys) = if x = y then is_same xs ys else false;

is_same [1, 2, 3] [1, 2, 3];
is_same [1, 2, 3] [1, 2, 4];

fun is_in nil _ = false
  | is_in (x::xs) e = if e = x then true else is_in xs e;

fun is_subset nil _ = true
  | is_subset (x::xs) L = if is_in L x then is_subset xs L else false;

fun is_same_unordered L M = (is_subset L M) andalso (is_subset M L);

is_same_unordered [1] [1];
is_same_unordered [1, 4, 2, 8] [8, 1, 4, 2];
is_same_unordered [1, 2, 4, 3] [11, 24, 56, 7];
is_same_unordered [7, 5, 12, 88] [7, 88, 12, 5];
is_same_unordered [7, 5, 12, 88] [7, 5, 12, 88, 13, 15];

fun rev nil = nil
  | rev (x::xs) = (rev xs) @ [x];

fun palindromo nil = true
  | palindromo [x] = true
  | palindromo (x::xs) = if x = (hd (rev xs)) then (palindromo (tl (rev xs)))
                         else false;

palindromo [1, 2, 3, 2, 1]; 
palindromo ["A", "A", "D", "D", "A", "A"]; 
palindromo [1, 2, 3];

fun copy 0 _ = nil
  | copy n e = e :: (copy (n - 1) e);

copy 5 "a";

fun remove_all nil _ = nil
  | remove_all (x::xs) e = if x = e then (remove_all xs e) else x :: (remove_all xs e);

fun remove_dup nil = nil
  | remove_dup (x::xs) = x :: (remove_all xs x);

remove_dup [1, 2, 1];
remove_dup ["a", "a", "a"];
remove_dup [[1], [1, 2], [1, 2, 3], [1, 2], [4, 5]];

fun first_list nil = nil
  | first_list ((x, y)::xs) = x :: first_list xs;

first_list [(1, 2), (1, 3)];
first_list [(1, "a"), (2, "b"), (3, "c")];
first_list [([], "a"), ([1], "b"), ([1, 2], "c")];

fun flatten nil = nil
  | flatten (x::xs) = x @ flatten xs;

flatten [[]];
flatten [["a"], ["b", "a"]];

fun flip nil = nil
  | flip (x::nil) = [x]
  | flip (x::y::xs) = y :: x :: flip xs;

flip [1, 2, 3, 4, 5, 6];
flip [1, 2, 3, 4, 5];

fun quicksort nil = nil
  | quicksort [x] = [x]
  | quicksort (x::xs) =
  let
    fun partition (left, right) nil _ = (left, right)
      | partition (left, right) (x::xs) e =
        if x < e 
        then partition (x::left, right) xs e
        else partition (left, x::right) xs e;

    val (left, right) = partition (nil, nil) xs x
  in
    (quicksort left) @ [x] @ (quicksort right)
  end;

quicksort [1, 21, 37, 5, 2, 1, 8, 6, 34, 21, 54, 5, 8, 22, 12];
