#include "dx.h"
void PROCEDURALISA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V16=0;
int E,EE,N,TX,AT,P,Z;
int TA;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=11890;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1510&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; EE=pile[v[22]+1]; N=pile[v[22]+2]; TX=pile[v[22]+3]; AT=pile[v[22]+4]; P=pile[v[22]+5]; Z=pile[v[22]+6]; TA=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+7]=x[TX] ;z[jvj+7]=z[TX];
V16=x[Z];
l7:VV=incon;
pile[v[22]]=N; 
(*f[1239])( );if(v[102]) goto l2;     /*NOUVAR0(N,VV)*/
VV=pile[WZ1]; 
l2:x[jvj+23]=x[E] ;z[jvj+23]=z[E];
l1:if((x[jvj+23]<=0)) goto l5;
x[jvj+3]=s[x[jvj+23]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+23];
for(a=x[EE];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l3;
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=EE; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(EE,jvj+3)*/
if(VV!=incon) goto l4;
l5:x[TA]=x[jvj+7] ;z[TA]=z[jvj+7];
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=8; return;
l3:x[jvj+23]=t[x[jvj+23]];
goto l1;
l4:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=1719)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+7,jvj+8)*/
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+9,jvj+10)*/
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+4,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[255])( );     /*COPEXP0(jvj+11,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1698; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,1698,jvj+14)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+18)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1781; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(100,20,101,1781,jvj+20)*/
pile[v[22]]=jvj+8; pile[WZ1]=160; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+8,160,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=111; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+19,jvj+20,111,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,jvj+12,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+10; pile[WZ4]=jvj+22; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+10,jvj+22,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+18,jvj+17,jvj+13)*/
pile[v[22]]=P; pile[WZ1]=AT; pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(P,AT,jvj+13)*/
V16=x[jvj+7];
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=VV; pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(100,21,140,VV,jvj+7)*/
goto l7;
}
