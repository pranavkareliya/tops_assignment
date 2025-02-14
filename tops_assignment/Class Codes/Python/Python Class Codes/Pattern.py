n = int(input("Enter Value : ")) # input is common for all pattern

'''
* 
* * 
* * * 
* * * * 
* * * * *
'''

# for i in range (1,n+1):
#     print("* " * i)

'''
        *
      * *
    * * *
  * * * *
* * * * *
'''

# for i in range(1,n+1):
#     print(" "*(n-i),"*" * i)

'''
      *
     * *
    * * *
   * * * *
  * * * * *
  difference is space in condition
'''

# for i in range(1,n+1):
#     print(" "*(n-i)," *" * i)

'''
  * * * * *
   * * * *
    * * *
     * *
      *
'''

# for i in range(n,0,-1):
#     print(" "*(n-i)," *" * i)

'''
* * * * * 
* * * * 
* * * 
* * 
* 
'''

# for i in range(n,0,-1):
#     print("* " * i)


'''
1
12
123
1234
12345
'''
for i in range(1,n+1):
    for j in range(1,i):
        print(j,end="")
    print()

'''
1
22
333
4444
55555
'''

# for i in range(1,n+1):
#     for j in range(i):
#         print(i, end="")
#     print()