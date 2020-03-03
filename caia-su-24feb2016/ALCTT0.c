#include "dx.h"
void ALCTT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V42=0,V43=0,V6=0,V44=0,V45=0,V18=0,V19=0,V14=0,DYY=0,V38=0,V30=0,V33=0,V1=0,RR=0,DQ=0,RS=0,DT=0,V3=0,RZ=0,DH=0,V4=0,DXX=0,V=0,V20=0,SS=0,V21=0,E=0,DZZ=0,V15=0,V16=0,V89=0,V88=0,V10=0,V86=0,V90=0,V97=0,V96=0,DQQ=0,V94=0,V98=0;
int I,AL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=59;
x[jvj+1]=10186;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==393&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; AL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=I; 
(*f[107])( );     /*CRC0(I,V1)*/
V1=pile[WZ1]; 
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(128,100,jvj+16)*/
pile[v[22]]=I; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+15; 
(*f[78])( );if(v[102]) goto l10;     /*SMA0(I,64,67,jvj+15)*/
if((x[jvj+15]==21)) goto l10;
pile[v[22]]=V1; 
(*f[131])( );     /*SMV0(V1,RR,DQ)*/
RR=pile[WZ1]; DQ=pile[WZ2]; 
pile[v[22]]=DQ; 
(*f[131])( );     /*SMV0(DQ,RS,DT)*/
RS=pile[WZ1]; DT=pile[WZ2]; 
V3=DT+1;
pile[v[22]]=V3; 
(*f[131])( );     /*SMV0(V3,RZ,DH)*/
RZ=pile[WZ1]; DH=pile[WZ2]; 
V4=DH+1;
pile[v[22]]=V4; pile[WZ1]=jvj+16; 
(*f[261])( );if(v[102]) goto l10;     /*LEXS0(V4,jvj+16,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=RS; pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,RS,jvj+30)*/
pile[WZ3]=RZ; pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,RZ,jvj+28)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+15; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+15,jvj+26)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=RR; pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(100,21,140,RR,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=436; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,436,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+16; pile[WZ2]=160; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,jvj+16,160,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=111; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+25,jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=103; pile[WZ3]=jvj+29; 
(*f[58])( );     /*TRI3(jvj+27,jvj+28,103,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=454; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+29; pile[WZ5]=jvj+17; 
(*f[269])( );     /*QUADRI6(100,454,102,jvj+30,jvj+29,jvj+17)*/
V5=bh[v[1]][DT];
if(V5==45) goto l1;
pile[v[22]]=20; pile[WZ1]=10186; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10186,0,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(41,1,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
l1:V6=bh[v[1]][V3];
if(V6==62) goto l9;
pile[v[22]]=20; pile[WZ1]=10186; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10186,0,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V44; 
(*f[39])( );     /*SDX0(41,2,V44,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
l9:pile[v[22]]=AL; pile[WZ1]=454; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(AL,454,jvj+17)*/
l10:pile[v[22]]=V1; 
(*f[131])( );     /*SMV0(V1,V,V20)*/
V=pile[WZ1]; V20=pile[WZ2]; 
pile[v[22]]=V20; 
(*f[131])( );     /*SMV0(V20,SS,V21)*/
SS=pile[WZ1]; V21=pile[WZ2]; 
if((SS!=(-740))) goto l12;
pile[v[22]]=V21; 
(*f[131])( );     /*SMV0(V21,E,DZZ)*/
E=pile[WZ1]; DZZ=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+18; 
(*f[78])( );if(v[102]) goto l12;     /*SMA0(I,64,67,jvj+18)*/
if((x[jvj+18]!=21)) goto l12;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7501); pile[WZ4]=jvj+39; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7501),jvj+39)*/
pile[WZ3]=E; pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(100,21,140,E,jvj+37)*/
pile[v[22]]=128; pile[WZ1]=100; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(128,100,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=460; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,460,jvj+35)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=436; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(jvj+31,436,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; pile[WZ2]=160; pile[WZ3]=jvj+34; 
(*f[58])( );     /*TRI3(jvj+32,jvj+33,160,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=111; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+34,jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=103; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+36,jvj+37,103,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=454; pile[WZ2]=102; pile[WZ3]=jvj+39; pile[WZ4]=jvj+38; pile[WZ5]=jvj+19; 
(*f[269])( );     /*QUADRI6(100,454,102,jvj+39,jvj+38,jvj+19)*/
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(448,AL,jvj+4)*/
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=(-20); pile[WZ2]=128; pile[WZ3]=jvj+51; 
(*f[180])( );     /*TRIENS0(jvj+50,(-20),128,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=128; pile[WZ2]=100; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+51,128,100,jvj+49)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=128; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,128,jvj+47)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7501); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7501),jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=436; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,436,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=111; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,111,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=448; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,448,102,jvj+49,jvj+48,jvj+14)*/
pile[v[22]]=AL; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(AL,448,jvj+14)*/
l11:pile[v[22]]=AL; pile[WZ1]=454; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(AL,454,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=E; pile[WZ4]=jvj+56; 
(*f[270])( );     /*QUADRI7(100,21,140,E,jvj+56)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=21; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,20,101,21,jvj+54)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=436; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,436,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=111; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+53,jvj+54,111,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=454; pile[WZ2]=103; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+20; 
(*f[269])( );     /*QUADRI6(100,454,103,jvj+56,jvj+55,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=613; pile[WZ2]=jvj+20; 
(*f[35])( );     /*CHGC1(jvj+19,613,jvj+20)*/
l12:pile[v[22]]=117; pile[WZ1]=250; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(117,250,V15)*/
V15=pile[WZ2]; 
if((V15>=0)) goto l14;
V16=V20+1;
pile[v[22]]=V16; 
(*f[107])( );     /*CRC0(V16,V14)*/
V14=pile[WZ1]; 
pile[v[22]]=I; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+21; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(I,64,67,jvj+21)*/
if((x[jvj+21]!=21)) goto l14;
pile[v[22]]=V16; pile[WZ3]=jvj+22; 
(*f[78])( );if(v[102]) goto l14;     /*SMA0(V16,64,67,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ4]=jvj+44; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+22,jvj+44)*/
pile[WZ3]=21; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,21,jvj+42)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+40; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=436; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,436,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=111; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+41,jvj+42,111,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=454; pile[WZ2]=103; pile[WZ3]=jvj+44; pile[WZ4]=jvj+43; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,454,103,jvj+44,jvj+43,jvj+3)*/
if((x[jvj+22]==41)) goto l2;
if((x[jvj+22]!=570)) goto l13;
pile[v[22]]=V14; pile[WZ1]=jvj+2; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(V14,jvj+2,DYY)*/
DYY=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=160; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(jvj+3,160,jvj+2)*/
l13:pile[v[22]]=AL; pile[WZ1]=454; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(AL,454,jvj+3)*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:V18=V14+1;
x[jvj+57]=280 ;z[jvj+57]=280;
V89=bh[v[1]][V18];
if(V89==45||V89==43) goto l17;
if((V89<48)) goto l18;
if((V89>57)) goto l18;
V88=135;
l15:if((V88==135)) goto l16;
goto l13;
l5:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=448)) goto l6;
pile[v[22]]=436; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(436,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+7,V38)*/
V38=pile[WZ2]; 
if((V38!=(-7501))) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+5,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=128)) goto l6;
pile[v[22]]=128; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(128,jvj+8,jvj+10)*/
for(i=x[jvj+10],V30=0;i>0;i=t[i],V30++)  ;
if((V30!=1)) goto l6;
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+5,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=128)) goto l6;
x[jvj+59]=x[jvj+10] ;z[jvj+59]=z[jvj+10];
l7:if((x[jvj+59]<=0)) goto l6;
x[jvj+13]=s[x[jvj+59]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+59];
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+13,V33)*/
V33=pile[WZ2]; 
if((V33==0)) goto l11;
l8:x[jvj+59]=t[x[jvj+59]];
goto l7;
l6:x[jvj+4]=t[x[jvj+4]];
goto l4;
l16:pile[v[22]]=V18; 
(*f[126])( );     /*LND2(V18,V86,V10)*/
V86=pile[WZ1]; V10=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+57; pile[WZ2]=V86; 
(*f[43])( );     /*CHGC2(jvj+3,jvj+57,V86)*/
l3:V19=V10+1;
x[jvj+58]=164 ;z[jvj+58]=164;
V97=bh[v[1]][V19];
if(V97==45||V97==43) goto l21;
if((V97<48)) goto l22;
if((V97>57)) goto l22;
V96=135;
l19:if((V96==135)) goto l20;
goto l13;
l17:V90=V18+1;
V10=V90;
goto l3;
l18:V88=134;
goto l15;
l20:pile[v[22]]=V19; 
(*f[126])( );     /*LND2(V19,V94,DQQ)*/
V94=pile[WZ1]; DQQ=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=jvj+58; pile[WZ2]=V94; 
(*f[43])( );     /*CHGC2(jvj+3,jvj+58,V94)*/
goto l13;
l21:V98=V19+1;
DQQ=V98;
goto l13;
l22:V96=134;
goto l19;
}
