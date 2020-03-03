#include "dx.h"
void QP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V40=0,F=0,FF=0;
int I,X;
int J;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=11453;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2136&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; X=pile[v[22]+1]; v[22]+=3; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((I>0)) goto l1;
J=0;
l8:pile[v[22]]=218; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(218,X,jvj+21)*/
pile[v[22]]=509; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(509,jvj+21,jvj+22)*/
l9:if((x[jvj+22]<=0)) goto l13;
x[jvj+2]=s[x[jvj+22]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+22];
pile[v[22]]=1070; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1070,jvj+2,jvj+23)*/
if((x[jvj+23]!=68)) goto l10;
pile[v[22]]=1411; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1411,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l10;
l11:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+2,jvj+12)*/
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=1304; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1304,jvj+4,jvj+5)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+2,jvj+6)*/
V40=x[jvj+6];
l2:if((V40<=0)) goto l10;
V=s[V40];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V) goto l3;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+2,jvj+24)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+12,jvj+25)*/
if((x[jvj+24]!=22)) goto l10;
F=x[jvj+25];
if(F!=29&&F!=30&&F!=27&&F!=28) goto l7;
pile[v[22]]=100; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=20)) goto l7;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+2,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==485)) goto l12;
l7:FF=x[jvj+25];
if(FF!=29&&FF!=30&&FF!=27&&FF!=28) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+12,jvj+17)*/
if((x[jvj+17]!=20)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+2,jvj+18)*/
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]==485)) goto l12;
l4:if((x[jvj+25]!=25)) goto l10;
x[jvj+7]=d[20];z[jvj+7]=0;
l5:if((x[jvj+7]<=0)) goto l10;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+8,jvj+2,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]==485)) goto l12;
l6:x[jvj+7]=t[x[jvj+7]];
goto l5;
l1:pile[v[22]]=I; 
(*f[1803])( );     /*SPLL0(I,J)*/
J=pile[WZ1]; 
goto l8;
l3:V40=t[V40];
goto l2;
l12:pile[v[22]]=jvj+2; pile[WZ1]=X; 
(*f[2186])( );     /*QPP0(jvj+2,X)*/
l10:x[jvj+22]=t[x[jvj+22]];
goto l9;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; pile[v[22]+2]=J; return;
}
