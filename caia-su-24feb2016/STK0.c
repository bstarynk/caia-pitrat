#include "dx.h"
void STK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,BLL=0,V1=0,V9=0,V10=0,V11=0,V12=0;
int BL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=4;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V2=x[BL];
BLL=V2;
if((BLL>sepcte)) goto l2;
V1=s[x[BL]];
if((V1!=66)) goto l2;
pile[v[22]]=BL; 
(*f[59])( );     /*LECT0(BL)*/
l2:if((BLL>sepcte)) goto l4;
if((x[BL]==250)) goto l3;
s[x[BL]]=68;
l3:if((BLL<=sepbase)) goto l4;
pile[v[22]]=240; pile[WZ1]=474; pile[WZ2]=BL; 
(*f[36])( );     /*PLUSC0(240,474,BL)*/
l4:if((BLL<=sepbase)) goto l6;
if((BLL<=sepfacts)) goto l1;
if((BLL<=sephist)) goto l5;
l1:if((BLL<=sepnouv)) goto l5;
l6:x[jvj+1]=vo[20];z[jvj+1]=vz[20];
pile[v[22]]=415; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(415,jvj+1,jvj+2)*/
pile[v[22]]=v[14]; pile[WZ1]=499; pile[WZ2]=jvj+4; 
(*f[46])( );     /*TRI0(v[14],499,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+2; pile[WZ2]=415; pile[WZ3]=jvj+3; 
(*f[58])( );     /*TRI3(jvj+4,jvj+2,415,jvj+3)*/
pile[v[22]]=jvj+1; pile[WZ1]=415; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+1,415,jvj+3)*/
l7:if((x[BL]!=250)) goto l8;
pile[v[22]]=20; pile[WZ1]=10794; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10794,0,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; pile[WZ1]=(-5812); 
(*f[37])( );     /*SRA0(V9,(-5812),V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=(-5584); 
(*f[37])( );     /*SRA0(V10,(-5584),V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=(-5813); 
(*f[37])( );     /*SRA0(V11,(-5813),V12)*/
V12=pile[WZ2]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l8:v[0]=jvj; v[22]-=1; return;
l5:pile[v[22]]=BL; pile[WZ1]=68; pile[WZ2]=73; 
(*f[81])( );     /*PLUK0(BL,68,73)*/
goto l6;
}
