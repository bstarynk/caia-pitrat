#include "dx.h"
void PLUK1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V21=0,V26=0,V17=0,V18=0,V19=0,V20=0,V15=0,V22=0,V24=0,V25=0,V7=0;
int TL,A;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=6;
if(v[0]>99700) (*f[6])( );

TL=pile[v[22]]; A=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(583,TL,jvj+5)*/
if(x[jvj+5]==10547||x[jvj+5]==10169) goto l7;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,TL,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=888; pile[WZ1]=240; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(888,240,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
if((x[A]==73)) goto l8;
V7=g[136];
if((V7<=0)) goto l8;
V8=vg[136];
if((V8!=0)) goto l4;
if((V7<3)) goto l6;
l4:pile[v[22]]=136; pile[WZ1]=10346; pile[WZ2]=1; pile[WZ3]=(-662); pile[WZ4]=TL; pile[WZ5]=(-598); pile[v[22]+6]=A; pile[v[22]+7]=jvj+4; 
(*f[187])( );     /*INTERP0(136,10346,1,(-662),TL,(-598),A,jvj+4)*/
if((x[jvj+4]==135)) goto l5;
l8:pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=130; pile[WZ3]=V15; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(109,jvj+5,130,V15,jvj+6)*/
pile[v[22]]=240; pile[WZ1]=888; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(240,888,jvj+6)*/
l7:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+2,V6)*/
V6=pile[WZ2]; 
if((V15!=V6)) goto l3;
pile[v[22]]=109; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,jvj+2,jvj+3)*/
if((x[jvj+5]==x[jvj+3])) goto l7;
l3:x[jvj+1]=t[x[jvj+1]];
goto l1;
l5:if((V7<4)) goto l6;
goto l8;
l6:V21=x[jvj+5];
V26=x[A];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V17; pile[WZ2]=10346; 
(*f[98])( );     /*SRA3(135,V17,10346,V18)*/
V18=pile[WZ3]; 
pile[v[22]]=V18; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V18,125,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V21; pile[WZ2]=V19; 
(*f[39])( );     /*SDX0(20,V21,V19,V20)*/
V20=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V20; 
(*f[39])( );     /*SDX0(41,V15,V20,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V22,(-9543),V24)*/
V24=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V26; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,V26,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
if((V7!=2)) goto l8;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l8;
}
