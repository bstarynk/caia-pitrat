#include "dx.h"
void AJOUREGBIS1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,T=0,V3=0;
int AT,BL,V,X;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=11572;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1087&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
AT=pile[v[22]]; BL=pile[v[22]+1]; V=pile[v[22]+2]; X=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+18]=0 ;z[jvj+18]=0;
x[jvj+10]=x[jvj+18] ;z[jvj+10]=z[jvj+18];
x[jvj+19]=0 ;z[jvj+19]=0;
x[jvj+11]=x[jvj+19] ;z[jvj+11]=z[jvj+19];
pile[v[22]]=265; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(265,X,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
pile[v[22]]=AT; pile[WZ1]=158; pile[WZ2]=jvj+6; 
(*f[54])( );     /*TRI1(AT,158,jvj+6)*/
pile[v[22]]=X; pile[WZ1]=265; 
(*f[36])( );     /*PLUSC0(X,265,jvj+6)*/
l4:pile[v[22]]=1546; pile[WZ1]=BL; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1546,BL,jvj+7)*/
l5:if((x[jvj+7]>0)) goto l6;
T=(-1);
l13:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=BL; pile[WZ4]=jvj+13; 
(*f[181])( );     /*QUADRI2(100,20,101,BL,jvj+13)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(100,21,140,V,jvj+15)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=44; pile[WZ4]=jvj+17; 
(*f[181])( );     /*QUADRI2(100,20,101,44,jvj+17)*/
pile[v[22]]=jvj+13; pile[WZ1]=111; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(jvj+13,111,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=103; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+14,jvj+15,103,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=984; pile[WZ2]=102; pile[WZ3]=jvj+17; pile[WZ4]=jvj+16; pile[WZ5]=jvj+9; 
(*f[269])( );     /*QUADRI6(100,984,102,jvj+17,jvj+16,jvj+9)*/
if((T<0)) goto l8;
pile[v[22]]=jvj+9; pile[WZ1]=1547; pile[WZ2]=T; 
(*f[43])( );     /*CHGC2(jvj+9,1547,T)*/
l8:V3=0;
if((x[jvj+10]==V3)) goto l9;
pile[v[22]]=jvj+9; pile[WZ1]=763; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(jvj+9,763,jvj+10)*/
l9:if((x[jvj+11]==V3)) goto l10;
pile[v[22]]=jvj+9; pile[WZ1]=159; pile[WZ2]=jvj+11; 
(*f[34])( );     /*CHGC0(jvj+9,159,jvj+11)*/
l10:pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+6,jvj+12)*/
pile[v[22]]=jvj+9; pile[WZ1]=120; 
(*f[35])( );     /*CHGC1(jvj+9,120,jvj+12)*/
l11:pile[v[22]]=jvj+6; pile[WZ1]=120; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+6,120,jvj+9)*/
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=158; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(158,jvj+4,jvj+5)*/
if((x[jvj+5]!=x[AT])) goto l3;
x[jvj+6]=x[jvj+4] ;z[jvj+6]=z[jvj+4];
goto l4;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l6:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=110; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(110,jvj+8,V7)*/
V7=pile[WZ2]; 
if((V7!=V)) goto l7;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+8,V8)*/
V8=pile[WZ2]; 
T=V8;
goto l13;
l7:x[jvj+7]=t[x[jvj+7]];
goto l5;
}
