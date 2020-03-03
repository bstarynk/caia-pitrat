#include "dx.h"
void COPO1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V=0,V1=0,V19=0,V20=0;
int PP,R,VJ,VI,C,X,Y,VL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=10014;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==2203&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
PP=pile[v[22]]; R=pile[v[22]+1]; VJ=pile[v[22]+2]; VI=pile[v[22]+3]; C=pile[v[22]+4]; X=pile[v[22]+5]; Y=pile[v[22]+6]; VL=pile[v[22]+7]; v[22]+=8; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[Y] ;z[jvj+3]=z[Y];
x[jvj+6]=x[X] ;z[jvj+6]=z[X];
V20=C;
V19=VI;
l1:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(120,jvj+3,jvj+4)*/
(*f[1817])( );     /*NOUV2(W)*/
W=pile[v[22]]; 
l3:
(*f[1817])( );     /*NOUV2(V)*/
V=pile[v[22]]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=10426; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,10426,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V19; pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(100,21,140,V19,jvj+18)*/
pile[WZ3]=(-592); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,(-592),jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=103; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+18,jvj+17,jvj+14)*/
pile[WZ1]=89; pile[WZ2]=162; pile[WZ3]=V20; pile[WZ4]=jvj+21; 
(*f[272])( );     /*QUADRI9(100,89,162,V20,jvj+21)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-596); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(100,21,140,(-596),jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=103; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,103,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+21; pile[WZ4]=jvj+20; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+21,jvj+20,jvj+15)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+24)*/
pile[WZ3]=(-593); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(100,21,140,(-593),jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=103; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+22,103,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+23; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+24,jvj+23,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=(-20); pile[WZ2]=113; pile[WZ3]=jvj+12; 
(*f[180])( );     /*TRIENS0(jvj+11,(-20),113,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=39; pile[WZ2]=111; pile[WZ3]=jvj+13; pile[WZ4]=jvj+12; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(100,39,111,jvj+13,jvj+12,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=114; pile[WZ2]=jvj+14; 
(*f[36])( );     /*PLUSC0(jvj+5,114,jvj+14)*/
pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+5,114,jvj+15)*/
pile[v[22]]=R; pile[WZ1]=105; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(R,105,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=123; pile[WZ2]=PP; 
(*f[35])( );     /*CHGC1(jvj+5,123,PP)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=jvj+6; pile[WZ3]=W; pile[WZ4]=V; 
(*f[2084])( );     /*COPK0(PP,R,jvj+6,W,V)*/
if((x[VL]==395)) goto l4;
pile[v[22]]=331; pile[WZ1]=VL; 
(*f[219])( );if(v[102]) goto l5;     /*FNDC2(331,VL,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+9)*/
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+9,jvj+10)*/
V19=W;
V20=V1;
x[jvj+6]=x[jvj+10] ;z[jvj+6]=z[jvj+10];
x[jvj+3]=x[jvj+9] ;z[jvj+3]=z[jvj+9];
goto l1;
l2:W=VJ;
goto l3;
l4:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(120,jvj+3,jvj+7)*/
pile[v[22]]=102; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+7,jvj+8)*/
pile[v[22]]=PP; pile[WZ1]=R; pile[WZ2]=VJ; pile[WZ3]=W; pile[WZ4]=jvj+8; pile[WZ5]=jvj+7; pile[v[22]+6]=VL; 
(*f[2160])( );     /*COPO0(PP,R,VJ,W,jvj+8,jvj+7,VL)*/
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=8; return;
}
