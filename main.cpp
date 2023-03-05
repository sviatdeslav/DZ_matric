#include <iostream>
#include<array>
#include<ctime>

using namespace std;

/*#1
 * int main()
{
    int minim,nom;
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    for(int c=0;c<5;c++)
        for(int C=0;C<5;C++)
            mat[c][C]=rand()%99;
    minim=mat[0][0];
    for(int c=0;c<5;c++)
        for(int C=0;C<5;C++)
            if(minim>mat[c][C])
                minim=c;
    for(int x=0;x<5;x++)
       mat[minim][x]=0;
    return 0;
}
*/

/*#6
 * int main()
{
    int maxim,zn;
    srand(time(0));
    std::array<std::array<int, 5>, 5>mat;
    std::array<int,5>mas;
    for(int c=0;c<5;c++)
        for(int C=0;C<5;C++)
            mat[c][C]=rand()%99;
    for(int c=0;c<5;c++){

        for(int C=0;C<5;C++){
            maxim=mat[c][0];
            if(maxim<mat[c][C])
                zn=mat[c][C];
    }
        mas[c]=zn;
    }
    return 0;
}
*/

/*#8
 * int main(){
    int maxim=-1;
    srand(time(0));
    std::array<std::array<int, 10>, 2>mat;
    for(int C=0;C<10;C++){
        mat[0][C]=rand()%100;
        mat[1][C]=1+rand()%3;
    }
    for(int C=0;C<10;C++)
        if((mat[1][C]==3) && (mat[0][C]>maxim))
            maxim=mat[0][C];
    cout<<maxim<<endl;
    for (int c=0;c<2;c++){
        for(int C=0;C<10;C++)
            cout<<mat[c][C]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

/*#9b
 * int main()
{
    srand(time(0));
    std::array<std::array<int, 2>,10>mat;
    for(int c=0;c<2;c++)
        for(int C=0;C<10;C++)
            cin>>mat[c][C];
    for(int c=0;c<2;c++){
        for(int C=0;C<10;C++)
            cout<<mat[c][C]<<" ";
        cout<<endl;
    }
    return 0;
}
*/

/*#10(4)
 * int main(){
    int sum=0,norm1,norminf,sn1,sninf;
    srand(time(0));
    std::array<std::array<int, 10>, 10>mat;
    for(int c=0;c<5;c++)
        for(int C=0;C<5;C++)
            mat[c][C]=rand()%199-99;
    for(int c=0;c<5;c++){
        for(int C=0;C<5;C++)
            cout<<mat[c][C]<<" ";
        cout<<endl;
    }
    norm1=mat[0][0];
    norminf=mat[0][0];
    for(int c=0;c<5;c++){
        sninf=0;
        for(int C=0;C<5;C++){
            if((mat[c][C]>0) && (C%2!=0) && (C>=c))
                sum+=mat[c][C];
            sninf+=abs(mat[c][C]);
        }
        if(sninf>norminf)
            norminf=sninf;
    }
    for(int c=0;c<5;c++){
        sn1=0;
        for(int C=0;C<5;C++)
            sn1+=abs(mat[C][c]);
        if(sn1>norm1)
            norm1=sn1;
    }
    cout<<"Sum: "<<sum<<" norm 1: "<<norm1<<" norm infinite: "<<norminf;
    return 0;
}
*/
