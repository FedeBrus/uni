fun thousandthPower(x:real) =
    let
        val x = x * x * x * x * x;
        val x = x * x; 
        val x = x * x * x * x * x;
        val x = x * x;
        val x = x * x * x * x * x;
        val x = x * x;
    in
        x
    end;

thousandthPower(1.0);
thousandthPower(1.1);

fun split(nil) = (nil, nil)
    | split([a]) = ([a], nil)
    | split(a::b::tail) =
        let
            val result = split(tail);
        in 
            (a::(#1(result)), b::(#2(result)))
        end;

split([1,2,3,4,5]);

fun insertAll(x, nil) = nil
    | insertAll(x, head::tail) = (x::head) :: insertAll(x, tail);

fun powerSet(nil) = [nil]
    | powerSet(head::tail) = 
        let
            val powerSetOfTail = powerSet(tail);
        in 
            powerSetOfTail @ insertAll(head, powerSetOfTail)
        end;

powerSet([1,2,3]);

fun sumPairs(nil) = (0, 0)
    | sumPairs((first, second)::rest) = 
        let
            val (a, b) = sumPairs(rest);
        in 
            (first + a, second + b)
        end;

sumPairs([(1,2), (3,4), (5,6)]);
sumPairs([]);

fun maxList(nil) = 0.0
    | maxList([x]) = x
    | maxList(x::tail) = 
        let
            val maxOfTail = maxList(tail);
        in
            if x > maxOfTail then 
                x
            else
                maxOfTail
        end;

maxList([1.0, 2.0, 3.0]);

fun doubleExp(x:real, 0) = x
    | doubleExp(x:real, i) = doubleExp(x * x, i - 1);

fun doubleExpAlt(x:real, 0) = x
    | doubleExpAlt(x:real, i) = 
        let
            val result = doubleExpAlt(x, i - 1);
        in 
            result * result
        end;

doubleExp(1.1, 3);
doubleExpAlt(1.1, 3);

fun sumList(nil) = (0, 0)
    | sumList([x]) = (x, 0)
    | sumList(x::y::tail) = 
        let
            val (sumEven, sumOdd) = sumList(tail);
        in 
            (x + sumEven, y + sumOdd)
        end;

sumList([1,2,3,4]);
sumList([]);

fun printList(nil) = ()
    | printList(x::tail) = 
        (   
            print(Int.toString(x));
            print("\n");
            printList(tail)
        );

printList([1,2,3,4]);

fun fact(0) = 1 
    | fact(n) = n * fact(n - 1);

fun comb(n, 0) = 1
    | comb(n, m) = (
        print(Int.toString(n));
        print("\n");
        print(Int.toString(m));
        print("\n");
        print("The result is: ");
        fact(n) div (fact(m) * fact(n - m))
    );

comb(5, 2);

fun printXs(0) = ( print("X") )
    | printXs(n) = (
        printXs(n - 1);
        printXs(n - 1)
    );

printXs(3);

val infile = TextIO.openIn("zap");

val cinque = TextIO.inputN(infile, 5);
print(cinque);

val linea = case TextIO.inputLine(infile) of 
        SOME c => c
        | NONE => "";
print(linea);

val primoCarattere = case TextIO.lookahead(infile) of 
        SOME c => c
        | NONE => #"\000";
print(str(primoCarattere));

val contenuto = TextIO.input(infile);
print(contenuto);

TextIO.closeIn(infile);

fun getWord(infile) = case TextIO.input1(infile) of 
        NONE => nil
        | SOME #" " => nil
        | SOME #"\n" => nil 
        | SOME c => c::getWord(infile);

fun getList(infile) = case implode(getWord(infile)) of 
        "" => nil
        | s => s::getList(infile);

val infile = TextIO.openIn("zap");
getList(infile);

TextIO.closeIn(infile);
