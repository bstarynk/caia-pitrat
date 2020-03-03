#include "dx.h"
void PRESENTATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int BL,Y;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=8;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; Y=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=Y; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,Y,jvj+1)*/
pile[v[22]]=101; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+1,jvj+2)*/
if((x[jvj+2]==x[BL])) goto l1;
l2:pile[v[22]]=120; pile[WZ1]=Y; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,Y,jvj+3)*/
pile[v[22]]=BL; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1527])( );     /*PRESENTATOME0(BL,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l1;
l3:pile[v[22]]=102; pile[WZ1]=Y; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,Y,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+5,jvj+6)*/
if(x[jvj+6]!=433&&x[jvj+6]!=918) goto l4;
pile[v[22]]=366; pile[WZ1]=Y; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(366,Y,jvj+7)*/
pile[v[22]]=BL; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1527])( );     /*PRESENTATOME0(BL,jvj+7,jvj+8)*/
if((x[jvj+8]==68)) goto l1;
l4:x[R]=67 ;z[R]=67;
l5:v[0]=jvj; v[22]-=3; return;
l1:x[R]=68 ;z[R]=68;
goto l5;
}
