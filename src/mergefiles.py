out = open('predictions.txt', 'w+')
for x in range(0,10):
	pred = open('predictions0'+str(x)+'.dat', 'Ur')
	out.write(pred.read())

