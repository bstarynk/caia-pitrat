#include "dx.h"
void ATOME138T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=20138;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3637&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=25)) goto l4;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1294,R,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==1340) goto l2;
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+6]=d[20];z[jvj+6]=0;
l1:if((x[jvj+6]<=0)) goto l4;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(jvj+7,R,jvj+8)*/
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=486)) goto l3;
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(268,jvj+7,jvj+11)*/
pile[v[22]]=R; pile[WZ1]=jvj+11; pile[WZ3]=jvj+12; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(R,jvj+11,V15,jvj+12)*/
V15=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+19)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(206,715,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,v[13],642,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=3632; pile[WZ2]=246; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,3632,246,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=20138; pile[WZ2]=218; pile[WZ3]=jvj+18; 
(*f[58])( );     /*TRI3(jvj+17,20138,218,jvj+18)*/
pile[v[22]]=jvj+19; pile[WZ1]=(-20); pile[WZ2]=jvj+18; pile[WZ3]=159; pile[WZ4]=jvj+20; 
(*f[298])( );     /*TRIENS1(jvj+19,(-20),jvj+18,159,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=289; pile[WZ2]=158; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+20,289,158,jvj+14)*/
pile[v[22]]=jvj+14; 
(*f[481])( );     /*STOCKER0(jvj+14)*/
l3:x[jvj+6]=t[x[jvj+6]];
goto l1;
}
