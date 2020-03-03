#include "dx.h"
void INUBAS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V8=0,V10=0,V6=0,V11=0,V=0,V21=0,V19=0,V24=0,V12=0,V27=0,V14=0,V30=0,V16=0,V35=0,V23=0;
int H,K,SS,N,G;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=51;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; K=pile[v[22]+1]; SS=pile[v[22]+2]; N=pile[v[22]+3]; G=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=incon;
pile[v[22]]=158; pile[WZ1]=H; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,H,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=109; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(jvj+8,109,jvj+7)*/
pile[v[22]]=163; pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,H,V)*/
V=pile[WZ2]; 
if((V==(-1278))) goto l1;
pile[v[22]]=jvj+7; pile[WZ1]=163; pile[WZ2]=V; 
(*f[177])( );     /*CHGC4(jvj+7,163,V)*/
l1:x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=258; pile[WZ1]=K; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(258,K,jvj+5)*/
x[jvj+47]=x[jvj+5] ;z[jvj+47]=z[jvj+5];
l5:if((x[jvj+47]>0)) goto l6;
x[jvj+51]=x[jvj+6] ;z[jvj+51]=z[jvj+6];
if(x[jvj+7]!=incon) goto l24;
l26:v[0]=jvj; v[22]-=5; return;
l6:x[jvj+1]=s[x[jvj+47]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+47];
pile[v[22]]=846; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(846,jvj+1,V11)*/
V11=pile[WZ2]; 
if((V11<=0)) goto l7;
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(737,jvj+1,V4)*/
V4=pile[WZ2]; 
if((V4>0)) goto l7;
l2:pile[v[22]]=715; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(715,jvj+1,jvj+2)*/
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+2,V8)*/
V8=pile[WZ2]; 
x[jvj+46]=x[jvj+5] ;z[jvj+46]=z[jvj+5];
l3:if((x[jvj+46]<=0)) goto l8;
x[jvj+3]=s[x[jvj+46]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+46];
pile[v[22]]=737; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(737,jvj+3,V10)*/
V10=pile[WZ2]; 
if((V10<=0)) goto l4;
pile[v[22]]=715; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(715,jvj+3,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V6<V8)) goto l7;
l4:x[jvj+46]=t[x[jvj+46]];
goto l3;
l8:pile[v[22]]=jvj+6; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+1)*/
l7:x[jvj+47]=t[x[jvj+47]];
goto l5;
l10:x[jvj+48]=t[x[jvj+48]];
l9:if((x[jvj+48]<=0)) goto l27;
x[jvj+11]=s[x[jvj+48]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+48];
pile[v[22]]=715; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(715,jvj+11,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+12,V19)*/
V19=pile[WZ2]; 
if((V19<=V21)) goto l10;
x[jvj+49]=t[x[jvj+49]];
l11:if((x[jvj+49]<=0)) goto l25;
x[jvj+9]=s[x[jvj+49]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+49];
pile[v[22]]=715; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(715,jvj+9,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+10,V21)*/
V21=pile[WZ2]; 
x[jvj+48]=x[jvj+51] ;z[jvj+48]=z[jvj+51];
goto l9;
l13:x[jvj+13]=s[x[jvj+50]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+50];
pile[v[22]]=846; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(846,jvj+13,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=jvj+14; pile[WZ1]=117; pile[WZ2]=V24; 
(*f[186])( );     /*BTC0(jvj+14,117,V24)*/
l14:x[jvj+50]=t[x[jvj+50]];
l12:if((x[jvj+50]>0)) goto l13;
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+14,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(0,117,jvj+17)*/
pile[v[22]]=258; pile[WZ1]=K; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(258,K,jvj+15)*/
l15:if((x[jvj+15]>0)) goto l16;
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+17,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(0,117,jvj+20)*/
pile[v[22]]=258; pile[WZ1]=K; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(258,K,jvj+18)*/
l18:if((x[jvj+18]>0)) goto l19;
pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(117,jvj+20,V16)*/
V16=pile[WZ2]; 
V23=V14+V16;
if((V12==V23)) goto l22;
x[jvj+36]=incon;
if((V23<=100)) goto l21;
V35=4*V12;
if((V35<=V23)) goto l21;
x[jvj+36]=281 ;z[jvj+36]=281;
l23:pile[v[22]]=983; pile[WZ1]=N; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(983,N,jvj+25)*/
pile[v[22]]=715; pile[WZ1]=jvj+9; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(715,jvj+9,jvj+26)*/
pile[v[22]]=158; pile[WZ1]=K; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(158,K,jvj+27)*/
pile[v[22]]=V23; pile[WZ1]=855; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V23,855,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+26; pile[WZ2]=715; pile[WZ3]=jvj+35; 
(*f[58])( );     /*TRI3(jvj+34,jvj+26,715,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=447; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,447,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=846; pile[WZ2]=218; pile[WZ3]=jvj+38; 
(*f[58])( );     /*TRI3(jvj+37,846,218,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+27; pile[WZ2]=158; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+38,jvj+27,158,jvj+39)*/
pile[v[22]]=39; pile[WZ1]=jvj+25; pile[WZ2]=117; pile[WZ3]=V12; pile[WZ4]=jvj+39; pile[WZ5]=jvj+28; 
(*f[47])( );     /*QUADRI0(39,jvj+25,117,V12,jvj+39,jvj+28)*/
pile[v[22]]=G; pile[WZ1]=159; pile[WZ2]=jvj+28; 
(*f[36])( );     /*PLUSC0(G,159,jvj+28)*/
pile[v[22]]=V23; pile[WZ1]=855; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V23,855,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+26; pile[WZ2]=715; pile[WZ3]=jvj+43; 
(*f[58])( );     /*TRI3(jvj+42,jvj+26,715,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+36; pile[WZ2]=447; pile[WZ3]=jvj+44; 
(*f[58])( );     /*TRI3(jvj+43,jvj+36,447,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=846; pile[WZ2]=218; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,846,218,jvj+45)*/
pile[v[22]]=117; pile[WZ1]=V12; pile[WZ2]=158; pile[WZ3]=jvj+27; pile[WZ4]=jvj+45; pile[WZ5]=jvj+29; 
(*f[725])( );     /*QUADRI14(117,V12,158,jvj+27,jvj+45,jvj+29)*/
pile[v[22]]=jvj+7; pile[WZ1]=159; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+7,159,jvj+29)*/
l25:pile[v[22]]=159; pile[WZ1]=jvj+7; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(159,jvj+7,jvj+30)*/
if((x[jvj+30]==0)) goto l26;
pile[v[22]]=N; pile[WZ1]=1133; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(N,1133,jvj+7)*/
goto l26;
l16:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=737; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(737,jvj+16,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=jvj+17; pile[WZ1]=117; pile[WZ2]=V27; 
(*f[186])( );     /*BTC0(jvj+17,117,V27)*/
l17:x[jvj+15]=t[x[jvj+15]];
goto l15;
l19:x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=846; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(846,jvj+19,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+20; pile[WZ1]=117; pile[WZ2]=V30; 
(*f[186])( );     /*BTC0(jvj+20,117,V30)*/
l20:x[jvj+18]=t[x[jvj+18]];
goto l18;
l21:x[jvj+36]=586 ;z[jvj+36]=586;
goto l23;
l22:pile[v[22]]=983; pile[WZ1]=N; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(983,N,jvj+21)*/
pile[v[22]]=158; pile[WZ1]=K; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(158,K,jvj+22)*/
pile[v[22]]=324; pile[WZ1]=447; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(324,447,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=846; pile[WZ2]=218; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,846,218,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+22; pile[WZ2]=158; pile[WZ3]=jvj+33; 
(*f[58])( );     /*TRI3(jvj+32,jvj+22,158,jvj+33)*/
pile[v[22]]=39; pile[WZ1]=jvj+21; pile[WZ2]=117; pile[WZ3]=V12; pile[WZ4]=jvj+33; pile[WZ5]=jvj+23; 
(*f[47])( );     /*QUADRI0(39,jvj+21,117,V12,jvj+33,jvj+23)*/
pile[v[22]]=G; pile[WZ1]=159; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(G,159,jvj+23)*/
pile[v[22]]=324; pile[WZ1]=447; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(324,447,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=846; pile[WZ2]=218; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+40,846,218,jvj+41)*/
pile[v[22]]=117; pile[WZ1]=V12; pile[WZ2]=158; pile[WZ3]=jvj+22; pile[WZ4]=jvj+41; pile[WZ5]=jvj+24; 
(*f[725])( );     /*QUADRI14(117,V12,158,jvj+22,jvj+41,jvj+24)*/
pile[v[22]]=jvj+7; pile[WZ1]=159; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+7,159,jvj+24)*/
goto l25;
l24:if((x[jvj+51]==0)) goto l25;
x[jvj+49]=x[jvj+51] ;z[jvj+49]=z[jvj+51];
goto l11;
l27:pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(0,117,jvj+14)*/
x[jvj+50]=x[jvj+51] ;z[jvj+50]=z[jvj+51];
goto l12;
}
