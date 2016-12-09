pred = open('error.txt','w')
salD = open("data.txt","r")
salP = open("predictions.txt","r")
    
lista=[]
cont=0
for line in salD:
        lista.append(line[0])
    
for line2 in salP:
        print line2[0]+"--"+lista[cont]+"  "+str(cont+1)
        
        if line2[0]==lista[cont]:
                pred.write("0")
        else:
                pred.write("1")
        pred.write("\n")
        cont+=1
   
        
    
    
pred.close()
salP.close()
salD.close()