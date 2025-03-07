l = [1, 2, 3, "Python", True, 2.2, 3.9, 3, False]

# append Example
l.append(200)
print(l)
l.append("abc")
print(l)
l.append(True)
print(l)

# remove all items and blank list
#l.clear()
#print(l)

l2 = l.copy()
print(l2)
l.append("Riddhi")
print(l)
print(l2)

print(l.count(3)) # 3 number list ma ketli vaar che te batave

l3 = ["Pranav", "Riddhi", "Jiya","Sweta","Yogesh"] # 2 list 1 list ni pachad add thai jaai
l.extend(l3)
print(l)

print(l.index(False)) # kai value kya index par che te batave

l.insert(4, 10) # 4 number na index par value add kare
print(l)

l.pop() # remove value from last
print(l)

l.remove("Sweta") # je value enter karso tene remove kare
print(l)

l.reverse() # reverse a list
print(l)

l4 = [1,4,5,7,78,5,7,5,222,888,0,6664,999,19,2, 6.8, 9.9, 20.9, 2.1] # int and float banne ak sathe kaam kare but int float str and bool ak sathe work na kare
l4.sort()
print(l4)

l5 = ["abc", "xyz", "pqr"] # work only in single data type
l5.sort()
print(l5)

l6 = [True, False] # work only in single data type
l6.sort()
print(l6)




