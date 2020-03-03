#include "dx.h"
void ANEXA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V11=0,V=0,V7=0,V6=0,V4=0,V18=0,V20=0,V19=0,V14=0,V15=0,V16=0,V21=0,V23=0,V25=0,V33=0,V32=0;
int E,EC;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=18;
if(v[0]>99700) (*f[6])( );

E=pile[v[22]]; EC=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=0; pile[WZ1]=609; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(0,609,jvj+12)*/
pile[v[22]]=510; pile[WZ1]=0; pile[WZ2]=515; pile[WZ3]=0; pile[WZ4]=jvj+12; pile[WZ5]=jvj+5; 
(*f[190])( );     /*QUADRI3(510,0,515,0,jvj+12,jvj+5)*/
x[jvj+17]=x[E] ;z[jvj+17]=z[E];
l9:if((x[jvj+17]>0)) goto l10;
pile[v[22]]=609; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(609,jvj+5,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(515,jvj+5,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(510,jvj+5,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V16; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V16,0,V21)*/
V21=pile[WZ3]; 
pile[WZ1]=V15; pile[WZ2]=V21; 
(*f[39])( );     /*SDX0(41,V15,V21,V23)*/
V23=pile[WZ3]; 
pile[WZ1]=V14; pile[WZ2]=V23; 
(*f[39])( );     /*SDX0(41,V14,V23,V25)*/
V25=pile[WZ3]; 
pile[v[22]]=V25; 
(*f[40])( );     /*SLG0(V25)*/
l15:v[0]=jvj; v[22]-=2; return;
l4:V6=V7;
l6:if(V6!=incon) goto l7;
l1:pile[v[22]]=191; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(191,jvj+1,jvj+2)*/
l14:pile[v[22]]=120; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(120,jvj+1,jvj+11)*/
l12:x[jvj+1]=x[jvj+11] ;z[jvj+1]=z[jvj+11];
pile[v[22]]=191; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(191,jvj+1,jvj+4)*/
if((x[jvj+4]!=68)) goto l1;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(876,jvj+1,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,515,1)*/
l2:pile[v[22]]=876; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(876,jvj+1,V5)*/
V5=pile[WZ2]; 
goto l1;
l5:pile[v[22]]=698; pile[WZ1]=jvj+1; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(698,jvj+1,jvj+6)*/
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+7,jvj+8)*/
V18=x[jvj+8];
V20=x[jvj+6];
pile[v[22]]=jvj+5; pile[WZ1]=609; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,609,1)*/
pile[v[22]]=20; pile[WZ1]=V18; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V18,0,V7)*/
V7=pile[WZ3]; 
V6=incon;
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+3,V11)*/
V11=pile[WZ2]; 
V=V11;
pile[v[22]]=V7; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V7,V,V6)*/
V6=pile[WZ2]; 
l3:if(V6==incon) goto l4;
goto l6;
l7:pile[v[22]]=20; pile[WZ1]=V20; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V20,V6,V19)*/
V19=pile[WZ3]; 
pile[v[22]]=V19; 
(*f[40])( );     /*SLG0(V19)*/
goto l1;
l8:pile[v[22]]=jvj+5; pile[WZ1]=510; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+5,510,1)*/
goto l14;
l10:x[jvj+7]=s[x[jvj+17]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+17];
pile[v[22]]=109; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(109,jvj+7,jvj+13)*/
pile[v[22]]=983; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(983,jvj+13,jvj+14)*/
pile[v[22]]=878; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(878,jvj+14,jvj+15)*/
l16:if((x[jvj+15]<=0)) goto l11;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=163; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+16,V33)*/
V33=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(163,jvj+7,V32)*/
V32=pile[WZ2]; 
if((V33==V32)) goto l17;
x[jvj+15]=t[x[jvj+15]];
goto l16;
l13:x[jvj+11]=x[jvj+9] ;z[jvj+11]=z[jvj+9];
goto l12;
l17:x[jvj+18]=x[jvj+16] ;z[jvj+18]=z[jvj+16];
x[jvj+3]=x[jvj+18] ;z[jvj+3]=z[jvj+18];
pile[v[22]]=1107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1107,jvj+3,jvj+9)*/
pile[v[22]]=jvj+3; pile[WZ1]=EC; pile[WZ2]=jvj+10; 
(*f[505])( );     /*EVCOND0(jvj+3,EC,jvj+10)*/
if((x[jvj+10]==135)) goto l13;
l11:x[jvj+17]=t[x[jvj+17]];
goto l9;
}
