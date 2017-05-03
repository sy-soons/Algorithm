
unsorted = [55, 07, 78, 12, 42]

def swap_list_element(x,y,_list):
	temp = _list[x]
	_list[x] = _list[y]
	_list[y] = temp
	
def select_sort(_unsorted):
	#i : key's idx range
	for i in range(0, len(_unsorted) - 1):
		key = _unsorted[i]
		'''
		If current index is the largest value, then not operate compare loop (key and unsorted )
		So it is neccessary to set max_ele_index's initial value 
		'''
		max_ele_index = i
		for j in range(i+1, len(_unsorted)):
			if(key < unsorted[j]):
				max_ele_index = j
				key = unsorted[j]
		
		swap_list_element(i, max_ele_index, _unsorted)

print '**********Before Sorting*****************'
print ' length : ', len(unsorted)
for i in range(0, len(unsorted)):
	print i,' : ', unsorted[i]
print '*****************************************'
print '\n\n'

select_sort(unsorted)

print '**********After Sorting******************'
print ' length : ', len(unsorted)
for i in range(0, len(unsorted)):
	print i,' : ', unsorted[i]
print '*****************************************'
		
"""		
# find the largest value in [i~4]
# and swap unsorted[i] <-> unsorted[largest_value_idx]
for i in range(0,len(unsorted)-1):
	key = unsorted[i]
	largest_idx = 0
	for j in range(i+1,len(unsorted)):
		if(key < unsorted[j]):
			key = unsorted[j]
			largest_idx = j
	
#	if(largest_idx != 0):
#		temp = unsorted[i]
#		unsorted[i] = unsorted[largest_idx]
#		unsorted[largest_idx] = temp
	if(key != unsorted[i]):
		temp = unsorted[i]
		unsorted[i] = unsorted[largest_idx]
		unsorted[largest_idx] = temp

for k in range(0, len(unsorted)):
	print i,'th result : ',unsorted[k]
print '=============================='
				
print 'sorted:'
for p in range(0, len(unsorted)):
	print unsorted[p],','
"""