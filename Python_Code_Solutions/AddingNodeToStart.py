'''
Done By -> Anand Kothari
'''
class Node:
    def __init__(self,value=None):
        self.value = value
        self.nextvalue = None

class linkedList:
    def __init__(self):
        self.head = None

    # Print the linked list
    def printList(self):
        thisvalue = self.head
        while thisvalue:
            print(thisvalue.value)
            thisvalue = thisvalue.nextvalue

    def inertAtBegining(self,newValue):
        newData = Node(newValue)
        newData.nextvalue = self.head  # Update the new nodes next val to existing node
        self.head = newData



list = linkedList()
list.head = Node("Mon")
list2 = Node("Tue")
list3 = Node("Wed")

list.head.nextvalue = list2
list2.nextvalue = list3
print('''
Before Adding a Node:
'''
)
list.printList()

print('''
After adding a Node in the start:
''')
list.inertAtBegining("Sun") # This Node will be added in the start
list.printList()
