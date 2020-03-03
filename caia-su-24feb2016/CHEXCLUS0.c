#include "dx.h"
void CHEXCLUS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,K=0,V2=0,V1=0,V7=0,V8=0;
int B;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=6;
x[jvj+1]=10989;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1227&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=90; 
(*f[1487])( );     /*SORES1(90)*/
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(642,jvj+2,V4)*/
V4=pile[WZ2]; 
K=0;
l1:if((K>V4)) goto l3;
V2=tp[K];
if((V2!=616)) goto l2;
V1=tu[K];
if((V1==0)) goto l2;
if((V2==0)) goto l2;
pile[v[22]]=K; pile[WZ1]=B; pile[WZ2]=jvj+3; pile[WZ3]=jvj+4; 
(*f[1488])( );if(v[102]) goto l2;     /*STOLAV0(K,B,jvj+3,jvj+4)*/
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+3,jvj+5)*/
pile[v[22]]=15; pile[WZ1]=0; pile[WZ2]=64; 
(*f[41])( );     /*SRB0(15,0,64,V7)*/
V7=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=1051; 
(*f[42])( );     /*SRA1(135,V7,1051,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=V8; 
(*f[40])( );     /*SLG0(V8)*/
pile[v[22]]=K; 
(*f[1187])( );     /*SORELT0(K)*/
pile[v[22]]=158; pile[WZ1]=616; pile[WZ2]=218; pile[WZ3]=jvj+3; pile[WZ4]=jvj+6; 
(*f[181])( );     /*QUADRI2(158,616,218,jvj+3,jvj+6)*/
pile[v[22]]=B; pile[WZ1]=1051; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(B,1051,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+5,1051,jvj+4)*/
l2:K++;
goto l1;
l3:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
