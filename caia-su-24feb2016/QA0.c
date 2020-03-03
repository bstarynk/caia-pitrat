#include "dx.h"
void QA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V20=0,V17=0,V2=0,V4=0,V8=0,V9=0,V10=0,N=0,V11=0,V6=0,V7=0,V5=0,V3=0,V12=0,K=0,V42=0,V43=0,V40=0,V25=0,V27=0,V29=0,V30=0,V31=0,V32=0,V33=0,V23=0,V34=0,V28=0,V26=0,V35=0,V56=0,V49=0,V48=0,V51=0,V70=0,V63=0,V62=0,V65=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11276;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2137&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1302; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1302,X,jvj+2)*/
pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+2,jvj+3)*/
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1304,jvj+4,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l1;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,51,V19)*/
V19=pile[WZ2]; 
pile[WZ1]=27; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(241,27,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+2,V17)*/
V17=pile[WZ2]; 
x[jvj+12]=1302 ;z[jvj+12]=1302;
x[jvj+13]=x[jvj+3] ;z[jvj+13]=z[jvj+3];
V56=V17;
l5:pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(jvj+12,jvj+13,jvj+14)*/
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(117,jvj+14,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+14,jvj+15)*/
V48=V56+V49;
V51=V48;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1304,jvj+16,jvj+17)*/
for(a=x[jvj+17];a>0;a=t[a]) if(s[a]==x[jvj+15]) goto l6;
V56=V51;
x[jvj+13]=x[jvj+15] ;z[jvj+13]=z[jvj+15];
goto l5;
l1:K=I;
l2:pile[v[22]]=1303; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1303,X,jvj+7)*/
pile[v[22]]=218; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+7,jvj+8)*/
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1304,jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l3;
pile[v[22]]=241; pile[WZ1]=51; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,51,V42)*/
V42=pile[WZ2]; 
pile[WZ1]=29; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(241,29,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+7,V40)*/
V40=pile[WZ2]; 
x[jvj+18]=1303 ;z[jvj+18]=1303;
x[jvj+19]=x[jvj+8] ;z[jvj+19]=z[jvj+8];
V70=V40;
l7:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+18,jvj+19,jvj+20)*/
pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+20,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(218,jvj+20,jvj+21)*/
V62=V70+V63;
V65=V62;
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1304,jvj+22,jvj+23)*/
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==x[jvj+21]) goto l8;
V70=V65;
x[jvj+19]=x[jvj+21] ;z[jvj+19]=z[jvj+21];
goto l7;
l3:J=K;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
l6:N=V51;
x[jvj+6]=x[jvj+15] ;z[jvj+6]=z[jvj+15];
pile[v[22]]=(-2577); pile[WZ1]=I; 
(*f[64])( );     /*SRA2((-2577),I,V2)*/
V2=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V2,40,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=V4; pile[WZ1]=X; 
(*f[1981])( );if(v[102]) goto l1;     /*SPSS0(V4,X,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=V19; pile[WZ1]=V8; 
(*f[64])( );     /*SRA2(V19,V8,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=V9; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V9,40,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=V10; 
(*f[99])( );     /*SPM0(N,V10,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V11,41,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=V20; pile[WZ1]=V6; 
(*f[64])( );     /*SRA2(V20,V6,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=V7; pile[WZ1]=jvj+6; 
(*f[1981])( );if(v[102]) goto l1;     /*SPSS0(V7,jvj+6,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V5,41,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V3,32,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l1;     /*QU0(V12,X,K)*/
K=pile[WZ2]; 
goto l2;
l8:V23=V65;
x[jvj+11]=x[jvj+21] ;z[jvj+11]=z[jvj+21];
pile[v[22]]=(-2577); pile[WZ1]=K; 
(*f[64])( );     /*SRA2((-2577),K,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V25,40,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V27; pile[WZ1]=X; 
(*f[1981])( );if(v[102]) goto l3;     /*SPSS0(V27,X,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=V43; pile[WZ1]=V29; 
(*f[64])( );     /*SRA2(V43,V29,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V30; pile[WZ1]=jvj+11; 
(*f[1981])( );if(v[102]) goto l3;     /*SPSS0(V30,jvj+11,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V42; pile[WZ1]=V31; 
(*f[64])( );     /*SRA2(V42,V31,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V32,40,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=V23; pile[WZ1]=V33; 
(*f[99])( );     /*SPM0(V23,V33,V34)*/
V34=pile[WZ2]; 
pile[v[22]]=V34; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V34,41,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; 
(*f[38])( );     /*SPC0(V28,41,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V26,32,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=X; 
(*f[2140])( );if(v[102]) goto l3;     /*QU0(V35,X,J)*/
J=pile[WZ2]; 
goto l4;
}
