#include "dx.h"
void AJOULIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int P,VB,HIST,T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=10;
x[jvj+1]=10365;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1593&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; VB=pile[v[22]+1]; HIST=pile[v[22]+2]; T=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[T] ;z[jvj+2]=z[T];
l1:pile[v[22]]=218; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+2,jvj+3)*/
if((x[jvj+3]!=x[P])) goto l2;
pile[v[22]]=319; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(319,jvj+2,jvj+4)*/
if((x[jvj+4]==x[VB])) goto l5;
l2:x[jvj+10]=incon;
pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+2,jvj+5)*/
x[jvj+10]=x[jvj+5] ;z[jvj+10]=z[jvj+5];
l4:x[jvj+9]=x[jvj+10] ;z[jvj+9]=z[jvj+10];
if((x[jvj+9]==250)) goto l6;
x[jvj+2]=x[jvj+9] ;z[jvj+2]=z[jvj+9];
goto l1;
l3:x[jvj+10]=250 ;z[jvj+10]=250;
goto l4;
l6:pile[v[22]]=HIST; pile[WZ1]=746; pile[WZ2]=jvj+7; 
(*f[54])( );     /*TRI1(HIST,746,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=VB; pile[WZ2]=319; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+7,VB,319,jvj+8)*/
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=P; pile[WZ4]=jvj+8; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(158,287,218,P,jvj+8,jvj+6)*/
pile[v[22]]=jvj+2; pile[WZ1]=120; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+2,120,jvj+6)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
}
