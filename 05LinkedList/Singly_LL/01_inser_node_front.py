class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_at_front(self, new_data):
        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def print_linkedlist(self):
        temp = self.head
        while temp:
            print(str(temp.data) + " ->", end=" ")
            temp = temp.next
        print("NULL")


ll = LinkedList()

ll.insert_at_front(20)
ll.insert_at_front(30)
ll.insert_at_front(40)
ll.insert_at_front(50)

ll.print_linkedlist()
