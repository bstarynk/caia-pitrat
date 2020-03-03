#include "dx.h"
void TRADATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,VZ=0;
int N,VV,IV,RX;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=11785;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1517&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; VV=pile[v[22]+1]; IV=pile[v[22]+2]; RX=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[IV]==576)) goto l5;
if((x[IV]!=1814)) goto l10;
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1688,N,jvj+19)*/
pile[v[22]]=96; pile[WZ1]=VV; pile[WZ2]=jvj+20; 
(*f[328])( );     /*TRI12(96,VV,jvj+20)*/
x[jvj+37]=x[jvj+19] ;z[jvj+37]=z[jvj+19];
l8:if((x[jvj+37]<=0)) goto l10;
x[jvj+21]=s[x[jvj+37]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+37];
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=22)) goto l9;
pile[v[22]]=111; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+21,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+23,jvj+24)*/
x[jvj+25]=x[jvj+24] ;z[jvj+25]=z[jvj+24];
pile[v[22]]=1815; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1815,jvj+25,jvj+26)*/
if((x[jvj+26]!=68)) goto l9;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+27; 
(*f[938])( );     /*USE0(jvj+21,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==VV) goto l3;
l9:x[jvj+37]=t[x[jvj+37]];
goto l8;
l2:x[jvj+2]=s[x[jvj+36]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+36];
if((x[jvj+2]==x[jvj+21])) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+4,jvj+5)*/
x[jvj+6]=x[jvj+5] ;z[jvj+6]=z[jvj+5];
pile[v[22]]=1815; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1815,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l9;
l4:x[jvj+36]=t[x[jvj+36]];
l1:if((x[jvj+36]>0)) goto l2;
pile[v[22]]=jvj+21; pile[WZ1]=N; pile[WZ2]=jvj+20; 
(*f[1514])( );if(v[102]) goto l9;     /*CRATOMZB0(jvj+21,N,jvj+20,VZ)*/
VZ=pile[WZ3]; 
pile[v[22]]=N; pile[WZ1]=VZ; pile[WZ2]=jvj+21; 
(*f[1515])( );     /*CRATOMZC0(N,VZ,jvj+21)*/
goto l9;
l3:x[jvj+36]=x[jvj+19] ;z[jvj+36]=z[jvj+19];
goto l1;
l5:pile[v[22]]=111; pile[WZ1]=RX; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,RX,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=278)) goto l10;
pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1688,N,jvj+10)*/
pile[v[22]]=103; pile[WZ1]=RX; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,RX,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[938])( );     /*USE0(jvj+11,jvj+12)*/
l6:if((x[jvj+10]<=0)) goto l10;
x[jvj+13]=s[x[jvj+10]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=22)) goto l7;
pile[v[22]]=111; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+13,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+15,jvj+16)*/
x[jvj+17]=x[jvj+16] ;z[jvj+17]=z[jvj+16];
pile[v[22]]=1815; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1815,jvj+17,jvj+18)*/
if((x[jvj+18]!=68)) goto l7;
pile[v[22]]=jvj+13; pile[WZ1]=N; pile[WZ2]=jvj+12; 
(*f[1514])( );if(v[102]) goto l7;     /*CRATOMZB0(jvj+13,N,jvj+12,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=N; pile[WZ1]=V19; pile[WZ2]=jvj+13; 
(*f[1515])( );     /*CRATOMZC0(N,V19,jvj+13)*/
l7:x[jvj+10]=t[x[jvj+10]];
goto l6;
l10:pile[v[22]]=80; pile[WZ1]=N; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(80,N,jvj+28)*/
if((x[jvj+28]==12)) goto l15;
l11:pile[v[22]]=1688; pile[WZ1]=N; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1688,N,jvj+29)*/
l12:if((x[jvj+29]>0)) goto l13;
pile[v[22]]=N; pile[WZ1]=VV; pile[WZ2]=IV; pile[WZ3]=RX; 
(*f[1718])( );     /*TRADATOMA0(N,VV,IV,RX)*/
l15:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l13:x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=100; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+30,jvj+31)*/
if((x[jvj+31]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+30,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+32,jvj+33)*/
x[jvj+34]=x[jvj+33] ;z[jvj+34]=z[jvj+33];
pile[v[22]]=1815; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1815,jvj+34,jvj+35)*/
if((x[jvj+35]==68)) goto l15;
l14:x[jvj+29]=t[x[jvj+29]];
goto l12;
}
