unsorted = [55, 07, 78, 12, 42]
print unsorted


#using function
def bubble_sort(_unsorted):
	#because of opeeration(j+1), length : len-1
	length_unsorted = len(_unsorted) - 1
	"""
	i: for position max range
	j: index for compare
	"""
	for i in range(0,length_unsorted):
		for j in range(0, length_unsorted - i):
			if(_unsorted[j] > _unsorted[j+1]):
				temp = _unsorted[j]
				_unsorted[j] = _unsorted[j+1]
				_unsorted[j+1] = temp

			
print '**********Before Sorting*****************'
print ' length : ', len(unsorted)
for i in range(0, len(unsorted)):
	print i,' : ', unsorted[i]
print '*****************************************'
print '\n\n'

bubble_sort(unsorted)

print '**********After Sorting******************'
print ' length : ', len(unsorted)
for i in range(0, len(unsorted)):
	print i,' : ', unsorted[i]
print '*****************************************'		

		
"""
for i in range(0, len(unsorted)):
	for j in range(0, len(unsorted)-i-1):
		if(unsorted[j] > unsorted[j+1]):
			temp = unsorted[j]
			unsorted[j] = unsorted[j+1]
			unsorted[j+1] = temp

	for k in range(len(unsorted)): 
		print i,': ','unsorted[',k,']',unsorted[k]
		
sorted = [0,0,0,0,0]
for i in range(len(unsorted)): 
	sorted = unsorted[i]
	print 'sorted[',i,']',unsorted[i]
"""

	
"""
print 'unsorted list \'s len is ', len(unsorted)

print 'check i\'s range'
for i in range(len(unsorted)): #print i

for i in range(0, len(unsorted)):
	for j in range(0, len(unsorted)-i-1):
		if(unsorted[j] > unsorted[j+1]):
			temp = unsorted[j]
			unsorted[j] = unsorted[j+1]
			unsorted[j+1] = temp

	for k in range(len(unsorted)): 
		print i,': ','unsorted[',k,']',unsorted[k]
		
sorted = [0,0,0,0,0]
for i in range(len(unsorted)): 
	sorted = unsorted[i]
	print 'sorted[',i,']',unsorted[i]
"""

"""
a = 5
b = 9
	
#	print 'in swap() a:',a,'b:',b
#print swap.__doc__

def swap():
	'''swap x and y'''
	temp = x
	x = y
	y = temp
	print 'in swap() x:',x,'y:',y
"""
##for check how to declare function and call function
"""
def say_hello():
	'''for check how to declare function and call function'''
	print 'hello world'
say_hello()
say_hello()

##for check how to use docString
print say_hello.__doc__
"""

