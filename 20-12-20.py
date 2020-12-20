#class Users():
#    def __init__(self,name,keywords="123456"):
#        self.name=name
#        self.keywords=keywords
#        self.count=0
#    def reset_login(self):
#        self.count=0
#    def incream_count(self):
#        self.count+=1
#    def reset_keywords(self,keywords):
#        self.keywords=keywords
#name1=input("Please enter your name:")
#tmp=input('Do you want to set a keywords,YES or NO :')
#if tmp.upper()=='YES':
#    keywords1=input('Please a keywords:')
#    user1=Users(name=name1,keywords=keywords1)
#else:
#    user1=Users(name=name1)
#j=3
#while user1.count<3:
#    n=input("The keywords is not true ,you have %d to input it:"%j)
#    if n==user1.keywords:
#        user1.incream_count()
#        print("you have log in it")
#        break
#    j-=1
#    user1.incream_count()
#if user1.count==3:
#    print("your loging number have arrive max:")
#    reset=input("Do you want to reset it : (YES/NO)")
#    if reset.upper()=='YES':
#        print("you have reset it")
#        user1.reset_login()
#        
