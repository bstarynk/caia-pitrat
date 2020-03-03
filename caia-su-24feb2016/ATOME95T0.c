#include "dx.h"
void ATOME95T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V22=0,V3=0,V26=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20095;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3189&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=55)) goto l7;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,R,jvj+4)*/
for(i=x[jvj+4],V6=0;i>0;i=t[i],V6++)  ;
if((V6!=2)) goto l7;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+5,V22)*/
V22=pile[WZ2]; 
x[jvj+6]=d[20];z[jvj+6]=0;
l1:if((x[jvj+6]<=0)) goto l7;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+7,jvj+8)*/
x[jvj+25]=x[jvj+4] ;z[jvj+25]=z[jvj+4];
l3:if((x[jvj+25]<=0)) goto l2;
x[jvj+9]=s[x[jvj+25]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+25];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=26)) goto l4;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+7,jvj+9,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=484)) goto l4;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(jvj+8,jvj+9,jvj+14)*/
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+14,jvj+15)*/
if(x[jvj+15]!=96&&x[jvj+15]!=89&&x[jvj+15]!=41&&x[jvj+15]!=20&&x[jvj+15]!=128&&x[jvj+15]!=570&&x[jvj+15]!=1317) goto l4;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+12,jvj+16)*/
x[jvj+18]=x[jvj+16] ;z[jvj+18]=z[jvj+16];
V26=x[jvj+4];
l5:if((V26<=0)) goto l4;
V3=s[V26];
if((x[jvj+9]==V3)) goto l6;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V22,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3189; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3189,246,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=20095; pile[WZ2]=218; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,20095,218,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ2]=jvj+22; pile[WZ3]=159; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+22,159,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+24,1,158,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1289; pile[WZ2]=jvj+18; 
(*f[1047])( );     /*EVENEMENT0(jvj+17,1289,jvj+18)*/
l6:V26=t[V26];
goto l5;
l2:x[jvj+6]=t[x[jvj+6]];
goto l1;
l4:x[jvj+25]=t[x[jvj+25]];
goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
