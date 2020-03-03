#include "dx.h"
void ATOME73T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0,V9=0,V13=0,V23=0,V22=0,V25=0,V5=0,V24=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=20073;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3139&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,RR,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=25)) goto l5;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,R,V8)*/
V8=pile[WZ2]; 
if((V8!=2)) goto l5;
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,RR,V9)*/
V9=pile[WZ2]; 
if((V9!=2)) goto l5;
x[jvj+4]=vo[14];z[jvj+4]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+4,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(R,jvj+5)*/
pile[v[22]]=RR; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(RR,jvj+6)*/
for(i=x[jvj+5],V23=0;i>0;i=t[i],V23++)  ;
for(i=x[jvj+6],V22=0;i>0;i=t[i],V22++)  ;
if((V23!=V22)) goto l8;
V25=x[jvj+5];
l7:if((V25>0)) goto l10;
V5=135;
l1:if((V5==135)) goto l2;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l4:pile[v[22]]=RR; pile[WZ1]=jvj+7; pile[WZ2]=67; pile[WZ3]=jvj+8; 
(*f[1931])( );if(v[102]) goto l3;     /*ISOLONS0(RR,jvj+7,67,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; 
(*f[1290])( );if(v[102]) goto l3;     /*DEPEXP0(jvj+7,jvj+9)*/
pile[v[22]]=R; pile[WZ2]=jvj+8; pile[WZ3]=jvj+10; pile[WZ4]=jvj+11; 
(*f[3130])( );if(v[102]) goto l3;     /*SUBSTITUVAR1(R,jvj+9,jvj+8,jvj+10,jvj+11)*/
if((x[jvj+11]==135)) goto l6;
l3:x[jvj+5]=t[x[jvj+5]];
l2:if((x[jvj+5]<=0)) goto l5;
x[jvj+7]=s[x[jvj+5]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+5];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+7]) goto l4;
goto l3;
l6:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+16)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+17)*/
pile[v[22]]=V13; pile[WZ1]=858; pile[WZ2]=jvj+13; 
(*f[46])( );     /*TRI0(V13,858,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,v[13],642,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=3139; pile[WZ2]=246; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,3139,246,jvj+15)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20073; pile[WZ4]=jvj+15; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,1,218,20073,jvj+15,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=159; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+16)*/
pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+17)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+12; 
(*f[1296])( );     /*NOUVCONTR0(jvj+10,jvj+12)*/
goto l3;
l9:V25=t[V25];
goto l7;
l10:V24=s[V25];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V24) goto l9;
l8:V5=134;
goto l1;
}
