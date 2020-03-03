#include "dx.h"
void QVV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V33=0,V42=0,V6=0;
int X,R,F,P;
int B,N,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=83;
x[jvj+1]=10885;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2067&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; R=pile[v[22]+1]; F=pile[v[22]+2]; P=pile[v[22]+3]; B=pile[v[22]+4]; N=pile[v[22]+5]; C=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=x[jvj+16]=x[jvj+31]=x[jvj+30]=incon;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l33;
x[jvj+4]=d[20];z[jvj+4]=0;
l1:if((x[jvj+4]<=0)) goto l33;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+5,R,jvj+6)*/
pile[v[22]]=268; pile[WZ1]=jvj+5; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+5,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+7,R,jvj+8)*/
x[jvj+9]=x[jvj+6] ;z[jvj+9]=z[jvj+6];
x[jvj+13]=x[jvj+8] ;z[jvj+13]=z[jvj+8];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
l3:pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=485)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
l4:if(x[jvj+12]==incon) goto l5;
l6:x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+76]=x[jvj+12] ;z[jvj+76]=z[jvj+12];
l7:if((x[jvj+76]>0)) goto l8;
x[jvj+82]=x[jvj+17] ;z[jvj+82]=z[jvj+17];
if((x[jvj+82]==0)) goto l35;
for(i=x[jvj+82],V33=0;i>0;i=t[i],V33++)  ;
if((V33==1)) goto l12;
if((V33<=1)) goto l13;
x[jvj+21]=0 ;z[jvj+21]=0;
x[jvj+77]=x[jvj+82] ;z[jvj+77]=z[jvj+82];
l10:if((x[jvj+77]>0)) goto l11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+21; pile[WZ2]=107; pile[WZ3]=jvj+41; 
(*f[301])( );     /*TRI11(jvj+40,jvj+21,107,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+41,22,100,jvj+31)*/
l13:if(x[jvj+16]==incon) goto l14;
l15:x[jvj+22]=0 ;z[jvj+22]=0;
x[jvj+79]=x[jvj+16] ;z[jvj+79]=z[jvj+16];
l16:if((x[jvj+79]>0)) goto l17;
x[jvj+83]=x[jvj+22] ;z[jvj+83]=z[jvj+22];
if((x[jvj+83]==0)) goto l36;
for(i=x[jvj+83],V42=0;i>0;i=t[i],V42++)  ;
if((V42==1)) goto l21;
if((V42<=1)) goto l26;
x[jvj+26]=0 ;z[jvj+26]=0;
x[jvj+80]=x[jvj+83] ;z[jvj+80]=z[jvj+83];
l19:if((x[jvj+80]>0)) goto l20;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+26; pile[WZ2]=107; pile[WZ3]=jvj+44; 
(*f[301])( );     /*TRI11(jvj+43,jvj+26,107,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+44,22,100,jvj+30)*/
l26:if(x[jvj+31]!=incon) goto l27;
l33:x[B]=x[N]=x[C]=incon;
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; v[102]=1;return;
l2:x[jvj+4]=t[x[jvj+4]];
goto l1;
l5:pile[v[22]]=20; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[409])( );     /*TRI14(20,jvj+9,jvj+12)*/
goto l6;
l8:x[jvj+18]=s[x[jvj+76]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+76];
for(a=x[F];a>0;a=t[a]) if(s[a]==x[jvj+18]) goto l9;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+18)*/
l9:x[jvj+76]=t[x[jvj+76]];
goto l7;
l11:x[jvj+19]=s[x[jvj+77]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+77];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+21,jvj+20)*/
x[jvj+77]=t[x[jvj+77]];
goto l10;
l12:if((x[jvj+82]<=0)) goto l13;
x[jvj+78]=s[x[jvj+82]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+82];
x[jvj+31]=x[jvj+78] ;z[jvj+31]=z[jvj+78];
goto l13;
l14:pile[v[22]]=20; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[409])( );     /*TRI14(20,jvj+13,jvj+16)*/
goto l15;
l17:x[jvj+23]=s[x[jvj+79]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+79];
for(a=x[F];a>0;a=t[a]) if(s[a]==x[jvj+23]) goto l18;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[68])( );     /*PLUE0(jvj+22,jvj+23)*/
l18:x[jvj+79]=t[x[jvj+79]];
goto l16;
l20:x[jvj+24]=s[x[jvj+80]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+80];
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+24,jvj+25)*/
pile[v[22]]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+26,jvj+25)*/
x[jvj+80]=t[x[jvj+80]];
goto l19;
l21:if((x[jvj+83]<=0)) goto l26;
x[jvj+81]=s[x[jvj+83]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+83];
x[jvj+30]=x[jvj+81] ;z[jvj+30]=z[jvj+81];
goto l26;
l22:x[jvj+27]=incon;
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[X]) goto l23;
l24:for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==x[X]) goto l25;
if(x[jvj+27]==incon) goto l33;
if((x[jvj+27]!=(-99999998))) goto l28;
goto l33;
l23:x[jvj+27]=102 ;z[jvj+27]=102;
goto l24;
l25:x[jvj+27]=103 ;z[jvj+27]=103;
l28:pile[v[22]]=268; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+27,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=64; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+49; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+49)*/
pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+29)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=11091; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,11091,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-598); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(100,21,140,(-598),jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=103; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+69; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+29,jvj+69,jvj+53)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+72; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+72)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=103; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,103,jvj+71)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+71; pile[WZ5]=jvj+54; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+72,jvj+71,jvj+54)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8104); pile[WZ4]=jvj+75; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8104),jvj+75)*/
pile[WZ3]=(-601); pile[WZ4]=jvj+73; 
(*f[270])( );     /*QUADRI7(100,21,140,(-601),jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=103; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,103,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+75; pile[WZ4]=jvj+74; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+75,jvj+74,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+51; 
(*f[180])( );     /*TRIENS0(jvj+50,(-20),113,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=C; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+52,jvj+51,C)*/
pile[v[22]]=C; pile[WZ1]=114; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(C,114,jvj+53)*/
pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(C,114,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1233; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,1233,jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+58; pile[WZ5]=jvj+36; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+58,jvj+36)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[35])( );     /*CHGC1(jvj+29,jvj+27,jvj+30)*/
pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[35])( );     /*CHGC1(jvj+29,jvj+28,jvj+31)*/
pile[v[22]]=C; pile[WZ1]=130; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(C,130,0)*/
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,X,jvj+32)*/
if((x[jvj+32]!=484)) goto l29;
x[B]=x[jvj+36] ;z[B]=z[jvj+36];
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8104); pile[WZ4]=N; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8104),N)*/
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=7; v[102]=0;return;
l27:if(x[jvj+30]!=incon) goto l22;
goto l33;
l29:pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,X,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]!=486)) goto l33;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,X,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+37)*/
l30:if((x[jvj+35]<=0)) goto l33;
x[jvj+38]=s[x[jvj+35]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+35];
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+38,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+59)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V6; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,V6,jvj+61)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+62; pile[WZ5]=B; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+62,B)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=63; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,63,jvj+63)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-8104); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(100,21,140,(-8104),jvj+67)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V6; pile[WZ4]=jvj+65; 
(*f[192])( );     /*QUADRI4(100,41,130,V6,jvj+65)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+65; pile[WZ2]=103; pile[WZ3]=jvj+66; 
(*f[58])( );     /*TRI3(jvj+64,jvj+65,103,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+67; pile[WZ4]=jvj+66; pile[WZ5]=N; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+67,jvj+66,N)*/
goto l34;
l31:x[jvj+35]=t[x[jvj+35]];
goto l30;
l35:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+31)*/
goto l13;
l36:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+30)*/
goto l26;
}
