fun map(f: 'a -> 'b, nil) = nil
    | map(f: 'a -> 'b, head::tail: 'a list) = f(head) :: map(f, tail);

fun square(x: real) = x * x;

map(square, [1.0,2.0,3.0,4.0,5.0]);

fun reduce(f: 'a * 'a -> 'a, x::y::nil) = f(x, y)
    | reduce(f: 'a * 'a -> 'a, head::tail) = f(head, reduce(f, tail))

fun sum(a, b) = a + b;

reduce(sum, [1,2,3,4,5]);

fun filter(f: 'a -> bool, nil) = nil
    | filter(f: 'a -> bool, head::tail: 'a list) =
        if (f(head)) then
            head :: filter(f, tail)
        else
            filter(f, tail);

fun even(x) = if (x mod 2) = 0 then true else false;

filter(even, [1,2,3,4,5]);

exception shortList of int;
fun returnThird(x::y::z::tail) = z
    | returnThird(L) = raise shortList(length L);

returnThird([1, 2, 0]) handle
    shortList(n) => (
        print("List too short\n");
        print("It contains ");
        print(Int.toString(n));
        print(" elements.\n");
        0
    );

exception NegativeArgument of int;
fun fact(0) = 1 
    | fact(n) = if n > 0 then n * fact(n - 1) else raise NegativeArgument(n);

fact(~4) handle
    NegativeArgument(n) => (
        print("Negative argument ");
        print(Int.toString(n));
        print(" found");
        0
    );

fun tabulate(a:real, delta:real, n, f:real -> real) = 
    if n > 0 then (
            print(Real.toString(a));
            print("\t");
            print(Real.toString(f(a)));
            print("\n");
            tabulate(a + delta, delta, n - 1, f)
        )
    else 
        ();
    
tabulate(1.0, 0.1, 9, fn x => x * x);

fun negativeNumberToZero(n:real) = if n > 0.0 then n else 0.0;

fun negativeToZero(nil) = nil
    | negativeToZero(L:real list) = map(negativeNumberToZero, L);

negativeToZero([0.0, 1.0, ~2.1, ~2.3]);

fun max(a: real, b: real) = if a > b then a else b;
fun maxList(L) = reduce(max, L);

maxList([1.1, 2.2, 4.4, 3.3]);

fun greaterThanZero(a) = if a > 0.0 then true else false;
fun keepPositives(L) = filter(greaterThanZero, L);

keepPositives([1.1, ~1.2, ~1.3, 1.4]);

fun readAndSum(inputFileName) = 
    let
        val inputFile = TextIO.openIn(inputFileName);

        fun getWord(infile) = case TextIO.input1(infile) of
                NONE => nil
                | SOME #" " => nil
                | SOME #"\n" => nil 
                | SOME c => c::getWord(infile);

        fun getList(infile) = case implode(getWord(infile)) of
                "" => nil
                | s => case Int.fromString(s) of
                    NONE => nil
                    | SOME n => n::getList(infile)

        val L = getList(inputFile);
        val _ = TextIO.closeIn(inputFile);
    in
        reduce(op +, L)
    end;

readAndSum("numbers");
