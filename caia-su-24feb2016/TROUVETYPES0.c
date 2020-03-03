#include "dx.h"
void TROUVETYPES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NT=0,ND=0,B=0,V3=0,V14=0,V16=0,V13=0,V29=0,V44=0,V65=0,V62=0,V66=0,V49=0,V51=0,V50=0,V52=0,V61=0,V82=0,V81=0,V84=0,V60=0,V83=0,V57=0,V80=0,V79=0,V77=0,V78=0,V43=0;
int S,ED,A;
int NDD,NTT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=42;
x[jvj+1]=11077;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4058&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; ED=pile[v[22]+1]; A=pile[v[22]+2]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NT=1;
ND=1;
x[jvj+35]=x[A] ;z[jvj+35]=z[A];
l1:if((x[jvj+35]>0)) goto l2;
B=0;
x[jvj+36]=x[ED] ;z[jvj+36]=z[ED];
l3:if((x[jvj+36]>0)) goto l4;
x[jvj+37]=x[A] ;z[jvj+37]=z[A];
l5:if((x[jvj+37]>0)) goto l6;
pile[v[22]]=256; pile[WZ1]=S; 
(*f[71])( );     /*ENLV0(256,S)*/
x[jvj+39]=x[ED] ;z[jvj+39]=z[ED];
l9:if((x[jvj+39]>0)) goto l10;
pile[v[22]]=256; pile[WZ1]=S; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(256,S,jvj+7)*/
for(i=x[jvj+7],V14=0;i>0;i=t[i],V14++)  ;
pile[v[22]]=258; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(258,S,jvj+8)*/
for(i=x[jvj+8],V16=0;i>0;i=t[i],V16++)  ;
NDD=V14;
NTT=V16;
if((V14>ND)) goto l12;
if((V16>NT)) goto l12;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; pile[v[22]+3]=NDD; pile[v[22]+4]=NTT; return;
l2:x[jvj+3]=s[x[jvj+35]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+35];
pile[v[22]]=jvj+3; pile[WZ1]=510; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+3,510,1)*/
x[jvj+35]=t[x[jvj+35]];
goto l1;
l4:x[jvj+4]=s[x[jvj+36]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+36];
pile[v[22]]=159; pile[WZ1]=jvj+4; 
(*f[71])( );     /*ENLV0(159,jvj+4)*/
x[jvj+36]=t[x[jvj+36]];
goto l3;
l6:x[jvj+5]=s[x[jvj+37]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+37];
pile[v[22]]=510; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(510,jvj+5,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
x[jvj+38]=x[jvj+6] ;z[jvj+38]=z[jvj+6];
l8:if((x[jvj+38]<=0)) goto l7;
x[jvj+9]=s[x[jvj+38]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+38];
pile[v[22]]=159; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,jvj+9,jvj+10)*/
l14:if((x[jvj+10]>0)) goto l17;
pile[v[22]]=V3; pile[WZ1]=510; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(V3,510,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(jvj+9,159,jvj+11)*/
l15:pile[v[22]]=jvj+11; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+11,117,1)*/
x[jvj+38]=t[x[jvj+38]];
goto l8;
l7:x[jvj+37]=t[x[jvj+37]];
goto l5;
l10:x[jvj+13]=s[x[jvj+39]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+39];
x[jvj+15]=256 ;z[jvj+15]=256;
pile[v[22]]=159; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,jvj+13,jvj+14)*/
for(i=x[jvj+14],V44=0;i>0;i=t[i],V44++)  ;
pile[v[22]]=jvj+15; pile[WZ1]=S; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(jvj+15,S,jvj+16)*/
l18:if((x[jvj+16]>0)) goto l44;
pile[v[22]]=159; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(159,jvj+13,jvj+17)*/
V65=1;
l19:pile[v[22]]=jvj+15; pile[WZ1]=S; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+15,S,jvj+18)*/
x[jvj+40]=x[jvj+18] ;z[jvj+40]=z[jvj+18];
l20:if((x[jvj+40]>0)) goto l24;
pile[v[22]]=V65; pile[WZ1]=510; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V65,510,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+17; pile[WZ2]=159; pile[WZ3]=jvj+20; 
(*f[301])( );     /*TRI11(jvj+19,jvj+17,159,jvj+20)*/
V62=V65;
if((x[jvj+15]==256)) goto l45;
if((x[jvj+15]!=258)) goto l21;
pile[v[22]]=1197; pile[WZ1]=jvj+13; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(1197,jvj+13,jvj+21)*/
pile[v[22]]=195; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(195,jvj+13,jvj+22)*/
pile[v[22]]=jvj+20; pile[WZ1]=1197; pile[WZ2]=jvj+21; 
(*f[34])( );     /*CHGC0(jvj+20,1197,jvj+21)*/
pile[WZ1]=195; pile[WZ2]=jvj+22; 
(*f[34])( );     /*CHGC0(jvj+20,195,jvj+22)*/
l21:pile[v[22]]=S; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(S,jvj+15,jvj+20)*/
l22:pile[v[22]]=jvj+13; pile[WZ1]=510; pile[WZ2]=V62; 
(*f[43])( );     /*CHGC2(jvj+13,510,V62)*/
l11:x[jvj+39]=t[x[jvj+39]];
goto l9;
l12:V13=1-B;
pile[v[22]]=ED; pile[WZ1]=A; pile[WZ2]=V14; pile[WZ3]=V16; pile[WZ4]=S; pile[WZ5]=V13; 
(*f[4091])( );     /*TROUVETYPES1(ED,A,V14,V16,S,V13)*/
goto l13;
l16:x[jvj+10]=t[x[jvj+10]];
goto l14;
l17:x[jvj+12]=s[x[jvj+10]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+10];
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(510,jvj+12,V29)*/
V29=pile[WZ2]; 
if((V29!=V3)) goto l16;
x[jvj+11]=x[jvj+12] ;z[jvj+11]=z[jvj+12];
goto l15;
l23:x[jvj+40]=t[x[jvj+40]];
goto l20;
l24:x[jvj+23]=s[x[jvj+40]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+40];
pile[v[22]]=510; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(510,jvj+23,V66)*/
V66=pile[WZ2]; 
if((V66!=V65)) goto l23;
V65++;
if((V65<=500)) goto l19;
goto l11;
l26:x[jvj+24]=s[x[jvj+41]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+41];
pile[v[22]]=510; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(510,jvj+24,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+24,V51)*/
V51=pile[WZ2]; 
x[jvj+42]=x[jvj+14] ;z[jvj+42]=z[jvj+14];
l27:if((x[jvj+42]<=0)) goto l29;
x[jvj+25]=s[x[jvj+42]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+42];
pile[v[22]]=510; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(510,jvj+25,V50)*/
V50=pile[WZ2]; 
if((V50!=V49)) goto l28;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(117,jvj+25,V52)*/
V52=pile[WZ2]; 
if((V52!=V51)) goto l28;
x[jvj+41]=t[x[jvj+41]];
l25:if((x[jvj+41]>0)) goto l26;
V62=V61;
goto l22;
l28:x[jvj+42]=t[x[jvj+42]];
goto l27;
l29:x[jvj+16]=t[x[jvj+16]];
goto l18;
l35:V84=t[V84];
l32:if((V84>0)) goto l36;
V60=135;
l33:if((V60==134)) goto l29;
l30:pile[v[22]]=510; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(510,jvj+26,V61)*/
V61=pile[WZ2]; 
x[jvj+41]=x[jvj+33] ;z[jvj+41]=z[jvj+33];
goto l25;
l36:V83=s[V84];
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==V83) goto l35;
l34:V60=134;
goto l33;
l40:V79=s[V80];
for(a=x[jvj+29];a>0;a=t[a]) if(s[a]==V79) goto l41;
l38:V57=134;
l37:if((V57==134)) goto l29;
l31:pile[v[22]]=195; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(195,jvj+26,jvj+27)*/
pile[WZ1]=jvj+13; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(195,jvj+13,jvj+28)*/
for(i=x[jvj+27],V82=0;i>0;i=t[i],V82++)  ;
for(i=x[jvj+28],V81=0;i>0;i=t[i],V81++)  ;
if((V82!=V81)) goto l34;
V84=x[jvj+27];
goto l32;
l41:V80=t[V80];
l39:if((V80>0)) goto l40;
V57=135;
goto l37;
l42:pile[v[22]]=1197; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1197,jvj+26,jvj+30)*/
pile[WZ1]=jvj+13; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1197,jvj+13,jvj+29)*/
for(i=x[jvj+30],V78=0;i>0;i=t[i],V78++)  ;
for(i=x[jvj+29],V77=0;i>0;i=t[i],V77++)  ;
if((V78!=V77)) goto l38;
V80=x[jvj+30];
goto l39;
l43:pile[v[22]]=447; pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(447,jvj+26,jvj+31)*/
pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(498,jvj+13,jvj+32)*/
if((x[jvj+31]!=x[jvj+32])) goto l29;
goto l30;
l44:x[jvj+26]=s[x[jvj+16]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+16];
pile[v[22]]=159; pile[WZ1]=jvj+26; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(159,jvj+26,jvj+33)*/
for(i=x[jvj+33],V43=0;i>0;i=t[i],V43++)  ;
if((V44!=V43)) goto l29;
if((x[jvj+15]==256)) goto l43;
if((x[jvj+15]==258)) goto l42;
if((x[jvj+15]==258)) goto l31;
goto l30;
l45:pile[v[22]]=498; pile[WZ1]=jvj+13; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(498,jvj+13,jvj+34)*/
pile[v[22]]=jvj+20; pile[WZ1]=447; 
(*f[35])( );     /*CHGC1(jvj+20,447,jvj+34)*/
goto l21;
}
