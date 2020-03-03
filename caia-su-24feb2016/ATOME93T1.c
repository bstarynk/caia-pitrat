#include "dx.h"
void ATOME93T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int WW=0,V18=0,V16=0,V7=0,V8=0,V1=0,V22=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20093;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3188&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1142,R,jvj+11)*/
if((x[jvj+11]!=68)) goto l11;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,R,V7)*/
V7=pile[WZ2]; 
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(R,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l8;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=509; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(509,jvj+7,jvj+8)*/
x[jvj+22]=x[jvj+8] ;z[jvj+22]=z[jvj+8];
l5:if((x[jvj+22]>0)) goto l6;
x[jvj+6]=t[x[jvj+6]];
goto l4;
l2:WW=s[V18];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==WW) goto l3;
l7:x[jvj+22]=t[x[jvj+22]];
goto l5;
l3:V18=t[V18];
l1:if((V18>0)) goto l2;
pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l7;
l6:x[jvj+3]=s[x[jvj+22]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+22];
pile[v[22]]=868; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(868,jvj+3,jvj+9)*/
if((x[jvj+9]!=55)) goto l7;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,jvj+3,V16)*/
V16=pile[WZ2]; 
if((V16<V7)) goto l7;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
pile[v[22]]=R; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(R,jvj+5)*/
V18=x[jvj+5];
goto l1;
l9:x[jvj+10]=t[x[jvj+10]];
l8:if((x[jvj+10]<=0)) goto l11;
x[jvj+12]=s[x[jvj+10]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=55)) goto l9;
pile[v[22]]=870; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(870,jvj+12,V8)*/
V8=pile[WZ2]; 
if((V7>V8)) goto l9;
pile[v[22]]=107; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
V22=x[jvj+15];
l10:if((V22<=0)) goto l9;
V1=s[V22];
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[WZ1]=jvj+12; pile[WZ3]=(-631); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,jvj+12,110,(-631),jvj+21)*/
pile[v[22]]=605; pile[WZ1]=715; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(605,715,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3186; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3186,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20093; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,289,218,20093,jvj+19,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
(*f[481])( );     /*STOCKER0(jvj+16)*/
V22=t[V22];
goto l10;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
