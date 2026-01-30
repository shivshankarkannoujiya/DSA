class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinedList:
    def __init__(self):
        self.head = None

    @staticmethod
    def sort_two_lists(list1, list2):
        temp1 = list1
        temp2 = list2

        dummyNode = Node(-1)
        temp = dummyNode

        while temp1 is not None and temp2 is not None:
            if temp1.data < temp2.data:
                temp.next = temp1
                temp = temp1
                temp1 = temp1.next

            else:
                temp.next = temp2
                temp = temp2
                temp2 = temp2.next

        if temp1 is not None:
            temp.next = temp1
        else:
            temp.next = temp2

        return dummyNode.next


ll = LinedList()

a = Node(1)
b = Node(3)
c = Node(5)

a.next = b
b.next = c

d = Node(2)
e = Node(4)
f = Node(6)

d.next = e
e.next = f

head = ll.sort_two_lists(a, d)

temp = head
while temp:
    print(str(temp.data) + " ->", end=" ")
    temp = temp.next
print(None)
