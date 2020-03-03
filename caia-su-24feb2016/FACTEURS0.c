#include "dx.h"
void FACTEURS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V93=0,V92=0,V48=0,V41=0,V67=0,V58=0,V9=0,K=0,V28=0,V19=0;
int A;
int R,S,RT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=50;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; R=pile[v[22]+1]; S=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+43]=0 ;z[jvj+43]=0;
x[R]=x[jvj+43] ;z[R]=z[jvj+43];
x[S]=x[jvj+43] ;z[S]=z[jvj+43];
pile[v[22]]=2; pile[WZ1]=117; pile[WZ2]=jvj+7; 
(*f[46])( );     /*TRI0(2,117,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,A,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]!=25)) goto l6;
x[jvj+3]=d[20];z[jvj+3]=0;
l1:if((x[jvj+3]<=0)) goto l6;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=A; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+4,A,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=41)) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(jvj+7,117,(-1))*/
l3:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=485)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+5,jvj+10)*/
for(i=x[jvj+10],V93=0;i>0;i=t[i],V93++)  ;
V92=V93-1;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=V92; 
(*f[186])( );     /*BTC0(jvj+7,117,V92)*/
x[jvj+44]=x[jvj+10] ;z[jvj+44]=z[jvj+10];
l4:if((x[jvj+44]<=0)) goto l2;
x[jvj+11]=s[x[jvj+44]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+44];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=41)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=117; pile[WZ2]=(-1); 
(*f[186])( );     /*BTC0(jvj+7,117,(-1))*/
l5:x[jvj+44]=t[x[jvj+44]];
goto l4;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,A,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=25)) goto l16;
x[jvj+15]=d[20];z[jvj+15]=0;
l7:if((x[jvj+15]<=0)) goto l16;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+16,A,jvj+17)*/
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+17,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]==486)) goto l9;
if((x[jvj+19]!=485)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+22)*/
x[jvj+46]=x[jvj+22] ;z[jvj+46]=z[jvj+22];
l12:if((x[jvj+46]<=0)) goto l8;
x[jvj+23]=s[x[jvj+46]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+46];
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+23,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+24,jvj+25)*/
if((x[jvj+25]!=486)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+26)*/
x[jvj+47]=x[jvj+26] ;z[jvj+47]=z[jvj+26];
l14:if((x[jvj+47]<=0)) goto l13;
x[jvj+27]=s[x[jvj+47]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+47];
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,jvj+27,V67)*/
V67=pile[WZ2]; 
V58=V67;
pile[v[22]]=S; pile[WZ1]=V58; 
(*f[978])( );     /*PLUB3(S,V58)*/
l15:x[jvj+47]=t[x[jvj+47]];
goto l14;
l8:x[jvj+15]=t[x[jvj+15]];
goto l7;
l9:pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+20)*/
x[jvj+45]=x[jvj+20] ;z[jvj+45]=z[jvj+20];
l10:if((x[jvj+45]<=0)) goto l8;
x[jvj+21]=s[x[jvj+45]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+45];
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+21,V48)*/
V48=pile[WZ2]; 
V41=V48;
pile[v[22]]=S; pile[WZ1]=V41; 
(*f[978])( );     /*PLUB3(S,V41)*/
l11:x[jvj+45]=t[x[jvj+45]];
goto l10;
l13:x[jvj+46]=t[x[jvj+46]];
goto l12;
l16:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,A,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l26;
x[jvj+30]=d[20];z[jvj+30]=0;
l17:if((x[jvj+30]<=0)) goto l26;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=A; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(jvj+31,A,jvj+32)*/
pile[v[22]]=111; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+32,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]==486)) goto l19;
if((x[jvj+34]!=485)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+37)*/
x[jvj+49]=x[jvj+37] ;z[jvj+49]=z[jvj+37];
l22:if((x[jvj+49]<=0)) goto l18;
x[jvj+38]=s[x[jvj+49]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+49];
pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+38,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=486)) goto l23;
pile[v[22]]=107; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+41)*/
x[jvj+50]=x[jvj+41] ;z[jvj+50]=z[jvj+41];
l24:if((x[jvj+50]<=0)) goto l23;
x[jvj+42]=s[x[jvj+50]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+50];
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+42,V28)*/
V28=pile[WZ2]; 
V19=V28;
pile[v[22]]=R; pile[WZ1]=V19; 
(*f[207])( );     /*PLUE2(R,V19)*/
l25:x[jvj+50]=t[x[jvj+50]];
goto l24;
l18:x[jvj+30]=t[x[jvj+30]];
goto l17;
l19:pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+35)*/
x[jvj+48]=x[jvj+35] ;z[jvj+48]=z[jvj+35];
l20:if((x[jvj+48]<=0)) goto l18;
x[jvj+36]=s[x[jvj+48]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+48];
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+36,V9)*/
V9=pile[WZ2]; 
K=V9;
pile[v[22]]=R; pile[WZ1]=K; 
(*f[207])( );     /*PLUE2(R,K)*/
l21:x[jvj+48]=t[x[jvj+48]];
goto l20;
l23:x[jvj+49]=t[x[jvj+49]];
goto l22;
l26:pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+7,RT)*/
RT=pile[WZ2]; 
v[0]=jvj; v[22]-=4; pile[v[22]+3]=RT; v[102]=0;return;
l27:x[R]=x[S]=RT=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
}
