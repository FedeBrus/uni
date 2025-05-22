datatype ('a) tree = Node of 'a * 'a tree list;

fun isOn (Node(y, nil)) e = (y = e)
  | isOn (Node(y, children)) e = if y = e then true 
                             else foldl (fn (x, y) => x orelse y) false (map (fn x => isOn x e) children);

isOn (Node(2, [Node (3, nil), Node(5, nil)])) 3;

fun count (Node(y, nil)) e = if (y = e) then 1 else 0
  | count (Node(y, children)) e = foldl op+ 0 (map (fn x => if isOn x e then 1 else 0) children) + (if y = e then 1 else 0);

count (Node(2, [Node(3, nil), Node(2, nil)])) 2;
count (Node(2, [Node(3, nil), Node(2, nil)])) 3;

fun depth (Node(y, nil)) = 1
  | depth (Node(y, children)) = 1 + foldl (fn (x, y) => if x >= y then x else y) 0 (map depth children);

depth (Node(1, [Node(2, [Node(3, [Node(4, nil)]), Node(3, nil)]), Node (2, nil)]));

fun preOrder (Node(y, nil)) = [y]
  | preOrder (Node(y, children)) = y :: foldr op@ [] (map preOrder children);

preOrder (Node(2, [Node (3, [Node(4,nil)]), Node(2,nil)]));

structure Tree = struct
    datatype ('a) tree = Node of 'a * 'a tree list;
    exception Missing;
    fun create a = Node(a, nil);
    fun build a L = Node(a, L);
    fun subtree i (Node(x, nil)) = raise Missing
      | subtree 0 (Node(x, c::cs)) = c
      | subtree i (Node(x, c::cs)) = if i < 0 then raise Missing else subtree (i - 1) (Node(x, cs));
end;

val n = Tree.build 1 [Tree.create 1 , Tree.create 2];
Tree.subtree 0 n;
Tree.subtree 1 n;
Tree.subtree 2 n;
Tree.subtree (~1) n;


