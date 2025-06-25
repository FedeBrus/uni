fun member nil _ = false
  | member _ 0 = false
  | member (x::xs) y = (x = y) orelse (member xs y);

fun check nil = true
  | check (x::xs) = not (member xs x) andalso (check xs);

fun check_rows L = foldr (fn (x, y) => x andalso y) true (map check L);

fun check_cols (nil::xs) = true
  | check_cols L = (check (map hd L)) andalso (check_cols (map tl L));

fun split_three (x::y::z::xs) = [x, y, z] :: (split_three xs)
  | split_three _ = nil;

fun flatten nil = nil
  | flatten ((x::xs)::ys) = (x::xs) @ (flatten ys);

fun check_boxes L = foldr (fn (x, y) => x andalso y) true 
             ((map check o map flatten o split_three o map hd o map split_three) L);

fun validate L = (check_rows L) andalso (check_cols L) andalso (check_boxes L);

validate [        
        [5, 3, 4, 6, 7, 8, 9, 1, 2],
        [6, 7, 2, 1, 9, 5, 3, 4, 8],
        [1, 9, 8, 3, 4, 2, 5, 6, 7],    
        [8, 5, 9, 7, 6, 1, 4, 2, 3],
        [4, 2, 6, 8, 5, 3, 7, 9, 1],
        [7, 1, 3, 9, 2, 4, 8, 5, 6],
        [9, 6, 1, 5, 3, 7, 2, 8, 4],
        [2, 8, 7, 4, 1, 9, 6, 3, 5],
        [3, 4, 5, 2, 8, 6, 1, 7, 9]
    ];

validate [
    [5, 3, 0, 0, 7, 0, 0, 0, 0],
    [6, 0, 0, 1, 9, 5, 0, 0, 0],
    [0, 9, 8, 0, 0, 0, 0, 6, 0],
    [8, 0, 0, 0, 6, 0, 0, 0, 3],
    [4, 0, 0, 8, 0, 3, 0, 0, 1],
    [7, 0, 0, 0, 2, 0, 0, 0, 6],
    [0, 6, 0, 0, 0, 0, 2, 8, 0],
    [0, 0, 0, 4, 1, 9, 0, 0, 5],
    [0, 0, 0, 0, 8, 0, 0, 7, 9]
];

validate [
        [1, 4, 2, 3, 5, 6, 9, 7, 8],
        [5, 3, 8, 9, 7, 2, 6, 1, 4],
        [9, 6, 7, 1, 8, 4, 3, 2, 5],
        [8, 2, 5, 4, 6, 3, 1, 9, 7],
        [4, 1, 3, 7, 9, 8, 5, 6, 2],
        [7, 9, 6, 2, 1, 5, 4, 8, 3],
        [2, 7, 4, 6, 3, 9, 8, 5, 1],
        [3, 8, 1, 5, 2, 7, 6, 4, 9], 
        [6, 5, 9, 8, 4, 1, 2, 3, 7]
    ];

validate [
    [5, 3, 0, 0, 7, 0, 0, 0, 0],
    [6, 0, 0, 1, 9, 5, 0, 0, 0],
    [0, 9, 8, 0, 0, 0, 0, 6, 0],
    [8, 0, 0, 0, 6, 0, 0, 0, 3],
    [4, 0, 0, 8, 0, 3, 0, 0, 1],
    [7, 0, 4, 0, 2, 0, 0, 0, 6],
    [0, 6, 0, 0, 0, 0, 2, 8, 0],
    [0, 0, 0, 4, 1, 9, 0, 0, 5],
    [0, 0, 0, 0, 8, 0, 0, 7, 9]
];
