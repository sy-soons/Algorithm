
unsorted = [55, 07, 78, 12, 42]

def swap_arr(ix,iy):
	global unsorted
	temp = unsorted[ix]
	unsorted[ix] = unsorted[iy]
	unsorted[iy] = temp
	print 'function ==> unsorted[',ix,'] : ', unsorted[ix]
	print 'function ==> unsorted[',iy,'] : ', unsorted[iy]
	
a = 2
b = 4
print 'before ==> unsorted[',a,'] : ', unsorted[a]
print 'before ==> unsorted[',b,'] : ', unsorted[b]

swap_arr(a,b)

print 'after ==> unsorted[',a,'] : ', unsorted[a]
print 'after ==> unsorted[',b,'] : ', unsorted[b]
