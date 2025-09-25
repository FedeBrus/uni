class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def addTwoNumbers(l1, l2):
    return addTwoNumbersAux(l1, l2)

def addTwoNumbersAux(l1, l2, carry=False):
    val = 1 if carry else 0
    next = None
    if (l1 is None and l2 is None and not carry):
        return None

    if (l1 is not None or l2 is not None):
        if (l1 is None):
            val += l2.val
            next = addTwoNumbersAux(None, l2.next, val >= 10)
        elif (l2 is None):
            val += l1.val
            next = addTwoNumbersAux(l1.next, None, val >= 10)
        else:
            val += l1.val + l2.val
            next = addTwoNumbersAux(l1.next, l2.next, val >= 10)
    
    val = val % 10
    return ListNode(val, next)
