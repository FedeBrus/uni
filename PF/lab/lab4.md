fun flip (nil) = nil
    | flip (x1::x2::tail) = x2 :: x1 :: flip(tail)
    | flip (x::tail) = x :: flip(tail);

flip [1,2,3,4,5];
flip [1,2,3,4];

fun remove (nil, _) = nil
    | remove (head::tail, 1) = tail 
    | remove (head::tail, n) = head :: remove(tail, n - 1);

remove([1], 1);
remove([1,2,3], 3);
remove([1,2], 3);
remove([1,2,3], 2);

fun square (0) = 0
    | square (n) = square(n - 1) + 2 * n - 1;

square(2);
square(5);
square(0);

fun flip_pairs (nil) = nil
    | flip_pairs ((x, y)::tail) = 
        if x <= y then
            (x, y) :: flip_pairs(tail)
        else
            (y, x) :: flip_pairs(tail);

flip_pairs [(1,2), (4,3)];
flip_pairs [(5,2), (4,3), (6,5), (1,2)];
flip_pairs [(1,1), (1,2)];
flip_pairs nil;

fun vowel (nil) = false
    | vowel (#"a"::tail) = true
    | vowel (#"e"::tail) = true
    | vowel (#"i"::tail) = true
    | vowel (#"o"::tail) = true
    | vowel (#"u"::tail) = true
    | vowel (_::tail) = false;

vowel [#"a", #"b"];
vowel [#"b", #"c"];
vowel [#"a"];
vowel nil; 

fun member(x, nil) = false
    | member(x, head::tail) = 
        if x = head then 
            true 
        else 
            member(x, tail);

member(1, [2,3]);
member(2, [2,3,1]);
member(5, nil);
member("b", ["aa", "c"]);

fun delete(x, nil) = nil
    | delete(x, head::tail) =
        if x = head then
            tail
        else
            head :: delete(x, tail);

delete(1, [2,3,4]);
delete(1, [2,1,3]);
delete(1, nil);
delete(#"a", [#"c", #"b", #"a"]);

fun insert(x, nil) = [x]
    | insert(x, S as head::tail) =
        if x = head then
            S
        else
            head :: insert(x, tail);

insert(2, [3,4,5]);
insert(3, [3,4,5]);
insert(2, nil);
insert(#"a", [#"b", #"c"]);

fun insertAll(x, nil) = nil
    | insertAll(x, head::tail) = (x :: head) :: insertAll(x, tail);

insertAll(1, [[2,3], [], [3]]);
insertAll(1, nil);
insertAll(#"c", [[#"a", #"t"], [#"a", #"r"], nil]);

fun length(nil) = 0
    | length(head::tail) = 1 + length(tail);

fun powerSet(nil) = [nil]
    | powerSet(S as head::tail) = powerSet(tail) @ insertAll(head, powerSet(tail));

powerSet([1,2,3]);
powerSet([#"a", #"c"]);
powerSet nil;
