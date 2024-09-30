* substr(1,5) => substring 1  to 5 no index
* replace(1,5," ") => here 1 to 5 no index value replace by space. example -asdfdfdredk => " "dredk
* cout<<fixed<<setprecision(7)<<avg; => after decimal point fixed digit print example 6.7878787




*** MATH ***
* long long number (10^18) == power of 2 is yes or not >> use log2(n)=x; double res=log2(n);
    if (res-(long long)res !=0)
    {
        cout<<"NO";
    }
    else
        cout<<"YES";

* any number prime or  not prime check >> use loop range sqrt(n);
* Pascel Triange :
     for (int i = 0; i<n; i++)
    {   
        value =1;
        for (int j= 0; j<=i; j++)
        {
            cout<<value<<" ";
            value=value*(i-j)/(j+1);
        }
        cout<<"\n";
        
    }
* 