#include "dx.h"
void ATOME118T3(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V8=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20118;z[jvj+1]=(-100);
x[jvj+2]=3;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3579&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(870,R,V8)*/
V8=pile[WZ2]; 
if((V8!=2)) goto l11;
pile[v[22]]=868; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(868,R,jvj+8)*/
if((x[jvj+8]==55)) goto l11;
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
x[jvj+7]=0 ;z[jvj+7]=0;
pile[v[22]]=R; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(R,jvj+6)*/
l3:if((x[jvj+6]>0)) goto l4;
pile[v[22]]=R; pile[WZ1]=jvj+9; 
(*f[887])( );     /*VARND0(R,jvj+9)*/
l5:if((x[jvj+4]<=0)) goto l11;
x[jvj+10]=s[x[jvj+4]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+4];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l7;
l6:x[jvj+4]=t[x[jvj+4]];
goto l5;
l2:x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:x[jvj+5]=s[x[jvj+6]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+5)*/
x[jvj+6]=t[x[jvj+6]];
goto l3;
l7:pile[v[22]]=202; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,jvj+10,jvj+11)*/
if((x[jvj+11]!=68)) goto l6;
pile[v[22]]=489; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(489,jvj+10,jvj+12)*/
if((x[jvj+12]!=0)) goto l6;
x[jvj+23]=x[jvj+7] ;z[jvj+23]=z[jvj+7];
l8:if((x[jvj+23]<=0)) goto l6;
x[jvj+13]=s[x[jvj+23]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+23];
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+13]) goto l10;
l9:x[jvj+23]=t[x[jvj+23]];
goto l8;
l10:if((x[jvj+13]==x[jvj+10])) goto l9;
pile[v[22]]=202; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,jvj+13,jvj+14)*/
if((x[jvj+14]!=68)) goto l9;
pile[v[22]]=489; pile[WZ2]=jvj+15; 
(*f[1969])( );     /*FNDEND0(489,jvj+13,jvj+15)*/
if((x[jvj+15]!=0)) goto l9;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+20)*/
pile[WZ1]=jvj+10; pile[WZ3]=(-2829); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,jvj+10,110,(-2829),jvj+21)*/
pile[WZ1]=jvj+13; pile[WZ3]=(-656); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,jvj+13,110,(-656),jvj+22)*/
pile[v[22]]=602; pile[WZ1]=715; pile[WZ2]=jvj+17; 
(*f[54])( );     /*TRI1(602,715,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,v[13],642,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=3497; pile[WZ2]=246; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,3497,246,jvj+19)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20118; pile[WZ4]=jvj+19; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,289,218,20118,jvj+19,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=159; pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+21)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+16,159,jvj+22)*/
(*f[481])( );     /*STOCKER0(jvj+16)*/
goto l9;
l11:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
