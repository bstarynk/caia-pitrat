#include "dx.h"
void CREMINES3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int XX=0,V9=0,YY=0,V10=0,V11=0,V2=0,V8=0,V7=0,I=0,V5=0,V6=0;
int N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=26129;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2541&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; NNNE=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=0 ;z[jvj+3]=0;
V8=N*N;
V7=V8-1;
I=0;
l6:if((I<=V7)) goto l8;
x[NNNE]=x[jvj+3] ;z[NNNE]=z[jvj+3];
l9:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l8:V5=I%N;
V6=I/N;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
XX=(-1);
l3:V9=V5+XX;
if((V9<0)) goto l2;
if((V9>=N)) goto l2;
YY=(-1);
l1:if((XX!=0)) goto l5;
if((YY==0)) goto l4;
l5:V10=V6+YY;
if((V10<0)) goto l4;
if((V10>=N)) goto l4;
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,117,1)*/
l4:YY++;
if((YY<=1)) goto l1;
l2:XX++;
if((XX<=1)) goto l3;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+2,V11)*/
V11=pile[WZ2]; 
V2=V11;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=29; pile[WZ4]=jvj+5; 
(*f[181])( );     /*QUADRI2(100,20,101,29,jvj+5)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+10; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+10)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+12; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+12; pile[WZ4]=jvj+11; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+12,jvj+11,jvj+9)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V2; pile[WZ4]=jvj+7; 
(*f[192])( );     /*QUADRI4(100,41,130,V2,jvj+7)*/
pile[v[22]]=jvj+5; pile[WZ1]=111; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(jvj+5,111,jvj+6)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=103; pile[WZ3]=jvj+8; 
(*f[58])( );     /*TRI3(jvj+6,jvj+7,103,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+9,jvj+8,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
l7:I++;
goto l6;
}
