#include "dx.h"
void ARROWS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V18=0,P=0,V15=0,V14=0,V17=0,V16=0,V20=0,V19=0,V12=0,V11=0,I=0,V9=0,V10=0,V3=0,K=0,IX=0,IY=0;
int M,N;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=26109;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2427&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; N=pile[v[22]+1]; NNNE=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=0 ;z[jvj+5]=0;
V12=M*N;
V11=V12-1;
I=0;
l9:if((I<=V11)) goto l11;
x[NNNE]=x[jvj+5] ;z[NNNE]=z[jvj+5];
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:V4=1;
l3:V5=incon;
if((K==1)) goto l4;
if((K==3)) goto l5;
V5=0;
l12:IX=V4;
IY=V5;
x[jvj+2]=0 ;z[jvj+2]=0;
V18=M-1;
P=1;
l6:if((P<=V18)) goto l8;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[299])( );     /*COPEL0(jvj+2,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+10)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+17; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+17)*/
pile[v[22]]=jvj+15; pile[WZ1]=111; pile[WZ2]=jvj+16; 
(*f[54])( );     /*TRI1(jvj+15,111,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+17,jvj+16,jvj+14)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1214; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,1214,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=111; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(jvj+18,111,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+20; 
(*f[301])( );     /*TRI11(jvj+19,jvj+4,107,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+12; 
(*f[58])( );     /*TRI3(jvj+20,22,100,jvj+12)*/
pile[v[22]]=jvj+10; pile[WZ1]=111; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+10,111,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=103; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+11,jvj+12,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+14; pile[WZ4]=jvj+13; pile[WZ5]=jvj+6; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+14,jvj+13,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[522])( );     /*PLUB2(jvj+5,jvj+6)*/
l10:I++;
goto l9;
l2:V4=(-1);
goto l3;
l4:V5=1;
goto l12;
l5:V5=(-1);
goto l12;
l8:V15=P*IX;
V14=V9+V15;
if((V14<0)) goto l7;
if((V14>=M)) goto l7;
V17=P*IY;
V16=V10+V17;
if((V16<0)) goto l7;
if((V16>=N)) goto l7;
V20=M*V16;
V19=V14+V20;
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+7; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+7)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V19; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(100,41,130,V19,jvj+9)*/
pile[v[22]]=jvj+7; pile[WZ1]=111; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(jvj+7,111,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+9; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+9,jvj+8,jvj+3)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[522])( );     /*PLUB2(jvj+2,jvj+3)*/
l7:P++;
goto l6;
l11:V9=I%M;
V10=I/M;
pile[v[22]]=I; pile[WZ1]=(-630); 
(*f[201])( );if(v[102]) goto l10;     /*FCOEFF0(I,(-630),V3)*/
V3=pile[WZ2]; 
K=V3;
V4=incon;
if((K==2)) goto l1;
if((K==4)) goto l2;
V4=0;
goto l3;
}
