arr =[1,2,3,4,5,6,8]
low=0
high=len(arr)-1
for i in range(int(len(arr)/2)):
    arr[low],arr[high]=arr[high],arr[low]
    low+=1
    high-=1
print(arr)
