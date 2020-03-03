#include "dx.h"
void ELTMAX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V24=0,V23=0,V37=0,V31=0,V30=0,V20=0,V1=0,V2=0,V8=0,RR=0,V9=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=23;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
R=x[jvj+17]=incon;
pile[v[22]]=448; pile[WZ1]=B; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(448,B,jvj+1)*/
l3:if((x[jvj+1]<=0)) goto l5;
x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=448)) goto l4;
pile[v[22]]=436; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(436,jvj+2,jvj+4)*/
pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+4,V37)*/
V37=pile[WZ2]; 
if((A!=V37)) goto l4;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=128)) goto l4;
pile[v[22]]=128; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(128,jvj+2,jvj+7)*/
V23=x[jvj+7];
V31=r[V23];
V30=(-V31);
if((V30!=41)) goto l4;
if((V23==0)) goto l4;
V25=(-999999);
l1:if((V23>0)) goto l2;
if((V25==(-999999))) goto l4;
R=V25;
l5:pile[v[22]]=448; pile[WZ1]=B; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(448,B,jvj+8)*/
l6:if((x[jvj+8]<=0)) goto l14;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=448)) goto l7;
pile[v[22]]=436; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(436,jvj+9,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(140,jvj+11,V20)*/
V20=pile[WZ2]; 
if((A!=V20)) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+9,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=128)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+9,jvj+14)*/
x[jvj+17]=x[jvj+14] ;z[jvj+17]=z[jvj+14];
l14:if(R==incon) goto l15;
l20:v[0]=jvj; v[22]-=3; pile[v[22]+2]=R; v[102]=0;return;
l2:V24=s[V23];
if(V24>V25) V25=V24;
V23=t[V23];
goto l1;
l4:x[jvj+1]=t[x[jvj+1]];
goto l3;
l7:x[jvj+8]=t[x[jvj+8]];
goto l6;
l9:x[jvj+15]=s[x[jvj+20]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+20];
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+15,V2)*/
V2=pile[WZ2]; 
if(V2>V1) V1=V2;
l10:x[jvj+20]=t[x[jvj+20]];
l8:if((x[jvj+20]>0)) goto l9;
if((V1==(-999999))) goto l18;
R=V1;
goto l20;
l12:x[jvj+16]=s[x[jvj+23]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+23];
pile[v[22]]=jvj+16; pile[WZ1]=B; 
(*f[1583])( );if(v[102]) goto l13;     /*ELTMAX1(jvj+16,B,RR)*/
RR=pile[WZ2]; 
V9=RR;
if(V9>V8) V8=V9;
l13:x[jvj+23]=t[x[jvj+23]];
l11:if((x[jvj+23]>0)) goto l12;
if((V8==(-999999))) goto l19;
R=V8;
goto l20;
l15:if(x[jvj+17]!=incon) goto l16;
l19:v[0]=jvj; v[22]-=3; v[102]=1;return;
l16:pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]==61)) goto l17;
if((x[jvj+18]!=128)) goto l18;
pile[v[22]]=128; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(128,jvj+17,jvj+20)*/
V1=(-999999);
goto l8;
l17:pile[v[22]]=103; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(103,jvj+17,jvj+19)*/
pile[v[22]]=B; pile[WZ1]=jvj+19; 
(*f[816])( );if(v[102]) goto l18;     /*VALEXP0(B,jvj+19,R)*/
R=pile[WZ2]; 
goto l20;
l18:pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+17,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=424)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+23)*/
V8=(-999999);
goto l11;
}
