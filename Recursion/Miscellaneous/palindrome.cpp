int lenght(char input[]){
    int count=0;
    int i=0;
      while(input[i]!='\0'){
          count++;
          i++;
      }
    return count;
}

bool check(char input[],int size,int start){
      if(start>size){
          return true;
      }
    
     if(input[start]!=input[size])
     {return false;}
    
        check(input,size-1,start+1);
}



bool checkPalindrome(char input[]) {
    // Write your code here
    int len=lenght(input);
      bool ans=check(input,len-1,0);
    return ans;

}
 


