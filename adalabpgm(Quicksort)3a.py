def quicksort(a,l,h):
    if l<h:
        ps=partition(a,l,h)
        quicksort(a,l,ps-1)
        quicksort(a,ps+1,h)
def partition(a,l,h):
    i = ( l-1 )         
    pivot = a[h]   
    for j in range(l , h): 
        if   a[j] <= pivot: 
            i = i+1 
            a[i],a[j] = a[j],a[i] 
    a[i+1],a[h] = a[h],a[i+1] 
    return ( i+1 ) 
    
l1=list(map(int,input("Enter the elements:").split()))
quicksort(l1,0,len(l1)-1)
print("Sorted array:",l1)

