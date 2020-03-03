#include "dx.h"
void ATOME11T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V5=0,V6=0,V3=0,V9=0,V1=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=20011;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3323&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(870,R,V3)*/
V3=pile[WZ2]; 
if((V3!=1)) goto l8;
pile[v[22]]=1274; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1274,R,V5)*/
V5=pile[WZ2]; 
if((V5!=0)) goto l8;
l2:x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(642,jvj+6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(R,jvj+7)*/
l3:if((x[jvj+7]<=0)) goto l8;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+8)*/
pile[v[22]]=1300; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1300,R,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==25) goto l1;
l6:x[jvj+17]=x[jvj+8] ;z[jvj+17]=z[jvj+8];
l5:if((x[jvj+17]<=0)) goto l4;
x[jvj+9]=s[x[jvj+17]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+17];
pile[v[22]]=R; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[1738])( );if(v[102]) goto l7;     /*EVLM0(R,jvj+3,jvj+9,V1)*/
V1=pile[WZ3]; 
if((V1!=134)) goto l7;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+15; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+15)*/
pile[v[22]]=V9; pile[WZ1]=858; pile[WZ2]=jvj+11; 
(*f[46])( );     /*TRI0(V9,858,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+12; 
(*f[189])( );     /*TRI4(jvj+11,v[13],642,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=3323; pile[WZ2]=246; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,3323,246,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=20011; pile[WZ2]=218; pile[WZ3]=jvj+14; 
(*f[58])( );     /*TRI3(jvj+13,20011,218,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=(-20); pile[WZ2]=jvj+14; pile[WZ3]=159; pile[WZ4]=jvj+16; 
(*f[298])( );     /*TRIENS1(jvj+15,(-20),jvj+14,159,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+16,1,158,jvj+10)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[1569])( );     /*DELIER0(365,jvj+3,jvj+9,jvj+10)*/
l7:x[jvj+17]=t[x[jvj+17]];
goto l5;
l1:pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+3,jvj+4)*/
pile[v[22]]=472; pile[WZ1]=jvj+4; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(472,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V6==1)) goto l6;
l4:x[jvj+7]=t[x[jvj+7]];
goto l3;
l8:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
