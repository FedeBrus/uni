fun fact(n) = 
    if n = 0 then
        1
    else
        n * fact(n - 1);

fact(5);

fun cyclei(L, i) = 
    if i = 0 then
        L 
    else
        cyclei(tl(L) @ [hd(L)], i-1);

cyclei([1,2,3,4], 2);
cyclei(["a", "b", "c", "d", "e"], 4);

fun duplicate(L) =
    if L = nil then
        nil
    else
        (hd(L) :: [hd(L)]) @ duplicate(tl(L));

duplicate([1,2,3,4]);
duplicate(["a", "b", "c"]);

fun len(L) = 
    if L = nil then
        0
    else
        1 + len(tl(L));

len([1,2,3,4]);
len(["a", "b", "c"]);

fun pow(x:real, i:int) = 
    if i = 0 then
        1.0
    else
        x * pow(x, i - 1);

pow(2.1, 3);
pow(2.0, 3);

fun maxList(L:string list) = 
    if tl(tl(L)) = nil then
        if hd(L) > hd(tl(L)) then
            hd(L)
        else
            hd(tl(L))
    else
        if hd(L) > maxList(tl(L)) then
            hd(L)
        else
            maxList(tl(L));

maxList(["a", "abb", "abc", "ab"]);

fun maxList(L:string list) = 
    if tl(L) = nil then
        hd(L)
    else
        if hd(L) > maxList(tl(L)) then
            hd(L)
        else
            maxList(tl(L));

maxList(["a", "abb", "abc", "ab", "ka"]);

fun fact(0) = 1
    | fact(n) = n * fact(n - 1);

fact(5);

fun cyclei(L, 0) = L
    | cyclei(nil, i) = nil
    | cyclei(x::rest, i) = cyclei(rest @ [x], i-1);

cyclei([1,2,3,4], 2);
cyclei(["a", "b", "c", "d", "e"], 4);

fun duplicate(nil) = nil
    | duplicate(x::rest) = (x :: [x]) @ duplicate(rest);

duplicate([1,2,3,4]);
duplicate(["a", "b", "c"]);

fun len(nil) = 0
    | len(L) = 1 + len(tl(L));

len([1,2,3,4]);
len(["a", "b", "c"]);

fun pow(x:real, 0) = 1.0
    | pow(x:real, i) = x * pow(x, i - 1);

pow(2.1, 3);
pow(2.0, 3);

fun maxList(nil) = ""
    | maxList((x: string)::nil) = x 
    | maxList((x: string)::(rest: string list)) = if x > maxList(rest) then x else maxList(rest);

maxList(["a", "abb", "abc", "ab", "ka"]);
