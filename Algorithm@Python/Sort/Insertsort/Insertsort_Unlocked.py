unsorted = [55, 07, 78, 12, 42]

def insertion_sort(_unsorted):
	''' key-index range'''
	for i in range(1, len(_unsorted)):
		#set key, unsorted's start-value
		key = _unsorted[i]
		j = i-1
		
		#regard that left side is already sorted
		#if target is larger than key, target have to move
		#find key's location, j-1
		while j >= 0 and key < _unsorted[j]:
			unsorted[j+1] = unsorted[j]
			j = j-1
		
		#locate key
		_unsorted[j+1] = key


print '**********Before Sorting*****************'
print unsorted
'''
print ' length : ', len(unsorted)
for i in range(0, len(unsorted)):
	print i,' : ', unsorted[i]
'''
print '*****************************************'
print '\n'

insertion_sort(unsorted)

print '**********After Sorting******************'
print unsorted
'''
print ' length : ', len(unsorted)
for i in range(0, len(unsorted)):
	print i,' : ', unsorted[i]
'''
print '*****************************************'

'''
for i in range(1, len(unsorted)):
	#set key, unsorted's start-value
	key = unsorted[i]
	j = i-1
	#if target is larger than key, target have to move
	#find key's location, j-1
	while j >= 0 and unsorted[j] > key:
		unsorted[j+1] = unsorted[j]
		j = j-1
	#locate key
	unsorted[j+1] = key

	print 'sorted, j : ',j,' i',i
	for p in range(0, len(unsorted)):
		print unsorted[p],','
'''