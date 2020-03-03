#include "dx.h"
void REDIV1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int B,Y;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=7;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; Y=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=x[jvj+5]=incon;
pile[v[22]]=208; pile[WZ1]=Y; pile[WZ2]=218; pile[WZ3]=67; pile[WZ4]=jvj+1; 
(*f[181])( );     /*QUADRI2(208,Y,218,67,jvj+1)*/
pile[v[22]]=B; pile[WZ1]=jvj+1; pile[WZ2]=Y; pile[WZ3]=208; 
(*f[3993])( );     /*REDIZ0(B,jvj+1,Y,208,jvj+1)*/
pile[v[22]]=218; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(218,jvj+1,jvj+2)*/
if((x[jvj+2]!=67)) goto l1;
pile[v[22]]=208; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(208,jvj+1,R)*/
l1:pile[v[22]]=218; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(218,jvj+1,jvj+3)*/
if((x[jvj+3]!=68)) goto l2;
pile[v[22]]=208; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(208,jvj+1,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[799])( );if(v[102]) goto l2;     /*NORME0(jvj+4,jvj+5)*/
l2:if(x[R]==incon) goto l3;
l6:v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:if(x[jvj+5]!=incon) goto l4;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l4:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=625)) goto l5;
pile[v[22]]=B; pile[WZ1]=jvj+5; pile[WZ2]=R; 
(*f[3994])( );if(v[102]) goto l5;     /*REDIV1(B,jvj+5,R)*/
goto l6;
l5:x[R]=x[jvj+5] ;z[R]=z[jvj+5];
goto l6;
}
