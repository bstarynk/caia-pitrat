#include "dx.h"
void SORGRAMI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int J=0,V1=0,V6=0,V10=0,V11=0,I=0,V5=0,V3=0,V8=0,V9=0;
int N;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=11614;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==338&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=N; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[718])( );     /*ATTRIBOBJGRAM0(N,jvj+2,jvj+3)*/
if((x[jvj+2]==0)) goto l4;
pile[v[22]]=0; pile[WZ1]=N; 
(*f[719])( );if(v[102]) goto l4;     /*SORGRAM0(0,N,J)*/
J=pile[WZ2]; 
pile[v[22]]=J; 
(*f[40])( );     /*SLG0(J)*/
l4:x[jvj+10]=x[jvj+3] ;z[jvj+10]=z[jvj+3];
l3:if((x[jvj+10]<=0)) goto l8;
x[jvj+5]=s[x[jvj+10]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+10];
if((V6=w[x[jvj+5]][1])==incon) goto l5;
if((V6!=20)) goto l5;
if((x[jvj+5]==1640)) goto l5;
pile[v[22]]=jvj+5; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(jvj+5,N,jvj+6)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+5; 
(*f[98])( );     /*SRA3(135,0,jvj+5,V10)*/
V10=pile[WZ3]; 
pile[v[22]]=V10; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V10,58,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=V11; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V11,32,I)*/
I=pile[WZ2]; 
pile[v[22]]=I; pile[WZ1]=jvj+6; 
(*f[719])( );if(v[102]) goto l5;     /*SORGRAM0(I,jvj+6,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
l8:x[jvj+11]=x[jvj+3] ;z[jvj+11]=z[jvj+3];
l6:if((x[jvj+11]>0)) goto l7;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:x[jvj+10]=t[x[jvj+10]];
goto l3;
l7:x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
if((V3=w[x[jvj+7]][1])==incon) goto l9;
if((V3!=23)) goto l9;
pile[v[22]]=jvj+7; pile[WZ1]=N; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+7,N,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
if((x[jvj+9]==0)) goto l9;
pile[v[22]]=0; pile[WZ1]=1; 
(*f[178])( );     /*SPLO0(0,1,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V8; pile[WZ2]=jvj+7; 
(*f[42])( );     /*SRA1(135,V8,jvj+7,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
l1:if((x[jvj+9]<=0)) goto l9;
x[jvj+4]=s[x[jvj+9]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+9];
pile[v[22]]=0; pile[WZ1]=jvj+4; 
(*f[719])( );if(v[102]) goto l2;     /*SORGRAM0(0,jvj+4,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
l2:x[jvj+9]=t[x[jvj+9]];
goto l1;
l9:x[jvj+11]=t[x[jvj+11]];
goto l6;
}
