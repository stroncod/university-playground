class Bag:
    def __init__(self, palabra, p_id):
        self.palabra = palabra
        self.p_id = p_id
	
vectors = open('data.txt','w')
bag = open('bagtest.txt','r+')
questions = open('questions.txt','r+')	
	

#Leer bolsa y guardar en lista

BagList = []
for line2 in bag:
		(pid,p_word) = line2.split(".")
		p_word=p_word.strip()
		p = Bag(p_word,pid)
		BagList.append(p)

#leer las preguntas y contar

it = 0
lenList = 0
preg = []
for line in questions:
    (q_id,q_content) = line.split('.')
    q_content = q_content.strip()
    #print q_content.split(" ")
    vectors.write(q_id+' ')
    for word in BagList:
	preg= q_content
	lenList= len(preg)
	#print str(lenList)+str(preg.split())
	count = q_content.count(str(word.palabra))
	if count>0:
	    #print word.palabra+" = "+word.p_id+" : "+str(count)
	    wformat = word.p_id+':'+str(count)+' '
	    vectors.write(wformat)
    vectors.write("\n")
	    
		
		
		
		
#for h in BagList:
  #  print h.p_id+" : "+h.palabra





vectors.close()
bag.close()
questions.close()