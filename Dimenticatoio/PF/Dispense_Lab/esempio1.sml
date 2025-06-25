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
  | bit_adder 1 1 1 = (1, 1);

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

