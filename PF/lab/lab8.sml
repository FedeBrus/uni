signature SET = sig
  type ''a set
  val emptyset: ''a set
  val isin: ''a set -> ''a -> bool
  val addin: ''a set -> ''a -> ''a set
  val removefrom: ''a set -> ''a -> ''a set
end;

structure Set: SET = struct
  type ''a set = ''a list

  val emptyset:''a set = []

  fun isin (nil:''a set) e = false
    | isin ((S:''a) :: (xs:''a set)) e = 
        if S = e then true 
        else (isin xs e);

  fun addin (S:''a set) (e:''a) = 
    if not (isin S e) then [e] @ S
    else S
  
  fun removefrom (nil:''a set) (e:''a) = emptyset
    | removefrom ((S:''a) :: (xs:''a set)) (e:''a) =
        if S = e then xs
        else S :: (removefrom xs e)
end;

signature TREE = sig
  datatype 'a T = Lf | Br of 'a * 'a T * 'a T;
  val countNodes: 'a T -> int
  val depth: 'a T -> int
  val mirror: 'a T -> 'a T
end;

structure tree:TREE = struct
  datatype 'a T = Lf | Br of 'a * 'a T * 'a T;
  fun countNodes Lf = 0
    | countNodes (Br(_, left, right)) = 1 + countNodes left + countNodes right;

  fun depth Lf = 0
    | depth (Br(_, left, right)) = 
      let
        val ld = depth left;
        val rd = depth right;
      in
        if ld > rd then 1 + ld else 1 + rd
      end;

  fun mirror Lf = Lf
    | mirror (Br(v, left, right)) = Br(v, mirror right, mirror left);
end;


