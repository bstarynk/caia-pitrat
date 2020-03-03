#include "dx.h"
void CRINT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V9=0,V5=0;
int X,FF,G,AL,EE;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; FF=pile[v[22]+1]; G=pile[v[22]+2]; AL=pile[v[22]+3]; EE=pile[v[22]+4]; v[22]+=5; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=incon;
pile[v[22]]=365; pile[WZ1]=10547; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(365,10547,jvj+1)*/
if((x[jvj+1]<=0)) goto l1;
x[jvj+9]=s[x[jvj+1]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+1];
x[jvj+2]=x[jvj+9] ;z[jvj+2]=z[jvj+9];
pile[v[22]]=jvj+2; pile[WZ1]=223; pile[WZ2]=FF; 
(*f[34])( );     /*CHGC0(jvj+2,223,FF)*/
pile[WZ1]=222; pile[WZ2]=EE; 
(*f[34])( );     /*CHGC0(jvj+2,222,EE)*/
l1:pile[v[22]]=184; pile[WZ1]=10547; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(184,10547,jvj+3)*/
x[jvj+10]=x[G] ;z[jvj+10]=z[G];
l2:if((x[jvj+10]>0)) goto l3;
if(x[jvj+2]!=incon) goto l7;
l9:v[0]=jvj; v[22]-=5; return;
l3:x[jvj+4]=s[x[jvj+10]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+10];
pile[v[22]]=110; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(110,jvj+4,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=111; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+4,jvj+5)*/
x[jvj+11]=x[jvj+3] ;z[jvj+11]=z[jvj+3];
l5:if((x[jvj+11]<=0)) goto l4;
x[jvj+6]=s[x[jvj+11]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+11];
pile[v[22]]=V3; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[688])( );     /*SUBVX0(V3,jvj+5,jvj+6)*/
x[jvj+11]=t[x[jvj+11]];
goto l5;
l4:x[jvj+10]=t[x[jvj+10]];
goto l2;
l7:x[jvj+8]=vo[20];z[jvj+8]=vz[20];
pile[v[22]]=322; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(322,jvj+8,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; pile[WZ1]=jvj+2; 
(*f[1072])( );     /*CL2(V5,jvj+2)*/
pile[v[22]]=135; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(135,jvj+2,jvj+7)*/
pile[v[22]]=X; pile[WZ1]=135; 
(*f[35])( );     /*CHGC1(X,135,jvj+7)*/
l6:pile[v[22]]=322; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(322,jvj+2,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=322; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+8,322,V9)*/
l8:
(*f[711])( );     /*NETBID1()*/
goto l9;
}
