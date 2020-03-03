#include "dx.h"
void ATOME107T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V8=0,V1=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=20107;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3540&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(870,R,V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l6;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+6,V8)*/
V8=pile[WZ2]; 
x[jvj+4]=0 ;z[jvj+4]=0;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
l1:if((x[jvj+3]<=0)) goto l2;
x[jvj+5]=s[x[jvj+3]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+3];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+5)*/
x[jvj+3]=t[x[jvj+3]];
goto l1;
l3:x[jvj+4]=t[x[jvj+4]];
l2:if((x[jvj+4]<=0)) goto l6;
x[jvj+7]=s[x[jvj+4]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+4];
pile[v[22]]=202; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[1948])( );if(v[102]) goto l3;     /*FNDOND0(202,jvj+7,jvj+8)*/
if((x[jvj+8]!=68)) goto l3;
pile[v[22]]=365; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(365,jvj+7,jvj+9)*/
x[jvj+17]=x[jvj+9] ;z[jvj+17]=z[jvj+9];
l4:if((x[jvj+17]<=0)) goto l3;
x[jvj+10]=s[x[jvj+17]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+17];
pile[v[22]]=R; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[1738])( );if(v[102]) goto l5;     /*EVLM0(R,jvj+7,jvj+10,V1)*/
V1=pile[WZ3]; 
if((V1!=134)) goto l5;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+15)*/
pile[WZ1]=jvj+7; pile[WZ3]=(-656); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,jvj+7,110,(-656),jvj+16)*/
pile[v[22]]=V8; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V8,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3540; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3540,246,jvj+14)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20107; pile[WZ4]=jvj+14; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(158,1,218,20107,jvj+14,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=159; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(jvj+11,159,jvj+15)*/
pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+11,159,jvj+16)*/
pile[v[22]]=365; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; pile[WZ3]=jvj+11; 
(*f[1569])( );     /*DELIER0(365,jvj+7,jvj+10,jvj+11)*/
l5:x[jvj+17]=t[x[jvj+17]];
goto l4;
l6:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
