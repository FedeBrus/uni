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
    | removefrom ((S:''a) :: (nil:''a set)) (e:''a) =
      if S = e then xs
      else S :: (removefrom xs e)
end;
