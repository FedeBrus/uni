exception ShortList;

fun third L = if length L < 3 then raise ShortList else hd (tl (tl L));

third [2, 3, 4];
third [2, 3];
third [2, 3, 4, 5];

fun reverse3 (x, y, z) = (z, y, x);

reverse3 (1, 2, 3);
reverse3 (1.0, 2, "a");

exception ShortString;

fun thirdchar S = let 
    val L = explode S
  in 
    third L handle ShortList => raise ShortString
  end;

thirdchar "abcde";
thirdchar "ab";
thirdchar "";

fun cycle nil = nil
  | cycle (x::xs) = xs @ [x];

cycle [];
cycle [1];
cycle [1, 2, 3, 4];

fun min_max_pair (x, y, z) = let
    val L = [x, y, z]
  in
    (foldr (fn (x, y) => if x < y then x else y) x L,
     foldr (fn (x, y) => if x > y then x else y) x L)
  end;

min_max_pair (1, 2, 3);
min_max_pair (3, 4, 2);

fun sort (T as (x, y, z)) = let
    val (minimum, maximum) = min_max_pair (x, y, z);

    fun remove3 (x, y, z) e = if e = x then (y, z)
                              else if e = y then (x, z)
                              else  (x, y);

    fun remove2 (x, y) e = if e = x then y
                           else x;

    val medium = remove2 (remove3 T minimum) maximum
  in 
    (minimum, medium, maximum)
  end;

sort (1, 2, 3);
sort (1, 3, 2);

fun rnd x = (real (round (x * 10.0))) / 10.0;

rnd 2.56;
rnd 5.678;
rnd 3.3;
rnd 4.128;

fun rem L = if length L < 2 then raise ShortList else (hd L) :: tl (tl L);

rem [1, 2, 3, 4];
rem [1, 2];
