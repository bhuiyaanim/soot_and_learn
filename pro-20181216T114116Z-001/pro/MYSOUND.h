#include <GL/gl.h>
#include <GL/glut.h>
#include<bits/stdc++.h>
#include<Windows.h>
#include<MMSystem.h>
void mysound()
{
    int l=0,r=2;
    if(rand_num>=0 && rand_num<=2)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\A.wav"), SND_ASYNC);
    }
    else if(rand_num>=3 && rand_num<=5)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\B.wav"), SND_ASYNC);
    }else if(rand_num>=6 && rand_num<=8)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\C.wav"), SND_ASYNC);
    }else if(rand_num>=9 && rand_num<=11)
    {

        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\D.wav"), SND_ASYNC);
    }else if(rand_num>=12 && rand_num<=14)
    {

        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\E.wav"), SND_ASYNC);
    }else if(rand_num>=15 && rand_num<=17)
    {

        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\F.wav"), SND_ASYNC);
    }else if(rand_num>=18 && rand_num<=20)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\G.wav"), SND_ASYNC);
    }else if(rand_num>=21 && rand_num<=23)
    {

        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\H.wav"), SND_ASYNC);
    }else if(rand_num>=24 && rand_num<=26)
    {

        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\I.wav"), SND_ASYNC);
    }else if(rand_num>=27 && rand_num<=29)
    {

        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\J.wav"), SND_ASYNC);
    }else if(rand_num>=30 && rand_num<=32)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\K.wav"), SND_ASYNC);
    }else if(rand_num>=33 && rand_num<=35)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\L.wav"), SND_ASYNC);
    }else if(rand_num>=36 && rand_num<=38)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\M.wav"), SND_ASYNC);
    }else if(rand_num>=39 && rand_num<=41)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\N.wav"), SND_ASYNC);
    }else if(rand_num>=42 && rand_num<=44)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\O.wav"), SND_ASYNC);
    }else if(rand_num>=45 && rand_num<=47)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\P.wav"), SND_ASYNC);
    }else if(rand_num>=48 && rand_num<=50)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\Q.wav"), SND_ASYNC);
    }else if(rand_num>=51 && rand_num<=53)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\R.wav"), SND_ASYNC);
    }else if(rand_num>=54 && rand_num<=56)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\S.wav"), SND_ASYNC);
    }else if(rand_num>=57 && rand_num<=59)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\T.wav"), SND_ASYNC);
    }else if(rand_num>=60 && rand_num<=62)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\U.wav"), SND_ASYNC);
    }else if(rand_num>=63 && rand_num<=65)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\V.wav"), SND_ASYNC);
    }else if(rand_num>=66 && rand_num<=68)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\W.wav"), SND_ASYNC);
    }else if(rand_num>=69 && rand_num<=71)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\X.wav"), SND_ASYNC);
    }else if(rand_num>=72 && rand_num<=74)
    {
        l+=3;
        r+=3;
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\Y.wav"), SND_ASYNC);
    }else if(rand_num>=75 && rand_num<=77)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\Z.wav"), SND_ASYNC);
    }else if(rand_num>=78 && rand_num<=79)
    {
        sndPlaySound(TEXT("C:\\Users\\amd11\\Desktop\\Code\\Glutt\\New folder\\cg\\audio-alphabet\\box.wav"), SND_ASYNC);
    }
}
