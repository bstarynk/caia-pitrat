#include "dx.h"
void EXTOUS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V9=0,V10=0,V11=0,V13=0,V14=0,V15=0,V2=0,V6=0,FF=0;
int UR,ND,NS;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11602;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==564&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; ND=pile[v[22]+1]; NS=pile[v[22]+2]; v[22]+=3; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=20; 
(*f[178])( );     /*SPLO0(0,20,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=11602; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(20,11602,V7,V8)*/
V8=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V8; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V8,683,V9)*/
V9=pile[WZ3]; 
pile[v[22]]=V9; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V9,58,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=V10; pile[WZ1]=ND; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V10,ND,41,V11)*/
V11=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V11; pile[WZ2]=642; 
(*f[42])( );     /*SRA1(135,V11,642,V13)*/
V13=pile[WZ3]; 
pile[v[22]]=V13; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V13,58,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=NS; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V14,NS,41,V15)*/
V15=pile[WZ3]; 
pile[v[22]]=V15; 
(*f[40])( );     /*SLG0(V15)*/
pile[v[22]]=jvj+2; 
(*f[924])( );     /*EXTOUSQ0(jvj+2)*/
pile[v[22]]=898; pile[WZ1]=905; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(898,905,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l10;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=162; pile[WZ1]=jvj+4; 
(*f[219])( );if(v[102]) goto l2;     /*FNDC2(162,jvj+4,V2)*/
V2=pile[WZ2]; 
if((V2!=UR)) goto l2;
x[jvj+9]=x[jvj+4] ;z[jvj+9]=z[jvj+4];
pile[v[22]]=905; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(905,jvj+9,FF)*/
FF=pile[WZ2]; 
x[jvj+10]=incon;
if(FF==(-5963)||FF==(-11721)) goto l3;
x[jvj+10]=301 ;z[jvj+10]=301;
l9:pile[v[22]]=jvj+10; pile[WZ1]=FF; pile[WZ2]=jvj+11; 
(*f[553])( );if(v[102]) goto l10;     /*EXPPB3(jvj+10,FF,jvj+11)*/
l7:if((x[jvj+11]>0)) goto l8;
pile[v[22]]=1455; 
(*f[555])( );     /*FAIREXP1(1455)*/
pile[v[22]]=jvj+8; 
(*f[925])( );if(v[102]) goto l10;     /*CONSTRUIRESSAI0(jvj+8)*/
pile[WZ1]=NS; 
(*f[926])( );     /*ARCHIVERED0(jvj+8,NS)*/
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:x[jvj+10]=324 ;z[jvj+10]=324;
goto l9;
l5:x[jvj+5]=s[x[jvj+12]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+12];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+5,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=218; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(218,jvj+5,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; pile[WZ2]=V6; 
(*f[43])( );     /*CHGC2(jvj+7,jvj+6,V6)*/
l6:x[jvj+12]=t[x[jvj+12]];
l4:if((x[jvj+12]>0)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=683; pile[WZ2]=ND; 
(*f[43])( );     /*CHGC2(jvj+7,683,ND)*/
pile[WZ1]=948; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+7,948,67)*/
pile[WZ1]=860; pile[WZ2]=530; 
(*f[35])( );     /*CHGC1(jvj+7,860,530)*/
pile[WZ1]=1383; pile[WZ2]=1384; 
(*f[35])( );     /*CHGC1(jvj+7,1383,1384)*/
pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+7,1056,1060)*/
(*f[554])( );     /*AJEXP1(jvj+7)*/
x[jvj+11]=t[x[jvj+11]];
goto l7;
l8:x[jvj+7]=s[x[jvj+11]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+11];
pile[v[22]]=jvj+7; pile[WZ1]=493; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(jvj+7,493,100)*/
pile[WZ1]=936; pile[WZ2]=1000; 
(*f[43])( );     /*CHGC2(jvj+7,936,1000)*/
x[jvj+12]=x[jvj+2] ;z[jvj+12]=z[jvj+2];
goto l4;
}
