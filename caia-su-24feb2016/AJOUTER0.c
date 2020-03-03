#include "dx.h"
void AJOUTER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int TY,VB,HIST;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10011;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1365&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TY=pile[v[22]]; VB=pile[v[22]+1]; HIST=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+6]=vo[12];z[jvj+6]=vz[12];
pile[v[22]]=948; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(948,jvj+6,jvj+7)*/
if((x[jvj+7]==287)) goto l8;
l7:x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=1418; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1418,jvj+14,jvj+15)*/
x[jvj+2]=vo[42];z[jvj+2]=vz[42];
pile[v[22]]=265; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(265,jvj+2,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l8;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[TY])) goto l2;
pile[v[22]]=120; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+4,jvj+16)*/
if((x[jvj+15]==67)) goto l3;
if((x[jvj+15]==68)) goto l4;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:x[jvj+8]=vo[13];z[jvj+8]=vz[13];
pile[v[22]]=jvj+4; pile[WZ1]=VB; pile[WZ2]=HIST; pile[WZ3]=jvj+8; 
(*f[1593])( );     /*AJOULIS0(jvj+4,VB,HIST,jvj+8)*/
goto l8;
l5:pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+9,jvj+4)*/
l4:x[jvj+9]=x[jvj+4] ;z[jvj+9]=z[jvj+4];
pile[v[22]]=218; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+9,jvj+10)*/
pile[v[22]]=287; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(287,jvj+9,jvj+11)*/
x[jvj+13]=x[jvj+11] ;z[jvj+13]=z[jvj+11];
l6:x[jvj+12]=x[jvj+13] ;z[jvj+12]=z[jvj+13];
pile[v[22]]=VB; pile[WZ1]=HIST; pile[WZ2]=jvj+12; pile[WZ3]=jvj+10; 
(*f[1594])( );     /*AJOULISBIS0(VB,HIST,jvj+12,jvj+10)*/
pile[v[22]]=120; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+12,jvj+13)*/
goto l6;
}
