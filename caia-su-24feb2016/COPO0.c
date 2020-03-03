#include "dx.h"
void COPO0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,W=0,V1=0,V9=0;
int PP,R,VJ,VI,X,Y,VL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=9;
x[jvj+1]=10014;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2160&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
PP=pile[v[22]]; R=pile[v[22]+1]; VJ=pile[v[22]+2]; VI=pile[v[22]+3]; X=pile[v[22]+4]; Y=pile[v[22]+5]; VL=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[Y] ;z[jvj+3]=z[Y];
x[jvj+5]=x[X] ;z[jvj+5]=z[X];
V9=VI;
l1:V=V9;
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+3,jvj+4)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
l3:pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+5; pile[WZ3]=W; pile[WZ4]=V; 
(*f[2084])( );     /*COPK0(PP,R,jvj+5,W,V)*/
if((x[VL]==395)) goto l4;
pile[v[22]]=331; pile[WZ1]=VL; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(331,VL,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+8)*/
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+8,jvj+9)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=W; pile[WZ4]=V1; pile[WZ5]=jvj+9; pile[v[22]+6]=jvj+8; pile[v[22]+7]=VL; 
(*f[2203])( );     /*COPO1(PP,R,VJ,W,V1,jvj+9,jvj+8,VL)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; return;
l2:W=VJ;
goto l3;
l4:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+6)*/
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+7)*/
V9=W;
x[jvj+5]=x[jvj+7] ;z[jvj+5]=z[jvj+7];
x[jvj+3]=x[jvj+6] ;z[jvj+3]=z[jvj+6];
goto l1;
}
