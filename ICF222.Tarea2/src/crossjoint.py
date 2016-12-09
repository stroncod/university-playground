import os

flagTest = False
flagTrain = False
for countFile in range(0,10):
	if not os.path.isfile("test0"+str(countFile)+".txt"):
		flagTest = True
	if not os.path.isfile("train0"+str(countFile)+".txt")  :
		flagTrain = True
if flagTest and flagTrain:
	arglist = 'data.txt 10'
	bashSplit = "bash split.sh " + arglist
	os.system(bashSplit)
else:
	print "Files already split, dude..."
c = raw_input('Select c parameter \n')
for countFile in xrange(0,10):
	arglist = ' -c '+c+' train0'+str(countFile)+'.txt model0'+str(countFile)+'.dat'
	bashSVM_train = "./svm_multiclass_learn"+arglist
	print bashSVM_train
	os.system(bashSVM_train)
for countFile in xrange(0,10):
	arglist = ' test0'+str(countFile)+'.txt model0'+str(countFile)+'.dat predictions0'+str(countFile)+'.dat'
	bashSVM_test = "./svm_multiclass_classify"+arglist
	print bashSVM_test
	os.system(bashSVM_test)	


