#include "dx.h"
void ATOME73T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V7=0,V23=0,V22=0,V25=0,V3=0,V24=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=20073;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3140&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6!=2)) goto l7;
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(R,jvj+8)*/
x[jvj+6]=0 ;z[jvj+6]=0;
pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l4;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=509; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1969])( );     /*FNDEND0(509,jvj+4,jvj+5)*/
x[jvj+19]=x[jvj+5] ;z[jvj+19]=z[jvj+5];
l2:if((x[jvj+19]>0)) goto l3;
x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:x[jvj+7]=s[x[jvj+19]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+19];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
x[jvj+19]=t[x[jvj+19]];
goto l2;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l8:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+17)*/
pile[WZ1]=jvj+9; pile[WZ3]=(-631); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,jvj+9,110,(-631),jvj+18)*/
pile[v[22]]=603; pile[WZ1]=715; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(603,715,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3139; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3139,246,jvj+16)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20073; pile[WZ4]=jvj+16; pile[WZ5]=jvj+13; 
(*f[269])( );     /*QUADRI6(158,289,218,20073,jvj+16,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=159; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+17)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+13,159,jvj+18)*/
(*f[481])( );     /*STOCKER0(jvj+13)*/
l5:x[jvj+6]=t[x[jvj+6]];
l4:if((x[jvj+6]<=0)) goto l7;
x[jvj+9]=s[x[jvj+6]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+6];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=25)) goto l5;
pile[v[22]]=870; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,jvj+9,V7)*/
V7=pile[WZ2]; 
if((V7!=2)) goto l5;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(jvj+9,jvj+12)*/
for(i=x[jvj+8],V23=0;i>0;i=t[i],V23++)  ;
for(i=x[jvj+12],V22=0;i>0;i=t[i],V22++)  ;
if((V23!=V22)) goto l10;
V25=x[jvj+8];
l9:if((V25>0)) goto l12;
V3=135;
l6:if((V3==135)) goto l8;
goto l5;
l11:V25=t[V25];
goto l9;
l12:V24=s[V25];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V24) goto l11;
l10:V3=134;
goto l6;
}
