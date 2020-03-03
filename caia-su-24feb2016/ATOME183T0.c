#include "dx.h"
void ATOME183T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V28=0,JJ=0,V5=0,V52=0,V51=0,J=0,V22=0,PP=0,V16=0,V7=0,V43=0,V42=0,M=0,V41=0,I=0,V93=0,V94=0,V89=0,V96=0,V97=0,V91=0,V92=0,V14=0,V98=0,V95=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=67;
x[jvj+1]=20183;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3764&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1474; pile[WZ1]=D; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1474,D,jvj+40)*/
pile[v[22]]=117; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(117,jvj+40,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(510,jvj+40,I)*/
I=pile[WZ2]; 
x[jvj+18]=vo[14];z[jvj+18]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(642,jvj+18,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+19; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+19)*/
l12:if((x[jvj+19]>0)) goto l13;
pile[v[22]]=1369; pile[WZ1]=D; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1369,D,jvj+22)*/
l15:if((x[jvj+22]>0)) goto l16;
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+13; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+13)*/
l9:if((x[jvj+13]<=0)) goto l21;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=868; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(868,jvj+14,jvj+15)*/
if((x[jvj+15]!=55)) goto l10;
pile[v[22]]=1300; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1300,jvj+14,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==625) goto l11;
l10:x[jvj+13]=t[x[jvj+13]];
goto l9;
l1:V5=incon;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=485)) goto l4;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+5)*/
x[jvj+64]=x[jvj+5] ;z[jvj+64]=z[jvj+5];
l2:if((x[jvj+64]<=0)) goto l4;
x[jvj+6]=s[x[jvj+64]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+64];
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+6,V28)*/
V28=pile[WZ2]; 
JJ=V28;
V5=JJ;
l5:x[jvj+66]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+2,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=485)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+9)*/
x[jvj+65]=x[jvj+9] ;z[jvj+65]=z[jvj+9];
l6:if((x[jvj+65]<=0)) goto l8;
x[jvj+10]=s[x[jvj+65]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+65];
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=486)) goto l7;
x[jvj+66]=x[jvj+10] ;z[jvj+66]=z[jvj+10];
l18:x[jvj+26]=x[jvj+66] ;z[jvj+26]=z[jvj+66];
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=486)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+29)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+30; 
(*f[1290])( );if(v[102]) goto l17;     /*DEPEXP0(jvj+23,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[255])( );     /*COPEXP0(jvj+30,jvj+31)*/
J=V5;
x[jvj+67]=x[jvj+29] ;z[jvj+67]=z[jvj+29];
l19:if((x[jvj+67]<=0)) goto l17;
x[jvj+32]=s[x[jvj+67]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+67];
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+32,V22)*/
V22=pile[WZ2]; 
PP=V22;
pile[v[22]]=PP; pile[WZ1]=V16; 
(*f[1024])( );if(v[102]) goto l20;     /*POSPRD0(PP,V16,V7)*/
V7=pile[WZ2]; 
V43=PP*I;
V42=J+V43;
M=V7;
V41=V42%M;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+51)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+47; 
(*f[46])( );     /*TRI0(V52,858,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+48; 
(*f[189])( );     /*TRI4(jvj+47,v[13],642,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=3764; pile[WZ2]=246; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,3764,246,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=20183; pile[WZ2]=218; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,20183,218,jvj+50)*/
pile[v[22]]=jvj+51; pile[WZ1]=(-20); pile[WZ2]=jvj+50; pile[WZ3]=159; pile[WZ4]=jvj+52; 
(*f[298])( );     /*TRIENS1(jvj+51,(-20),jvj+50,159,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+52,1,158,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V41; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,V41,jvj+57)*/
pile[WZ3]=M; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,M,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=160; pile[WZ2]=jvj+54; 
(*f[54])( );     /*TRI1(jvj+53,160,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+55; pile[WZ2]=111; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+54,jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+31; pile[WZ4]=jvj+58; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+31,jvj+58,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+33; 
(*f[1296])( );     /*NOUVCONTR0(jvj+34,jvj+33)*/
l20:x[jvj+67]=t[x[jvj+67]];
goto l19;
l3:x[jvj+64]=t[x[jvj+64]];
goto l2;
l4:V5=0;
goto l5;
l7:x[jvj+65]=t[x[jvj+65]];
goto l6;
l8:x[jvj+66]=x[jvj+2] ;z[jvj+66]=z[jvj+2];
goto l18;
l11:pile[v[22]]=jvj+17; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+14)*/
goto l10;
l13:x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+20,V51)*/
V51=pile[WZ2]; 
if((V16>0)) goto l25;
l14:x[jvj+19]=t[x[jvj+19]];
goto l12;
l16:x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=1347; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1347,jvj+23,jvj+24)*/
x[jvj+2]=x[jvj+24] ;z[jvj+2]=z[jvj+24];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+2,jvj+25)*/
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==x[D]) goto l1;
l17:x[jvj+22]=t[x[jvj+22]];
goto l15;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l24:pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+62; 
(*f[270])( );     /*QUADRI7(101,jvj+35,110,(-631),jvj+62)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+63)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(V52,858,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+60; 
(*f[189])( );     /*TRI4(jvj+59,v[13],642,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=3764; pile[WZ2]=246; pile[WZ3]=jvj+61; 
(*f[189])( );     /*TRI4(jvj+60,3764,246,jvj+61)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20183; pile[WZ4]=jvj+61; pile[WZ5]=jvj+39; 
(*f[269])( );     /*QUADRI6(158,1,218,20183,jvj+61,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=159; pile[WZ2]=jvj+62; 
(*f[36])( );     /*PLUSC0(jvj+39,159,jvj+62)*/
pile[WZ2]=jvj+63; 
(*f[36])( );     /*PLUSC0(jvj+39,159,jvj+63)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+37; pile[WZ2]=jvj+39; 
(*f[1558])( );     /*RESTAURE0(jvj+35,jvj+37,jvj+39)*/
l22:x[jvj+17]=t[x[jvj+17]];
l21:if((x[jvj+17]<=0)) goto l23;
x[jvj+35]=s[x[jvj+17]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+17];
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[799])( );if(v[102]) goto l22;     /*NORME0(jvj+35,jvj+36)*/
x[jvj+37]=x[jvj+36] ;z[jvj+37]=z[jvj+36];
pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[760])( );     /*MEMEX0(jvj+35,jvj+37,jvj+38)*/
if((x[jvj+38]==134)) goto l24;
goto l22;
l25:V93=V51%V16;
V94=V93;
if((V94<0)) goto l31;
V89=V94;
l26:V96=I%V16;
V97=V96;
if((V97<0)) goto l30;
V91=V97;
l27:V92=incon;
if((V89==V91)) goto l29;
V92=134;
l28:V14=V92;
if((V14!=134)) goto l14;
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+45)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(V52,858,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+42; 
(*f[189])( );     /*TRI4(jvj+41,v[13],642,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=3764; pile[WZ2]=246; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,3764,246,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=20183; pile[WZ2]=218; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,20183,218,jvj+44)*/
pile[v[22]]=jvj+45; pile[WZ1]=(-20); pile[WZ2]=jvj+44; pile[WZ3]=159; pile[WZ4]=jvj+46; 
(*f[298])( );     /*TRIENS1(jvj+45,(-20),jvj+44,159,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+46,1,158,jvj+21)*/
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+20; 
(*f[1569])( );     /*DELIER0(365,D,jvj+20,jvj+21)*/
goto l14;
l29:V92=135;
goto l28;
l30:V98=V97+V16;
V91=V98;
goto l27;
l31:V95=V94+V16;
V89=V95;
goto l26;
}
