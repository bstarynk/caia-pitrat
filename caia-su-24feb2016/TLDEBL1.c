#include "dx.h"
void TLDEBL1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0;
int BL,N;
int TL;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; N=pile[v[22]+1]; TL=pile[v[22]+2]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,BL,jvj+6)*/
if((x[jvj+6]==508)) goto l5;
if((x[jvj+6]==854)) goto l6;
if((x[jvj+6]!=298)) goto l10;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=367; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(367,BL,jvj+1)*/
l1:if((x[jvj+1]>0)) goto l2;
x[jvj+7]=x[jvj+4] ;z[jvj+7]=z[jvj+4];
l8:x[jvj+11]=x[jvj+7] ;z[jvj+11]=z[jvj+7];
l7:if((x[jvj+11]<=0)) goto l10;
x[jvj+9]=s[x[jvj+11]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+11];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+9,V1)*/
V1=pile[WZ2]; 
if((V1!=N)) goto l9;
x[TL]=x[jvj+9] ;z[TL]=z[jvj+9];
v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+1]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+1];
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+3)*/
x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
l3:if((x[jvj+10]>0)) goto l4;
x[jvj+1]=t[x[jvj+1]];
goto l1;
l4:x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+10]=t[x[jvj+10]];
goto l3;
l5:pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(365,BL,jvj+7)*/
goto l8;
l6:pile[v[22]]=345; pile[WZ1]=BL; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(345,BL,jvj+8)*/
pile[v[22]]=365; pile[WZ1]=jvj+8; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(365,jvj+8,jvj+7)*/
goto l8;
l9:x[jvj+11]=t[x[jvj+11]];
goto l7;
l10:v[0]=jvj; v[22]-=3; v[102]=1;return;
}
