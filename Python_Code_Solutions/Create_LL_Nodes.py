'''
Done By -> Anand Kothari 
The nodes are created by implementing a class which will hold the pointers along with the data element.
'''


class dayname:
    def __init__(self, dataval=None):
        self.dataval = dataval  # To Store value of  a nodes
        self.nextval = None  # Pointer is initialized to null


d1 = dayname('Mon')
d2 = dayname('Wed')
d3 = dayname('Thur')
d4 = dayname('Tue')

#The nextval pointer of node d1 points to d4 while the nextval pointer of node d4 points to d2 and so on.

d1.nextval = d4
d4.nextval = d2
d2.nextval = d3

# We have created the nodes now and also created pointers

# Lets TRAVERSE
# Consider "thisvalue" as the head pointer [This is where the linked list start], it will be used to traverse the node elements
thisvalue = d1

while thisvalue:
    print(thisvalue.dataval)
    thisvalue = thisvalue.nextval
'''
Output:
-------

Mon
Tue
Wed
Thur

'''