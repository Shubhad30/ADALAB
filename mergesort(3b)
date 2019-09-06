def merge(l1,l2,l):
        i,j,k=0,0,0
        while(i<len(l1) and j<len(l2)):
            if(l1[i]<l2[j]):
                l[k]=l1[i]
                i+=1
            else:
                l[k]=l2[j]
                j+=1
            k+=1
        while i<len(l1):
            l[k]=l1[i]
            i+=1
            k+=1
        while j<len(l2):
            l[k]=l2[j]
            j+=1
            k+=1
    
def mergesort(l):
    if(len(l)>1):
        m=len(l)//2
        l1=l[:m]
        l2=l[m:]
        mergesort(l1)
        mergesort(l2)
        merge(l1,l2,l)
        
l1=list(map(int,input("Enter the elements:").split()))
mergesort(l1)
print("Sorted list:`",l1)
