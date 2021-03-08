def n():
    st2 = "happy"
    st1 = "ppy"
    size1 = len(st1)
    size2 = len(st2)
    test = 0
    if size2>=size1:
        end = size1-1
        start = 0
        while 1:
            index = start
            print("Start",start,"End",end)
            if test or end>=size2:
                break
            test = 1
            for i in range(size1):
                if st1[i]!= st2[index]:
                    test = 0
                print(st1[i],"==",st2[index],"?","i: ",i)
                index+=1
            #while(index<size1):
            #	if st1[index]!= st2[start]:
            #		test = 0
            #	print(st1[index],"==",st2[start],"?","index:",index)
            #	index+=1
            #	start+=1
            start+=1
            end+=1
    if test:
        return "Yes!"
    else:
        return "No."

print(n())