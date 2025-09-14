fun applyList nil = (fn x => nil)
    | applyList (f::fs) = (fn x => (f x) :: ((applyList fs) x));

fun applyList1 nil x = nil
    | applyList1 (f::fs) x = (f x) :: (applyList fs x);

applyList [fn x => x * 2, fn x => x*x*x] 4;
applyList1 [fn x => x + 1, fn x => x * x] 4;

val F = fn (x, y, z) => x * y * z;
fun curry f = (fn x => (fn y => (fn z => f(x, y, z))));
fun curry1 f x y z = f(x, y, z);
curry F 1 2 3;
curry1 F 2 3 4;

fun toReal L = map real L;
toReal [1, 2, 3];

fun andb L = foldr (fn (a, b) => a andalso b) true L;
andb [true, false, true];

fun implode L = foldl (fn (a, b) => str(a) ^ b) "" L;
implode [#"a", #"b", #"c"];

datatype 'a btree =
    Empty 
    | Node of 'a * 'a btree * 'a btree;

val tree: string btree = 
(Node ("ML", 
    Node ("as", 
        Node ("a", Empty, Empty), 
        Node ("in", Empty, Empty)
    ), 
    Node ("types",Empty, Empty)
    )
);

fun postOrder Empty = nil
    | postOrder (Node(key, left, right)) = (postOrder left) @ (postOrder right) @ [key];
postOrder(tree);

fun inOrder Empty = nil
    | inOrder (Node(key, left, right)) = (inOrder left) @ [key] @ (inOrder right);
inOrder(tree);

type ('a, 'b) mapTree = ('a * 'b) btree;
val mT:(string, int)mapTree = Node (("a", 1), Empty, Empty);

fun sumTree Empty = 0
    | sumTree (Node((_, n), left, right)) = n + sumTree left + sumTree right;

sumTree mT;
