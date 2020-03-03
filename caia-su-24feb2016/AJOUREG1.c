#include "dx.h"
void AJOUREG1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int AT,BL,V,X,XP;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=11044;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1139&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
AT=pile[v[22]]; BL=pile[v[22]+1]; V=pile[v[22]+2]; X=pile[v[22]+3]; XP=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(265,X,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=AT; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(AT,158,jvj+6)*/
pile[v[22]]=X; pile[WZ1]=265; 
(*f[36])( );     /*PLUSC0(X,265,jvj+6)*/
l4:pile[v[22]]=jvj+6; pile[WZ1]=XP; pile[WZ2]=120; pile[WZ3]=68; pile[WZ4]=jvj+7; 
(*f[1436])( );if(v[102]) goto l5;     /*CHERSAUT0(jvj+6,XP,120,68,jvj+7)*/
x[jvj+8]=366 ;z[jvj+8]=366;
l6:x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=jvj+7; pile[WZ1]=BL; pile[WZ2]=jvj+8; pile[WZ3]=jvj+9; pile[WZ4]=V; pile[WZ5]=68; pile[v[22]+6]=jvj+10; 
(*f[1408])( );if(v[102]) goto l9;     /*AJOUSAUT0(jvj+7,BL,jvj+8,jvj+9,V,68,jvj+10)*/
x[jvj+11]=incon;
if((x[jvj+10]==x[jvj+6])) goto l7;
x[jvj+11]=366 ;z[jvj+11]=366;
l10:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=BL; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,BL,jvj+14)*/
pile[WZ3]=44; pile[WZ4]=jvj+18; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+18)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=111; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,111,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=103; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+15,jvj+16,103,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+18; pile[WZ4]=jvj+17; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+18,jvj+17,jvj+13)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+11,jvj+10,jvj+12)*/
pile[v[22]]=jvj+13; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+13,120,jvj+12)*/
l8:pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+10,jvj+11,jvj+13)*/
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[AT])) goto l3;
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l5:x[jvj+7]=x[jvj+6] ;z[jvj+7]=z[jvj+6];
x[jvj+8]=120 ;z[jvj+8]=120;
goto l6;
l7:x[jvj+11]=120 ;z[jvj+11]=120;
goto l10;
}
