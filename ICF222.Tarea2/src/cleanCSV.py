import re
import csv
with open('datos.csv', 'rU') as csvfile:
	out = open('questions.txt','w+')
	spamreader = csv.reader(csvfile, delimiter=';',dialect=csv.excel_tab)
	symbols ='@#$%^&*()_-.?/\n'
	for row in spamreader:
	    if row[4]=='Particulares':
	    	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='1.'+line
	     	out.write(line.upper())
	     	out.write('\n')
	    if row[4]=='Web':
	    	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='2.'+line
	     	#titulo = row[1].strip()
	    	#cuerpo = row[2].strip()
	     	#line='2.'+titulo+' '+cuerpo
	     	#for char in symbols:
	     	#	line.replace(char,'')
	     	out.write(line.upper())
	     	out.write('\n')
	    if row[4]=='Archivada':
	    	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='3.'+line
	     	#titulo = row[1].strip()
	    	#cuerpo = row[2].strip()
	     	#line='3.'+titulo+' '+cuerpo
	     	#for char in symbols:
	     	#	line.replace(char,'')
	     	out.write(line.upper())
	     	out.write('\n')
	    if row[4]=='Opiniones':
	    	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='4.'+line
	     	#titulo = row[1].strip()
	    	#cuerpo = row[2].strip()
	     	#line='4.'+titulo+' '+cuerpo
	     	#for char in symbols:
	     	#	line.replace(char,'')
	     	out.write(line.upper())
	     	out.write('\n')
	    if row[4]=='Complejas':
	     	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='5.'+line
	     	#titulo = row[1].strip()
	    	#cuerpo = row[2].strip()
	     	#line='5.'+titulo+' '+cuerpo
	     	#for char in symbols:
	     	#	line.replace(char,'')
	     	out.write(line.upper())
	     	out.write('\n')
	    if row[4]=='Otros':
	    	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='6.'+line
	     	#titulo = row[1].strip()
	    	#cuerpo = row[2].strip()
	     	#line='6.'+titulo+' '+cuerpo
	     	#for char in symbols:
	     	#	line.replace(char,'')
	     	out.write(line.upper())
	     	out.write('\n')
	    if row[4]=='No respondibles':
	    	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='7.'+line
	     	#titulo = row[1].strip()
	    	#cuerpo = row[2].strip()
	     	#line='7.'+titulo+' '+cuerpo
	     	#for char in symbols:
	     	#	line.replace(char,'')
	     	out.write(line.upper())
	     	out.write('\n')
	    if row[4]=='Archivadas y Web':
	    	line=row[1]+' '+row[2]
	    	line = re.sub('\W+',' ', line )
	    	line.strip()
	     	line='8.'+line
	     	#titulo = row[1].strip()
	    	#cuerpo = row[2].strip()
	     	#line='8.'+titulo+' '+cuerpo
	     	#for char in symbols:
	     	#	line.replace(char,'')
	     	out.write(line.upper())
	     	out.write('\n')