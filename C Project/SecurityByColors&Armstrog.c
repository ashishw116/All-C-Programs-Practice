#include<stdio.h>
#include<math.h>
void main()
{
    //KeyFormation
    printf("\n\n---------- KeyFormation ----------\n\n");
    int a,b,c,x,y,z,ax,by,cz;
    printf("Enter 3 Integers Between 0 to 255 :\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=255||b>=255||c>=255||a<=0||b<=0||c<=0)
    {
        printf("Enter Valid Number Between 0 to 255\n");
    }
    else
    {
        printf("Enter 3 Integers Between -10 to 10 :\n");
        scanf("%d%d%d",&x,&y,&z);
        if(x>=-10&&x<=10&&y>=-10&&y<=10&&z>=-10&&z<=10)
        {
            char signChar;
            printf("Enter Sign (+,-) :\n");
            scanf("\n%c",&signChar);
            switch(signChar)
            {
                case '+' :
                    ax=a+x,by=b+y,cz=c+z;
                    break;
                case '-' :
                    ax=a-x,by=b-y,cz=c-z;
                    break;
                default :
                    printf("Invalid Sign Entered!!!!\nPlease Enter Valid Sign (+,-)\n");
            }
            printf("Enter the Received key  A' :%d B' :%d C' :%d\n",ax,by,cz);
        }
        else
        {
            printf("!!!!! Enter Valid Number Between -10 to +10\n");
        }
    }
    //Encryption
    printf("\n\n---------- Encryption ----------\n\n");
    char message[12];
    printf("Enter A Message Of 12 size :\n");
    scanf("%s",&message);
    int len=0;
    while(message[len]!='\0')
    {
        len++;
    }
    if(len==12)
    {
        int data[12];
        for(int i=0;i<len;i++)
        {
            data[i]=(int)message[i];
        }
        int armno;
        printf("Enter 3 Digit ArmStrong Number\n");
        scanf("%d",&armno);
        int n=armno,num=0;
        while(n>0)
        {
            int d=n%10;
            num+=(d*d*d);
            n/=10;
        }
        if(armno>=100 && armno<=999 && armno==num)
        {
           int armnos[12];
           n=armno;
           int i=11;
           while(i>=0)
           {
               if(n==0)
                   n=armno;
               armnos[i--]=n%10;
               n/=10;
           }
           int po=1;
           for(int i=0;i<9;i++)
           {
                   armnos[i]=round(pow(armnos[i],po));
                   if((i+1)%3==0)
                       po++;
           }
           int dmarr[12];
           for(int i=0;i<12;i++)
           {
               dmarr[i]=data[i]+armnos[i];
           }
           int A[3][4],s=0;

           for(int i=0;i<4;i++)
           {
               for(int j=0;j<3;j++)
               {
                    A[j][i]=dmarr[s++];
               }
           }
           /*printf("A = \n");
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<4;j++)
               {
                    printf("%d ",A[i][j]);
               }
               printf("\n");
           }*/
           int B[3][3];
           s=0;
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                    B[i][j]=armnos[s++];
               }
           }
           /*printf("B =\n");
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<3;j++)
               {
                   printf("%d ",B[i][j]);
               }
               printf("\n");
           }*/
           int C[3][4];
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<4;j++)
                {
                    C[i][j]=0;
                    for(int k=0;k<3;k++)
                    {
                        C[i][j]+=(B[i][k]*A[k][j]);
                    }
                }
           }
           /*printf("C =\n");
           for(int i=0;i<3;i++)
           {
               for(int j=0;j<4;j++)
               {
                   printf("%d ",C[i][j]);
               }
               printf("\n");
           }*/
            s=0;
           int encryptedData[15];
           for(int i=0;i<4;i++)
           {
               for(int j=0;j<3;j++)
                {
                        encryptedData[s++]=C[j][i];
                }
           }
            encryptedData[12]=a;
            encryptedData[13]=b;
            encryptedData[14]=c;
            printf("\nEncrypted Data = \n");
            for(int i=0;i<15;i++)
                printf(" %d ",encryptedData[i]);

        }
        else
        {
                printf("!!!! Entered Armstrong Number Should Be Valid And In Between 100 to 999\n");
        }
    }
    else
    {
                printf("!!!! Enter Valid Message of size 12 \n");
    }
    //KeyAuthentication
    printf("\n\n---------- KeyAuthentication ----------\n\n");
    int chiperData[15];
    printf("Enter 15 Numbers CipherData = \n");
    for(int i=0;i<15;i++)
        scanf("%d",&chiperData[i]);
    int a2=chiperData[12],b2=chiperData[13],c2=chiperData[14];
    int ax2,by2,cz2;
    printf("Enter the Received key : \n");
    scanf("%d%d%d",&ax2,&by2,&cz2);
    int x2,y2,z2;
    printf("Enter the keyValues : \n");
    scanf("%d%d%d",&x2,&y2,&z2);
    char signChar2;
    printf("Enter Sign (+,-) :\n");
    scanf("\n%c",&signChar2);
    int M,N,P;
    switch(signChar2)
    {
        case '+' :
            M=ax2-x2,N=by2-y2,P=cz2-z2;
            break;
        case '-' :
            M=ax2+x2,N=by2+y2,P=cz2+z2;
            break;
        default :
            printf("Invalid Sign Entered!!!!\nPlease Enter Valid Sign (+,-)\n");
    }

    if(M==a2&&N==b2&&P==c2)
    {
        printf("Authentication Done\n");
        //Decryption
        printf("\n\n---------- Decryption ----------\n\n");
        int EA[12];
        for(int i=0;i<12;i++)
            EA[i]=chiperData[i];
        int C2[3][4];
        int s=0;
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<3;j++)
            {
                C2[j][i]=EA[s++];
            }
        }
        int armno;
            printf("\nEnter 3 Digit ArmStrong Number\n");
            scanf("%d",&armno);
            int n=armno,num=0;
            while(n>0)
            {
                int d=n%10;
                num+=(d*d*d);
                n/=10;
            }
            if(armno>=100 && armno<=999 && armno==num)
            {
               int armnos[12];
               n=armno;
               int i=11;
               while(i>=0)
               {
                   if(n==0)
                       n=armno;
                   armnos[i--]=n%10;
                   n/=10;
               }
               int po=1;
               for(int i=0;i<9;i++)
               {
                       armnos[i]=round(pow(armnos[i],po));
                       if((i+1)%3==0)
                           po++;
               }
               int EM[3][3];
               s=0;
               for(int i=0;i<3;i++)
               {
                   for(int j=0;j<3;j++)
                   {
                        EM[i][j]=armnos[s++];
                   }
               }
               /*printf("EM =\n");
               for(int i=0;i<3;i++)
               {
                   for(int j=0;j<3;j++)
                   {
                       printf("%d ",EM[i][j]);
                   }
                   printf("\n");
               }*/
               int MM[3][3];
               MM[0][0]=((EM[1][1]*EM[2][2])-(EM[1][2]*EM[2][1]));
               MM[0][1]=((EM[1][0]*EM[2][2])-(EM[1][2]*EM[2][0]));
               MM[0][2]=((EM[1][0]*EM[2][1])-(EM[1][1]*EM[2][0]));
               MM[1][0]=((EM[0][1]*EM[2][2])-(EM[0][2]*EM[2][1]));
               MM[1][1]=((EM[0][0]*EM[2][2])-(EM[0][2]*EM[2][0]));
               MM[1][2]=((EM[0][0]*EM[2][1])-(EM[0][1]*EM[2][0]));
               MM[2][0]=((EM[0][1]*EM[1][2])-(EM[0][2]*EM[1][1]));
               MM[2][1]=((EM[0][0]*EM[1][2])-(EM[0][2]*EM[1][0]));
               MM[2][2]=((EM[0][0]*EM[1][1])-(EM[0][1]*EM[1][0]));
               int signM[3][3],sign=-1;
               for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    signM[i][j]=sign=-sign;
               int MCF[3][3];
               for(int i=0;i<3;i++)
                for(int j=0;j<3;j++)
                    MCF[i][j]=MM[i][j]*signM[i][j];
               int TRP[3][3];
               for(int i=0;i<3;i++)
               {
                   for(int j=0;j<3;j++)
                   {
                                TRP[j][i]=MCF[i][j];
                   }
               }
                int Det=EM[0][0]*((EM[1][1]*EM[2][2])-(EM[1][2]*EM[2][1]))-EM[0][1]*((EM[1][0]*EM[2][2])-(EM[1][2]*EM[2][0]))+EM[0][2]*((EM[1][0]*EM[2][1])-(EM[1][1]*EM[2][0]));
                float D[3][3];
                for(int i=0;i<3;i++)
                    for(int j=0;j<3;j++)
                        D[i][j]=(float)TRP[i][j]/Det;
                printf("\n\nDecrypted Data matrix is:\n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                 printf("%f ",D[i][j]);
            }
            printf("\n");
        }
                float DM[3][4];
                for(int i=0;i<3;i++)
                {
                    for(int j=0;j<4;j++)
                    {
                        DM[i][j]=0;
                        for(int k=0;k<3;k++)
                        {
                            DM[i][j]=(float)(DM[i][j]+(D[i][k])*(C2[k][j]));
                        }
                    }
                }
                printf("\n\nDecrypted Data matrix is:\n");
    for(int i=0;i<3;i++)
        {
            for(int j=0;j<4;j++)
            {
                 printf("%f ",DM[i][j]);
            }
            printf("\n");
        }
                s=0;
                int DA[12];
                for(int i=0;i<4;i++)
                {
                    for(int j=0;j<3;j++)
                    {
                        DA[s++]=round(DM[j][i]);
                    }
                }
                int PD[12];
                for(int i=0;i<12;i++)
                    PD[i]=(DA[i]-armnos[i]);
                char ORT[12];
                for(int i=0;i<12;i++)
                    ORT[i]=(char)PD[i];
                printf("Message =");
                for(int i=0;i<12;i++)
                    printf("%c",ORT[i]);
            }
            else
            {
                    printf("!!!! Entered Armstrong Number Should Be Valid And In Between 100 to 999\n");
            }
    }
    else
        printf("!!!!!Key Mismatch Please Try Again\n");
}
