#include "dx.h"
void ANASTRUCT1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V19=0,V54=0,I=0,V=0;
int A,M;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=11288;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1478&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+15]=x[A] ;z[jvj+15]=z[A];
l17:pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+15,jvj+16)*/
x[jvj+17]=incon;
pile[v[22]]=258; pile[WZ1]=M; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(258,M,jvj+5)*/
l4:if((x[jvj+5]>0)) goto l5;
pile[v[22]]=jvj+16; pile[WZ1]=176; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,176,jvj+17)*/
l18:pile[v[22]]=jvj+17; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+17,510,1)*/
pile[v[22]]=M; pile[WZ1]=258; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(M,258,jvj+17)*/
l19:pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+15,I)*/
I=pile[WZ2]; 
x[jvj+18]=incon;
pile[v[22]]=258; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(258,M,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=I; pile[WZ1]=117; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(I,117,jvj+18)*/
l20:pile[v[22]]=jvj+18; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+18,510,1)*/
pile[v[22]]=M; pile[WZ1]=258; pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(M,258,jvj+18)*/
l21:pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(140,jvj+15,V)*/
V=pile[WZ2]; 
x[jvj+19]=incon;
pile[v[22]]=256; pile[WZ1]=M; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(256,M,jvj+8)*/
l7:if((x[jvj+8]>0)) goto l8;
pile[v[22]]=V; pile[WZ1]=241; pile[WZ2]=jvj+19; 
(*f[329])( );     /*TRI13(V,241,jvj+19)*/
l22:pile[v[22]]=jvj+19; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+19,510,1)*/
pile[v[22]]=M; pile[WZ1]=256; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(M,256,jvj+19)*/
l23:pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+15,jvj+20)*/
if((x[jvj+20]==22)) goto l24;
if((x[jvj+20]!=43)) goto l36;
pile[v[22]]=102; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,jvj+15,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+35,jvj+36)*/
pile[v[22]]=103; pile[WZ1]=jvj+15; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(103,jvj+15,jvj+37)*/
x[jvj+38]=incon;
pile[v[22]]=159; pile[WZ1]=M; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,M,jvj+10)*/
l10:if((x[jvj+10]>0)) goto l11;
pile[v[22]]=jvj+36; pile[WZ1]=176; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(jvj+36,176,jvj+38)*/
l35:pile[v[22]]=M; pile[WZ1]=159; pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(M,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+38,510,1)*/
x[jvj+15]=x[jvj+37] ;z[jvj+15]=z[jvj+37];
goto l17;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5!=I)) goto l3;
x[jvj+18]=x[jvj+4] ;z[jvj+18]=z[jvj+4];
goto l20;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=176; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(176,jvj+6,jvj+7)*/
if((x[jvj+7]!=x[jvj+16])) goto l6;
x[jvj+17]=x[jvj+6] ;z[jvj+17]=z[jvj+6];
goto l18;
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l8:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=241; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(241,jvj+9,V19)*/
V19=pile[WZ2]; 
if((V19!=V)) goto l9;
x[jvj+19]=x[jvj+9] ;z[jvj+19]=z[jvj+9];
goto l22;
l9:x[jvj+8]=t[x[jvj+8]];
goto l7;
l11:x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=176; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(176,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+36])) goto l12;
x[jvj+38]=x[jvj+11] ;z[jvj+38]=z[jvj+11];
goto l35;
l12:x[jvj+10]=t[x[jvj+10]];
goto l10;
l13:x[jvj+24]=incon;
pile[v[22]]=256; pile[WZ1]=M; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(256,M,jvj+13)*/
l14:if((x[jvj+13]>0)) goto l15;
pile[v[22]]=(-625); pile[WZ1]=241; pile[WZ2]=jvj+24; 
(*f[329])( );     /*TRI13((-625),241,jvj+24)*/
l25:pile[v[22]]=jvj+24; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+24,510,1)*/
pile[v[22]]=M; pile[WZ1]=256; pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(M,256,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=218; pile[WZ2]=jvj+15; 
(*f[35])( );     /*CHGC1(jvj+24,218,jvj+15)*/
l36:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l15:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=241; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(241,jvj+14,V54)*/
V54=pile[WZ2]; 
if((V54!=(-625))) goto l16;
x[jvj+24]=x[jvj+14] ;z[jvj+24]=z[jvj+14];
goto l25;
l16:x[jvj+13]=t[x[jvj+13]];
goto l14;
l24:pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+15,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+21,jvj+22)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+23; 
(*f[1479])( );     /*ESTCONNU0(jvj+15,jvj+23)*/
if((x[jvj+23]==135)) goto l13;
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+21,jvj+33)*/
if((x[jvj+33]!=20)) goto l36;
x[jvj+34]=incon;
pile[v[22]]=763; pile[WZ1]=M; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(763,M,jvj+25)*/
l26:if((x[jvj+25]>0)) goto l27;
pile[v[22]]=jvj+22; pile[WZ1]=176; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+22,176,jvj+34)*/
l34:pile[v[22]]=M; pile[WZ1]=763; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(M,763,jvj+34)*/
x[jvj+28]=d[6];z[jvj+28]=0;
l29:if((x[jvj+28]>0)) goto l30;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+31)*/
l32:if((x[jvj+31]>0)) goto l33;
pile[v[22]]=jvj+34; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+34,510,1)*/
goto l36;
l27:x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=176; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(176,jvj+26,jvj+27)*/
if((x[jvj+27]!=x[jvj+22])) goto l28;
x[jvj+34]=x[jvj+26] ;z[jvj+34]=z[jvj+26];
goto l34;
l28:x[jvj+25]=t[x[jvj+25]];
goto l26;
l30:x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+15; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+29,jvj+15,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=M; 
(*f[1478])( );     /*ANASTRUCT1(jvj+30,M)*/
l31:x[jvj+28]=t[x[jvj+28]];
goto l29;
l33:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+32; pile[WZ1]=M; 
(*f[1478])( );     /*ANASTRUCT1(jvj+32,M)*/
x[jvj+31]=t[x[jvj+31]];
goto l32;
}
