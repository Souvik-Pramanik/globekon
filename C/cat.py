def push(st):
	global top,num
	while(num!=0):
		top=top+1
		r=num%2
		st.append(r)
		num=num/2

def pop(st):
	global top
	while(top!=-1):
		print st[top],
		top=top-1

st=[]
top=-1
d=int(input("Enter the Decimal to be converted- "))
num=d
push(st)
print "The binary output of the given decimal is- "
if(d==0):
	print d
else:
	pop(st)

