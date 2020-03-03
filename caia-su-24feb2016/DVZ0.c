#include "dx.h"
void DVZ0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V9=0,V23=0,V24=0,V25=0,V26=0,V27=0,V28=0,V5=0,V12=0,V18=0,V=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V17=0,V40=0;
int TL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10587;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1425&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=357; pile[WZ1]=TL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(357,TL,jvj+2)*/
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=TL; 
(*f[1642])( );     /*DVB0(TL)*/
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(283,TL,jvj+11)*/
l15:if((x[jvj+11]>0)) goto l16;
x[jvj+13]=d[81];z[jvj+13]=0;
l18:if((x[jvj+13]>0)) goto l19;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+3; 
(*f[1600])( );     /*DVA0(jvj+3,jvj+3)*/
x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:if((V5<4)) goto l5;
l17:x[jvj+11]=t[x[jvj+11]];
goto l15;
l5:pile[v[22]]=140; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(140,jvj+4,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=10587; 
(*f[98])( );     /*SRA3(135,V23,10587,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(41,1,V24,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V25,125,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=176; 
(*f[42])( );     /*SRA1(135,V26,176,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; pile[WZ1]=V9; 
(*f[37])( );     /*SRA0(V27,V9,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V28; 
(*f[40])( );     /*SLG0(V28)*/
l6:if((V5!=2)) goto l17;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l17;
l7:V5=g[1];
if((V5<=0)) goto l17;
V6=vg[1];
if((V6!=0)) goto l3;
if((V5<3)) goto l5;
l3:pile[v[22]]=1; pile[WZ1]=10587; pile[WZ2]=0; pile[WZ3]=(-608); pile[WZ4]=jvj+4; pile[WZ5]=jvj+6; 
(*f[232])( );     /*INTERP3(1,10587,0,(-608),jvj+4,jvj+6)*/
if((x[jvj+6]==135)) goto l4;
goto l17;
l9:x[jvj+8]=s[x[jvj+16]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+16];
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(140,jvj+8,V12)*/
V12=pile[WZ2]; 
if((V12==V)) goto l22;
l10:x[jvj+16]=t[x[jvj+16]];
l8:if((x[jvj+16]>0)) goto l9;
pile[v[22]]=583; pile[WZ1]=TL; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(583,TL,jvj+10)*/
if((x[jvj+10]!=10547)) goto l14;
V17=g[2];
if((V17<=0)) goto l22;
V18=vg[2];
if((V18!=0)) goto l11;
if((V17<3)) goto l13;
l11:pile[v[22]]=2; pile[WZ1]=10587; pile[WZ2]=0; pile[WZ3]=(-611); pile[WZ4]=V; pile[WZ5]=jvj+9; 
(*f[1644])( );     /*INTERP21(2,10587,0,(-611),V,jvj+9)*/
if((x[jvj+9]==135)) goto l12;
l22:V40=t[V40];
l20:if((V40>0)) goto l21;
x[jvj+13]=t[x[jvj+13]];
goto l18;
l12:if((V17<4)) goto l13;
goto l22;
l13:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V30; pile[WZ2]=10587; 
(*f[98])( );     /*SRA3(135,V30,10587,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(41,2,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=V32; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V32,125,V33)*/
V33=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V33; pile[WZ2]=100; 
(*f[42])( );     /*SRA1(135,V33,100,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V34,V,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=V35; 
(*f[40])( );     /*SLG0(V35)*/
if((V17!=2)) goto l22;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l22;
l14:pile[v[22]]=10587; pile[WZ1]=V; pile[WZ2]=(-4379); 
(*f[1643])( );     /*FAUTE7(10587,V,(-4379))*/
goto l22;
l16:x[jvj+4]=s[x[jvj+11]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+11];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(158,jvj+4,jvj+12)*/
if((x[jvj+12]!=23)) goto l17;
pile[v[22]]=176; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(176,jvj+4,jvj+5)*/
goto l17;
l19:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=TL; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+14,TL,jvj+15)*/
V40=x[jvj+15];
goto l20;
l21:V=s[V40];
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(283,TL,jvj+7)*/
x[jvj+16]=x[jvj+7] ;z[jvj+16]=z[jvj+7];
goto l8;
}
