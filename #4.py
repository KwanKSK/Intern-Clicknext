print('Print Inverted Pyramid')
print('---------------------------')
print('Please enter integer number')

flag1 = 1
flag2 = 1

while flag1 == 1:
    # input varible 
    row = int(input('Enter the number of rows: '))
    
    # check input variable  
    if(row > 0):
        # print pyramid
        for i in range(row , -1, -1):
            for j in range(0, row - i):
                print(end = ' ')
            for j in range(0, (2 * i)-1):
                print(end = '*')
            print('')
    else:
        print('ERROR: number of rows is below or equal 0.')

    # check continue
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
