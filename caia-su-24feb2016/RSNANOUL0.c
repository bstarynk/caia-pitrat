#include "dx.h"
void RSNANOUL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V34=0,V30=0,V31=0,V32=0,V33=0,V1=0,AA=0,V36=0,V8=0,V7=0,V13=0,V42=0,V10=0,V37=0,V38=0,V40=0,V9=0,V46=0,V45=0,V49=0,V47=0,V48=0,V16=0,V43=0;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=20;
if(v[0]>99700) (*f[6])( );

S=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V1=g[606];
if((V1<=0)) goto l11;
V2=vg[606];
if((V2!=0)) goto l1;
if((V1<3)) goto l3;
l1:pile[v[22]]=606; pile[WZ1]=10048; pile[WZ2]=0; pile[WZ3]=(-657); pile[WZ4]=S; pile[WZ5]=jvj+1; 
(*f[232])( );     /*INTERP3(606,10048,0,(-657),S,jvj+1)*/
if((x[jvj+1]==135)) goto l2;
l11:pile[v[22]]=1260; pile[WZ1]=S; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1260,S,jvj+11)*/
l12:if((x[jvj+11]>0)) goto l13;
pile[v[22]]=763; pile[WZ1]=S; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(763,S,jvj+14)*/
l17:if((x[jvj+14]>0)) goto l18;
pile[v[22]]=763; pile[WZ1]=S; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(763,S,jvj+15)*/
l20:if((x[jvj+15]>0)) goto l21;
v[0]=jvj; v[22]-=1; return;
l2:if((V1<4)) goto l3;
goto l11;
l3:pile[v[22]]=576; pile[WZ1]=S; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(576,S,jvj+2)*/
V34=x[jvj+2];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=10048; 
(*f[98])( );     /*SRA3(135,V30,10048,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V31,125,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V34; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(20,V34,V32,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=V33; 
(*f[40])( );     /*SLG0(V33)*/
l4:if((V1!=2)) goto l11;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l11;
l5:V7=V8;
l15:pile[v[22]]=41; pile[WZ1]=V16; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,V16,V7,V10)*/
V10=pile[WZ3]; 
V9=incon;
pile[v[22]]=1261; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1261,jvj+3,jvj+5)*/
for(i=x[jvj+5],V13=0;i>0;i=t[i],V13++)  ;
if((V13>1)) goto l6;
V9=V10;
l16:pile[v[22]]=V9; 
(*f[40])( );     /*SLG0(V9)*/
if((x[jvj+13]==0)) goto l14;
V46=x[jvj+13];
pile[v[22]]=23; pile[WZ1]=V46; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(23,V46,0,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=V45; 
(*f[40])( );     /*SLG0(V45)*/
l14:x[jvj+11]=t[x[jvj+11]];
goto l12;
l6:V42=x[jvj+5];
pile[v[22]]=V10; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(V10,123,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=V13; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V37,V13,41,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V38,125,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V42; pile[WZ2]=V40; 
(*f[39])( );     /*SDX0(23,V42,V40,V9)*/
V9=pile[WZ3]; 
goto l16;
l8:x[jvj+6]=s[x[jvj+19]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+19];
pile[v[22]]=191; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(191,jvj+6,jvj+7)*/
if(x[jvj+7]==68||x[jvj+7]==365) goto l9;
l10:pile[v[22]]=jvj+10; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+6)*/
l9:x[jvj+19]=t[x[jvj+19]];
l7:if((x[jvj+19]>0)) goto l8;
if((x[jvj+10]==0)) goto l19;
V49=x[jvj+10];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,0,846,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V49; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(23,V49,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; 
(*f[40])( );     /*SLG0(V48)*/
l19:x[jvj+14]=t[x[jvj+14]];
goto l17;
l13:x[jvj+3]=s[x[jvj+11]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+11];
pile[v[22]]=158; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(158,jvj+3,jvj+12)*/
pile[v[22]]=1260; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1260,jvj+3,jvj+13)*/
for(i=x[jvj+13],V16=0;i>0;i=t[i],V16++)  ;
V43=x[jvj+12];
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V43,0,V8)*/
V8=pile[WZ3]; 
V7=incon;
pile[v[22]]=218; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(218,jvj+3,jvj+4)*/
AA=x[jvj+4];
V36=AA;
pile[v[22]]=20; pile[WZ1]=V36; pile[WZ2]=V8; 
(*f[39])( );     /*SDX0(20,V36,V8,V7)*/
V7=pile[WZ3]; 
goto l15;
l18:x[jvj+8]=s[x[jvj+14]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+14];
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=1260; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1260,jvj+8,jvj+9)*/
x[jvj+19]=x[jvj+9] ;z[jvj+19]=z[jvj+9];
goto l7;
l21:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=1260; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1260,jvj+16,jvj+17)*/
x[jvj+20]=x[jvj+17] ;z[jvj+20]=z[jvj+17];
l22:if((x[jvj+20]>0)) goto l23;
x[jvj+15]=t[x[jvj+15]];
goto l20;
l23:x[jvj+18]=s[x[jvj+20]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+20];
pile[v[22]]=191; pile[WZ1]=jvj+18; 
(*f[71])( );     /*ENLV0(191,jvj+18)*/
x[jvj+20]=t[x[jvj+20]];
goto l22;
}
