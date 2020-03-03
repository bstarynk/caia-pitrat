#include "dx.h"
void INTERB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NR=0,K=0,RU=0,RT=0,V18=0,V17=0,V=0,V19=0,V29=0,V28=0,DY=0,V8=0,V7=0,DXX=0,V26=0,V25=0,DF=0,V23=0,V22=0,V20=0,RZ=0,V6=0,V5=0,V4=0,V2=0,V1=0,V49=0;
int AT,Y;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=45;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; Y=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=AT; 
(*f[1431])( );     /*INTERM0(AT,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
if((NR==1)) goto l32;
if((NR==2)) goto l33;
if((NR==19)) goto l5;
if((NR==3)) goto l6;
if((NR==20)) goto l9;
if((NR>=14)) goto l12;
if((NR==9)) goto l28;
if((NR==13)) goto l29;
if((NR==8)) goto l30;
if((NR==4)) goto l31;
if((NR!=7)) goto l15;
pile[v[22]]=435; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(435,100,jvj+1)*/
pile[v[22]]=436; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(436,jvj+1)*/
pile[v[22]]=111; 
(*f[1110])( );     /*INTERB0(111,jvj+1)*/
pile[v[22]]=102; 
(*f[1110])( );     /*INTERB0(102,jvj+1)*/
l34:if((V49=w[x[AT]][1])==incon) goto l18;
if((V49!=23)) goto l35;
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+1)*/
l18:if((NR!=3)) goto l20;
if((V6=w[x[AT]][1])==incon) goto l20;
if((V6==23)) goto l19;
if((V6!=20)) goto l20;
V2=K+1;
V1=bh[v[1]][V2];
if((V1==32)) goto l1;
l20:v[0]=jvj; v[22]-=2; return;
l2:if((RZ<=0)) goto l34;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ3]=jvj+3; 
(*f[1430])( );if(v[102]) goto l34;     /*INTERB1(102,jvj+1,RT,jvj+3)*/
RT=pile[WZ2]; 
if((RZ<=1)) goto l34;
if((RT<=0)) goto l34;
pile[v[22]]=103; pile[WZ3]=jvj+2; 
(*f[1430])( );if(v[102]) goto l34;     /*INTERB1(103,jvj+1,RU,jvj+2)*/
RU=pile[WZ2]; 
if((RZ<=2)) goto l34;
if((RU<=0)) goto l34;
pile[v[22]]=160; 
(*f[1110])( );     /*INTERB0(160,jvj+1)*/
goto l34;
l3:x[jvj+10]=incon;
if((NR==10)) goto l22;
if((NR==11)) goto l23;
pile[v[22]]=108; pile[WZ1]=100; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(108,100,jvj+10)*/
l16:x[jvj+1]=x[jvj+10] ;z[jvj+1]=z[jvj+10];
pile[v[22]]=102; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(102,jvj+1)*/
l11:pile[v[22]]=103; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(103,jvj+1)*/
goto l34;
l4:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V)*/
V=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+13; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+12,jvj+4)*/
l13:pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
x[jvj+6]=incon;
if((NR==14)) goto l24;
if((NR==15)) goto l25;
if((NR==16)) goto l26;
if((NR==17)) goto l27;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=21; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,21,jvj+6)*/
l14:pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+27,jvj+7,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+28; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+28,jvj+1)*/
l37:x[jvj+31]=107 ;z[jvj+31]=107;
l38:pile[v[22]]=jvj+31; pile[WZ1]=jvj+1; pile[WZ2]=jvj+32; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+31,jvj+1,jvj+32)*/
goto l38;
l5:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V19)*/
V19=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+17)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V19; pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,V19,jvj+19)*/
pile[v[22]]=jvj+17; pile[WZ1]=111; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,111,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+19,jvj+18,jvj+1)*/
goto l34;
l6:if((x[AT]!=105)) goto l7;
V29=K+1;
V28=bh[v[1]][V29];
if((V28==32)) goto l7;
pile[v[22]]=K; pile[WZ1]=jvj+1; 
(*f[726])( );     /*LCONT0(K,jvj+1,DY)*/
DY=pile[WZ2]; 
goto l34;
l7:if(x[AT]==107||x[AT]==105) goto l8;
V8=K+1;
V7=bh[v[1]][V8];
if((V7==32)) goto l8;
pile[v[22]]=K; pile[WZ1]=jvj+1; 
(*f[79])( );if(v[102]) goto l8;     /*LEXP0(K,jvj+1,DXX)*/
DXX=pile[WZ2]; 
goto l34;
l8:if((x[AT]!=107)) goto l15;
V26=K+1;
V25=bh[v[1]][V26];
if((V25==32)) goto l15;
pile[v[22]]=K; pile[WZ1]=jvj+1; 
(*f[335])( );if(v[102]) goto l15;     /*LANT0(K,jvj+1,DF)*/
DF=pile[WZ2]; 
goto l34;
l9:if((V23=w[x[AT]][1])==incon) goto l15;
if((V23==23)) goto l10;
pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V20)*/
V20=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=650; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,650,jvj+23)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V20; pile[WZ4]=jvj+25; 
(*f[270])( );     /*QUADRI7(100,21,140,V20,jvj+25)*/
pile[v[22]]=jvj+23; pile[WZ1]=111; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(jvj+23,111,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+25; pile[WZ4]=jvj+24; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+25,jvj+24,jvj+1)*/
goto l11;
l10:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V22)*/
V22=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=649; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+20)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V22; pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,V22,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+1)*/
goto l37;
l12:if((NR>18)) goto l15;
x[jvj+4]=incon;
V18=K+1;
V17=bh[v[1]][V18];
if((V17!=32)) goto l4;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+14)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+14; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+14,jvj+4)*/
goto l13;
l15:if(NR==10||NR==11||NR==12) goto l3;
if(NR!=5&&NR!=6) goto l18;
x[jvj+9]=incon;
if((NR==5)) goto l21;
pile[v[22]]=73; pile[WZ1]=100; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(73,100,jvj+9)*/
l17:x[jvj+1]=x[jvj+9] ;z[jvj+1]=z[jvj+9];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ3]=jvj+8; 
(*f[1430])( );if(v[102]) goto l34;     /*INTERB1(111,jvj+1,RZ,jvj+8)*/
RZ=pile[WZ2]; 
if((x[jvj+8]!=68)) goto l2;
x[jvj+29]=107 ;z[jvj+29]=107;
l36:pile[v[22]]=jvj+29; pile[WZ1]=jvj+1; pile[WZ2]=jvj+30; 
(*f[1432])( );if(v[102]) goto l2;     /*INTERB2(jvj+29,jvj+1,jvj+30)*/
goto l36;
l19:V5=K+1;
V4=bh[v[1]][V5];
if((V4!=32)) goto l20;
l47:pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=jvj+45; 
(*f[1432])( );if(v[102]) goto l20;     /*INTERB2(AT,Y,jvj+45)*/
goto l47;
l21:pile[v[22]]=22; pile[WZ1]=100; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(22,100,jvj+9)*/
goto l17;
l22:pile[v[22]]=114; pile[WZ1]=100; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(114,100,jvj+10)*/
goto l16;
l23:pile[v[22]]=113; pile[WZ1]=100; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(113,100,jvj+10)*/
goto l16;
l24:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+6)*/
goto l14;
l25:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+6)*/
goto l14;
l26:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=89; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,89,jvj+6)*/
goto l14;
l27:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=96; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,96,jvj+6)*/
goto l14;
l28:pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(69,100,jvj+1)*/
x[jvj+33]=108 ;z[jvj+33]=108;
l39:pile[v[22]]=jvj+33; pile[WZ1]=jvj+1; pile[WZ2]=jvj+34; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+33,jvj+1,jvj+34)*/
goto l39;
l29:pile[v[22]]=47; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(47,100,jvj+1)*/
x[jvj+35]=184 ;z[jvj+35]=184;
l40:pile[v[22]]=jvj+35; pile[WZ1]=jvj+1; pile[WZ2]=jvj+36; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+35,jvj+1,jvj+36)*/
goto l40;
l30:pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(42,100,jvj+1)*/
x[jvj+37]=107 ;z[jvj+37]=107;
l41:pile[v[22]]=jvj+37; pile[WZ1]=jvj+1; pile[WZ2]=jvj+38; 
(*f[1432])( );if(v[102]) goto l42;     /*INTERB2(jvj+37,jvj+1,jvj+38)*/
goto l41;
l31:pile[v[22]]=39; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(39,100,jvj+1)*/
pile[v[22]]=111; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(111,jvj+1)*/
x[jvj+41]=114 ;z[jvj+41]=114;
l44:pile[v[22]]=jvj+41; pile[WZ1]=jvj+1; pile[WZ2]=jvj+42; 
(*f[1432])( );if(v[102]) goto l45;     /*INTERB2(jvj+41,jvj+1,jvj+42)*/
goto l44;
l32:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+15)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+15; pile[WZ4]=jvj+1; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+15,jvj+1)*/
goto l34;
l33:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=318; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,318,jvj+16)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+16; pile[WZ4]=jvj+1; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+16,jvj+1)*/
goto l34;
l35:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+1)*/
goto l18;
l42:x[jvj+39]=105 ;z[jvj+39]=105;
l43:pile[v[22]]=jvj+39; pile[WZ1]=jvj+1; pile[WZ2]=jvj+40; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+39,jvj+1,jvj+40)*/
goto l43;
l45:x[jvj+43]=113 ;z[jvj+43]=113;
l46:pile[v[22]]=jvj+43; pile[WZ1]=jvj+1; pile[WZ2]=jvj+44; 
(*f[1432])( );if(v[102]) goto l34;     /*INTERB2(jvj+43,jvj+1,jvj+44)*/
goto l46;
}
