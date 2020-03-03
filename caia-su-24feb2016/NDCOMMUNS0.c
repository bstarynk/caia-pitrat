#include "dx.h"
void NDCOMMUNS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V9=0;
int N,B;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=11;
x[jvj+1]=10684;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1251&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; B=pile[v[22]+1]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[N] ;z[jvj+4]=z[N];
l5:pile[v[22]]=226; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(226,jvj+4,jvj+7)*/
if((x[jvj+7]!=0)) goto l6;
pile[v[22]]=498; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(498,jvj+4,jvj+2)*/
x[jvj+5]=incon;
pile[v[22]]=226; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(226,jvj+2,jvj+3)*/
for(i=x[jvj+3],V4=0;i>0;i=t[i],V4++)  ;
if((V4==1)) goto l1;
x[jvj+10]=0 ;z[jvj+10]=0;
x[jvj+5]=x[jvj+10] ;z[jvj+5]=z[jvj+10];
l8:pile[v[22]]=jvj+5; pile[WZ1]=892; pile[WZ2]=jvj+8; 
(*f[300])( );     /*TRI10(jvj+5,892,jvj+8)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+8; pile[WZ2]=B; 
(*f[1525])( );     /*PLUSHAUT0(jvj+2,jvj+8,B)*/
l6:for(i=x[jvj+7],V9=0;i>0;i=t[i],V9++)  ;
if((V9==1)) goto l2;
if((V9<=1)) goto l7;
pile[v[22]]=333; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(333,jvj+4,jvj+6)*/
l3:if((x[jvj+7]<=0)) goto l7;
x[jvj+9]=s[x[jvj+7]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+7];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==x[jvj+9]) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=333; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+4,333,jvj+9)*/
x[jvj+4]=x[jvj+9] ;z[jvj+4]=z[jvj+9];
goto l5;
l1:pile[v[22]]=20; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[409])( );     /*TRI14(20,jvj+4,jvj+5)*/
goto l8;
l2:if((x[jvj+7]<=0)) goto l7;
x[jvj+11]=s[x[jvj+7]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+7];
x[jvj+4]=x[jvj+11] ;z[jvj+4]=z[jvj+11];
goto l5;
l4:x[jvj+7]=t[x[jvj+7]];
goto l3;
l7:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
