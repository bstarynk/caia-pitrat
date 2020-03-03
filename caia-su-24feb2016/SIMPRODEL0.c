#include "dx.h"
void SIMPRODEL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int N=0,V30=0,L=0,V32=0,V35=0,V11=0,V12=0;
int P,Q,A;
int AA;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
if(v[0]>99700) (*f[6])( );

P=pile[v[22]]; Q=pile[v[22]+1]; A=pile[v[22]+2]; AA=pile[v[22]+3]; v[22]+=4; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=x[A] ;z[jvj+14]=z[A];
l10:pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+14,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=Q; pile[WZ1]=P; 
(*f[1006])( );if(v[102]) goto l11;     /*POWER0(Q,P,L)*/
L=pile[WZ2]; 
V32=V30%L;
if((V32!=0)) goto l11;
V35=V30/L;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V35; pile[WZ4]=AA; 
(*f[192])( );     /*QUADRI4(100,41,130,V35,AA)*/
l15:v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+20]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+20];
pile[v[22]]=P; pile[WZ1]=Q; pile[WZ2]=jvj+1; pile[WZ3]=jvj+2; 
(*f[1456])( );if(v[102]) goto l3;     /*SIMPRODEL0(P,Q,jvj+1,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+2)*/
l3:x[jvj+20]=t[x[jvj+20]];
l1:if((x[jvj+20]>0)) goto l2;
for(i=x[jvj+3],V12=0;i>0;i=t[i],V12++)  ;
if((V11!=V12)) goto l14;
x[jvj+6]=0 ;z[jvj+6]=0;
l4:if((x[jvj+3]>0)) goto l5;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=111; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,111,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+6; pile[WZ2]=107; pile[WZ3]=jvj+26; 
(*f[301])( );     /*TRI11(jvj+25,jvj+6,107,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=AA; 
(*f[58])( );     /*TRI3(jvj+26,22,100,AA)*/
goto l15;
l5:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l4;
l7:x[jvj+8]=s[x[jvj+18]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+18];
pile[v[22]]=jvj+8; pile[WZ1]=P; 
(*f[1674])( );     /*SIMPRODX0(jvj+8,P,N)*/
N=pile[WZ2]; 
pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=510; pile[WZ3]=N; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(447,jvj+8,510,N,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+9,jvj+10)*/
x[jvj+18]=t[x[jvj+18]];
l6:if((x[jvj+18]>0)) goto l7;
pile[v[22]]=jvj+10; pile[WZ1]=Q; pile[WZ2]=P; pile[WZ3]=jvj+19; 
(*f[1673])( );     /*SIMPRODELA0(jvj+10,Q,P,jvj+19)*/
x[jvj+13]=0 ;z[jvj+13]=0;
l8:if((x[jvj+19]>0)) goto l9;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=111; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,111,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+13; pile[WZ2]=107; pile[WZ3]=jvj+23; 
(*f[301])( );     /*TRI11(jvj+22,jvj+13,107,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=AA; 
(*f[58])( );     /*TRI3(jvj+23,22,100,AA)*/
goto l15;
l9:x[jvj+11]=s[x[jvj+19]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+19];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+12)*/
x[jvj+19]=t[x[jvj+19]];
goto l8;
l11:pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]==52)) goto l12;
if((x[jvj+16]==486)) goto l13;
if((x[jvj+16]!=485)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+20)*/
for(i=x[jvj+20],V11=0;i>0;i=t[i],V11++)  ;
x[jvj+3]=0 ;z[jvj+3]=0;
goto l1;
l12:pile[v[22]]=102; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+14,jvj+17)*/
x[jvj+14]=x[jvj+17] ;z[jvj+14]=z[jvj+17];
goto l10;
l13:pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+18)*/
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+7]=d[77];z[jvj+7]=0;
goto l6;
l14:v[0]=jvj; v[22]-=4; v[102]=1;return;
}
