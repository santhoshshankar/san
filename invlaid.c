#include<stdio.h>
int main()
{
def convert(a):
	s=0
	for i in range(len(a)):
		s+=ord(a[i])
	return(s)
def main():
	str2=input()
	str1=input()
	x=convert(str1)
	y=convert(str2)
	d=x/y
	if d==x//y:
		print(int(d))
	else :
print(-1)
try:
main()
except:
printf("invalid")
