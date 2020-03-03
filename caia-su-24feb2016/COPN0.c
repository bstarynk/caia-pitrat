#include "dx.h"
void COPN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,C=0,W=0;
int PP,R,VJ,VI,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=10580;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==2159&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
PP=pile[v[22]]; R=pile[v[22]+1]; VJ=pile[v[22]+2]; VI=pile[v[22]+3]; X=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(120,X,jvj+2)*/
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
l2:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,X,jvj+3)*/
pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(120,jvj+3,jvj+4)*/
C=44;
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
l6:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+11; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+11)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+16)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+14; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=103; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+16,jvj+15,jvj+12)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=C; pile[WZ4]=jvj+19; 
(*f[272])( );     /*QUADRI9(100,89,162,C,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=103; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+19,jvj+18,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=W; pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,W,jvj+22)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=103; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(jvj+20,103,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+21; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+22,jvj+21,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+10; 
(*f[180])( );     /*TRIENS0(jvj+9,(-20),113,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+11; pile[WZ4]=jvj+10; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+11,jvj+10,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=114; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+5,114,jvj+12)*/
pile[WZ2]=jvj+13; 
(*f[36])( );     /*PLUSC0(jvj+5,114,jvj+13)*/
pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(R,105,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=123; pile[WZ2]=PP; 
(*f[35])( );     /*CHGC1(jvj+5,123,PP)*/
if((C!=44)) goto l4;
pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(120,X,jvj+6)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=W; pile[WZ4]=jvj+6; 
(*f[2159])( );     /*COPN0(PP,R,VJ,W,jvj+6)*/
l4:pile[v[22]]=120; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,X,jvj+7)*/
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+7,jvj+8)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ3]=V; pile[WZ4]=VI; 
(*f[2084])( );     /*COPK0(PP,R,jvj+8,V,VI)*/
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l1:V=VI;
goto l2;
l3:C=41;
W=VJ;
goto l6;
}
