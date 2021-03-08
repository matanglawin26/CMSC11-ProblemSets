def s():
    x = 0
    y = 0
    br_x = 15
    br_y = 3
    l = br_x-x
    w = br_y-y
    # tl = br_x+x
    # tw = br_y+y
    print("/////////////////////////////////////////////")
    for i in range(br_y+1):
        for j in range(br_x+1):
            if i >= y and j >= x:
                if i == y or i == br_y:
                    print("#",end='')
                else:
                    if j == x or j == br_x:
                        print("#",end='')
                    else:
                        print(" ",end='')
            else:
                print(" ",end='')
        print()
    print("Length:",l,"Width:",w)
            
s()