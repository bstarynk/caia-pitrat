#include "dx.h"
void BOUTE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,K=0,I=0,V9=0,V4=0,V8=0,V7=0,V6=0,V5=0,V3=0,V10=0,V31=0,V32=0,V34=0,V17=0,V23=0,V24=0,V36=0,RR=0,V16=0,V21=0,V22=0,V15=0,V28=0,V27=0,V30=0,V29=0;
int P;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=7;
x[jvj+1]=10053;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==20&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V10=P;
l1:V1=(sw[V10]<<8)|(sw[V10+1]&0xff);
if((V1>sepcte)) goto l5;
K=V1;
V8=K;
if((V8==240)) goto l4;
V3=V10+2;
V16=x[jvj+4]=RR=incon;
V31=(sw[V3]<<8)|(sw[V3+1]&0xff);
V32=V31;
if((V32>0)) goto l13;
if((V32>=0)) goto l8;
pile[v[22]]=V32; pile[WZ1]=3; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(V32,3,jvj+2)*/
V34=V3+2;
t[K]=x[jvj+2];
w[K][0]=V32;
V17=V34;
l7:V23=(sw[V17]<<8)|(sw[V17+1]&0xff);
V24=V23;
V36=V17+2;
s[K]=V24;
RR=V36;
l8:r[K]=1;
if(V16!=incon) goto l11;
l9:if(RR!=incon) goto l6;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:lpr[I]=0;
I++;
l2:if((I<=V5)) goto l3;
lpr[1]=K;
v[11]=V5;
V9=V10+4;
pile[v[22]]=V9; pile[WZ1]=K; pile[WZ2]=1; 
(*f[56])( );if(v[102]) goto l5;     /*LIRB0(V9,K,1,V4)*/
V4=pile[WZ3]; 
v[11]=0;
V10=V4;
goto l1;
l4:V7=V10+2;
V6=(sw[V7]<<8)|(sw[V7+1]&0xff);
V5=V6+1;
I=2;
goto l2;
l6:V10=RR;
goto l1;
l10:V22=V3+2;
V21=(sw[V22]<<8)|(sw[V22+1]&0xff);
pile[v[22]]=V16; pile[WZ1]=V21; pile[WZ2]=3; pile[WZ3]=jvj+3; 
(*f[57])( );     /*TRI2(V16,V21,3,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=2; pile[WZ3]=jvj+5; 
(*f[58])( );     /*TRI3(jvj+3,jvj+4,2,jvj+5)*/
t[K]=x[jvj+5];
w[K][1]=V32;
w[K][0]=V21;
goto l9;
l11:if(x[jvj+4]!=incon) goto l10;
goto l9;
l12:V15=V3+4;
V16=0;
V17=V15;
goto l7;
l13:x[jvj+7]=V32 ;z[jvj+7]=(V32<=sepcte) ? V32 : 0;
x[jvj+4]=x[jvj+7] ;z[jvj+4]=z[jvj+7];
if((x[jvj+4]!=23)) goto l12;
V28=V3+4;
V27=(sw[V28]<<8)|(sw[V28+1]&0xff);
V30=V3+6;
pile[v[22]]=V27; pile[WZ1]=4; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(V27,4,jvj+6)*/
V29=x[jvj+6];
V16=V29;
V17=V30;
w[K][2]=V27;
goto l7;
}
