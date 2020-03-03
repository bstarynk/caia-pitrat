#include "dx.h"
void EXPVAUT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0;
int B,A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=140; pile[WZ1]=A; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,A,V)*/
V=pile[WZ2]; 
pile[v[22]]=B; pile[WZ1]=V; pile[WZ2]=jvj+1; 
(*f[1491])( );     /*VDSBA0(B,V,jvj+1)*/
pile[v[22]]=129; pile[WZ1]=jvj+1; pile[WZ2]=R; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(129,jvj+1,R)*/
l11:v[0]=jvj; v[22]-=3; return;
l2:if(x[jvj+13]==incon) goto l3;
l7:x[R]=x[jvj+13] ;z[R]=z[jvj+13];
goto l11;
l3:x[jvj+13]=1881 ;z[jvj+13]=1881;
goto l7;
l4:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]==41)) goto l5;
if((x[jvj+7]==20)) goto l5;
if((x[jvj+7]==61)) goto l5;
if((x[jvj+7]==43)) goto l6;
if((x[jvj+7]!=22)) goto l10;
pile[v[22]]=111; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,A,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+9,jvj+5)*/
pile[v[22]]=1834; pile[WZ1]=jvj+5; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1834,jvj+5,jvj+10)*/
pile[v[22]]=1918; pile[WZ1]=129; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1918,129,jvj+11)*/
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l8;
l9:pile[v[22]]=555; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(555,jvj+5,jvj+12)*/
if((x[jvj+12]!=68)) goto l10;
pile[v[22]]=1834; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1834,jvj+5,jvj+6)*/
l10:x[R]=1896 ;z[R]=1896;
goto l11;
l5:x[R]=1881 ;z[R]=1881;
goto l11;
l6:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,A,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+2)*/
x[jvj+13]=incon;
pile[v[22]]=1834; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1834,jvj+2,jvj+3)*/
x[jvj+13]=x[jvj+3] ;z[jvj+13]=z[jvj+3];
l1:pile[v[22]]=146; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(146,jvj+2,jvj+4)*/
if((x[jvj+4]!=129)) goto l2;
x[jvj+13]=129 ;z[jvj+13]=129;
goto l7;
l8:x[R]=x[jvj+10] ;z[R]=z[jvj+10];
goto l11;
}
