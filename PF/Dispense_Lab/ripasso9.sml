datatype 'a tree = Node of 'a * 'a tree list;

fun isOn (Node(x, nil)) e = (x = e)
  | isOn (Node(x, children)) e = (x = e orelse foldr (fn (x, y) => x orelse y) false
  (map (fn x => isOn x e) children));

isOn (Node(2, [Node (3, nil), Node(5, nil)])) 3;
isOn (Node(2, [Node (3, nil), Node(5, nil)])) 4;

fun count (Node(x, nil)) e = if x = e then 1 else 0
  | count (Node(x, children)) e = (if x = e then 1 else 0) +
    foldr op+ 0 (map (fn x => count x e) children);

count (Node(2, [Node(3, nil), Node(2, nil)])) 2;
count (Node(2, [Node(3, nil), Node(2, nil)])) 3;
count (Node(2, [Node(3, nil), Node(2, nil)])) 4;

fun depth (Node(_, nil)) = 1
  | depth (Node(x, children)) = 1 + foldr (fn (x, y) => if x > y then x else y)
  0 (map depth children);

depth (Node(2, [Node(3, [Node(4, nil)]), Node(2, nil)]));

fun preOrder (Node(x, nil)) = [x]
  | preOrder (Node(x, children)) = x :: (foldr op@ nil (map preOrder children));

preOrder (Node(2, [Node(3, [Node(4, nil)]), Node(2, nil)]));

structure Tree = struct
  datatype 'a tree = Node of 'a * 'a tree list;
  exception Missing;
  fun create x = Node(x, nil);
  fun build x children = Node(x, children);
  fun subtree _ (Node(x, nil)) = raise Missing
    | subtree 0 (Node(x, (c::cs))) = c
    | subtree i (Node(x, (c::cs))) = subtree (i - 1) (build x cs);
end;

val exampleTree = Tree.build 2 [Tree.build 3 [Tree.create 4], Tree.create 2];
Tree.subtree 1 exampleTree;

signature SIMPLE = sig
  datatype 'a tree = Node of 'a * 'a tree list
  exception Missing
  val build: int -> int tree list -> int tree
  val subtree: int -> int tree -> int tree
end;

structure SimpleTree:>SIMPLE = Tree;

val exampleTree = SimpleTree.build 1 [SimpleTree.build 2 nil, SimpleTree.build 3 nil, SimpleTree.build 4 nil];
SimpleTree.subtree 1 exampleTree;

structure Stack = struct
  type 'a stack = 'a list;
  exception EmptyStack;

  fun create () = [];

  fun isEmpty nil = true
    | isEmpty _ = false;

  fun push s x = x :: s;

  fun pop nil = raise EmptyStack
    | pop (x::xs) = xs;

  fun top nil = raise EmptyStack
    | top (x::xs) = x;
end;

signature STRINGSTACK = sig
  type 'a stack
  exception EmptyStack
  val create: unit -> string stack
  val isEmpty: string stack -> bool
  val push: string stack -> string -> string stack
  val pop: string stack -> string stack
  val top: string stack -> string
end;

structure StringStack:>STRINGSTACK = Stack;

structure Queue = struct
  type 'a queue = 'a list;
  exception EmptyQueue;

  fun create () = [];

  fun isEmpty nil = true
    | isEmpty _ = false;

  fun enqueue q x = q @ [x];

  fun dequeue nil = raise EmptyQueue
    | dequeue (x::xs) = (x, xs);
end;

signature PAIRQUEUE = sig
  type 'a queue
  exception EmptyQueue
  val create: unit -> (string * int) queue
  val isEmpty: (string * unit) queue -> bool
  val enqueue: (string * int) queue -> (string * int) -> (string * int) queue 
  val dequeue: (string * int) queue -> ((string * int) * (string * int) queue)
end;

structure PairQueue:>PAIRQUEUE = Queue;

signature TOTALORDER = sig
  type element
  val lt: element * element -> bool
end;

functor MakeBST (Lt:TOTALORDER):> sig
  type btree
  exception EmptyTree
  val create: btree
  val lookup: btree -> Lt.element -> bool
  val insert: btree -> Lt.element -> btree
  val deletemin: btree -> Lt.element * btree
  val delete: btree -> Lt.element -> btree
end = struct
  datatype btree = Empty | Node of Lt.element * btree * btree;
  exception EmptyTree;
  val create = Empty;

  fun lookup Empty _ = false
    | lookup (Node(key, left, right)) e = if Lt.lt (e, key) then lookup left e
                                          else if Lt.lt (key, e) then lookup right e
                                          else true;

  fun insert Empty e = Node(e, Empty, Empty)
    | insert (T as Node(key, left, right)) e = if Lt.lt (e, key) then insert left e
                                               else if Lt.lt (key, e) then insert right e
                                               else T;

  fun deletemin Empty = raise EmptyTree
    | deletemin (Node(key, Empty, right)) = (key, right)
    | deletemin (Node(key, left, right)) = let 
      val (minimum, branch) = deletemin left 
    in 
      (minimum, Node(key, branch, right)) 
    end;

  fun delete Empty _ = Empty
    | delete (T as Node(key, left, right)) e = if Lt.lt (e, key) then delete left e
                                               else if Lt.lt (key, e) then delete right e
                                               else case (left, right) of
                                                 (Empty, r) => r
                                               | (l, Empty) => l
                                               | (l, r) => let val (z, branch) = deletemin r in Node(z, l, branch) end;
end;

structure IntTriple: TOTALORDER = struct
  type element = (int * int * int);
  fun lt ((a, b, c), (x, y, z)) = (a < x orelse b < y orelse c < z);
end;

structure Int3Tree = MakeBST(IntTriple);
