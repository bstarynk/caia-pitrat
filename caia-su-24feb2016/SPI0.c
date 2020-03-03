#include "dx.h"
void SPI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V62=0,V55=0,V56=0,V57=0,NM=0,V50=0,V41=0,V42=0,V44=0,V45=0,V43=0,V31=0,V25=0,V26=0;
int I,X,TT,N,V;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=10022;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2196&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; TT=pile[v[22]+2]; N=pile[v[22]+3]; V=pile[v[22]+4]; v[22]+=6; 
WZ2=v[22]+2; WZ1=v[22]+1; 
J=NM=incon;
if((x[N]==101)) goto l15;
if((x[N]==10429)) goto l19;
if((x[TT]==67)) goto l21;
l9:if((x[N]==703)) goto l10;
if((x[N]==276)) goto l1;
if((x[TT]==67)) goto l8;
l6:if((x[TT]==68)) goto l7;
l3:if((x[N]!=10429)) goto l12;
pile[v[22]]=122; pile[WZ1]=X; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(122,X,jvj+8)*/
if((x[jvj+8]!=114)) goto l5;
x[jvj+4]=vo[15];z[jvj+4]=vz[15];
if((x[TT]==67)) goto l2;
if((x[TT]!=68)) goto l5;
pile[v[22]]=222; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(222,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l23;
pile[v[22]]=223; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(223,jvj+4,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V) goto l23;
l5:pile[v[22]]=122; pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(122,X,jvj+13)*/
if((x[jvj+13]!=113)) goto l12;
x[jvj+9]=vo[15];z[jvj+9]=vz[15];
if((x[TT]==67)) goto l4;
if((x[TT]!=68)) goto l12;
pile[v[22]]=222; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(222,jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==V) goto l23;
pile[v[22]]=223; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(223,jvj+9,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V) goto l23;
l12:x[jvj+23]=vo[15];z[jvj+23]=vz[15];
pile[v[22]]=441; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(441,jvj+23,jvj+24)*/
l13:if((x[jvj+24]<=0)) goto l24;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=140; pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+25,V62)*/
V62=pile[WZ2]; 
if((V!=V62)) goto l14;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(117,jvj+25,NM)*/
NM=pile[WZ2]; 
l24:if(J==incon) goto l25;
l30:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; pile[v[22]+5]=J; return;
l1:if((x[TT]!=67)) goto l23;
x[jvj+2]=vo[15];z[jvj+2]=vz[15];
pile[v[22]]=223; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(223,jvj+2,jvj+3)*/
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V) goto l8;
l23:pile[v[22]]=V; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V,I,J)*/
J=pile[WZ2]; 
goto l12;
l2:pile[v[22]]=223; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(223,jvj+4,jvj+7)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==V) goto l5;
goto l23;
l4:pile[v[22]]=223; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(223,jvj+9,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V) goto l23;
goto l12;
l10:if((x[TT]==67)) goto l23;
goto l6;
l11:if((x[N]==276)) goto l22;
if((x[N]!=10429)) goto l9;
pile[v[22]]=122; pile[WZ1]=X; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(122,X,jvj+19)*/
if((x[jvj+19]==114)) goto l22;
l8:if(x[N]!=101&&x[N]!=703) goto l3;
x[jvj+17]=vo[15];z[jvj+17]=vz[15];
pile[v[22]]=223; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(223,jvj+17,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==V) goto l3;
goto l23;
l14:x[jvj+24]=t[x[jvj+24]];
goto l13;
l15:if((x[TT]==67)) goto l16;
if((x[TT]!=68)) goto l6;
x[jvj+20]=vo[15];z[jvj+20]=vz[15];
pile[v[22]]=222; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(222,jvj+20,jvj+21)*/
for(a=x[jvj+21];a>0;a=t[a]) if(s[a]==V) goto l18;
pile[v[22]]=223; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(223,jvj+20,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==V) goto l18;
l7:if(x[N]!=3&&x[N]!=703) goto l3;
x[jvj+14]=vo[15];z[jvj+14]=vz[15];
pile[v[22]]=222; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(222,jvj+14,jvj+15)*/
for(a=x[jvj+15];a>0;a=t[a]) if(s[a]==V) goto l23;
pile[v[22]]=223; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(223,jvj+14,jvj+16)*/
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==V) goto l23;
goto l3;
l16:x[jvj+26]=vo[15];z[jvj+26]=vz[15];
pile[v[22]]=223; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(223,jvj+26,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==V) goto l17;
l21:x[jvj+31]=vo[15];z[jvj+31]=vz[15];
pile[v[22]]=223; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(223,jvj+31,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==V) goto l11;
goto l9;
l17:pile[v[22]]=V; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V,I,J)*/
J=pile[WZ2]; 
goto l12;
l18:pile[v[22]]=(-1719); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1719),I,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=V55; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V55,91,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V; pile[WZ1]=V56; 
(*f[64])( );     /*SRA2(V,V56,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V57,93,J)*/
J=pile[WZ2]; 
goto l12;
l19:if((x[TT]!=67)) goto l6;
pile[v[22]]=122; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(122,X,jvj+28)*/
if((x[jvj+28]!=113)) goto l21;
x[jvj+29]=vo[15];z[jvj+29]=vz[15];
pile[v[22]]=299; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(299,jvj+29,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==V) goto l20;
goto l21;
l20:pile[v[22]]=V; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V,I,J)*/
J=pile[WZ2]; 
goto l12;
l22:pile[v[22]]=V; pile[WZ1]=I; 
(*f[64])( );     /*SRA2(V,I,J)*/
J=pile[WZ2]; 
goto l12;
l25:if(NM!=incon) goto l26;
l29:J=I;
pile[v[22]]=10022; pile[WZ1]=V; pile[WZ2]=(-3412); 
(*f[1643])( );     /*FAUTE7(10022,V,(-3412))*/
goto l30;
l26:if((x[N]==101)) goto l27;
if((x[TT]==68)) goto l28;
goto l29;
l27:if((x[TT]!=68)) goto l29;
x[jvj+33]=vo[15];z[jvj+33]=vz[15];
pile[v[22]]=222; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(222,jvj+33,jvj+34)*/
for(a=x[jvj+34];a>0;a=t[a]) if(s[a]==V) goto l28;
pile[v[22]]=223; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(223,jvj+33,jvj+35)*/
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==V) goto l28;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l28;     /*FNDC1(241,51,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=(-1719); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-1719),I,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=V41; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V41,91,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=V42; 
(*f[64])( );     /*SRA2((-2521),V42,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=V50; pile[WZ1]=V44; 
(*f[64])( );     /*SRA2(V50,V44,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=NM; pile[WZ1]=V45; 
(*f[99])( );     /*SPM0(NM,V45,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V43,93,J)*/
J=pile[WZ2]; 
goto l30;
l28:if(x[N]!=10429&&x[N]!=3&&x[N]!=703) goto l29;
x[jvj+36]=vo[15];z[jvj+36]=vz[15];
pile[v[22]]=222; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(222,jvj+36,jvj+37)*/
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==V) goto l29;
pile[v[22]]=223; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(223,jvj+36,jvj+38)*/
for(a=x[jvj+38];a>0;a=t[a]) if(s[a]==V) goto l29;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(241,51,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=(-2521); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2521),I,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=V25; 
(*f[64])( );     /*SRA2(V31,V25,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=NM; pile[WZ1]=V26; 
(*f[99])( );     /*SPM0(NM,V26,J)*/
J=pile[WZ2]; 
goto l30;
}
