class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def insert_from_end(self, new_data):
        new_node = Node(new_data)

        # EMPTY LL
        if self.head is None:
            self.head = new_node
            return

        temp = self.head
        while temp.next:
            temp = temp.next

        temp.next = new_node

    # PRINT LL
    def printLL(self):
        temp = self.head
        while temp:
            print(str(temp.data) + " ->", end=" ")
            temp = temp.next
        print(None)

    # delete form the pos
    def delete_from_pos(self, pos):

        # Empty
        if self.head is None:
            print("Linked List is Empty")
            return

        if pos == 0:
            self.head = self.head.next
            return

        # pos > 0
        temp = self.head
        for i in range(pos - 1):
            temp = temp.next
            if temp is None:
                return

        next_prt = temp.next.next
        temp.next = None
        temp.next = next_prt

    def delete_from_pos_v2(self, pos):

        if self.head is None:
            print("LL is empty, nothing to delete")
            return

        if pos == 0:
            self.head = self.head.next
            return

        # pos > 0
        temp = self.head
        count = 0

        while temp is not None and count < pos - 1:
            temp = temp.next
            count += 1

        if temp is None or temp.next is None:
            print("Out of range")    
            return
        
        to_delete = temp.next
        temp.next = to_delete.next
        to_delete.next = None


ll = LinkedList()

ll.insert_from_end(10)
ll.insert_from_end(20)
ll.insert_from_end(30)
ll.insert_from_end(40)

print(f"Printing Before Deletion...")
ll.printLL()

# ll.delete_from_pos(6)
ll.delete_from_pos_v2(2)

print(f"Printing After Deletion...")
ll.printLL()
