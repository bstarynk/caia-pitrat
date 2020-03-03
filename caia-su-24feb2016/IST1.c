#include "dx.h"
void IST1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V6=0;
int Y,X,TL,K;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10481;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2102&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
Y=pile[v[22]]; X=pile[v[22]+1]; TL=pile[v[22]+2]; K=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[Y] ;z[jvj+5]=z[Y];
l1:pile[v[22]]=135; pile[WZ1]=jvj+5; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(135,jvj+5,jvj+4)*/
if((x[jvj+4]==x[X])) goto l2;
pile[v[22]]=220; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(220,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V6==K)) goto l5;
l4:pile[v[22]]=jvj+4; pile[WZ1]=220; pile[WZ2]=K; 
(*f[43])( );     /*CHGC2(jvj+4,220,K)*/
x[jvj+5]=x[jvj+4] ;z[jvj+5]=z[jvj+4];
goto l1;
l2:pile[v[22]]=135; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(135,X,jvj+6)*/
pile[v[22]]=248; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(248,X,jvj+3)*/
for(i=x[jvj+3],V2=0;i>0;i=t[i],V2++)  ;
if((V2!=1)) goto l3;
pile[v[22]]=X; pile[WZ1]=TL; 
(*f[1383])( );     /*ISV0(X,TL)*/
l3:pile[v[22]]=135; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1380])( );     /*RECZ0(135,jvj+5,jvj+6)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
}
