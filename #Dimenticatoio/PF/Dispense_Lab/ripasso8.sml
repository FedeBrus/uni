signature SET = sig
  type ''a set
  val emptyset: ''a set
  val isin: ''a set -> ''a -> bool
  val addin: ''a set -> ''a -> ''a set
  val removefrom: ''a set -> ''a -> ''a set
end;

structure Set:>SET = struct
  type ''a set = ''a list;
  val emptyset = nil;

  fun isin nil _ = false
    | isin (x::xs) e = (x = e orelse isin xs e);

  fun addin nil e = [e]
    | addin S e = if isin S e then S else e :: S;

  fun removefrom nil _ = nil
    | removefrom (x::xs) e = if x = e then xs else x :: (removefrom xs e);
end;

val a = Set.emptyset;
val a = Set.addin a 1;
val a = Set.addin a 2;
val a = Set.addin a 3;
val a = Set.addin a 4;
Set.isin a 5;
Set.isin a 2;
Set.removefrom a 2;

signature TREE = sig
  datatype 'a T = Lf | Br of 'a * 'a T * 'a T
  val countNodes: 'a T -> int
  val depth: 'a T -> int
  val mirror: 'a T -> 'a T
end;

structure Tree = struct
  datatype 'a T = Lf | Br of 'a * 'a T * 'a T;

  fun countBrs Lf = 0
    | countBrs (Br(key, left, right)) = 1 + countBrs left + countBrs right;

  fun depth Lf = 0
    | depth (Br(key, left, right)) = 
      1 + (fn (x, y) => if x > y then x else y)(depth left, depth right);

  fun mirror Lf = Lf
    | mirror (Br(key, left, right)) = Br(key, mirror right, mirror left);
end;

datatype 'a btree = Lf | Br of 'a * 'a btree * 'a btree;
type ('a, 'b) mapTree = ('a * 'b) btree;
exception Missing;

fun lookup _ Lf _ = raise Missing
  | lookup lt (Br((x, y), left, right)) e = if x = e then y
                                            else if (lt x y) then lookup lt left e 
                                            else lookup lt right e;
fun swap _ Lf e b = Br((e, b), Lf, Lf)
  | swap lt (Br((x,y), left, right)) e b = if x = e then Br((x, b), left, right)
                                           else if (lt x e) then Br((x, y), swap lt left e b, right)
                                           else Br((x, y), left, swap lt right e b);
