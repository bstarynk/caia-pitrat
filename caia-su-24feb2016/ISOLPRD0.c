#include "dx.h"
void ISOLPRD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0;
int A,B;
int AA,BB;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=11662;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3564&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; B=pile[v[22]+1]; AA=pile[v[22]+2]; BB=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,A,jvj+7)*/
if((x[jvj+7]!=484)) goto l8;
x[AA]=x[A] ;z[AA]=z[A];
l7:x[BB]=x[B] ;z[BB]=z[B];
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+21]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+21];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(jvj+2,jvj+3)*/
if((x[jvj+3]==0)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+2)*/
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
for(i=x[jvj+4],V12=0;i>0;i=t[i],V12++)  ;
if((V12!=1)) goto l11;
if((x[jvj+4]<=0)) goto l11;
x[jvj+22]=s[x[jvj+4]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+4];
pile[v[22]]=B; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(B,jvj+11)*/
x[jvj+5]=0 ;z[jvj+5]=0;
l4:if((x[jvj+10]>0)) goto l5;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+12; 
(*f[299])( );     /*COPEL0(jvj+5,jvj+12)*/
x[AA]=x[jvj+22] ;z[AA]=z[jvj+22];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+13)*/
pile[WZ3]=52; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+15)*/
pile[WZ3]=485; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+12; pile[WZ2]=107; pile[WZ3]=jvj+20; 
(*f[301])( );     /*TRI11(jvj+19,jvj+12,107,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+20,22,100,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=BB; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+13,BB)*/
pile[v[22]]=BB; pile[WZ1]=107; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(BB,107,jvj+11)*/
pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(BB,107,jvj+14)*/
goto l12;
l5:x[jvj+6]=s[x[jvj+10]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+10];
if((x[jvj+6]==x[jvj+22])) goto l6;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+6)*/
l6:x[jvj+10]=t[x[jvj+10]];
goto l4;
l8:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,A,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]==486)) goto l9;
if((x[jvj+9]!=485)) goto l11;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,A,jvj+10)*/
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+21]=x[jvj+10] ;z[jvj+21]=z[jvj+10];
goto l1;
l9:x[AA]=x[A] ;z[AA]=z[A];
goto l7;
l11:x[AA]=x[BB]=incon;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
}
