#include "dx.h"
void CHERCHEUR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,A=0,M=0,J=0,H=0,V5=0,N=0,V4=0,V6=0,V7=0,NR=0,V3=0,V11=0,V12=0,V14=0,V13=0;
int UR,P;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=4;
x[jvj+1]=11153;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==160&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; P=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
N=incon;
vv[21]=1;
V1=(time(tzt)-inccc);
pile[v[22]]=994; pile[WZ1]=1009; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(994,1009,V1)*/
if(UR!=84&&UR!=78) goto l2;
(*f[184])( );     /*DATE1(A,M,J,H)*/
A=pile[v[22]]; M=pile[WZ1]; J=pile[WZ2]; H=pile[WZ3]; 
pile[v[22]]=72; pile[WZ1]=43; pile[WZ2]=(-89); 
(*f[408])( );     /*EDITOUTPB1(72,43,(-89))*/
pile[v[22]]=994; pile[WZ1]=993; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(994,993,0)*/
pile[WZ1]=1242; 
(*f[43])( );     /*CHGC2(994,1242,0)*/
pile[WZ1]=405; 
(*f[43])( );     /*CHGC2(994,405,0)*/
pile[v[22]]=J; pile[WZ1]=943; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(J,943,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=M; pile[WZ2]=942; pile[WZ3]=jvj+4; 
(*f[189])( );     /*TRI4(jvj+3,M,942,jvj+4)*/
pile[v[22]]=938; pile[WZ1]=H; pile[WZ2]=941; pile[WZ3]=A; pile[WZ4]=jvj+4; pile[WZ5]=jvj+2; 
(*f[190])( );     /*QUADRI3(938,H,941,A,jvj+4,jvj+2)*/
pile[v[22]]=994; pile[WZ1]=1070; pile[WZ2]=jvj+2; 
(*f[35])( );     /*CHGC1(994,1070,jvj+2)*/
l2:pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(993,994,N)*/
N=pile[WZ2]; 
l3:pile[v[22]]=1238; pile[WZ1]=994; 
(*f[71])( );     /*ENLV0(1238,994)*/
V5=incon;
if((P==65)) goto l1;
if((P!=77)) goto l5;
V5=((-5963));
l4:pile[v[22]]=994; pile[WZ1]=905; pile[WZ2]=V5; 
(*f[177])( );     /*CHGC4(994,905,V5)*/
l5:pile[v[22]]=1009; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1009,994,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=643; 
(*f[42])( );     /*SRA1(135,0,643,V6)*/
V6=pile[WZ3]; 
pile[WZ1]=V6; pile[WZ2]=301; 
(*f[42])( );     /*SRA1(135,V6,301,V7)*/
V7=pile[WZ3]; 
V11=V7-1;
V12=0;
l9:if((V12<=V11)) goto l10;
pile[v[22]]=63; 
(*f[346])( );     /*LK1(63)*/
pile[v[22]]=0; 
(*f[135])( );     /*LND3(0,NR)*/
NR=pile[WZ1]; 
V3=V4+NR;
pile[v[22]]=994; pile[WZ1]=1058; pile[WZ2]=V3; 
(*f[43])( );     /*CHGC2(994,1058,V3)*/
l6:if(N!=incon) goto l7;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:V5=((-9009));
goto l4;
l7:vv[2]=1;
pile[v[22]]=N; pile[WZ1]=UR; 
(*f[533])( );     /*DEMARRE0(N,UR)*/
goto l8;
l10:V14=c[0][V12];
V13=V14;
putchar(V13);
V12++;
goto l9;
}
