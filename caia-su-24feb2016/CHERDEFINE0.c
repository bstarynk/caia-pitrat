#include "dx.h"
void CHERDEFINE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int W=0,V10=0;
int ND;
int E,EE;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=12;
x[jvj+1]=11508;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3587&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
ND=pile[v[22]]; E=pile[v[22]+1]; EE=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=20; pile[WZ1]=ND; pile[WZ2]=E; 
(*f[409])( );     /*TRI14(20,ND,E)*/
pile[v[22]]=ND; pile[WZ1]=447; pile[WZ2]=jvj+3; 
(*f[54])( );     /*TRI1(ND,447,jvj+3)*/
pile[v[22]]=20; pile[WZ1]=jvj+3; pile[WZ2]=EE; 
(*f[409])( );     /*TRI14(20,jvj+3,EE)*/
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=1601; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1601,jvj+6,jvj+7)*/
x[jvj+8]=d[72];z[jvj+8]=0;
l4:if((x[jvj+7]>0)) goto l5;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l2:W=s[V10];
for(a=x[E];a>0;a=t[a]) if(s[a]==W) goto l3;
l6:x[jvj+7]=t[x[jvj+7]];
goto l4;
l3:V10=t[V10];
l1:if((V10>0)) goto l2;
pile[v[22]]=E; pile[WZ1]=jvj+11; 
(*f[68])( );     /*PLUE0(E,jvj+11)*/
pile[v[22]]=447; pile[WZ2]=459; pile[WZ3]=jvj+4; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(447,jvj+11,459,jvj+4,jvj+12)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+12; pile[WZ2]=EE; 
(*f[196])( );     /*PLUF0(jvj+8,jvj+12,EE)*/
pile[v[22]]=E; pile[WZ1]=EE; 
(*f[4005])( );     /*CHERDEFINE1(E,EE)*/
goto l6;
l5:x[jvj+9]=s[x[jvj+7]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+7];
pile[v[22]]=447; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(447,jvj+9,jvj+10)*/
x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+11]) goto l6;
pile[v[22]]=459; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(459,jvj+9,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V10=x[jvj+5];
goto l1;
}
