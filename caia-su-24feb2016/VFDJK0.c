#include "dx.h"
void VFDJK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V4=0,V8=0,V9=0,V17=0,V14=0,V16=0,V33=0,V30=0,V31=0,V32=0,V34=0,V28=0,V39=0,V36=0,V37=0,V38=0,V40=0;
int UR;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=10588;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==157&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(494,324,jvj+18)*/
l8:if((x[jvj+18]>0)) goto l9;
x[jvj+13]=0 ;z[jvj+13]=0;
pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(311,324,jvj+10)*/
l3:if((x[jvj+10]<=0)) goto l13;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]==508)) goto l5;
if((x[jvj+12]==854)) goto l6;
if((x[jvj+12]!=298)) goto l4;
pile[v[22]]=367; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(367,jvj+11,jvj+16)*/
x[jvj+23]=x[jvj+16] ;z[jvj+23]=z[jvj+16];
l7:if((x[jvj+23]<=0)) goto l4;
x[jvj+17]=s[x[jvj+23]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+23];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+17)*/
x[jvj+23]=t[x[jvj+23]];
goto l7;
l2:x[jvj+22]=t[x[jvj+22]];
l1:if((x[jvj+22]<=0)) goto l19;
x[jvj+7]=s[x[jvj+22]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+22];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+7,V14)*/
V14=pile[WZ2]; 
if((V14!=V28)) goto l2;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(246,jvj+7,V16)*/
V16=pile[WZ2]; 
if((V16!=V17)) goto l2;
pile[v[22]]=109; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(109,jvj+7,jvj+8)*/
l17:x[jvj+24]=t[x[jvj+24]];
l15:if((x[jvj+24]>0)) goto l16;
x[jvj+13]=t[x[jvj+13]];
l13:if((x[jvj+13]>0)) goto l14;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l5:pile[v[22]]=jvj+13; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+11)*/
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l6:pile[v[22]]=345; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(345,jvj+11,jvj+14)*/
x[jvj+15]=x[jvj+14] ;z[jvj+15]=z[jvj+14];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+15)*/
goto l4;
l9:x[jvj+2]=s[x[jvj+18]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+18];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+2,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(109,jvj+2,jvj+3)*/
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(246,jvj+2,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=V6; pile[WZ2]=jvj+4; 
(*f[133])( );if(v[102]) goto l11;     /*TLDEBL1(jvj+3,V6,jvj+4)*/
pile[v[22]]=246; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(246,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V4==V5)) goto l10;
l11:V33=x[jvj+3];
if((UR!=84)) goto l12;
pile[v[22]]=246; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(246,jvj+2,V8)*/
V8=pile[WZ2]; 
V9=x[jvj+2];
pres[V8]=1;
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=V9; 
(*f[134])( );     /*OTA0(494,324,V9)*/
l12:pile[v[22]]=20; pile[WZ1]=10588; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10588,0,V30)*/
V30=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V30; 
(*f[39])( );     /*SDX0(41,1,V30,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V33; pile[WZ2]=V31; 
(*f[39])( );     /*SDX0(20,V33,V31,V32)*/
V32=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V6; pile[WZ2]=V32; 
(*f[39])( );     /*SDX0(41,V6,V32,V34)*/
V34=pile[WZ3]; 
pile[v[22]]=V34; 
(*f[40])( );     /*SLG0(V34)*/
l10:x[jvj+18]=t[x[jvj+18]];
goto l8;
l14:x[jvj+19]=s[x[jvj+13]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+13];
pile[v[22]]=365; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(365,jvj+19,jvj+20)*/
x[jvj+24]=x[jvj+20] ;z[jvj+24]=z[jvj+20];
goto l15;
l16:x[jvj+5]=s[x[jvj+24]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+24];
pile[v[22]]=720; pile[WZ1]=jvj+5; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(720,jvj+5,jvj+9)*/
if((x[jvj+9]==68)) goto l17;
l18:pile[v[22]]=583; pile[WZ1]=jvj+5; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(583,jvj+5,jvj+21)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+5,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(246,jvj+5,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=494; pile[WZ1]=324; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(494,324,jvj+6)*/
x[jvj+22]=x[jvj+6] ;z[jvj+22]=z[jvj+6];
goto l1;
l19:V39=x[jvj+21];
pile[v[22]]=20; pile[WZ1]=10588; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10588,0,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,2,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V39,V37,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(41,V28,V38,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
goto l17;
}
