def checkDuplicate(a=input().split(",")):
    for i in a:
        if a.count(i)>1:
           return 1
        else:
            return 0
print(checkDuplicate())
