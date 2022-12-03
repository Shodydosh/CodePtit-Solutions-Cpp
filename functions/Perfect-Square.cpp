int odd{1};

while(num>0){
    num-=odd;
    odd+=2;
}

return(num==0);
