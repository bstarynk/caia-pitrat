#include "dx.h"
void LIREBILAN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V3=0,L=0,V17=0,V16=0,V12=0,V=0,V1=0,V15=0,V14=0,V22=0,V21=0;
int LL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10995;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==147&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
LL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
L=incon;
V4=LL+1;
V3=V4+1;
L=V3;
V1=bh[v[1]][L];
if((V1!=43)) goto l5;
x[jvj+5]=966 ;z[jvj+5]=966;
l2:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+5,jvj+6)*/
pile[v[22]]=1133; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1133,jvj+6,jvj+7)*/
x[jvj+12]=x[jvj+7] ;z[jvj+12]=z[jvj+7];
l3:if((x[jvj+12]>0)) goto l4;
x[jvj+5]=x[jvj+6] ;z[jvj+5]=z[jvj+6];
goto l2;
l4:x[jvj+8]=s[x[jvj+12]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+12];
pile[v[22]]=jvj+8; 
(*f[446])( );     /*LIRELTDEBILAN0(jvj+8)*/
x[jvj+12]=t[x[jvj+12]];
goto l3;
l5:if((V1!=32)) goto l10;
V15=L+1;
V14=bh[v[1]][V15];
if((V14==32)) goto l6;
pile[v[22]]=L; 
(*f[107])( );     /*CRC0(L,V12)*/
V12=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+4; 
(*f[78])( );if(v[102]) goto l6;     /*SMA0(L,64,67,jvj+4)*/
V17=V12+1;
V16=bh[v[1]][V17];
if((V16!=32)) goto l1;
pile[v[22]]=jvj+4; pile[WZ1]=(-7085); 
(*f[447])( );     /*LIREPBILAN0(jvj+4,(-7085))*/
l1:if((V16==32)) goto l6;
pile[v[22]]=V12; 
(*f[258])( );     /*SMV1(V12,V)*/
V=pile[WZ1]; 
pile[v[22]]=jvj+4; pile[WZ1]=V; 
(*f[447])( );     /*LIREPBILAN0(jvj+4,V)*/
l6:if((V14!=32)) goto l10;
x[jvj+9]=966 ;z[jvj+9]=966;
l7:pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(120,jvj+9,jvj+2)*/
pile[v[22]]=191; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(191,jvj+2,jvj+3)*/
l8:x[jvj+9]=x[jvj+2] ;z[jvj+9]=z[jvj+2];
goto l7;
l9:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+2,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=(-7085); 
(*f[447])( );     /*LIREPBILAN0(jvj+10,(-7085))*/
pile[v[22]]=75; pile[WZ1]=0; pile[WZ2]=(-89); 
(*f[41])( );     /*SRB0(75,0,(-89),V22)*/
V22=pile[WZ3]; 
pile[v[22]]=V22; 
(*f[40])( );     /*SLG0(V22)*/
goto l8;
l10:if(L!=incon) goto l11;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l11:V21=bh[v[1]][L];
if((V21!=32)) goto l13;
x[jvj+11]=966 ;z[jvj+11]=966;
l12:pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(120,jvj+11,jvj+11)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+11)*/
goto l12;
}
