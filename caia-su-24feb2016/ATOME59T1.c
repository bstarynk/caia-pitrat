#include "dx.h"
void ATOME59T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int Q=0,V14=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20059;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3173&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l7;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,R,Q)*/
Q=pile[WZ2]; 
x[jvj+14]=incon;
if((Q==1)) goto l1;
if((Q<2)) goto l7;
if((Q<=3)) goto l2;
if((Q<=6)) goto l3;
x[jvj+14]=606 ;z[jvj+14]=606;
l5:x[jvj+5]=d[20];z[jvj+5]=0;
l4:if((x[jvj+5]<=0)) goto l7;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+6,R,jvj+7)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+6; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+6,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+10,R,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+11,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+19)*/
pile[v[22]]=jvj+14; pile[WZ1]=715; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(jvj+14,715,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3172; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3172,246,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=20059; pile[WZ2]=218; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,20059,218,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ2]=jvj+18; pile[WZ3]=159; pile[WZ4]=jvj+20; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+18,159,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+20,289,158,jvj+13)*/
pile[v[22]]=jvj+13; 
(*f[481])( );     /*STOCKER0(jvj+13)*/
l6:x[jvj+5]=t[x[jvj+5]];
goto l4;
l1:x[jvj+14]=607 ;z[jvj+14]=607;
goto l5;
l2:x[jvj+14]=206 ;z[jvj+14]=206;
goto l5;
l3:x[jvj+14]=605 ;z[jvj+14]=605;
goto l5;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
