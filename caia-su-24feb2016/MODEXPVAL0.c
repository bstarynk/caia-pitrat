#include "dx.h"
void MODEXPVAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V4=0,V19=0,J=0,V20=0,V12=0,V6=0,P=0,V3=0,PP=0,V24=0,V23=0,V25=0,V34=0,V35=0,V36=0,V37=0,K=0,V40=0,V39=0,V38=0;
int A,M;
int EA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11370;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3650&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; M=pile[v[22]+1]; EA=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,A,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=596)) goto l16;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,A,jvj+9)*/
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+9,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,A,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=484)) goto l16;
x[jvj+5]=0 ;z[jvj+5]=0;
P=2;
l8:pile[v[22]]=P; pile[WZ1]=V12; 
(*f[1006])( );if(v[102]) goto l7;     /*POWER0(P,V12,V3)*/
V3=pile[WZ2]; 
V34=V3%M;
V35=V34;
if((V35<=0)) goto l19;
V36=M/2;
if((V35<=V36)) goto l19;
V37=V35-M;
K=V37;
l1:V4=incon;
if((K==(-1))) goto l2;
if((K!=1)) goto l3;
V4=P;
l9:if((V4==(-99999998))) goto l7;
PP=V4;
x[jvj+4]=0 ;z[jvj+4]=0;
V19=PP-1;
x[jvj+2]=d[64];z[jvj+2]=0;
J=0;
l4:if((J<=V19)) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=1260; pile[WZ2]=jvj+15; 
(*f[300])( );     /*TRI10(jvj+4,1260,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=PP; pile[WZ2]=510; pile[WZ3]=jvj+6; 
(*f[189])( );     /*TRI4(jvj+15,PP,510,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
l7:P++;
if((P<=6)) goto l8;
x[jvj+18]=x[jvj+5] ;z[jvj+18]=z[jvj+5];
x[jvj+14]=0 ;z[jvj+14]=0;
x[jvj+17]=x[jvj+18] ;z[jvj+17]=z[jvj+18];
l12:if((x[jvj+17]>0)) goto l13;
x[EA]=x[jvj+14] ;z[EA]=z[jvj+14];
l17:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:V17=2*P;
if((V17<=6)) goto l3;
V4=V17;
goto l9;
l3:V4=(-99999998);
goto l7;
l6:V20=PP+J;
pile[v[22]]=M; pile[WZ1]=V20; pile[WZ2]=V12; 
(*f[1043])( );if(v[102]) goto l5;     /*MODPUIPOS0(M,V20,V12,V6)*/
V6=pile[WZ3]; 
pile[v[22]]=510; pile[WZ1]=J; pile[WZ2]=515; pile[WZ3]=V6; pile[WZ4]=jvj+3; 
(*f[391])( );     /*QUADRI10(510,J,515,V6,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[196])( );     /*PLUF0(jvj+2,jvj+3,jvj+4)*/
l5:J++;
goto l4;
l13:x[jvj+12]=s[x[jvj+17]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+17];
pile[v[22]]=510; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(510,jvj+12,V24)*/
V24=pile[WZ2]; 
x[jvj+16]=x[jvj+18] ;z[jvj+16]=z[jvj+18];
l10:if((x[jvj+16]<=0)) goto l15;
x[jvj+13]=s[x[jvj+16]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+16];
pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(510,jvj+13,V23)*/
V23=pile[WZ2]; 
V25=V24%V23;
if((V25!=0)) goto l11;
if((V23<V24)) goto l14;
l11:x[jvj+16]=t[x[jvj+16]];
goto l10;
l15:pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+12)*/
l14:x[jvj+17]=t[x[jvj+17]];
goto l12;
l16:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l18:K=V35;
goto l1;
l19:if((V35>=0)) goto l18;
V39=abs(V35);
V38=2*V39;
if((V38<M)) goto l18;
V40=V35+M;
K=V40;
goto l1;
}
