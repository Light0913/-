a=input()+"#"
x=1
for i in range(len(a)): 
    try:
        b=a[i]
        if a[i]==a[i+1]:
            x+=1
        else:
            print(b+str(x),end="")
            x=1
    except:
        pass
