
        cout<<"ans : " << ans << endl;
        i++;
        n = n >> 1;
        }
        i=0;
        int sol=0;
        while(ans!=0){
            if(ans & 1){
                sol=pow(2,i)+sol;
                cout <<"sol :