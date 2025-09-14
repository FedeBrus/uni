floor 123.45;
floor ~123.45;
ceil 123.45;
ceil ~123.45;

ord #"Y";
chr 120;
chr (trunc 97.0);
real (ord #"N");
str #"Z";

ceil 4.0;
if true then 5+6 else 7;

if false then 1 else 2;
ord #"a";

explode "bar";
implode [#"a", #"b"];
"r" :: ["a", "t"];

[[[1]]];
[(1, #"a")];
(["a"], (1, (1.0, "a")), 1);

(((1, 1), [true], 1.0), (1.0, "a"));
((true, 1), #"a");
(1.0, [[[[1]]]]);

fun cube x:real = x * x * x;
cube 2.9;

fun min3 (x, y, z) = if x < y andalso x < z then x 
                     else if y < z then y else z;

min3 (2, 3, 4);
min3 (3, 2, 4);
