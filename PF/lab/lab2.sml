fun third (l) = hd(tl(tl(l)));
third [2,3,4];
third [2,3,4,5];
fun reverse (tripla: 'a * 'b * 'c) = (#3(tripla), #2(tripla), #1(tripla));
reverse (1,2,3);
reverse ("a", 4.0, 2);

fun thirdchar (s) = third(explode(s));
thirdchar ("foobar");

fun cycle (l) = tl(l) @ [hd(l)];
cycle [1,2,3,4];
cycle [1];

fun min (tripla: int * int * int) =
    if #1(tripla) < #2(tripla) then
        if #1(tripla) < #3(tripla) then
            #1(tripla)
        else
            #3(tripla)
    else
        if #2(tripla) < #3(tripla) then
            #2(tripla)
        else
            #3(tripla)

fun max (tripla: int * int * int) =
    if #1(tripla) > #2(tripla) then
        if #1(tripla) > #3(tripla) then
            #1(tripla)
        else
            #3(tripla)
    else
        if #2(tripla) > #3(tripla) then
            #2(tripla)
        else
            #3(tripla)

fun minmaxpair (tripla: int * int * int) = (min(tripla), max(tripla));

minmaxpair (1, 2, 3);
minmaxpair (1, 3, 2);
minmaxpair (2, 1, 3);
minmaxpair (2, 3, 1);
minmaxpair (3, 1, 2);
minmaxpair (3, 2, 1);

fun sort (tripla: int * int * int) =
    if #1(tripla) < #2(tripla) then
        if #1(tripla) < #3(tripla) then
            if #2(tripla) < #3(tripla) then
                [#1(tripla), #2(tripla), #3(tripla)]
            else
                [#1(tripla), #3(tripla), #2(tripla)]
        else
            [#3(tripla), #1(tripla), #2(tripla)]
    else
        if #2(tripla) < #3(tripla) then
            if #1(tripla) < #3(tripla) then
                [#2(tripla), #1(tripla), #3(tripla)]
            else
                [#2(tripla), #3(tripla), #1(tripla)]
        else
            [#3(tripla), #2(tripla), #1(tripla)];
    
sort (1, 2, 3);
sort (1, 3, 2);
sort (2, 1, 3);
sort (2, 3, 1);
sort (3, 1, 2);
sort (3, 2, 1);

fun rnd (n:real) = real(round(n * 10.0)) / 10.0;

rnd 2.56;
rnd 5.678;
rnd 3.3;
rnd 4.128;

fun rem (l) = [hd(l)] @ tl(tl(l));

rem [1,2,3,4];
rem [1,2];

fun last (L) = 
	if tl(L) = nil then
		hd(L)
	else 
		last (tl(L));

last [1,2,3,4,5,6];
last [1,2,3,4];
