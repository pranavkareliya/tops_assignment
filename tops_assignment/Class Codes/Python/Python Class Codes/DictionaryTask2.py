# d1 AND d2 in both dict if key is same than add in d3 of same key's value addition in d3

d1 = {"a":5, "b":6, "c":7}
d2 = {"a":10, "c":20, "d":30}
d3 = {}

for i in set(d1) & set(d2):
    d3[i] = d1.get(i) + d2.get(i)
print(d3)
