#include "dx.h"
void REDUIREMEM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V3=0,V4=0;
int X;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=226; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(226,X,jvj+3)*/
l3:if((x[jvj+3]>0)) goto l4;
v[0]=jvj; v[22]-=1; return;
l4:x[jvj+1]=s[x[jvj+3]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+3];
pile[v[22]]=867; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(867,jvj+1,jvj+4)*/
if(x[jvj+4]!=876&&x[jvj+4]!=1336) goto l1;
pile[v[22]]=866; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(866,jvj+1,V3)*/
V3=pile[WZ2]; 
if((V3<=1)) goto l1;
V4=x[jvj+1];
pile[v[22]]=226; pile[WZ1]=X; pile[WZ2]=V4; 
(*f[134])( );     /*OTA0(226,X,V4)*/
l1:pile[v[22]]=866; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(866,jvj+1,V7)*/
V7=pile[WZ2]; 
if((V7==1)) goto l6;
l2:pile[v[22]]=867; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(867,jvj+1,jvj+2)*/
if(x[jvj+2]==178||x[jvj+2]==493) goto l6;
l5:x[jvj+3]=t[x[jvj+3]];
goto l3;
l6:pile[v[22]]=jvj+1; 
(*f[1280])( );     /*REDUIREMEM0(jvj+1)*/
goto l5;
}
