#include "dx.h"
void STOMSG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V7=0,V=0,V8=0;
int H,J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=9;
if(v[0]>99700) (*f[6])( );

H=pile[v[22]]; J=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=109; pile[WZ1]=H; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(109,H,jvj+1)*/
pile[v[22]]=763; pile[WZ1]=J; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(763,J,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l3;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+3,jvj+4)*/
if((x[jvj+4]!=x[jvj+1])) goto l2;
x[jvj+6]=x[jvj+3] ;z[jvj+6]=z[jvj+3];
l4:pile[v[22]]=159; pile[WZ1]=jvj+6; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(159,jvj+6,jvj+8)*/
l5:if((x[jvj+8]>0)) goto l6;
V8=incon;
pile[v[22]]=163; pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(163,H,V)*/
V=pile[WZ2]; 
V8=V;
l11:pile[v[22]]=V8; pile[WZ1]=163; pile[WZ2]=jvj+9; 
(*f[329])( );     /*TRI13(V8,163,jvj+9)*/
pile[v[22]]=jvj+6; pile[WZ1]=159; 
(*f[36])( );     /*PLUSC0(jvj+6,159,jvj+9)*/
l9:pile[v[22]]=jvj+9; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+9,510,1)*/
l10:v[0]=jvj; v[22]-=2; return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l3:pile[v[22]]=109; pile[WZ1]=H; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,H,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=109; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+5,109,jvj+6)*/
pile[v[22]]=J; pile[WZ1]=763; 
(*f[36])( );     /*PLUSC0(J,763,jvj+6)*/
goto l4;
l6:x[jvj+7]=s[x[jvj+8]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+8];
pile[v[22]]=163; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+7,V6)*/
V6=pile[WZ2]; 
pile[WZ1]=H; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,H,V7)*/
V7=pile[WZ2]; 
if((V6==V7)) goto l7;
x[jvj+8]=t[x[jvj+8]];
goto l5;
l7:x[jvj+9]=x[jvj+7] ;z[jvj+9]=z[jvj+7];
goto l9;
l8:V8=((-7141));
goto l11;
}
