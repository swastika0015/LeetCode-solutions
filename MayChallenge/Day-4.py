    def findComplement(self, num):
        s=''                         #empty string
        num=bin(num)                 #covert into binary
        num=list(num)
        for i in range(2,len(num)):
            if num[i]=='1':
                num[i]=0       
            else:
                num[i]=1             
        s="".join(map(str,num))       #iterate list elements into string
        return int(s,2)               #covert bin into decimal
