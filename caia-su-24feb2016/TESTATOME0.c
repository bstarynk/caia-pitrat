#include "dx.h"
void TESTATOME0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V5=0,V6=0,V=0,DX=0,DXX=0,V3=0,V2=0,C=0,V9=0,V10=0,V12=0,V11=0;
int N,NR;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=8;
x[jvj+1]=11329;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==165&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NR=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=N; pile[WZ1]=NR; pile[WZ2]=jvj+3; 
(*f[133])( );if(v[102]) goto l2;     /*TLDEBL1(N,NR,jvj+3)*/
pile[v[22]]=246; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(246,jvj+3,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=218; pile[WZ1]=N; pile[WZ2]=246; pile[WZ3]=V1; pile[WZ4]=jvj+6; 
(*f[192])( );     /*QUADRI4(218,N,246,V1,jvj+6)*/
pile[v[22]]=0; pile[WZ1]=642; pile[WZ2]=jvj+8; 
(*f[46])( );     /*TRI0(0,642,jvj+8)*/
vo[14]=x[jvj+8];vz[14]=0;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=21; 
(*f[42])( );     /*SRA1(135,0,21,V5)*/
V5=pile[WZ3]; 
pile[WZ1]=V5; pile[WZ2]=409; 
(*f[42])( );     /*SRA1(135,V5,409,V6)*/
V6=pile[WZ3]; 
V9=V6-1;
V10=0;
l4:if((V10<=V9)) goto l5;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=(-1); 
(*f[131])( );     /*SMV0((-1),V,DX)*/
V=pile[WZ1]; DX=pile[WZ2]; 
pile[v[22]]=DX; pile[WZ1]=jvj+4; 
(*f[335])( );if(v[102]) goto l2;     /*LANT0(DX,jvj+4,DXX)*/
DXX=pile[WZ2]; 
V3=DXX+1;
V2=bh[v[1]][V3];
C=V2;
pile[v[22]]=100; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=22)) goto l3;
pile[v[22]]=jvj+4; 
(*f[543])( );     /*ETUCONTR0(jvj+4)*/
l3:pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=110; pile[WZ3]=V; pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(101,jvj+4,110,V,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=159; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+6,159,jvj+7)*/
if((C!=43)) goto l1;
(*f[544])( );     /*TESTATOME1(jvj+6)*/
l2:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=jvj+6; 
(*f[545])( );     /*AGIR0(jvj+6)*/
goto l2;
l5:V12=c[0][V10];
V11=V12;
putchar(V11);
V10++;
goto l4;
}
