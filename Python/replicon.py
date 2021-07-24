def howMany(sentence):
    lst=sentence.split()
    lst2=[]
    for j in range(0,len(lst)):
        if lst[j].isdigit():
            lst2.append(lst[j])
            continue
        else:
            for i in lst[j]:
                if(i==']' or i=='[' or i=='{' or i=='}' or i=='+' or i==')' or i=='(' or i=='<' or i=='>' or i=='/' or i==':' or i==';' or i=='@' or i=='$' or i=='&' or i.isdigit()):
                    lst2.append(lst[j])
    return len(lst)-len(lst2)
if __name__=='__main__':
    #fptr = open(os.environ['OUTPUT_PATH'],'w')
    sentence=input()
    result=howMany(sentence)
    print(result)
    #fptr.write(str(result)+'\n')
    #fptr.close()


