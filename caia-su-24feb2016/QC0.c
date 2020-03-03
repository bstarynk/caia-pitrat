#include "dx.h"
void QC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V10=0,V9=0,W=0,V44=0,V18=0,V2=0,V21=0,V46=0,V40=0,V43=0,V25=0,V22=0,V28=0,V29=0,V30=0,V26=0,V27=0,V31=0,V32=0,V33=0,V24=0,V8=0,V12=0,NN=0,RL=0,V=0,V49=0,V36=0;
int I;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11280;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2129&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((I<=0)) goto l23;
pile[v[22]]=I; 
(*f[656])( );     /*SPLN2(I,V1)*/
V1=pile[WZ1]; 
l23:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(250,158,jvj+19)*/
x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=1305; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1305,jvj+3,jvj+15)*/
pile[v[22]]=1279; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1279,jvj+3,jvj+16)*/
x[jvj+22]=x[jvj+15] ;z[jvj+22]=z[jvj+15];
l12:if((x[jvj+22]<=0)) goto l18;
x[jvj+2]=s[x[jvj+22]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+22];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,jvj+2,V8)*/
V8=pile[WZ2]; 
if((V8!=0)) goto l13;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+2,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=145; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(145,jvj+2,jvj+17)*/
NN=V12;
RL=x[jvj+17];
pile[v[22]]=258; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(258,jvj+2,jvj+18)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(0,117,jvj+8)*/
pile[v[22]]=350; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(350,jvj+2,jvj+7)*/
x[jvj+20]=x[jvj+7] ;z[jvj+20]=z[jvj+7];
l5:if((x[jvj+20]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(117,jvj+8,V18)*/
V18=pile[WZ2]; 
V2=V18;
if((V2<=NN)) goto l1;
if((RL!=28)) goto l15;
l1:V10=V2+NN;
if((RL==30)) goto l13;
pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(515,jvj+2,V9)*/
V9=pile[WZ2]; 
if((V9<V10)) goto l15;
l13:x[jvj+22]=t[x[jvj+22]];
goto l12;
l3:W=s[V44];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==W) goto l4;
l7:x[jvj+20]=t[x[jvj+20]];
goto l5;
l4:V44=t[V44];
l2:if((V44>0)) goto l3;
pile[v[22]]=jvj+8; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+8,117,1)*/
goto l7;
l6:x[jvj+5]=s[x[jvj+20]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+20];
pile[v[22]]=1304; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1304,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
V44=x[jvj+6];
goto l2;
l9:V21=s[V46];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==V21) goto l10;
x[jvj+21]=t[x[jvj+21]];
l11:if((x[jvj+21]<=0)) goto l20;
x[jvj+10]=s[x[jvj+21]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+21];
pile[v[22]]=1304; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1304,jvj+3,jvj+9)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(jvj+10,jvj+11)*/
V46=x[jvj+11];
l8:if((V46>0)) goto l9;
x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=322; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(322,jvj+14,V40)*/
V40=pile[WZ2]; 
pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(322,jvj+12,V43)*/
V43=pile[WZ2]; 
V25=0;
V22=V40;
pile[v[22]]=(-8107); pile[WZ1]=V25; 
(*f[64])( );     /*SRA2((-8107),V25,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V28,91,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=V29; 
(*f[99])( );     /*SPM0(V22,V29,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V30,93,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V26,61,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=(-8107); pile[WZ1]=V27; 
(*f[64])( );     /*SRA2((-8107),V27,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V31,91,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=V32; 
(*f[99])( );     /*SPM0(V43,V32,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V33; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V33,93,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; 
(*f[289])( );     /*SPLN1(V24)*/
pile[v[22]]=jvj+14; pile[WZ1]=322; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+14,322,1)*/
pile[v[22]]=jvj+12; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(jvj+12,322,V22)*/
l21:pile[v[22]]=jvj+19; pile[WZ1]=159; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+19,159,jvj+12)*/
l20:x[jvj+15]=t[x[jvj+15]];
l18:if((x[jvj+15]>0)) goto l19;
pile[v[22]]=0; pile[WZ1]=jvj+19; 
(*f[2184])( );     /*QCY0(0,jvj+19,J)*/
J=pile[WZ2]; 
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=J; return;
l10:V46=t[V46];
goto l8;
l15:V49=x[jvj+16];
l14:if((V49<=0)) goto l13;
V=s[V49];
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==V) goto l17;
l16:V49=t[V49];
goto l14;
l17:pile[v[22]]=jvj+19; pile[WZ1]=763; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+19,763,jvj+2)*/
goto l16;
l19:x[jvj+12]=s[x[jvj+15]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+15];
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+12,V36)*/
V36=pile[WZ2]; 
if((V36<=0)) goto l20;
pile[v[22]]=350; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(350,jvj+12,jvj+13)*/
x[jvj+21]=x[jvj+13] ;z[jvj+21]=z[jvj+13];
goto l11;
}
