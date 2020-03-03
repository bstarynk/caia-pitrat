#include "dx.h"
void SIMPRODA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V22=0,V23=0,V25=0,V26=0,V8=0,V27=0,V28=0,V9=0,X=0,V29=0,V50=0,V63=0,V65=0,V52=0,QQ=0,V66=0,Q=0,I=0,V37=0,V31=0,V11=0,V14=0,V3=0,V17=0,J=0,V55=0,V54=0;
int A;
int E;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=45;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; E=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+24]=x[A] ;z[jvj+24]=z[A];
l32:pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+24,I)*/
I=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=E; 
(*f[1007])( );if(v[102]) goto l33;     /*DECFACTPREM0(I,E)*/
l44:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+36]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+36];
pile[v[22]]=510; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(510,jvj+1,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V22; 
(*f[207])( );     /*PLUE2(jvj+2,V22)*/
l3:x[jvj+36]=t[x[jvj+36]];
l1:if((x[jvj+36]>0)) goto l2;
x[jvj+37]=x[jvj+34] ;z[jvj+37]=z[jvj+34];
l4:if((x[jvj+37]>0)) goto l5;
x[jvj+8]=0 ;z[jvj+8]=0;
x[jvj+6]=d[64];z[jvj+6]=0;
l14:if((x[jvj+2]>0)) goto l15;
x[E]=x[jvj+8] ;z[E]=z[jvj+8];
goto l44;
l5:x[jvj+3]=s[x[jvj+37]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+37];
pile[v[22]]=510; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+3,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=V23; 
(*f[207])( );     /*PLUE2(jvj+2,V23)*/
l6:x[jvj+37]=t[x[jvj+37]];
goto l4;
l8:x[jvj+38]=t[x[jvj+38]];
l7:if((x[jvj+38]<=0)) goto l9;
x[jvj+4]=s[x[jvj+38]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+38];
pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(510,jvj+4,V25)*/
V25=pile[WZ2]; 
if((V25!=X)) goto l8;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(515,jvj+4,V26)*/
V26=pile[WZ2]; 
V8=V26;
l10:V9=incon;
x[jvj+39]=x[jvj+34] ;z[jvj+39]=z[jvj+34];
l11:if((x[jvj+39]<=0)) goto l13;
x[jvj+5]=s[x[jvj+39]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+39];
pile[v[22]]=510; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(510,jvj+5,V27)*/
V27=pile[WZ2]; 
if((V27!=X)) goto l12;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,jvj+5,V28)*/
V28=pile[WZ2]; 
V9=V28;
l16:V29=V8+V9;
pile[v[22]]=510; pile[WZ1]=X; pile[WZ2]=515; pile[WZ3]=V29; pile[WZ4]=jvj+7; 
(*f[391])( );     /*QUADRI10(510,X,515,V29,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[196])( );     /*PLUF0(jvj+6,jvj+7,jvj+8)*/
x[jvj+2]=t[x[jvj+2]];
goto l14;
l9:V8=0;
goto l10;
l12:x[jvj+39]=t[x[jvj+39]];
goto l11;
l13:V9=0;
goto l16;
l15:X=s[x[jvj+2]];
V8=incon;
x[jvj+38]=x[jvj+32] ;z[jvj+38]=z[jvj+32];
goto l7;
l18:x[jvj+9]=s[x[jvj+40]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+40];
if((x[jvj+9]==x[jvj+29])) goto l19;
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]==41)) goto l38;
l19:x[jvj+40]=t[x[jvj+40]];
l17:if((x[jvj+40]>0)) goto l18;
V31=V37;
pile[v[22]]=V31; pile[WZ1]=jvj+30; 
(*f[1007])( );if(v[102]) goto l38;     /*DECFACTPREM0(V31,jvj+30)*/
x[E]=x[jvj+30] ;z[E]=z[jvj+30];
goto l44;
l21:x[jvj+13]=s[x[jvj+35]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+35];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[1455])( );if(v[102]) goto l22;     /*SIMPRODA0(jvj+13,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=1260; pile[WZ2]=jvj+16; 
(*f[300])( );     /*TRI10(jvj+14,1260,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+15,jvj+16)*/
l22:x[jvj+35]=t[x[jvj+35]];
l20:if((x[jvj+35]>0)) goto l21;
for(i=x[jvj+15],V54=0;i>0;i=t[i],V54++)  ;
if((V54!=V55)) goto l43;
if((x[jvj+15]<=0)) goto l43;
x[jvj+11]=s[x[jvj+15]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+15];
pile[v[22]]=1260; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1260,jvj+11,jvj+12)*/
x[jvj+23]=0 ;z[jvj+23]=0;
x[jvj+20]=d[64];z[jvj+20]=0;
l29:if((x[jvj+12]>0)) goto l30;
x[E]=x[jvj+23] ;z[E]=z[jvj+23];
goto l44;
l24:x[jvj+41]=t[x[jvj+41]];
l23:if((x[jvj+41]<=0)) goto l25;
x[jvj+19]=s[x[jvj+41]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+41];
pile[v[22]]=510; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+19,V63)*/
V63=pile[WZ2]; 
if((V63!=V66)) goto l24;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(515,jvj+19,V65)*/
V65=pile[WZ2]; 
V52=V65;
l28:QQ=V52;
if(QQ<V50) V50=QQ;
x[jvj+42]=t[x[jvj+42]];
l26:if((x[jvj+42]>0)) goto l27;
Q=V50;
if((Q<=0)) goto l31;
if((V50==999999)) goto l31;
pile[v[22]]=510; pile[WZ1]=V66; pile[WZ2]=515; pile[WZ3]=Q; pile[WZ4]=jvj+22; 
(*f[391])( );     /*QUADRI10(510,V66,515,Q,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[196])( );     /*PLUF0(jvj+20,jvj+22,jvj+23)*/
l31:x[jvj+12]=t[x[jvj+12]];
goto l29;
l25:V52=0;
goto l28;
l27:x[jvj+17]=s[x[jvj+42]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+42];
V52=incon;
pile[v[22]]=1260; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1260,jvj+17,jvj+18)*/
x[jvj+41]=x[jvj+18] ;z[jvj+41]=z[jvj+18];
goto l23;
l30:x[jvj+21]=s[x[jvj+12]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+12];
pile[v[22]]=510; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(510,jvj+21,V66)*/
V66=pile[WZ2]; 
V50=999999;
x[jvj+42]=x[jvj+15] ;z[jvj+42]=z[jvj+15];
goto l26;
l33:pile[v[22]]=111; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+24,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+25,jvj+26)*/
if((x[jvj+26]==52)) goto l34;
if((x[jvj+26]==486)) goto l35;
if((x[jvj+26]!=485)) goto l43;
pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+35)*/
for(i=x[jvj+35],V55=0;i>0;i=t[i],V55++)  ;
x[jvj+15]=0 ;z[jvj+15]=0;
goto l20;
l34:pile[v[22]]=102; pile[WZ1]=jvj+24; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(102,jvj+24,jvj+27)*/
x[jvj+24]=x[jvj+27] ;z[jvj+24]=z[jvj+27];
goto l32;
l35:pile[v[22]]=107; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+24,jvj+28)*/
x[jvj+43]=x[jvj+28] ;z[jvj+43]=z[jvj+28];
l36:if((x[jvj+43]>0)) goto l37;
for(i=x[jvj+28],V11=0;i>0;i=t[i],V11++)  ;
if((V11!=2)) goto l43;
x[jvj+44]=x[jvj+28] ;z[jvj+44]=z[jvj+28];
l39:if((x[jvj+44]<=0)) goto l43;
x[jvj+31]=s[x[jvj+44]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+44];
pile[v[22]]=130; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+31,V14)*/
V14=pile[WZ2]; 
V3=V14;
pile[v[22]]=V3; pile[WZ1]=jvj+32; 
(*f[1007])( );if(v[102]) goto l40;     /*DECFACTPREM0(V3,jvj+32)*/
x[jvj+45]=x[jvj+28] ;z[jvj+45]=z[jvj+28];
l41:if((x[jvj+45]<=0)) goto l40;
x[jvj+33]=s[x[jvj+45]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+45];
if((x[jvj+31]==x[jvj+33])) goto l42;
pile[v[22]]=130; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+33,V17)*/
V17=pile[WZ2]; 
J=V17;
pile[v[22]]=J; pile[WZ1]=jvj+34; 
(*f[1007])( );if(v[102]) goto l42;     /*DECFACTPREM0(J,jvj+34)*/
x[jvj+2]=0 ;z[jvj+2]=0;
x[jvj+36]=x[jvj+32] ;z[jvj+36]=z[jvj+32];
goto l1;
l37:x[jvj+29]=s[x[jvj+43]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+43];
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+29,V37)*/
V37=pile[WZ2]; 
x[jvj+40]=x[jvj+28] ;z[jvj+40]=z[jvj+28];
goto l17;
l38:x[jvj+43]=t[x[jvj+43]];
goto l36;
l40:x[jvj+44]=t[x[jvj+44]];
goto l39;
l42:x[jvj+45]=t[x[jvj+45]];
goto l41;
l43:v[0]=jvj; v[22]-=2; v[102]=1;return;
}
