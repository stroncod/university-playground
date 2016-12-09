data = open("datawithcomma.txt","r")

count_1 = 0
count_2 = 0
count_3 = 0
count_4 = 0
count_5 = 0
count_6 = 0
count_7 = 0
count_8 = 0
amount_1 = 0
amount_2 = 0
amount_3 = 0
amount_4 = 0
amount_5 = 0
amount_6 = 0
amount_7 = 0
amount_8 = 0
words_list = []
it_wlist = 0
for line in data:
	q_id,words = line.split(",")
	#print words
	if q_id=='1':
		amount_1 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_1 += int(amount_words[1])
	if q_id=='2':
		amount_2 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_2 += int(amount_words[1])
	if q_id=='3':
		amount_3 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_3 += int(amount_words[1])
	if q_id=='4':
		amount_4 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_4 += int(amount_words[1])
	if q_id=='5':
		amount_5 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_5 += int(amount_words[1])
	if q_id=='6':
		amount_6 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_6 += int(amount_words[1])
	if q_id=='7':
		amount_7 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_7 += int(amount_words[1])
	if q_id=='8':
		amount_8 +=1
		aux = words.split(' ')
		for vector in aux:
			if vector.strip():
				amount_words = vector.split(':')
				count_8 += int(amount_words[1])
			
	
avg_1 = count_1 / amount_1
avg_2 = count_2 / amount_2
avg_3 = count_3 / amount_3
avg_4 = count_4 / amount_4
avg_5 = count_5 / amount_5
avg_6 = count_6 / amount_6
avg_7 = count_7 / amount_7
avg_8 = count_8 / amount_8

print "1:"
print "\t Total of questions in label: "+str(amount_1)
print "\t Amount of words per label: "+str(count_1)
print "\t Average per question: "+str(avg_1)
print "2:"
print "\t Total of questions in label: "+str(amount_2)
print "\t Amount of words per label: "+str(count_2)
print "\t Average per question: "+str(avg_2)
print "3:"
print "\t Total of questions in label: "+str(amount_3)
print "\t Amount of words per label: "+str(count_3)
print "\t Average per question: "+str(avg_3)
print "4:"
print "\t Total of questions in label: "+str(amount_4)
print "\t Amount of words per label: "+str(count_4)
print "\t Average per question: "+str(avg_4)
print "5:"
print "\t Total of questions in label: "+str(amount_5)
print "\t Amount of words per label: "+str(count_5)
print "\t Average per question: "+str(avg_5)
print "6:"
print "\t Total of questions in label: "+str(amount_6)
print "\t Amount of words per label: "+str(count_6)
print "\t Average per question: "+str(avg_6)
print "7:"
print "\t Total of questions in label: "+str(amount_7)
print "\t Amount of words per label: "+str(count_7)
print "\t Average per question: "+str(avg_7)
print "8:"
print "\t Total of questions in label: "+str(amount_8)
print "\t Amount of words per label: "+str(count_8)
print "\t Average per question: "+str(avg_8)

