#include "dx.h"
void LIREJOURNAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V2=0,L=0,V25=0,V18=0,V17=0,V1=0,V13=0,V=0,V16=0,V15=0,V24=0;
int LL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=10967;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==144&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
LL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
L=incon;
V3=LL+1;
V2=V3+1;
L=V2;
V1=bh[v[1]][L];
if((V1!=43)) goto l3;
x[jvj+5]=994 ;z[jvj+5]=994;
l2:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+5,jvj+5)*/
pile[v[22]]=jvj+5; 
(*f[440])( );     /*LIRELTDEJOURNAL0(jvj+5)*/
goto l2;
l3:if(V1!=32&&V1!=45) goto l8;
V16=L+1;
V15=bh[v[1]][V16];
if((V15==32)) goto l4;
pile[v[22]]=L; 
(*f[107])( );     /*CRC0(L,V13)*/
V13=pile[WZ1]; 
pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+4; 
(*f[78])( );if(v[102]) goto l4;     /*SMA0(L,64,67,jvj+4)*/
V18=V13+1;
V17=bh[v[1]][V18];
if((V17!=32)) goto l1;
pile[v[22]]=jvj+4; pile[WZ1]=(-7085); pile[WZ2]=V1; 
(*f[441])( );     /*LIREPBJOURNAL0(jvj+4,(-7085),V1)*/
l1:if((V17==32)) goto l4;
pile[v[22]]=V13; 
(*f[258])( );     /*SMV1(V13,V)*/
V=pile[WZ1]; 
pile[v[22]]=jvj+4; pile[WZ1]=V; pile[WZ2]=V1; 
(*f[441])( );     /*LIREPBJOURNAL0(jvj+4,V,V1)*/
l4:if((V15!=32)) goto l8;
x[jvj+6]=994 ;z[jvj+6]=994;
l5:pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+6,jvj+2)*/
pile[v[22]]=191; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(191,jvj+2,jvj+3)*/
l6:x[jvj+6]=x[jvj+2] ;z[jvj+6]=z[jvj+2];
goto l5;
l7:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(109,jvj+2,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=(-7085); pile[WZ2]=V1; 
(*f[441])( );     /*LIREPBJOURNAL0(jvj+7,(-7085),V1)*/
if((V1!=32)) goto l6;
pile[v[22]]=75; pile[WZ1]=0; pile[WZ2]=38; 
(*f[41])( );     /*SRB0(75,0,38,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
goto l6;
l8:if(L!=incon) goto l9;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:V24=bh[v[1]][L];
if(V24!=32&&V24!=45) goto l11;
x[jvj+8]=994 ;z[jvj+8]=994;
l10:pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+8,jvj+8)*/
pile[v[22]]=191; 
(*f[71])( );     /*ENLV0(191,jvj+8)*/
goto l10;
}
