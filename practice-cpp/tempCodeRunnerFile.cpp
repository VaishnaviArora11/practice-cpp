int main(){
    int x, j; 
    cout<<"Enter a number : ";
    cin>>x; 
    for(int i = 1; i <= x; i++){ 
        int j = 1;
        char n = 65 + i - 1;
        while(j <= i){
            int j = 1;
            cout<<n<<" ";
            j++;
        }
        cout<<endl;
    }
};
