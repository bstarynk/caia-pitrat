#include "dx.h"
void ARCHIVERED0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V8=0;
int B,NS;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=11653;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==926&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; NS=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V8==(-7141))) goto l5;
l1:pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(498,jvj+3,jvj+4)*/
pile[v[22]]=983; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(983,jvj+4,jvj+5)*/
pile[v[22]]=878; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(878,jvj+5,jvj+6)*/
l2:if((x[jvj+6]<=0)) goto l5;
x[jvj+2]=s[x[jvj+6]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+6];
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+2,V5)*/
V5=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+3,V6)*/
V6=pile[WZ2]; 
if((V5!=V6)) goto l3;
l4:pile[v[22]]=jvj+2; pile[WZ1]=1543; pile[WZ2]=B; 
(*f[36])( );     /*PLUSC0(jvj+2,1543,B)*/
pile[v[22]]=B; pile[WZ1]=642; pile[WZ2]=NS; 
(*f[43])( );     /*CHGC2(B,642,NS)*/
l3:x[jvj+6]=t[x[jvj+6]];
goto l2;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
