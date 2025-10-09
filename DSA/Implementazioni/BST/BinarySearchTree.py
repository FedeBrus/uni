class EmptyTreeException(Exception):
    pass

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        self.parent = None

    # Si determina se il valore del figlio da collegare e' minore o maggiore e si collega di conseguenza
    def link(self, son):
        if son is not None and son.value != self.value:
            if son.value < self.value:
                self.left = son
            elif son.value > self.value:
                self.right = son
            son.parent = self


    # Si parte dalla radice e si scende tenendo traccia del padre. Quando il nodo e' None significa che in
    # quel punto va inserito il nuovo valore. Pertanto si collega il nuovo nodo al padre di cui si e' tenuto
    # traccia
    def insert(self, value):
        u = self
        p = self.parent
        while u is not None and u.value != value: 
            p = u
            u = u.left if value < u.value else u.right

        if u is None:
            p.link(Node(value))
            

    # Si parte dalla radice e si scende confrontando i valori dei nodi con il valore da cercare
    # Si esce dal ciclo se si ha trovato il nodo cercato o se si ha raggiunto un nodo nullo
    def lookup(self, value):
        u = self
        while u is not None and u.value != value:
            if value < u.value:
                u = u.left
            elif value > u.value:
                u = u.right

        return u

    # Per la visita Depth-First Search si controlla se il sottoalbero esiste e si richiama la visita su di esso  
    def dfs_inorder(self):
        if self.left is not None:
            self.left.dfs_inorder()

        print(self.value)

        if self.right is not None:
            self.right.dfs_inorder()

    # Si parte dalla radice e si continua a scendere nel sottoalbero contenente i valori minori, ovvero
    # il sottoalbero sinistro finche' il ramo sinistro non e' vuoto. In modo speculare modo funziona il massimo
    def min(self):
        u = self
        while u.left is not None:
            u = u.left
        return u

    def max(self):
        u = self
        while u.right is not None:
            u = u.right
        return u

    def successor(self):
        if self.right is not None:
            return self.right.min()

        p = self.parent
        u = self

        while p is not None and u is p.right:
            u = p
            p = p.parent

        return p

    def predecessor(self):
        if self.left is not None:
            return self.left.max()

        p = self.parent
        u = self

        while p is not None and u is p.left:
            u = p
            p = p.parent

        return p

class BinarySearchTree:
    def __init__(self):
        self.root = None

    def isEmpty(self):
        return self.root is None
    
    def insert(self, value):
        if not self.isEmpty():
            self.root.insert(value) 
        else:
            self.root = Node(value)

    def lookup(self, value):
        if not self.isEmpty() and self.root.lookup(value) is not None:
            return True
        else:
            return False

    def dfs_inorder(self):
        if not self.isEmpty():
            self.root.dfs_inorder()
        else:
            print("Empty")

    def min(self):
        if not self.isEmpty():
            return self.root.min().value
        else:
            raise EmptyTreeException()

    def max(self):
        if not self.isEmpty():
            return self.root.max().value
        else:
            raise EmptyTreeException()

    def successor(self, value):
        if not self.isEmpty():
            u = self.root.lookup(value)
            if u is not None:
                u = u.successor()

            if u is not None:
                return u.value

        else:
            raise EmptyTreeException()
            
    def predecessor(self, value):
        if not self.isEmpty():
            u = self.root.lookup(value)
            if u is not None:
                u = u.predecessor()

            if u is not None:
                return u.value

        else:
            raise EmptyTreeException()
            
bst = BinarySearchTree()
bst.insert(1)
bst.insert(2)
bst.insert(5)
bst.insert(4)
bst.insert(9)
bst.insert(6)


print("DFS: ")
bst.dfs_inorder()

print("Ricerca 1: ", bst.lookup(1))
print("Ricerca 2: ", bst.lookup(2))
print("Ricerca 4: ", bst.lookup(4))
print("Ricerca 12: ", bst.lookup(12))

try:
    print("Successore di 4: ", bst.successor(4))
    print("Predecessore di 4: ", bst.predecessor(4))
    print("Minimo: ", bst.min())
    print("Massimo: ", bst.max())
except(EmptyTreeException):
    print("Empty Tree Exception")
