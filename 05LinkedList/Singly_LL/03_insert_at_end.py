class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_end(self, new_data):

        new_node = Node(new_data)

        # Empty
        if self.head is None:
            self.head = new_node
            return

        # not empty
        temp = self.head
        while temp.next:
            temp = temp.next

        temp.next = new_node

    def printll(self):
        temp = self.head
        while temp:
            print(str(temp.data) + " ->", end=" ")
            temp = temp.next
        print(None)

    def delete_from_front(self):
        if self.head is None:
            print("List is empty, nothing to delete")
            return
        self.head = self.head.next

    def delete_from_end(self):

        # Empty LL
        if self.head is None:
            print("List is empty, nothing to delete")
            return

        # single node
        if self.head.next is None:
            self.head = None
            return

        # Multiple Node
        temp = self.head
        while temp.next.next:
            temp = temp.next
        temp.next = None


LL = LinkedList()

LL.insert_at_end(20)
LL.insert_at_end(30)
LL.insert_at_end(40)

LL.printll()

LL.delete_from_front()

LL.printll()
