#include "dx.h"
void COMPMENAGE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AA,BB;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11494;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2052&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AA=pile[v[22]]; BB=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=d[151];z[jvj+11]=0;
l7:if((x[jvj+11]>0)) goto l8;
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+4]=s[x[jvj+22]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+22];
pile[v[22]]=497; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(497,jvj+4,jvj+5)*/
if((x[jvj+14]!=x[jvj+5])) goto l3;
pile[v[22]]=145; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(145,jvj+4,jvj+6)*/
if((x[jvj+15]==x[jvj+6])) goto l11;
l3:x[jvj+22]=t[x[jvj+22]];
l1:if((x[jvj+22]>0)) goto l2;
pile[v[22]]=145; pile[WZ1]=jvj+15; pile[WZ2]=497; pile[WZ3]=jvj+14; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(145,jvj+15,497,jvj+14,jvj+16)*/
pile[v[22]]=BB; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(BB,jvj+2,jvj+16)*/
l11:x[jvj+24]=t[x[jvj+24]];
l9:if((x[jvj+24]>0)) goto l10;
pile[v[22]]=jvj+2; pile[WZ1]=BB; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+2,BB,jvj+17)*/
x[jvj+25]=x[jvj+17] ;z[jvj+25]=z[jvj+17];
l12:if((x[jvj+25]>0)) goto l13;
x[jvj+11]=t[x[jvj+11]];
goto l7;
l5:x[jvj+8]=s[x[jvj+23]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+23];
pile[v[22]]=497; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(497,jvj+8,jvj+9)*/
if((x[jvj+19]!=x[jvj+9])) goto l6;
pile[v[22]]=145; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(145,jvj+8,jvj+10)*/
if((x[jvj+20]==x[jvj+10])) goto l14;
l6:x[jvj+23]=t[x[jvj+23]];
l4:if((x[jvj+23]>0)) goto l5;
pile[v[22]]=145; pile[WZ1]=jvj+20; pile[WZ2]=497; pile[WZ3]=jvj+19; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(145,jvj+20,497,jvj+19,jvj+21)*/
pile[v[22]]=AA; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(AA,jvj+2,jvj+21)*/
l14:x[jvj+25]=t[x[jvj+25]];
goto l12;
l8:x[jvj+2]=s[x[jvj+11]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+11];
pile[v[22]]=jvj+2; pile[WZ1]=AA; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(jvj+2,AA,jvj+12)*/
x[jvj+24]=x[jvj+12] ;z[jvj+24]=z[jvj+12];
goto l9;
l10:x[jvj+13]=s[x[jvj+24]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+24];
pile[v[22]]=497; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(497,jvj+13,jvj+14)*/
if((x[jvj+14]==x[BB])) goto l11;
pile[v[22]]=145; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(145,jvj+13,jvj+15)*/
pile[v[22]]=jvj+2; pile[WZ1]=BB; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(jvj+2,BB,jvj+3)*/
x[jvj+22]=x[jvj+3] ;z[jvj+22]=z[jvj+3];
goto l1;
l13:x[jvj+18]=s[x[jvj+25]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+25];
pile[v[22]]=497; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(497,jvj+18,jvj+19)*/
if((x[jvj+19]==x[AA])) goto l14;
pile[v[22]]=145; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(145,jvj+18,jvj+20)*/
pile[v[22]]=jvj+2; pile[WZ1]=AA; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+2,AA,jvj+7)*/
x[jvj+23]=x[jvj+7] ;z[jvj+23]=z[jvj+7];
goto l4;
}
