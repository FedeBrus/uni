fun flip nil = nil
  | flip [x] = [x]
  | flip (x::y::xs) = y :: x :: flip xs;

flip [1, 2, 3, 4, 5];
flip [1, 2, 3, 4];
