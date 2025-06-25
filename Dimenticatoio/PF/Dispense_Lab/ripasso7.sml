fun applyList nil _ = nil
  | applyList (x::xs) e = (x e) :: (applyList xs e);

applyList [fn x => x * 2, fn x => x * x * x] 4;

fun curry f x y z = f (x, y, z);

fun toReal L = map real L;

fun andb L = foldl (fn (x, y) => x andalso y) true L;

andb [true, false, true];
andb [true, true];
andb [];

fun impl L = foldr op^ "" (map str L);

impl [#"b", #"c"];
impl [];

datatype 'a btree = Empty | Node of 'a * 'a btree * 'a btree;

fun postOrder Empty = nil
  | postOrder (Node(key, left, right)) = (postOrder left) @ (postOrder right) @ [key];

val exampleTree = (Node ("ML", Node("as", Node("a", Empty, Empty), Node("in", Empty, Empty)), Node("types", Empty, Empty)));

postOrder exampleTree;

fun inOrder Empty = nil
  | inOrder (Node(key, left, right)) = (inOrder left) @ (key :: (inOrder right));

inOrder exampleTree;

type ('a, 'b) mapTree = ('a * 'b) btree;

fun sumTree Empty = 0
  | sumTree (Node((key, value), left, right)) = value + (sumTree left) + (sumTree right);

val exampleMapTree = (Node(("a", 1), Node(("c", 2), Empty, Node(("d", 3), Empty, Empty)), Empty));
sumTree exampleMapTree;
