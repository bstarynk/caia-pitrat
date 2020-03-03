#include "dx.h"
void DEGRINGOLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V19=0,V4=0,V3=0,V2=0,V5=0,Z=0,V11=0,V18=0,V10=0,V21=0;
int I,P,BT,N;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=10826;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==730&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
I=pile[v[22]]; P=pile[v[22]+1]; BT=pile[v[22]+2]; N=pile[v[22]+3]; M=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=Z=incon;
pile[v[22]]=P; pile[WZ1]=BT; pile[WZ3]=jvj+2; 
(*f[45])( );if(v[102]) goto l2;     /*FNDZ0(P,BT,V19,jvj+2)*/
V19=pile[WZ2]; 
V4=V19;
V3=r[V4];
V2=(-V3);
x[jvj+12]=V2 ;z[jvj+12]=(V2<=sepcte) ? V2 : 0;
V5=s[V4];
x[jvj+9]=x[jvj+12] ;z[jvj+9]=z[jvj+12];
Z=V5;
if((I<=0)) goto l2;
V11=t[V4];
if((V11<=0)) goto l2;
pile[v[22]]=358; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(358,P,jvj+3)*/
pile[v[22]]=374; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(374,P,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=374; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+4,374,jvj+11)*/
pile[v[22]]=196; pile[WZ1]=P; pile[WZ2]=358; pile[WZ3]=jvj+3; pile[WZ4]=jvj+11; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(196,P,358,jvj+3,jvj+11,jvj+5)*/
x[jvj+6]=V11 ;z[jvj+6]=0;
V18=I-1;
pile[v[22]]=jvj+5; pile[WZ1]=BT; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+5,BT,jvj+6)*/
pile[v[22]]=V18; pile[WZ1]=jvj+5; pile[WZ2]=BT; pile[WZ3]=N; pile[WZ4]=M; 
(*f[730])( );     /*DEGRINGOLE0(V18,jvj+5,BT,N,M)*/
l4:if((x[jvj+9]==20)) goto l5;
V10=Z;
if((x[jvj+10]=w[x[jvj+9]][3])==incon) goto l7;
V21=V10;
pile[v[22]]=P; pile[WZ1]=158; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(P,158,jvj+9)*/
pile[WZ1]=jvj+10; pile[WZ2]=V21; 
(*f[43])( );     /*CHGC2(P,jvj+10,V21)*/
pile[WZ1]=109; pile[WZ2]=N; 
(*f[35])( );     /*CHGC1(P,109,N)*/
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
l6:pile[v[22]]=P; pile[WZ1]=274; pile[WZ2]=jvj+7; 
(*f[35])( );     /*CHGC1(P,274,jvj+7)*/
pile[WZ1]=109; pile[WZ2]=jvj+8; 
(*f[35])( );     /*CHGC1(P,109,jvj+8)*/
goto l7;
l2:x[M]=x[P] ;z[M]=z[P];
if(x[jvj+9]!=incon) goto l3;
goto l7;
l3:if(Z!=incon) goto l4;
goto l7;
l5:x[jvj+7]=Z ;z[jvj+7]=(Z<=sepcte) ? Z : 0;
x[jvj+8]=incon;
if((Z<=sepcte)) goto l1;
x[jvj+8]=x[N] ;z[jvj+8]=z[N];
goto l6;
}
