#include "dx.h"
void DIVFACTEUR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D,T;
int TT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11317;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3514&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; T=pile[v[22]+1]; TT=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=T; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,T,jvj+2)*/
if((x[jvj+2]!=22)) goto l5;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,T,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=102; pile[WZ1]=T; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,T,jvj+5)*/
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,T,jvj+6)*/
x[jvj+8]=x[jvj+5] ;z[jvj+8]=z[jvj+5];
x[jvj+18]=x[jvj+4] ;z[jvj+18]=z[jvj+4];
x[jvj+9]=incon;
if((x[jvj+18]==30)) goto l1;
x[jvj+9]=28 ;z[jvj+9]=28;
l2:x[jvj+11]=incon;
if((x[jvj+18]==30)) goto l3;
x[jvj+11]=30 ;z[jvj+11]=30;
l4:pile[v[22]]=D; pile[WZ1]=jvj+7; 
(*f[1290])( );if(v[102]) goto l5;     /*DEPEXP0(D,jvj+7)*/
pile[v[22]]=jvj+8; pile[WZ2]=jvj+9; pile[WZ3]=jvj+10; 
(*f[4001])( );if(v[102]) goto l5;     /*DIVFACTEURA2(jvj+8,jvj+7,jvj+9,jvj+10)*/
pile[v[22]]=jvj+6; pile[WZ2]=jvj+11; pile[WZ3]=jvj+12; 
(*f[4001])( );if(v[102]) goto l5;     /*DIVFACTEURA2(jvj+6,jvj+7,jvj+11,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+13; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+13)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[255])( );     /*COPEXP0(jvj+12,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+18; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+18,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+16,jvj+14,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+13; pile[WZ4]=jvj+17; pile[WZ5]=TT; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+13,jvj+17,TT)*/
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l1:x[jvj+9]=30 ;z[jvj+9]=30;
goto l2;
l3:x[jvj+11]=28 ;z[jvj+11]=28;
goto l4;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
}
