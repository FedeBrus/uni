fun flip nil = nil
  | flip [x] = [x]
  | flip (x::y::xs) = y :: x :: flip xs;

flip [1, 2, 3, 4, 5];
flip [1, 2, 3, 4];

fun remove nil _ = nil
  | remove (x::xs) 0 = xs
  | remove (x::xs) i = x :: (remove xs (i - 1));

exception OutOfBounds;
fun at nil _ = raise OutOfBounds;
  | at (x::xs) 0 = x;
  | at (x::xs) n = at xs (n - 1);

remove [1] 0;
remove [1, 2, 3] 2;
remove [1, 2, 3, 4] 2;
remove [1, 2] 5;

fun square 0 = 0
  | square n = square (n - 1) + 2 * n - 1;

square 2;
square 5;
square 0;

fun flip_pairs nil = nil
  | flip_pairs ((x, y)::xs) = if x < y then (x, y)::(flip_pairs xs) else (y, x)::(flip_pairs xs);

flip_pairs [(1, 2), (4, 3)];
flip_pairs [(5, 2), (4, 3), (6, 5), (1, 2)];

fun vowel (#"a"::xs) = true
  | vowel (#"e"::xs) = true
  | vowel (#"i"::xs) = true
  | vowel (#"o"::xs) = true
  | vowel (#"u"::xs) = true
  | vowel _ = false;

vowel [#"a", #"b"];
vowel [#"b", #"c"];
vowel [#"a"];
vowel nil;

fun member nil _ = false
  | member (x::xs) e = (e = x) orelse (member xs e);

member [2, 3] 1;
member [2, 3, 1] 2;
member nil 5;
member ["aa", "c"] "b";

fun delete nil _ = nil
  | delete (x::xs) e = if e = x then xs else x :: (delete xs e);

delete [2, 3, 4] 1;
delete [2, 1, 3] 1;
delete nil 1;
delete [#"c", #"b", #"a"] #"a";

fun insert nil e = [e]
  | insert S e = if not (member S e) then e::S else S;

insert [3, 4, 5] 2;
insert [3, 4, 5] 3;
insert nil 2;
insert [#"b", #"c"] #"a";

fun insertAll nil _ = nil
  | insertAll (x::xs) e = (e :: x) :: (insertAll xs e);

insertAll [[2, 3], [], [3]] 1;
insertAll nil 1;
insertAll [[#"a", #"t"], [#"a", #"r"], nil] #"c";

fun powerSet nil = [nil]
  | powerSet (x::xs) = let val ps = powerSet xs in (insertAll ps x) @ ps end;

powerSet [1, 2, 3];
powerSet [#"a", #"c"];

fun prodDiff nil = 1.0
  | prodDiff (x::xs) = foldr op* 1.0 (map (fn y => x - y) xs) * (prodDiff xs);

prodDiff [1.0, 2.0, 3.0];
prodDiff [1.0, 1.1, 1.2, 1.3, 1.4];
prodDiff nil;

fun is_one 1 = "one"
  | is_one _ = "anything else";

is_one 1;
is_one 3;
