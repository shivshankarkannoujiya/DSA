class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def array_to_linked_list(self, arr):

        if not arr:
            return None

        self.head = Node(arr[0])
        temp = self.head

        for i in range(1, len(arr)):
            new_node = Node(arr[i])
            temp.next = new_node
            temp = new_node

        return self.head

    def printll(self):
        temp = self.head
        while temp:
            print(str(temp.data) + " ->", end=" ")
            temp = temp.next

        print(None)


ll = LinkedList()

arr = [10, 20, 30, 40, 50]

ll.array_to_linked_list(arr)
ll.printll()
