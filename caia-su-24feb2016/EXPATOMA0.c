#include "dx.h"
void EXPATOMA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V5=0,V7=0,V9=0,V10=0,V11=0,V17=0,V22=0,V23=0,V24=0,V25=0,V16=0,V14=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=13;
x[jvj+1]=11676;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==874&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l1:pile[v[22]]=1580; pile[WZ1]=924; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1580,924,jvj+2)*/
pile[v[22]]=642; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(642,jvj+2,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=69; pile[WZ1]=V1; 
(*f[1180])( );     /*GEREDQ1(69,V1)*/
l2:pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[378])( );     /*CPI0(jvj+2,jvj+3)*/
pile[v[22]]=1576; pile[WZ1]=1567; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(1576,1567,jvj+3)*/
pile[v[22]]=972; pile[WZ1]=924; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(972,924,jvj+4)*/
if((x[jvj+4]<=0)) goto l9;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
V5=x[jvj+5];
x[jvj+7]=x[jvj+5] ;z[jvj+7]=z[jvj+5];
pile[WZ2]=V5; 
(*f[134])( );     /*OTA0(972,924,V5)*/
pile[v[22]]=jvj+3; pile[WZ1]=901; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+3,901,jvj+5)*/
V7=(time(tzt)-inccc);
pile[v[22]]=1202; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1202,jvj+3,jvj+6)*/
x[jvj+9]=incon;
if((x[jvj+6]==1453)) goto l3;
if((x[jvj+6]!=1454)) goto l8;
x[jvj+9]=104 ;z[jvj+9]=104;
l4:pile[v[22]]=683; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(683,jvj+3,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(936,jvj+3,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+3,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[409])( );     /*TRI14(20,jvj+7,jvj+8)*/
pile[v[22]]=V9; pile[WZ1]=V10; pile[WZ2]=jvj+9; pile[WZ3]=jvj+6; pile[WZ4]=V11; pile[WZ5]=jvj+8; pile[v[22]+6]=68; 
(*f[870])( );     /*GLOBEX0(V9,V10,jvj+9,jvj+6,V11,jvj+8,68)*/
pile[v[22]]=V7; pile[WZ1]=jvj+3; 
(*f[871])( );     /*ANARED0(V7,jvj+3)*/
l8:pile[v[22]]=642; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+3,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=972; pile[WZ1]=924; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(972,924,jvj+11)*/
pile[v[22]]=983; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(983,jvj+7,jvj+12)*/
pile[v[22]]=0; pile[WZ1]=V14; pile[WZ2]=jvj+13; 
(*f[1181])( );     /*GERED0(0,V14,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+7; 
(*f[1182])( );     /*SORGERED0(jvj+13,jvj+7)*/
pile[v[22]]=jvj+12; pile[WZ1]=1580; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(jvj+12,1580,jvj+13)*/
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
if((x[jvj+11]!=0)) goto l1;
V16=g[601];
if((V16<=0)) goto l9;
V17=vg[601];
if((V17!=0)) goto l5;
if((V16<3)) goto l7;
l5:pile[v[22]]=601; pile[WZ1]=11676; pile[WZ2]=0; pile[WZ3]=jvj+10; 
(*f[291])( );     /*INTERP4(601,11676,0,jvj+10)*/
if((x[jvj+10]==135)) goto l6;
l9:x[jvj+1]=incon; v[0]=jvj; return;
l3:x[jvj+9]=301 ;z[jvj+9]=301;
goto l4;
l6:if((V16<4)) goto l7;
goto l9;
l7:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V22; pile[WZ2]=11676; 
(*f[98])( );     /*SRA3(135,V22,11676,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=V23; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V23,125,V24)*/
V24=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V24; pile[WZ2]=80; 
(*f[42])( );     /*SRA1(135,V24,80,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
if((V16!=2)) goto l9;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l9;
}
