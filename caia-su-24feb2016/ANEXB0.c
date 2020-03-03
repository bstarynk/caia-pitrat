#include "dx.h"
void ANEXB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V=0,V6=0,V5=0,K=0,V11=0,V12=0,V18=0,V17=0,V3=0,V25=0;
int E,EC;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; EC=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=x[E] ;z[jvj+12]=z[E];
l2:if((x[jvj+12]>0)) goto l3;
v[0]=jvj; v[22]-=2; return;
l1:V5=V6;
l7:pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,K,V5,V12)*/
V12=pile[WZ3]; 
pile[v[22]]=V12; 
(*f[40])( );     /*SLG0(V12)*/
l4:x[jvj+12]=t[x[jvj+12]];
goto l2;
l3:x[jvj+2]=s[x[jvj+12]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+12];
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+2,jvj+6)*/
pile[v[22]]=983; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(983,jvj+6,jvj+7)*/
pile[v[22]]=878; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(878,jvj+7,jvj+8)*/
l8:if((x[jvj+8]<=0)) goto l4;
x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=163; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+9,V18)*/
V18=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(163,jvj+2,V17)*/
V17=pile[WZ2]; 
if((V18==V17)) goto l9;
x[jvj+8]=t[x[jvj+8]];
goto l8;
l5:K=V3;
if((K<=30)) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=EC; pile[WZ2]=jvj+5; 
(*f[505])( );     /*EVCOND0(jvj+1,EC,jvj+5)*/
if((x[jvj+5]==135)) goto l6;
goto l4;
l6:V11=x[jvj+3];
pile[v[22]]=20; pile[WZ1]=V11; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V11,0,V6)*/
V6=pile[WZ3]; 
V5=incon;
pile[v[22]]=163; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+1,V8)*/
V8=pile[WZ2]; 
V=V8;
pile[v[22]]=V6; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V6,V,V5)*/
V5=pile[WZ2]; 
goto l7;
l9:x[jvj+13]=x[jvj+9] ;z[jvj+13]=z[jvj+9];
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(109,jvj+2,jvj+3)*/
x[jvj+1]=x[jvj+13] ;z[jvj+1]=z[jvj+13];
pile[v[22]]=1107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1107,jvj+1,jvj+4)*/
x[jvj+10]=V25=V3=incon;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
x[jvj+11]=x[jvj+4] ;z[jvj+11]=z[jvj+4];
l10:pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+11,jvj+11)*/
pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+10,117,1)*/
goto l10;
l11:if(x[jvj+10]!=incon) goto l15;
l12:if(V25!=incon) goto l14;
l13:if(V3!=incon) goto l5;
goto l4;
l14:V3=V25;
goto l13;
l15:pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+10,V25)*/
V25=pile[WZ2]; 
goto l12;
}
