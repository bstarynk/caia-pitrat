#include "dx.h"
void CRESOUSENS2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V4=0,V5=0,V29=0,V22=0,V24=0,V26=0,V28=0,V1=0,V6=0,H=0,V35=0,V8=0,V11=0,V19=0,V18=0,V20=0,V13=0,V14=0,V12=0,V15=0,V33=0,V38=0,V39=0;
int C,M,T,R,NX;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=11683;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4079&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
C=pile[v[22]]; M=pile[v[22]+1]; T=pile[v[22]+2]; R=pile[v[22]+3]; NX=pile[v[22]+4]; v[22]+=5; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V35=NX;
x[jvj+6]=x[T] ;z[jvj+6]=z[T];
V33=C;
l13:H=incon;
V1=V33+V35;
V6=V1-M;
if((v[216]<=0)) goto l3;
x[jvj+4]=x[jvj+6] ;z[jvj+4]=z[jvj+6];
l1:x[jvj+3]=x[jvj+4] ;z[jvj+3]=z[jvj+4];
pile[v[22]]=609; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(609,jvj+3,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(515,jvj+3,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(510,jvj+3,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+3,jvj+5)*/
V29=x[jvj+5];
pile[v[22]]=41; pile[WZ1]=V5; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V5,0,V22)*/
V22=pile[WZ3]; 
pile[WZ1]=V4; pile[WZ2]=V22; 
(*f[39])( );     /*SDX0(41,V4,V22,V24)*/
V24=pile[WZ3]; 
pile[WZ1]=V3; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,V3,V24,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V29; pile[WZ2]=V26; 
(*f[39])( );     /*SDX0(20,V29,V26,V28)*/
V28=pile[WZ3]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
l2:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+3,jvj+4)*/
goto l1;
l3:H=V6;
pile[v[22]]=jvj+6; pile[WZ1]=609; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+6,609,V1)*/
pile[WZ1]=515; pile[WZ2]=V35; 
(*f[43])( );     /*CHGC2(jvj+6,515,V35)*/
if(H!=incon) goto l4;
l10:if(H!=incon) goto l11;
l9:pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(120,jvj+6,jvj+11)*/
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l4:if((H<0)) goto l5;
x[jvj+13]=incon;
x[jvj+17]=0 ;z[jvj+17]=0;
x[jvj+13]=x[jvj+17] ;z[jvj+13]=z[jvj+17];
x[jvj+16]=x[jvj+6] ;z[jvj+16]=z[jvj+6];
l15:x[jvj+14]=x[jvj+16] ;z[jvj+14]=z[jvj+16];
pile[v[22]]=515; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(515,jvj+14,V38)*/
V38=pile[WZ2]; 
if((V38<=0)) goto l17;
pile[v[22]]=218; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(218,jvj+14,jvj+15)*/
V39=1;
l16:if((V39>V38)) goto l17;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[522])( );     /*PLUB2(jvj+13,jvj+15)*/
V39++;
goto l16;
l7:x[jvj+9]=x[jvj+6] ;z[jvj+9]=z[jvj+6];
l6:pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,jvj+9,jvj+10)*/
pile[v[22]]=515; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(515,jvj+10,V11)*/
V11=pile[WZ2]; 
if((V11<=0)) goto l8;
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(609,jvj+10,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+10,V14)*/
V14=pile[WZ2]; 
V12=V13-V14;
V15=V14-1;
V33=V12;
x[jvj+6]=x[jvj+10] ;z[jvj+6]=z[jvj+10];
V35=V15;
goto l13;
l8:x[jvj+9]=x[jvj+10] ;z[jvj+9]=z[jvj+10];
goto l6;
l11:if((H<0)) goto l9;
pile[v[22]]=609; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(609,jvj+6,V19)*/
V19=pile[WZ2]; 
V18=V19-1;
pile[v[22]]=120; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(120,jvj+6,jvj+12)*/
V20=V35-1;
pile[v[22]]=jvj+6; pile[WZ1]=515; pile[WZ2]=V20; 
(*f[43])( );     /*CHGC2(jvj+6,515,V20)*/
pile[WZ1]=609; pile[WZ2]=V18; 
(*f[43])( );     /*CHGC2(jvj+6,609,V18)*/
pile[v[22]]=V18; pile[WZ1]=M; pile[WZ2]=jvj+12; pile[WZ3]=R; 
(*f[4078])( );     /*CRESOUSENS1(V18,M,jvj+12,R)*/
goto l9;
l14:pile[v[22]]=jvj+13; pile[WZ1]=763; pile[WZ2]=jvj+7; 
(*f[300])( );     /*TRI10(jvj+13,763,jvj+7)*/
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(R,jvj+7)*/
l5:if((H>=0)) goto l10;
pile[v[22]]=609; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(609,jvj+6,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=120; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+6,jvj+8)*/
pile[v[22]]=V8; pile[WZ1]=M; pile[WZ3]=R; 
(*f[4078])( );     /*CRESOUSENS1(V8,M,jvj+8,R)*/
goto l10;
l17:pile[v[22]]=498; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(498,jvj+14,jvj+16)*/
goto l15;
l18:if(x[jvj+13]!=incon) goto l14;
goto l5;
}
