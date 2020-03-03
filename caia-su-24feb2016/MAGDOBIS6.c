#include "dx.h"
void MAGDOBIS6(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V2=0,V11=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=14;
x[jvj+1]=26210;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2891&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNE=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=0 ;z[jvj+2]=0;
I=0;
l3:V11=I+1;
l4:if((V11<=7)) goto l1;
I++;
if((I<=7)) goto l3;
x[NNNE]=x[jvj+2] ;z[NNNE]=z[jvj+2];
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(1,I,(-630),V2)*/
V2=pile[WZ3]; 
pile[WZ1]=V11; 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(1,V11,(-630),V3)*/
V3=pile[WZ3]; 
if((V2!=V3)) goto l2;
pile[v[22]]=2; pile[WZ1]=I; 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(2,I,(-630),V4)*/
V4=pile[WZ3]; 
pile[WZ1]=V11; 
(*f[203])( );if(v[102]) goto l2;     /*FTAB0(2,V11,(-630),V5)*/
V5=pile[WZ3]; 
if((V4==V5)) goto l7;
l2:pile[v[22]]=1; pile[WZ1]=I; pile[WZ2]=(-630); 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(1,I,(-630),V6)*/
V6=pile[WZ3]; 
pile[v[22]]=2; pile[WZ1]=V11; 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(2,V11,(-630),V7)*/
V7=pile[WZ3]; 
if((V6!=V7)) goto l5;
pile[WZ1]=I; 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(2,I,(-630),V8)*/
V8=pile[WZ3]; 
pile[v[22]]=1; pile[WZ1]=V11; 
(*f[203])( );if(v[102]) goto l5;     /*FTAB0(1,V11,(-630),V9)*/
V9=pile[WZ3]; 
if((V8==V9)) goto l7;
l5:V11++;
goto l4;
l7:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+4)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+9; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+11; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=111; pile[WZ2]=jvj+10; 
(*f[54])( );     /*TRI1(jvj+9,111,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+11,jvj+10,jvj+8)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+12; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+12)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V11; pile[WZ4]=jvj+14; 
(*f[192])( );     /*QUADRI4(100,41,130,V11,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+14,jvj+13,jvj+6)*/
pile[v[22]]=jvj+4; pile[WZ1]=111; pile[WZ2]=jvj+5; 
(*f[54])( );     /*TRI1(jvj+4,111,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=103; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+5,jvj+6,103,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+8; pile[WZ4]=jvj+7; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+8,jvj+7,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
goto l5;
}
