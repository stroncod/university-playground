import sets
import csv

def MeSirve(Palabra):
 if (Palabra.isalpha() or Palabra.isdigit()): 
  return True
  
 else:
  return False

with open('datos.csv', 'rU') as csvfile:
	out = open('bagtest.txt','w+')
	text_set = set()
	spamreader = csv.reader(csvfile, delimiter=';',dialect=csv.excel_tab)
	for row in spamreader:
	    text = row[1].strip()+' '+row[2].strip()
	    text_list = text.split(' ')
	    for word in text_list:
			if (MeSirve(word)):
			 text_set.add(word.upper())
	it =0
	for item in text_set:
		it=it+1
		out_format= str(it)+'.'+item
		out.write(out_format)
		out.write('\n')
out.close()