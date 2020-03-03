#include "dx.h"
void INTERB1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NR=0,K=0,RU=0,RT=0,V39=0,V38=0,V=0,V40=0,V50=0,V49=0,DY=0,V8=0,V7=0,DXX=0,V47=0,V46=0,DF=0,V44=0,V43=0,V41=0,RZ=0,V6=0,V5=0,V4=0,V2=0,V1=0,V70=0;
int AT,Y;
int RS,RV;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
if(v[0]>99700) (*f[6])( );

AT=pile[v[22]]; Y=pile[v[22]+1]; RV=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=incon;
pile[v[22]]=AT; 
(*f[1431])( );     /*INTERM0(AT,NR,K)*/
NR=pile[WZ1]; K=pile[WZ2]; 
if((NR==1)) goto l38;
if((NR==2)) goto l39;
if((NR==19)) goto l4;
if((NR==3)) goto l5;
if((NR==20)) goto l8;
if((NR>=14)) goto l11;
if((NR==9)) goto l34;
if((NR==13)) goto l35;
if((NR==8)) goto l36;
if((NR==4)) goto l37;
if((NR!=7)) goto l14;
pile[v[22]]=435; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(435,100,jvj+1)*/
pile[v[22]]=436; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(436,jvj+1)*/
pile[v[22]]=111; 
(*f[1110])( );     /*INTERB0(111,jvj+1)*/
pile[v[22]]=102; 
(*f[1110])( );     /*INTERB0(102,jvj+1)*/
l17:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+1,jvj+11)*/
if((x[jvj+11]==73)) goto l18;
if((x[jvj+11]!=22)) goto l19;
pile[v[22]]=111; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+1,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+12,jvj+9)*/
pile[v[22]]=155; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(155,jvj+9,jvj+10)*/
if((x[jvj+10]==68)) goto l19;
l18:x[RV]=67 ;z[RV]=67;
l40:if((V70=w[x[AT]][1])==incon) goto l20;
if((V70!=23)) goto l41;
pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+1; 
(*f[36])( );     /*PLUSC0(Y,AT,jvj+1)*/
l20:pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+1,jvj+13)*/
if((x[jvj+13]==22)) goto l21;
if((x[jvj+13]!=73)) goto l22;
pile[v[22]]=111; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+1,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+16,jvj+17)*/
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+17,RS)*/
RS=pile[WZ2]; 
l24:if((NR!=3)) goto l26;
if((V6=w[x[AT]][1])==incon) goto l26;
if((V6==23)) goto l25;
if((V6!=20)) goto l26;
V2=K+1;
V1=bh[v[1]][V2];
if((V1!=32)) goto l26;
pile[v[22]]=AT; pile[WZ1]=Y; 
(*f[1110])( );     /*INTERB0(AT,Y)*/
l26:v[0]=jvj; v[22]-=4; pile[v[22]+2]=RS; v[102]=0;return;
l1:if((RZ<=0)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ3]=jvj+3; 
(*f[1430])( );if(v[102]) goto l17;     /*INTERB1(102,jvj+1,RT,jvj+3)*/
RT=pile[WZ2]; 
if((RZ<=1)) goto l17;
if((RT<=0)) goto l17;
pile[v[22]]=103; pile[WZ3]=jvj+2; 
(*f[1430])( );if(v[102]) goto l17;     /*INTERB1(103,jvj+1,RU,jvj+2)*/
RU=pile[WZ2]; 
if((RZ<=2)) goto l17;
if((RU<=0)) goto l17;
pile[v[22]]=160; 
(*f[1110])( );     /*INTERB0(160,jvj+1)*/
goto l17;
l2:x[jvj+19]=incon;
if((NR==10)) goto l28;
if((NR==11)) goto l29;
pile[v[22]]=108; pile[WZ1]=100; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(108,100,jvj+19)*/
l15:x[jvj+1]=x[jvj+19] ;z[jvj+1]=z[jvj+19];
pile[v[22]]=102; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(102,jvj+1)*/
l10:pile[v[22]]=103; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(103,jvj+1)*/
goto l17;
l3:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V)*/
V=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+20)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=111; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,111,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+21,jvj+4)*/
l12:pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
x[jvj+6]=incon;
if((NR==14)) goto l30;
if((NR==15)) goto l31;
if((NR==16)) goto l32;
if((NR==17)) goto l33;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=21; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,21,jvj+6)*/
l13:pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=111; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(jvj+35,111,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+36,jvj+7,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+37; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+37,jvj+1)*/
l43:x[jvj+40]=107 ;z[jvj+40]=107;
l44:pile[v[22]]=jvj+40; pile[WZ1]=jvj+1; pile[WZ2]=jvj+41; 
(*f[1432])( );if(v[102]) goto l17;     /*INTERB2(jvj+40,jvj+1,jvj+41)*/
goto l44;
l4:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V40)*/
V40=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=651; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,651,jvj+26)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V40; pile[WZ4]=jvj+28; 
(*f[270])( );     /*QUADRI7(100,21,140,V40,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=111; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+26,111,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+27; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+27,jvj+1)*/
goto l17;
l5:if((x[AT]!=105)) goto l6;
V50=K+1;
V49=bh[v[1]][V50];
if((V49==32)) goto l6;
pile[v[22]]=K; pile[WZ1]=jvj+1; 
(*f[726])( );     /*LCONT0(K,jvj+1,DY)*/
DY=pile[WZ2]; 
goto l17;
l6:if(x[AT]==107||x[AT]==105) goto l7;
V8=K+1;
V7=bh[v[1]][V8];
if((V7==32)) goto l7;
pile[v[22]]=K; pile[WZ1]=jvj+1; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(K,jvj+1,DXX)*/
DXX=pile[WZ2]; 
goto l17;
l7:if((x[AT]!=107)) goto l14;
V47=K+1;
V46=bh[v[1]][V47];
if((V46==32)) goto l14;
pile[v[22]]=K; pile[WZ1]=jvj+1; 
(*f[335])( );if(v[102]) goto l14;     /*LANT0(K,jvj+1,DF)*/
DF=pile[WZ2]; 
goto l17;
l8:if((V44=w[x[AT]][1])==incon) goto l14;
if((V44==23)) goto l9;
pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V41)*/
V41=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=650; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,650,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V41; pile[WZ4]=jvj+34; 
(*f[270])( );     /*QUADRI7(100,21,140,V41,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=111; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+32,111,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+34; pile[WZ4]=jvj+33; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+34,jvj+33,jvj+1)*/
goto l10;
l9:pile[v[22]]=K; 
(*f[258])( );     /*SMV1(K,V43)*/
V43=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=649; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,649,jvj+29)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V43; pile[WZ4]=jvj+31; 
(*f[270])( );     /*QUADRI7(100,21,140,V43,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+30; pile[WZ5]=jvj+1; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+30,jvj+1)*/
goto l43;
l11:if((NR>18)) goto l14;
x[jvj+4]=incon;
V39=K+1;
V38=bh[v[1]][V39];
if((V38!=32)) goto l3;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+23)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+4)*/
goto l12;
l14:if(NR==10||NR==11||NR==12) goto l2;
if(NR!=5&&NR!=6) goto l19;
x[jvj+18]=incon;
if((NR==5)) goto l27;
pile[v[22]]=73; pile[WZ1]=100; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(73,100,jvj+18)*/
l16:x[jvj+1]=x[jvj+18] ;z[jvj+1]=z[jvj+18];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ3]=jvj+8; 
(*f[1430])( );if(v[102]) goto l17;     /*INTERB1(111,jvj+1,RZ,jvj+8)*/
RZ=pile[WZ2]; 
if((x[jvj+8]!=68)) goto l1;
x[jvj+38]=107 ;z[jvj+38]=107;
l42:pile[v[22]]=jvj+38; pile[WZ1]=jvj+1; pile[WZ2]=jvj+39; 
(*f[1432])( );if(v[102]) goto l1;     /*INTERB2(jvj+38,jvj+1,jvj+39)*/
goto l42;
l19:x[RV]=68 ;z[RV]=68;
if(x[jvj+1]!=incon) goto l40;
l22:if((NR!=0)) goto l23;
RS=x[RV]=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l21:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+1,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+14,jvj+15)*/
if(x[jvj+15]==650||x[jvj+15]==653||x[jvj+15]==649||x[jvj+15]==654||x[jvj+15]==651||x[jvj+15]==151) goto l22;
pile[v[22]]=118; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(118,jvj+15,RS)*/
RS=pile[WZ2]; 
goto l24;
l23:RS=3;
goto l24;
l25:V5=K+1;
V4=bh[v[1]][V5];
if((V4!=32)) goto l26;
l53:pile[v[22]]=AT; pile[WZ1]=Y; pile[WZ2]=jvj+54; 
(*f[1432])( );if(v[102]) goto l26;     /*INTERB2(AT,Y,jvj+54)*/
goto l53;
l27:pile[v[22]]=22; pile[WZ1]=100; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(22,100,jvj+18)*/
goto l16;
l28:pile[v[22]]=114; pile[WZ1]=100; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(114,100,jvj+19)*/
goto l15;
l29:pile[v[22]]=113; pile[WZ1]=100; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(113,100,jvj+19)*/
goto l15;
l30:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=20; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,20,jvj+6)*/
goto l13;
l31:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=41; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,41,jvj+6)*/
goto l13;
l32:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=89; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,89,jvj+6)*/
goto l13;
l33:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=96; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(100,20,101,96,jvj+6)*/
goto l13;
l34:pile[v[22]]=69; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(69,100,jvj+1)*/
x[jvj+42]=108 ;z[jvj+42]=108;
l45:pile[v[22]]=jvj+42; pile[WZ1]=jvj+1; pile[WZ2]=jvj+43; 
(*f[1432])( );if(v[102]) goto l17;     /*INTERB2(jvj+42,jvj+1,jvj+43)*/
goto l45;
l35:pile[v[22]]=47; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(47,100,jvj+1)*/
x[jvj+44]=184 ;z[jvj+44]=184;
l46:pile[v[22]]=jvj+44; pile[WZ1]=jvj+1; pile[WZ2]=jvj+45; 
(*f[1432])( );if(v[102]) goto l17;     /*INTERB2(jvj+44,jvj+1,jvj+45)*/
goto l46;
l36:pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(42,100,jvj+1)*/
x[jvj+46]=107 ;z[jvj+46]=107;
l47:pile[v[22]]=jvj+46; pile[WZ1]=jvj+1; pile[WZ2]=jvj+47; 
(*f[1432])( );if(v[102]) goto l48;     /*INTERB2(jvj+46,jvj+1,jvj+47)*/
goto l47;
l37:pile[v[22]]=39; pile[WZ1]=100; pile[WZ2]=jvj+1; 
(*f[54])( );     /*TRI1(39,100,jvj+1)*/
pile[v[22]]=111; pile[WZ1]=jvj+1; 
(*f[1110])( );     /*INTERB0(111,jvj+1)*/
x[jvj+50]=114 ;z[jvj+50]=114;
l50:pile[v[22]]=jvj+50; pile[WZ1]=jvj+1; pile[WZ2]=jvj+51; 
(*f[1432])( );if(v[102]) goto l51;     /*INTERB2(jvj+50,jvj+1,jvj+51)*/
goto l50;
l38:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+24)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+24; pile[WZ4]=jvj+1; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+24,jvj+1)*/
goto l17;
l39:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=318; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,318,jvj+25)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+25; pile[WZ4]=jvj+1; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+25,jvj+1)*/
goto l17;
l41:pile[v[22]]=Y; pile[WZ1]=AT; pile[WZ2]=jvj+1; 
(*f[35])( );     /*CHGC1(Y,AT,jvj+1)*/
goto l20;
l48:x[jvj+48]=105 ;z[jvj+48]=105;
l49:pile[v[22]]=jvj+48; pile[WZ1]=jvj+1; pile[WZ2]=jvj+49; 
(*f[1432])( );if(v[102]) goto l17;     /*INTERB2(jvj+48,jvj+1,jvj+49)*/
goto l49;
l51:x[jvj+52]=113 ;z[jvj+52]=113;
l52:pile[v[22]]=jvj+52; pile[WZ1]=jvj+1; pile[WZ2]=jvj+53; 
(*f[1432])( );if(v[102]) goto l17;     /*INTERB2(jvj+52,jvj+1,jvj+53)*/
goto l52;
}
