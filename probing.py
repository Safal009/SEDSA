hashsize = 10
hashtable =[-1]*hashsize


def quadratic(a):
    i = 1
    hashkey = a%hashsize
    while(True):
        if(hashtable[hashkey] == -1):
            hashtable[hashkey] = a
            print("Element has been entered by quadratic probing")
            break
        else:
            hashkey = hashkey + i*i
            i = i + 1
            if(hashkey  >= hashsize):
                print("Overflow")
                break
    
def linear(a):
    hashkey = a%hashsize
    while(True):
        if(hashtable[hashkey] == -1):
            hashtable[hashkey] = a
            print("Element has been entered by linear probing")
            break
        else:
            hashkey = hashkey + 1
            if(hashkey  >= hashsize):
                print("Overflow")
                break
            
    

def show(hashtable):
    print(hashtable)
    
    
    
while(True):
    print("1. Insert the element")
    print("2. For showing the hashtable")
    print("3. for exit")
    choice = int(input("Enter your choice : "))
    
    if(choice == 1):
        a = int(input("Enter the element to be entered: "))
        probing = int(input("Enter the technique you want 1. Linear 2. Quadratic: "))
        if(probing == 1):
            linear(a)
        elif(probing == 2):
            quadratic(a)
            
    elif(choice == 2):
        show(hashtable)
        
    elif(choice == 3):
        break
