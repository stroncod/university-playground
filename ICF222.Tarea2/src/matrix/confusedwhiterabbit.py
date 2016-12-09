out = open('matrix.txt','w')
data = open("data.txt","r")
pred = open("predictions.txt","r")
   
Matrix = [[0 for x in range(2)] for y in range(2)] 

tp = 0
fp = 0
tn = 0
fn = 0  
data_list= []
pred_list= []
cont=0
for line in data:
	data_list.append(line[0])
for line in pred:
	pred_list.append(line[0])

    
for label in range (1,9):
	print 'Taking the red pill number '+str(label)
	for it in range(0,650):
		if pred_list[it]==str(label) and data_list[cont]==str(label):
			tp+=1
		if pred_list[it]!=str(label) and data_list[cont]!=str(label):
			tn +=1
		if pred_list[it]==str(label) and data_list[cont]!=str(label):
			fp +=1
		if pred_list[it]!=str(label) and data_list[cont]==str(label):
			fn +=1
		cont+=1
	cont=0
	print 'TP: '+str(tp)+' FP: '+str(fp)+' TN: '+str(tn)+' FN: '+str(fn) 
	Matrix[0][0] = tp
	Matrix[0][1] = fn
	Matrix[1][0] = fp
	Matrix[1][1] = tn 
	out.write('Matrix0'+str(label)+'\n')
	for row in (0,1):
		for col in (0,1):
			wformat = str(Matrix[row][col])
			out.write(wformat+'\t')
		out.write('\n')
	out.write('\n')
	tp= 0
	fp = 0
	tn = 0
	fn = 0

          
out.close()
pred.close()
data.close()