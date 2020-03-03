#include "dx.h"
void ATOME79T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V9=0,V10=0;
int D;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=20079;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3530&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+9,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=D; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(509,D,jvj+10)*/
l3:if((x[jvj+10]<=0)) goto l5;
x[jvj+3]=s[x[jvj+10]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+10];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+11; 
(*f[799])( );if(v[102]) goto l4;     /*NORME0(jvj+3,jvj+11)*/
x[jvj+5]=x[jvj+11] ;z[jvj+5]=z[jvj+11];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(jvj+5,jvj+7)*/
for(i=x[jvj+7],V8=0;i>0;i=t[i],V8++)  ;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(jvj+3,jvj+8)*/
for(i=x[jvj+8],V9=0;i>0;i=t[i],V9++)  ;
if((V8<V9)) goto l6;
pile[v[22]]=1274; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1274,jvj+3,V7)*/
V7=pile[WZ2]; 
if((V7>0)) goto l2;
l1:pile[v[22]]=868; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(868,jvj+3,jvj+4)*/
if(x[jvj+4]==55||x[jvj+4]==1177) goto l2;
l4:x[jvj+10]=t[x[jvj+10]];
goto l3;
l2:pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[760])( );     /*MEMEX0(jvj+3,jvj+5,jvj+6)*/
if((x[jvj+6]==134)) goto l6;
goto l4;
l5:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l6:pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(101,jvj+3,110,(-601),jvj+17)*/
pile[WZ1]=D; pile[WZ3]=(-656); pile[WZ4]=jvj+18; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+18)*/
pile[v[22]]=V10; pile[WZ1]=858; pile[WZ2]=jvj+14; 
(*f[46])( );     /*TRI0(V10,858,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+15; 
(*f[189])( );     /*TRI4(jvj+14,v[13],642,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=3530; pile[WZ2]=246; pile[WZ3]=jvj+16; 
(*f[189])( );     /*TRI4(jvj+15,3530,246,jvj+16)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20079; pile[WZ4]=jvj+16; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,1,218,20079,jvj+16,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=159; pile[WZ2]=jvj+17; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+17)*/
pile[WZ2]=jvj+18; 
(*f[36])( );     /*PLUSC0(jvj+12,159,jvj+18)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[1558])( );     /*RESTAURE0(jvj+3,jvj+5,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+23)*/
pile[v[22]]=V10; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V10,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3530; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3530,246,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=20079; pile[WZ2]=218; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,20079,218,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ2]=jvj+22; pile[WZ3]=159; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+22,159,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+13; 
(*f[58])( );     /*TRI3(jvj+24,1,158,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+3; 
(*f[966])( );     /*ELIMINE0(jvj+13,jvj+3)*/
goto l4;
}
