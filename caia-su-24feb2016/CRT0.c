#include "dx.h"
void CRT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int HIST,A;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11521;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3708&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; A=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((v[111]!=0)) goto l1;
pile[v[22]]=1465; pile[WZ1]=HIST; pile[WZ2]=A; 
(*f[1320])( );     /*ARCHIVE1(1465,HIST,A)*/
l1:pile[v[22]]=A; 
(*f[1595])( );     /*CRETUND0(A)*/
pile[v[22]]=1465; pile[WZ1]=A; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(1465,A,HIST)*/
pile[v[22]]=1347; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1347,A,jvj+2)*/
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=1071; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1071,jvj+3,jvj+4)*/
l2:if((x[jvj+4]<=0)) goto l4;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=1347; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1347,jvj+5,jvj+6)*/
if((x[jvj+6]!=x[jvj+2])) goto l3;
pile[v[22]]=1465; pile[WZ2]=HIST; 
(*f[1365])( );     /*AJOUTER0(1465,jvj+5,HIST)*/
l3:x[jvj+4]=t[x[jvj+4]];
goto l2;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
