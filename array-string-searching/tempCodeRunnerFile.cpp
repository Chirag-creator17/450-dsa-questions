int d=a[1]-a[0],ans=2,l=0;
        for(int i=1;i<n;i++)
        {
            if(a[i]+d==a[i+1]){
                ans++;
            }
            else{
                ans=2;
                d=a[i+1]-a[i];
            }
            l=max(l,ans);
        }
        cout<<l<<endl;