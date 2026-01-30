class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None


class DoublyLinkedList:
    def __init__(self):
        self.head = None

    def array_to_dll(self, arr):

        if not arr:
            self.head = None
            return None

        self.head = Node(arr[0])
        temp = self.head

        for i in range(1, len(arr)):
            new_node = Node(arr[i])
            temp.next = new_node
            new_node.prev = temp
            temp = new_node

        return self.head

    def print_dll_forword(self):
        temp = self.head
        print(None, end=" ⇄ ")
        while temp:
            print(str(temp.data) + " ⇄ ", end=" ")
            temp = temp.next
        print(None)


dll = DoublyLinkedList()

arr = [10, 20, 30, 40, 50]

dll.array_to_dll(arr)

dll.print_dll_forword()
