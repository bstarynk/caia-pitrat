#include "dx.h"
void PCTREUSSI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,V8=0,V19=0,V15=0,V16=0,V17=0,V18=0,V5=0,V20=0,V22=0,V24=0,V25=0,V7=0,V4=0,V3=0;
int A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=3;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1005; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1005,A,RS)*/
RS=pile[WZ2]; 
l7:if((RS>0)) goto l8;
l9:R=1;
l10:pile[v[22]]=A; pile[WZ1]=1005; pile[WZ2]=R; 
(*f[43])( );     /*CHGC2(A,1005,R)*/
v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; return;
l1:pile[v[22]]=935; pile[WZ1]=A; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(935,A,jvj+1)*/
if(x[jvj+1]!=547&&x[jvj+1]!=325) goto l5;
RS=1000;
l8:R=RS;
goto l10;
l3:if((V7<4)) goto l4;
goto l7;
l4:V19=v[63];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V15; pile[WZ2]=10886; 
(*f[98])( );     /*SRA3(135,V15,10886,V16)*/
V16=pile[WZ3]; 
pile[v[22]]=V16; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V16,125,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=V17; 
(*f[39])( );     /*SDX0(41,V19,V17,V18)*/
V18=pile[WZ3]; 
pile[WZ1]=V5; pile[WZ2]=V18; 
(*f[39])( );     /*SDX0(41,V5,V18,V20)*/
V20=pile[WZ3]; 
pile[WZ1]=RS; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,RS,V20,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V22,(-9543),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=V24; pile[WZ1]=(-7127); 
(*f[37])( );     /*SRA0(V24,(-7127),V25)*/
V25=pile[WZ2]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
if((V7!=2)) goto l7;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l7;
l5:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=18; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(18,jvj+3,V5)*/
V5=pile[WZ2]; 
V4=1000*v[63];
V3=V4/V5;
RS=V3;
V7=g[466];
if((V7<=0)) goto l7;
V8=vg[466];
if((V8!=0)) goto l2;
if((V7<3)) goto l4;
l2:pile[v[22]]=466; pile[WZ1]=10886; pile[WZ2]=0; pile[WZ3]=(-1961); pile[WZ4]=RS; pile[WZ5]=jvj+2; 
(*f[612])( );     /*INTERP9(466,10886,0,(-1961),RS,jvj+2)*/
if((x[jvj+2]==135)) goto l3;
goto l7;
l6:
(*f[1258])( );if(v[102]) goto l9;     /*ACHEVE0(RS)*/
RS=pile[v[22]]; 
goto l7;
}
