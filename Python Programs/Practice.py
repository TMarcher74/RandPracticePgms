picture= [
    [0,0,0,1,0,0,0],
    [0,0,1,1,1,0,0],
    [0,1,1,1,1,1,0],
    [1,1,1,1,1,1,1],
    [0,0,0,1,0,0,0],
    [0,0,0,1,0,0,0]
]
for y in picture:
    for x in y:
        if(x==0):
            print('_',end='')
        else:
            print('*',end='')
    print('')
        