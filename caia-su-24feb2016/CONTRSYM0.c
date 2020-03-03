#include "dx.h"
void CONTRSYM0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V12=0,V11=0;
int R,HIST;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11086;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1735&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; HIST=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=1189; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1189,jvj+2,jvj+3)*/
x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+4,jvj+10)*/
pile[v[22]]=983; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(983,jvj+10,jvj+11)*/
pile[v[22]]=878; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(878,jvj+11,jvj+12)*/
l6:if((x[jvj+12]<=0)) goto l5;
x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+13,V12)*/
V12=pile[WZ2]; 
pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,jvj+4,V11)*/
V11=pile[WZ2]; 
if((V12==V11)) goto l7;
x[jvj+12]=t[x[jvj+12]];
goto l6;
l3:pile[v[22]]=R; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1578])( );if(v[102]) goto l2;     /*SUBSTSYM0(R,jvj+7,jvj+8)*/
pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[760])( );     /*MEMEX0(R,jvj+8,jvj+9)*/
if((x[jvj+9]==134)) goto l4;
l2:x[jvj+6]=t[x[jvj+6]];
l1:if((x[jvj+6]<=0)) goto l5;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,jvj+7,V4)*/
V4=pile[WZ2]; 
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==V4) goto l3;
goto l2;
l4:pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=HIST; 
(*f[1548])( );     /*NOUVCONTRA0(jvj+8,R,HIST)*/
goto l2;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l7:x[jvj+5]=x[jvj+13] ;z[jvj+5]=z[jvj+13];
pile[v[22]]=1179; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1179,jvj+5,jvj+6)*/
goto l1;
}
