#include "dx.h"
void DAMECOUVRE1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V14=0,V19=0,XX=0,YY=0,H=0,V16=0,V15=0,V18=0,V17=0,V21=0,V20=0,J=0,K=0,V11=0,V10=0,I=0;
int P,N,S;
int NNNE;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=26191;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2809&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; N=pile[v[22]+1]; S=pile[v[22]+2]; NNNE=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=0 ;z[jvj+9]=0;
V11=N*N;
V10=V11-1;
I=0;
l11:if((I<=V10)) goto l1;
x[NNNE]=x[jvj+9] ;z[NNNE]=z[jvj+9];
l12:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l1:x[jvj+2]=0 ;z[jvj+2]=0;
V13=I/N;
V14=I%N;
V19=N-1;
XX=(-1);
l3:YY=(-1);
l2:if((XX!=0)) goto l6;
if((YY!=0)) goto l6;
if((S!=0)) goto l4;
l6:H=1;
l5:if((H>V19)) goto l4;
V16=H*XX;
V15=V14+V16;
if((V15<0)) goto l7;
if((V15>=N)) goto l7;
V18=H*YY;
V17=V13+V18;
if((V17<0)) goto l7;
if((V17>=N)) goto l7;
V21=N*V17;
V20=V15+V21;
pile[v[22]]=jvj+2; pile[WZ1]=V20; 
(*f[207])( );     /*PLUE2(jvj+2,V20)*/
l7:H++;
goto l5;
l4:YY++;
if((YY<=1)) goto l2;
XX++;
if((XX<=1)) goto l3;
x[jvj+6]=0 ;z[jvj+6]=0;
l9:if((x[jvj+2]>0)) goto l10;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=111; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,111,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+24; 
(*f[301])( );     /*TRI11(jvj+23,jvj+8,107,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+24,22,100,jvj+10)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; 
(*f[522])( );     /*PLUB2(jvj+9,jvj+10)*/
I++;
goto l11;
l10:K=s[x[jvj+2]];
x[jvj+3]=0 ;z[jvj+3]=0;
J=1;
l8:if((J<=P)) goto l13;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+5; pile[WZ2]=107; pile[WZ3]=jvj+21; 
(*f[301])( );     /*TRI11(jvj+20,jvj+5,107,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+7; 
(*f[58])( );     /*TRI3(jvj+21,22,100,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[522])( );     /*PLUB2(jvj+6,jvj+7)*/
x[jvj+2]=t[x[jvj+2]];
goto l9;
l13:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+16)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+18; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+18)*/
pile[v[22]]=jvj+16; pile[WZ1]=111; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,111,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+18,jvj+17,jvj+15)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+13; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=111; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+11,111,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=103; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+12,jvj+13,103,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+15; pile[WZ4]=jvj+14; pile[WZ5]=jvj+4; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+15,jvj+14,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[522])( );     /*PLUB2(jvj+3,jvj+4)*/
J++;
goto l8;
}
