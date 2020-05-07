while True:
	try:
		line = input()
	except EOFError:
		break 	

	n = int(line)
	fact = 1  
	for i in range(1,n+1): 
		fact = fact * i 
          
	print (str(n) + "!") 
	print (fact) 
