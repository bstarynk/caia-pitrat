#include "dx.h"
void SORHISTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V7=0,V6=0,Z=0,V3=0,V21=0,V22=0,V4=0,V25=0,V2=0,PP=0,V8=0,V29=0,V10=0,V17=0,V30=0,V31=0,L=0,V18=0,V19=0;
int I,E,F,A,B;
int J;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );

I=pile[v[22]]; E=pile[v[22]+1]; F=pile[v[22]+2]; A=pile[v[22]+3]; B=pile[v[22]+4]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=incon;
if((x[F]==0)) goto l1;
V1=44;
l13:x[jvj+5]=x[E] ;z[jvj+5]=z[E];
l11:if((x[jvj+5]>0)) goto l12;
v[0]=jvj; v[22]-=6; v[102]=1;return;
l1:V1=A;
goto l13;
l2:V6=V7;
l3:V4=V6;
l5:V25=x[jvj+1];
pile[v[22]]=V4; pile[WZ1]=V25; pile[WZ2]=20; 
(*f[179])( );     /*SDX1(V4,V25,20,V2)*/
V2=pile[WZ3]; 
l7:V8=incon;
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+3,PP)*/
PP=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=PP; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V2,PP,41,V8)*/
V8=pile[WZ3]; 
l9:V10=incon;
pile[v[22]]=128; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(128,jvj+3,jvj+4)*/
if((x[jvj+4]!=0)) goto l10;
V10=V8;
l15:L=V10;
pile[v[22]]=F; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(F,jvj+3)*/
for(i=x[E],V18=0;i>0;i=t[i],V18++)  ;
for(i=x[F],V19=0;i>0;i=t[i],V19++)  ;
if((V18<=V19)) goto l16;
pile[v[22]]=L; pile[WZ1]=E; pile[WZ2]=F; pile[WZ3]=A; pile[WZ4]=B; 
(*f[1168])( );if(v[102]) goto l16;     /*SORHISTE0(L,E,F,A,B,J)*/
J=pile[WZ5]; 
l17:v[0]=jvj; v[22]-=6; pile[v[22]+5]=J; v[102]=0;return;
l4:V4=V3;
goto l5;
l6:V2=V3;
goto l7;
l8:V8=V2;
goto l9;
l10:V29=x[jvj+4];
pile[v[22]]=V8; pile[WZ1]=V29; pile[WZ2]=23; 
(*f[179])( );     /*SDX1(V8,V29,23,V10)*/
V10=pile[WZ3]; 
goto l15;
l12:x[jvj+3]=s[x[jvj+5]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+5];
for(a=x[F];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l14;
pile[v[22]]=110; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(110,jvj+3,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=V1; 
(*f[38])( );     /*SPC0(I,V1,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=V30; 
(*f[64])( );     /*SRA2(V17,V30,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=V31; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V31,58,V3)*/
V3=pile[WZ2]; 
V2=incon;
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+3,jvj+1)*/
V4=incon;
pile[v[22]]=929; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(929,jvj+1,Z)*/
Z=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V3,91,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=V21; pile[WZ1]=Z; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V21,Z,41,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V22,93,V7)*/
V7=pile[WZ2]; 
V6=incon;
pile[v[22]]=1070; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1070,jvj+1,jvj+2)*/
if((x[jvj+2]!=68)) goto l2;
pile[v[22]]=V7; pile[WZ1]=42; 
(*f[38])( );     /*SPC0(V7,42,V6)*/
V6=pile[WZ2]; 
goto l3;
l14:x[jvj+5]=t[x[jvj+5]];
goto l11;
l16:pile[v[22]]=L; pile[WZ1]=B; 
(*f[38])( );     /*SPC0(L,B,J)*/
J=pile[WZ2]; 
goto l17;
}
