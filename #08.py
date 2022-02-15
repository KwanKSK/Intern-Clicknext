print('Calulate Change')

flag1 = 1
flag2 = 1

while flag1 == 1:
    
    price = int(input('Enter price of product: '))
    
    #check price product
    while price > 1000:
        print('ERROR: Product price more than 1000 THB')
        price = int(input('Enter price of product: '))
    
    change = 1000 - price
    
    # calculate change
    while change != 0:
        note500 = 0
        note100 = 0
        note50 = 0
        note20 = 0
        coin10 = 0
        coin5 = 0
        coin1 = 0
    
        while change > 0:
            if(change >= 500):
                note500 = change // 500
                change =  change % 500
            elif(change >= 100):
                note100 = change // 100
                change =  change % 100
            elif(change >= 50):      
                note50 = change // 50
                change =  change % 50
            elif(change >= 20):
                coin10 = change // 20
                change =  change % 20
            elif(change >= 10):
                coin10 = change // 10
                change =  change % 10
            elif(change >= 5):      
                coin5 = change // 5
                change =  change % 5
            elif(change >= 1):      
                coin1 = change // 1
                change =  change % 1
                    
        # print output
        if note500 > 0:
            print('500 THB x ', note500)
        if note100 > 0:
            print('100 THB x ', note100)
        if note50 > 0:
            print('50 THB x ', note50)
        if note20 > 0:
            print('20 THB x ', note20)
        if coin10 > 0:
            print('10 THB x ', coin10)
        if coin5 > 0:
            print('5 THB x ', coin5)
        if coin1 > 0:
            print('1 THB x ', coin1)
        
    # check continue program
    while flag2 == 1:
        check_continue = input('Do you want to continue? (Y/N): ')
        if (check_continue == 'Y' or check_continue == 'y'):
            flag1 = 1
            flag2 = 0
        elif (check_continue == 'N' or check_continue == 'n'):
            flag1 = 0
            flag2 = 0
        else:
            flag2 = 1
            print('ERROR: Unknown command')
            
