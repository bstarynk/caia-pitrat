#include "dx.h"
void INTERB2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NR=0,K=0,RU=0,RT=0,V18=0,V17=0,V=0,V19=0,V29=0,V28=0,DY=0,V8=0,V7=0,DXX=0,V26=0,V25=0,DF=0,V23=0,V22=0,V20=0,RZ=0,V6=0,V5=0,V4=0,V2=0,V1=0,V49=0;
int AT,Y;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; Y=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
pile[v[22]]=AT; 
(*f[1431])( );     /*INTERM0(AT,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
if((NR==1)) goto l32;
if((NR==2)) goto l33;
if((NR==19)) goto l4;
if((NR==3)) goto l5;
if((NR==20)) goto l8;
if((NR>=14)) goto l11;
if((NR==9)) goto l28;
if((NR==13)) goto l29;
if((NR==8)) goto l30;
if((NR==4)) goto l31;
if((NR!=7)) goto l14;
pile[v[22]]=435; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(435,100,R)*/
pile[v[22]]=436; pile[WZ1]=R; 
(*f[1110])( );     /*INTERB0(436,R)*/
pile[v[22]]=111; 
(*f[1110])( );     /*INTERB0(111,R)*/
pile[v[22]]=102; 
(*f[1110])( );     /*INTERB0(102,R)*/
l34:if((V49=w[x[AT]][1])==incon) goto l17;
if((V49!=23)) goto l35;
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=R; 
(*f[36])( );     /*PLUSC0(Y,AT,R)*/
l17:if((NR!=3)) goto l19;
if((V6=w[x[AT]][1])==incon) goto l19;
if((V6==23)) goto l18;
if((V6!=20)) goto l19;
V2=K+1;
V1=bh[v[1]][V2];
if((V1!=32)) goto l19;
pile[v[22]]=AT; pile[WZ1]=Y; 
(*f[1110])( );     /*INTERB0(AT,Y)*/
l19:if(x[R]!=incon) goto l20;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l1:if((RZ<=0)) goto l34;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ3]=jvj+2; 
(*f[1430])( );if(v[102]) goto l34;     /*INTERB1(102,R,RT,jvj+2)*/
RT=pile[WZ2]; 
if((RZ<=1)) goto l34;
if((RT<=0)) goto l34;
pile[v[22]]=103; pile[WZ3]=jvj+1; 
(*f[1430])( );if(v[102]) goto l34;     /*INTERB1(103,R,RU,jvj+1)*/
RU=pile[WZ2]; 
if((RZ<=2)) goto l34;
if((RU<=0)) goto l34;
pile[v[22]]=160; 
(*f[1110])( );     /*INTERB0(160,R)*/
goto l34;
l2:x[jvj+9]=incon;
if((NR==10)) goto l22;
if((NR==11)) goto l23;
pile[v[22]]=108; pile[WZ1]=100; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(108,100,jvj+9)*/
l15:x[R]=x[jvj+9] ;z[R]=z[jvj+9];
pile[v[22]]=102; pile[WZ1]=R; 
(*f[1110])( );     /*INTERB0(102,R)*/
l10:pile[v[22]]=103; pile[WZ1]=R; 
(*f[1110])( );     /*INTERB0(103,R)*/
goto l34;
l3:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V)*/
V=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+12,jvj+11,jvj+3)*/
l12:pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
x[jvj+5]=incon;
if((NR==14)) goto l24;
if((NR==15)) goto l25;
if((NR==16)) goto l26;
if((NR==17)) goto l27;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=21; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,21,jvj+5)*/
l13:pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,jvj+6,103,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+27; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+27,R)*/
l37:x[jvj+30]=107 ;z[jvj+30]=107;
l38:pile[v[22]]=jvj+30; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+30,R,jvj+31)*/
goto l38;
l4:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V19)*/
V19=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+16)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V19; pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,V19,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,R)*/
goto l34;
l5:if((x[AT]!=105)) goto l6;
V29=K+1;
V28=bh[v[1]][V29];
if((V28==32)) goto l6;
pile[v[22]]=K; pile[WZ1]=R; 
(*f[726])( );     /*LCONT0(K,R,DY)*/
DY=pile[WZ2]; 
goto l34;
l6:if(x[AT]==107||x[AT]==105) goto l7;
V8=K+1;
V7=bh[v[1]][V8];
if((V7==32)) goto l7;
pile[v[22]]=K; pile[WZ1]=R; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(K,R,DXX)*/
DXX=pile[WZ2]; 
goto l34;
l7:if((x[AT]!=107)) goto l14;
V26=K+1;
V25=bh[v[1]][V26];
if((V25==32)) goto l14;
pile[v[22]]=K; pile[WZ1]=R; 
(*f[335])( );if(v[102]) goto l14;     /*LANT0(K,R,DF)*/
DF=pile[WZ2]; 
goto l34;
l8:if((V23=w[x[AT]][1])==incon) goto l14;
if((V23==23)) goto l9;
pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V20)*/
V20=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=650; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,650,jvj+22)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V20; pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,V20,jvj+24)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+23,R)*/
goto l10;
l9:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V22)*/
V22=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=649; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V22; pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(100,21,140,V22,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+21,jvj+20,R)*/
goto l37;
l11:if((NR>18)) goto l14;
x[jvj+3]=incon;
V18=K+1;
V17=bh[v[1]][V18];
if((V17!=32)) goto l3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+13)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=jvj+3; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+13,jvj+3)*/
goto l12;
l14:if(NR==10||NR==11||NR==12) goto l2;
if(NR!=5&&NR!=6) goto l17;
x[jvj+8]=incon;
if((NR==5)) goto l21;
pile[v[22]]=73; pile[WZ1]=100; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(73,100,jvj+8)*/
l16:x[R]=x[jvj+8] ;z[R]=z[jvj+8];
pile[v[22]]=111; pile[WZ1]=R; pile[WZ3]=jvj+7; 
(*f[1430])( );if(v[102]) goto l34;     /*INTERB1(111,R,RZ,jvj+7)*/
RZ=pile[WZ2]; 
if((x[jvj+7]!=68)) goto l1;
x[jvj+28]=107 ;z[jvj+28]=107;
l36:pile[v[22]]=jvj+28; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[1432])( );if(v[102]) goto l1;     /*INTERB2(jvj+28,R,jvj+29)*/
goto l36;
l18:V5=K+1;
V4=bh[v[1]][V5];
if((V4!=32)) goto l19;
l47:pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=jvj+44; 
(*f[1432])( );if(v[102]) goto l19;     /*INTERB2(AT,Y,jvj+44)*/
goto l47;
l20:v[0]=jvj; v[22]-=3; v[102]=0;return;
l21:pile[v[22]]=22; pile[WZ1]=100; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(22,100,jvj+8)*/
goto l16;
l22:pile[v[22]]=114; pile[WZ1]=100; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(114,100,jvj+9)*/
goto l15;
l23:pile[v[22]]=113; pile[WZ1]=100; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(113,100,jvj+9)*/
goto l15;
l24:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+5)*/
goto l13;
l25:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+5)*/
goto l13;
l26:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=89; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,89,jvj+5)*/
goto l13;
l27:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=96; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,96,jvj+5)*/
goto l13;
l28:pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(69,100,R)*/
x[jvj+32]=108 ;z[jvj+32]=108;
l39:pile[v[22]]=jvj+32; pile[WZ1]=R; pile[WZ2]=jvj+33; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+32,R,jvj+33)*/
goto l39;
l29:pile[v[22]]=47; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(47,100,R)*/
x[jvj+34]=184 ;z[jvj+34]=184;
l40:pile[v[22]]=jvj+34; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+34,R,jvj+35)*/
goto l40;
l30:pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(42,100,R)*/
x[jvj+36]=107 ;z[jvj+36]=107;
l41:pile[v[22]]=jvj+36; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[1432])( );if(v[102]) goto l42;     /*INTERB2(jvj+36,R,jvj+37)*/
goto l41;
l31:pile[v[22]]=39; pile[WZ1]=100; pile[WZ2]=R; 
(*f[54])( );     /*TRI1(39,100,R)*/
pile[v[22]]=111; pile[WZ1]=R; 
(*f[1110])( );     /*INTERB0(111,R)*/
x[jvj+40]=114 ;z[jvj+40]=114;
l44:pile[v[22]]=jvj+40; pile[WZ1]=R; pile[WZ2]=jvj+41; 
(*f[1432])( );if(v[102]) goto l45;     /*INTERB2(jvj+40,R,jvj+41)*/
goto l44;
l32:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+14)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+14; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+14,R)*/
goto l34;
l33:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=318; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,318,jvj+15)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+15; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+15,R)*/
goto l34;
l35:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=R; 
(*f[35])( );     /*CHGC1(Y,AT,R)*/
goto l17;
l42:x[jvj+38]=105 ;z[jvj+38]=105;
l43:pile[v[22]]=jvj+38; pile[WZ1]=R; pile[WZ2]=jvj+39; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+38,R,jvj+39)*/
goto l43;
l45:x[jvj+42]=113 ;z[jvj+42]=113;
l46:pile[v[22]]=jvj+42; pile[WZ1]=R; pile[WZ2]=jvj+43; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+42,R,jvj+43)*/
goto l46;
}
