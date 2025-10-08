class EmptyTreeException(Exception):
    pass

class Node:
    def __init__(self, value):
        self.value = value
        self.left = None
        self.right = None
        self.parent = None

    # Si determina se il valore del figlio da collegare e' minore o maggiore e si collega di conseguenza
    def link(son):
        if son is not None:
            if son.value <= self.value:
                self.left = son
            else:
                self.right = son

    # Si parte dalla radice e si scende tenendo traccia del padre. Quando il nodo e' None significa che in
    # quel punto va inserito il nuovo valore. Pertanto si collega il nuovo nodo al padre di cui si e' tenuto
    # traccia
    def insert(self, value):
        p = None
        u = self
        while u is not None: 
            p = u
            u = u.left if u.value <= value else u.right

        new = Node(value)
        new.link(p)
        if p is None:
            self = new
            

    # Si parte dalla radice e si scende confrontando i valori dei nodi con il valore da cercare
    # Si esce dal ciclo se si ha trovato il valore cercato o se si ha raggiunto la fine dell'albero
    # e quindi l'elemento non è presente nell'albero
    def search(self, value):
        u = self
        while u is not None and u.value != value:
            if value < self.value:
                u = u.left
            elif value > self.value:
                u = u.right

        if u is None:
            return False
        else:
            return True

    # Per la visita Depth-First Search si controlla se il sottoalbero esiste e si richiama la visita su di esso  
    def dfs_inorder(self, result=[]):
        if self.left is not None:
            self.left.dfs_inorder(result)

        result.append(self.value)

        if self.right is not None:
            self.right.dfs_inorder(result)

    # Si parte dalla radice e si continua a scendere nel sottoalbero contenente i valori minori, ovvero
    # il sottoalbero sinistro finche' il ramo sinistro non e' vuoto. In modo speculare modo funziona il massimo
    def min(self):
        u = self
        while u.left is not None:
            u = u.left
        return u.value

    def max(self):
        u = self
        while u.right is not None:
            u = u.right
        return u.value 

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

    def search(self, value):
        if not self.isEmpty():
            return self.root.search(value)
        else:
            return False

    def dfs_inorder(self):
        result = []
        if not self.isEmpty():
            self.root.dfs_inorder(result)

        return result

    def min(self):
        if not self.isEmpty():
            return self.root.min()
        else:
            raise EmptyTreeException()

    def max(self):
        if not self.isEmpty():
            return self.root.max()
        else:
            raise EmptyTreeException()
            
bst = BinarySearchTree()
bst.insert(1)
bst.insert(2)
bst.insert(5)
bst.insert(4)
bst.insert(9)
bst.insert(6)

bst.search(1)
bst.search(2)
bst.search(12)

print(bst.dfs_inorder())

try:
    bst = BinarySearchTree()
    print(bst.min())
except(EmptyTreeException):
    print("Albero vuoto")

try:
    bst = BinarySearchTree()
    bst.insert(2)
    bst.insert(12)
    bst.insert(1)
    print(bst.min())
    print(bst.max())
except(EmptyTreeException):
    print("Albero vuoto")
