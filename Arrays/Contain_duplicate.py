arr =[1,2,3,4,5,1,6,8]
new =set()
for i in arr:
    if i in new:
        print('cotain duplicates')
    else:
        new.add(i)
    
    
