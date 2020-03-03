#include "dx.h"
void ANASTRUCT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V19=0,V54=0,I=0,V=0;
int A;
int M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=11288;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1214&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=M; 
(*f[54])( );     /*TRI1(250,158,M)*/
pile[v[22]]=101; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,A,jvj+15)*/
x[jvj+16]=incon;
pile[v[22]]=258; pile[WZ1]=M; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(258,M,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=jvj+15; pile[WZ1]=176; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,176,jvj+16)*/
l17:pile[v[22]]=jvj+16; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+16,510,1)*/
pile[v[22]]=M; pile[WZ1]=258; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(M,258,jvj+16)*/
l18:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,A,I)*/
I=pile[WZ2]; 
x[jvj+17]=incon;
pile[v[22]]=258; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(258,M,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=I; pile[WZ1]=117; pile[WZ2]=jvj+17; 
(*f[46])( );     /*TRI0(I,117,jvj+17)*/
l19:pile[v[22]]=jvj+17; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+17,510,1)*/
pile[v[22]]=M; pile[WZ1]=258; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(M,258,jvj+17)*/
l20:pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
x[jvj+18]=incon;
pile[v[22]]=256; pile[WZ1]=M; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(256,M,jvj+8)*/
l7:if((x[jvj+8]>0)) goto l8;
pile[v[22]]=V; pile[WZ1]=241; pile[WZ2]=jvj+18; 
(*f[329])( );     /*TRI13(V,241,jvj+18)*/
l21:pile[v[22]]=jvj+18; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+18,510,1)*/
pile[v[22]]=M; pile[WZ1]=256; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(M,256,jvj+18)*/
l22:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,A,jvj+19)*/
if((x[jvj+19]==22)) goto l23;
if((x[jvj+19]!=43)) goto l35;
pile[v[22]]=102; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(102,A,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+34,jvj+35)*/
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(103,A,jvj+36)*/
x[jvj+37]=incon;
pile[v[22]]=159; pile[WZ1]=M; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,M,jvj+10)*/
l10:if((x[jvj+10]>0)) goto l11;
pile[v[22]]=jvj+35; pile[WZ1]=176; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(jvj+35,176,jvj+37)*/
l34:pile[v[22]]=M; pile[WZ1]=159; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(M,159,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+37,510,1)*/
pile[v[22]]=jvj+36; pile[WZ1]=M; 
(*f[1478])( );     /*ANASTRUCT1(jvj+36,M)*/
l35:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=I)) goto l3;
x[jvj+17]=x[jvj+4] ;z[jvj+17]=z[jvj+4];
goto l19;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=176; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(176,jvj+6,jvj+7)*/
if((x[jvj+7]!=x[jvj+15])) goto l6;
x[jvj+16]=x[jvj+6] ;z[jvj+16]=z[jvj+6];
goto l17;
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l8:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=241; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(241,jvj+9,V19)*/
V19=pile[WZ2]; 
if((V19!=V)) goto l9;
x[jvj+18]=x[jvj+9] ;z[jvj+18]=z[jvj+9];
goto l21;
l9:x[jvj+8]=t[x[jvj+8]];
goto l7;
l11:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=176; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(176,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+35])) goto l12;
x[jvj+37]=x[jvj+11] ;z[jvj+37]=z[jvj+11];
goto l34;
l12:x[jvj+10]=t[x[jvj+10]];
goto l10;
l13:x[jvj+23]=incon;
pile[v[22]]=256; pile[WZ1]=M; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(256,M,jvj+13)*/
l14:if((x[jvj+13]>0)) goto l15;
pile[v[22]]=(-625); pile[WZ1]=241; pile[WZ2]=jvj+23; 
(*f[329])( );     /*TRI13((-625),241,jvj+23)*/
l24:pile[v[22]]=jvj+23; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+23,510,1)*/
pile[v[22]]=M; pile[WZ1]=256; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(M,256,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=218; pile[WZ2]=A; 
(*f[35])( );     /*CHGC1(jvj+23,218,A)*/
goto l35;
l15:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=241; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,jvj+14,V54)*/
V54=pile[WZ2]; 
if((V54!=(-625))) goto l16;
x[jvj+23]=x[jvj+14] ;z[jvj+23]=z[jvj+14];
goto l24;
l16:x[jvj+13]=t[x[jvj+13]];
goto l14;
l23:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,A,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+20,jvj+21)*/
pile[v[22]]=A; pile[WZ1]=jvj+22; 
(*f[1479])( );     /*ESTCONNU0(A,jvj+22)*/
if((x[jvj+22]==135)) goto l13;
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+20,jvj+32)*/
if((x[jvj+32]!=20)) goto l35;
x[jvj+33]=incon;
pile[v[22]]=763; pile[WZ1]=M; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(763,M,jvj+24)*/
l25:if((x[jvj+24]>0)) goto l26;
pile[v[22]]=jvj+21; pile[WZ1]=176; pile[WZ2]=jvj+33; 
(*f[54])( );     /*TRI1(jvj+21,176,jvj+33)*/
l33:pile[v[22]]=M; pile[WZ1]=763; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(M,763,jvj+33)*/
x[jvj+27]=d[6];z[jvj+27]=0;
l28:if((x[jvj+27]>0)) goto l29;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,A,jvj+30)*/
l31:if((x[jvj+30]>0)) goto l32;
pile[v[22]]=jvj+33; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+33,510,1)*/
goto l35;
l26:x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=176; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(176,jvj+25,jvj+26)*/
if((x[jvj+26]!=x[jvj+21])) goto l27;
x[jvj+33]=x[jvj+25] ;z[jvj+33]=z[jvj+25];
goto l33;
l27:x[jvj+24]=t[x[jvj+24]];
goto l25;
l29:x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=jvj+28; pile[WZ1]=A; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(jvj+28,A,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=M; 
(*f[1478])( );     /*ANASTRUCT1(jvj+29,M)*/
l30:x[jvj+27]=t[x[jvj+27]];
goto l28;
l32:x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=jvj+31; pile[WZ1]=M; 
(*f[1478])( );     /*ANASTRUCT1(jvj+31,M)*/
x[jvj+30]=t[x[jvj+30]];
goto l31;
}
