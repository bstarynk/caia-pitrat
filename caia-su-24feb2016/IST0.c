#include "dx.h"
void IST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V2=0,V6=0;
int X,Y,TL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=5;
x[jvj+1]=10481;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2009&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; Y=pile[v[22]+1]; TL=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[2003])( );     /*INC0(K)*/
K=pile[v[22]]; 
pile[v[22]]=135; pile[WZ1]=Y; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(135,Y,jvj+4)*/
if((x[jvj+4]==x[X])) goto l1;
pile[v[22]]=220; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(220,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V6==K)) goto l4;
l3:pile[v[22]]=jvj+4; pile[WZ1]=220; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(jvj+4,220,K)*/
pile[WZ1]=X; pile[WZ2]=TL; pile[WZ3]=K; 
(*f[2102])( );     /*IST1(jvj+4,X,TL,K)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(135,X,jvj+5)*/
pile[v[22]]=248; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(248,X,jvj+3)*/
for(i=x[jvj+3],V2=0;i>0;i=t[i],V2++)  ;
if((V2!=1)) goto l2;
pile[v[22]]=X; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(X,TL)*/
l2:pile[v[22]]=135; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[1380])( );     /*RECZ0(135,Y,jvj+5)*/
goto l4;
}
