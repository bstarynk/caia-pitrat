#include "dx.h"
void LBAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V3=0,V2=0,DY=0,V26=0,V10=0,V9=0,V20=0,V19=0,V28=0,V38=0,V40=0,V33=0,V34=0,V35=0,V36=0,V37=0,V39=0,V27=0;
int DP,QQ;
int H,DR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
if(v[0]>99700) (*f[6])( );

DP=pile[v[22]]; QQ=pile[v[22]+1]; H=pile[v[22]+2]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=bh[v[1]][DP];
if((V1!=32)) goto l8;
V3=DP+1;
V2=bh[v[1]][V3];
if((V2==32)) goto l8;
pile[v[22]]=DP; pile[WZ1]=jvj+1; 
(*f[79])( );if(v[102]) goto l8;     /*LEXP0(DP,jvj+1,DY)*/
DY=pile[WZ2]; 
V26=bh[v[1]][DY];
if(V26==32||V26==93||V26==44||V26==59) goto l1;
if((V26==45)) goto l3;
if((V26!=60)) goto l8;
V20=DY+1;
V19=bh[v[1]][V20];
if((V19!=45)) goto l8;
pile[v[22]]=V20; pile[WZ1]=jvj+6; 
(*f[79])( );if(v[102]) goto l8;     /*LEXP0(V20,jvj+6,DR)*/
DR=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+7)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=103; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+8,103,jvj+13)*/
pile[v[22]]=100; pile[WZ1]=113; pile[WZ2]=102; pile[WZ3]=jvj+7; pile[WZ4]=jvj+13; pile[WZ5]=H; 
(*f[269])( );     /*QUADRI6(100,113,102,jvj+7,jvj+13,H)*/
x[jvj+9]=113 ;z[jvj+9]=113;
l7:if((x[jvj+9]==x[QQ])) goto l9;
V27=g[14];
if((V27<=0)) goto l9;
V28=vg[14];
if((V28!=0)) goto l4;
if((V27<3)) goto l6;
l4:pile[v[22]]=14; pile[WZ1]=10336; pile[WZ2]=0; pile[WZ3]=(-702); pile[WZ4]=jvj+9; pile[WZ5]=(-682); pile[v[22]+6]=QQ; pile[v[22]+7]=jvj+10; 
(*f[187])( );     /*INTERP0(14,10336,0,(-702),jvj+9,(-682),QQ,jvj+10)*/
if((x[jvj+10]==135)) goto l5;
l9:v[0]=jvj; v[22]-=4; pile[v[22]+3]=DR; v[102]=0;return;
l1:pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+2)*/
DR=DY;
pile[v[22]]=jvj+2; pile[WZ1]=103; pile[WZ2]=jvj+11; 
(*f[54])( );     /*TRI1(jvj+2,103,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+2; pile[WZ4]=jvj+11; pile[WZ5]=H; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+2,jvj+11,H)*/
l2:x[jvj+9]=114 ;z[jvj+9]=114;
goto l7;
l3:V10=DY+1;
V9=bh[v[1]][V10];
if((V9!=62)) goto l8;
pile[v[22]]=V10; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l8;     /*LEXP0(V10,jvj+3,DR)*/
DR=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+1,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=103; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+5,103,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=114; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+12; pile[WZ5]=H; 
(*f[269])( );     /*QUADRI6(100,114,102,jvj+4,jvj+12,H)*/
goto l2;
l5:if((V27<4)) goto l6;
goto l9;
l6:V38=x[jvj+9];
V40=x[QQ];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=10336; 
(*f[98])( );     /*SRA3(135,V33,10336,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V34,125,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; pile[WZ1]=(-4383); 
(*f[37])( );     /*SRA0(V35,(-4383),V36)*/
V36=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V38; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(20,V38,V36,V37)*/
V37=pile[WZ3]; 
pile[WZ1]=V40; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V40,V37,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
if((V27!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l9;
l8:x[H]=DR=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
}
