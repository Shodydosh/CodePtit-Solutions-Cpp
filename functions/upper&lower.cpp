void toUppercase(char& c){
    if(c <= 'z' && c >= 'a') c -= 32;
}

void toLowercase(char& c){
    if(c <= 'Z' && c >= 'A') c += 32;
}
