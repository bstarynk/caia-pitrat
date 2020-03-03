#include "dx.h"
void ATOME118T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V1=0,V6=0,V14=0;
int R,DD,D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=22;
x[jvj+1]=20118;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3497&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; DD=pile[v[22]+1]; D=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[D]==x[DD])) goto l9;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6!=2)) goto l9;
pile[v[22]]=202; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,D,jvj+7)*/
if((x[jvj+7]!=68)) goto l9;
pile[WZ1]=DD; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,DD,jvj+8)*/
if((x[jvj+8]!=68)) goto l9;
pile[v[22]]=489; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(489,DD,jvj+9)*/
if((x[jvj+9]!=0)) goto l9;
pile[WZ1]=D; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(489,D,jvj+10)*/
if((x[jvj+10]!=0)) goto l9;
pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(868,R,jvj+11)*/
if((x[jvj+11]==55)) goto l9;
pile[v[22]]=R; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(R,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[D]) goto l5;
l9:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+4]=s[x[jvj+22]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+22];
if((x[jvj+5]!=x[jvj+4])) goto l1;
pile[v[22]]=498; pile[WZ1]=DD; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,DD,jvj+3)*/
pile[v[22]]=688; pile[WZ1]=jvj+3; 
(*f[1975])( );if(v[102]) goto l1;     /*FNDCND0(688,jvj+3,V11)*/
V11=pile[WZ2]; 
if((V11==1)) goto l4;
l1:pile[v[22]]=R; pile[WZ1]=D; pile[WZ2]=jvj+4; pile[WZ3]=DD; pile[WZ4]=jvj+5; 
(*f[3077])( );if(v[102]) goto l8;     /*EVLM1(R,D,jvj+4,DD,jvj+5,V1)*/
V1=pile[WZ5]; 
if((V1==134)) goto l4;
l8:x[jvj+14]=t[x[jvj+14]];
l7:if((x[jvj+14]<=0)) goto l9;
x[jvj+5]=s[x[jvj+14]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+14];
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+6; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+6)*/
x[jvj+22]=x[jvj+6] ;z[jvj+22]=z[jvj+6];
l2:if((x[jvj+22]>0)) goto l3;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+19; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+19)*/
pile[WZ1]=DD; pile[WZ3]=(-2829); pile[WZ4]=jvj+20; 
(*f[270])( );     /*QUADRI7(101,DD,110,(-2829),jvj+20)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+21; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+21)*/
pile[v[22]]=V14; pile[WZ1]=858; pile[WZ2]=jvj+16; 
(*f[46])( );     /*TRI0(V14,858,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,v[13],642,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=3497; pile[WZ2]=246; pile[WZ3]=jvj+18; 
(*f[189])( );     /*TRI4(jvj+17,3497,246,jvj+18)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20118; pile[WZ4]=jvj+18; pile[WZ5]=jvj+15; 
(*f[269])( );     /*QUADRI6(158,1,218,20118,jvj+18,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=159; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+19)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+20)*/
pile[WZ2]=jvj+21; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+21)*/
pile[v[22]]=365; pile[WZ1]=DD; pile[WZ2]=jvj+5; pile[WZ3]=jvj+15; 
(*f[1569])( );     /*DELIER0(365,DD,jvj+5,jvj+15)*/
goto l8;
l4:x[jvj+22]=t[x[jvj+22]];
goto l2;
l5:for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[DD]) goto l6;
goto l9;
l6:x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+13,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=DD; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(365,DD,jvj+14)*/
goto l7;
}
