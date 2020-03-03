#include "dx.h"
void ENSHASARD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int K=0,V6=0,V5=0,V7=0,V2=0,V8=0,V9=0,V29=0,V35=0,V31=0,V30=0,V26=0,V24=0,V28=0,V27=0,V36=0,V38=0,V39=0,V41=0,V37=0,V40=0,V33=0;
int C,B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=2;
if(v[0]>99700) (*f[6])( );

C=pile[v[22]]; B=pile[v[22]+1]; A=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=incon;
if((v[48]==0)) goto l1;
if((v[48]<=0)) goto l2;
pile[v[22]]=195; pile[WZ1]=928; pile[WZ2]=jvj+1; 
(*f[33])( );     /*FNDE0(195,928,jvj+1)*/
pile[v[22]]=jvj+1; pile[WZ1]=R; 
(*f[195])( );     /*CPE0(jvj+1,R)*/
l2:K=1;
V6=2*A;
V5=K%V6;
if((V5!=0)) goto l3;
V7=v[49]+1;
v[49]=V7;
l3:if(x[R]!=incon) goto l4;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
x[R]=x[jvj+2] ;z[R]=z[jvj+2];
goto l2;
l4:if((v[48]!=0)) goto l5;
V29=49;
V30=incon;
V35=v[V29];
V31=V35%1000000;
if((V31>0)) goto l8;
V30=137643;
l7:v[V29]=V30;
V26=C+1;
V24=V26-B;
V28=v[49]%V24;
V27=B+V28;
V2=V27;
pile[v[22]]=R; pile[WZ1]=V2; 
(*f[207])( );     /*PLUE2(R,V2)*/
l5:if((v[48]!=0)) goto l6;
for(i=x[R],V8=0;i>0;i=t[i],V8++)  ;
if((V8>=A)) goto l6;
V9=K+1;
pile[v[22]]=R; pile[WZ1]=A; pile[WZ2]=B; pile[WZ3]=C; pile[WZ4]=V9; 
(*f[1363])( );     /*ENSHASARD1(R,A,B,C,V9)*/
l6:v[0]=jvj; v[22]-=4; v[102]=0;return;
l8:V33=V31%100000;
V40=V31/100000;
V37=V33*10;
V41=V33/10000;
V39=V40+V41;
V38=V39%10;
V36=V37+V38;
V30=V36;
goto l7;
}
