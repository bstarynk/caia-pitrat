#include "dx.h"
void CHOIXCTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V1=0,V13=0,V9=0,V18=0,V21=0,V25=0,V26=0;
int N,A;
int QQ;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11385;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1480&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; A=pile[v[22]+1]; QQ=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1405; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1405,N,jvj+4)*/
x[jvj+21]=x[jvj+4] ;z[jvj+21]=z[jvj+4];
l2:if((x[jvj+21]<=0)) goto l4;
x[jvj+5]=s[x[jvj+21]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+21];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+5,V1)*/
V1=pile[WZ2]; 
x[QQ]=x[jvj+5] ;z[QQ]=z[jvj+5];
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(155,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l6;
l7:x[QQ]=x[jvj+6] ;z[QQ]=z[jvj+6];
goto l27;
l3:x[jvj+21]=t[x[jvj+21]];
goto l2;
l5:x[jvj+6]=s[x[jvj+4]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+4];
pile[v[22]]=176; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(176,jvj+6,jvj+7)*/
x[jvj+2]=x[jvj+7] ;z[jvj+2]=z[jvj+7];
pile[v[22]]=118; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(118,jvj+2,V4)*/
V4=pile[WZ2]; 
l6:x[jvj+4]=t[x[jvj+4]];
l4:if((x[jvj+4]>0)) goto l5;
pile[v[22]]=1404; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1404,N,jvj+10)*/
x[jvj+22]=x[jvj+10] ;z[jvj+22]=z[jvj+10];
l9:if((x[jvj+22]<=0)) goto l11;
x[jvj+11]=s[x[jvj+22]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+22];
pile[v[22]]=117; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+11,V9)*/
V9=pile[WZ2]; 
x[QQ]=x[jvj+11] ;z[QQ]=z[jvj+11];
goto l27;
l8:pile[v[22]]=155; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(155,jvj+8,jvj+9)*/
if((x[jvj+9]==68)) goto l13;
l14:x[QQ]=x[jvj+12] ;z[QQ]=z[jvj+12];
goto l27;
l10:x[jvj+22]=t[x[jvj+22]];
goto l9;
l12:x[jvj+12]=s[x[jvj+10]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+10];
pile[v[22]]=176; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(176,jvj+12,jvj+13)*/
x[jvj+8]=x[jvj+13] ;z[jvj+8]=z[jvj+13];
pile[v[22]]=118; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(118,jvj+8,V13)*/
V13=pile[WZ2]; 
l13:x[jvj+10]=t[x[jvj+10]];
l11:if((x[jvj+10]>0)) goto l12;
pile[v[22]]=1405; pile[WZ1]=N; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1405,N,jvj+16)*/
l15:if((x[jvj+16]>0)) goto l16;
pile[v[22]]=1404; pile[WZ1]=N; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1404,N,jvj+17)*/
l18:if((x[jvj+17]>0)) goto l19;
pile[v[22]]=A; pile[WZ1]=jvj+20; 
(*f[1696])( );     /*ENSCTES0(A,jvj+20)*/
x[jvj+19]=0 ;z[jvj+19]=0;
V26=incon;
l22:if((x[jvj+20]>0)) goto l23;
if((x[jvj+19]>0)) goto l21;
l26:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l16:x[jvj+14]=s[x[jvj+16]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+16];
pile[v[22]]=241; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(241,jvj+14,V18)*/
V18=pile[WZ2]; 
x[jvj+16]=t[x[jvj+16]];
goto l15;
l17:x[QQ]=x[jvj+14] ;z[QQ]=z[jvj+14];
goto l27;
l19:x[jvj+15]=s[x[jvj+17]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+17];
pile[v[22]]=241; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(241,jvj+15,V21)*/
V21=pile[WZ2]; 
x[jvj+17]=t[x[jvj+17]];
goto l18;
l20:x[QQ]=x[jvj+15] ;z[QQ]=z[jvj+15];
goto l27;
l21:x[jvj+23]=s[x[jvj+19]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+19];
x[QQ]=x[jvj+23] ;z[QQ]=z[jvj+23];
goto l27;
l23:x[jvj+18]=s[x[jvj+20]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+20];
pile[v[22]]=1410; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(1410,jvj+18,V25)*/
V25=pile[WZ2]; 
if(V26==incon) goto l28;
if((V25==V26)) goto l25;
if((V25>=V26)) goto l28;
l24:x[jvj+20]=t[x[jvj+20]];
goto l22;
l28:V26=V25;
x[jvj+19]=0 ;z[jvj+19]=0;
l25:pile[v[22]]=jvj+19; pile[WZ1]=jvj+18; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+18)*/
goto l24;
}
