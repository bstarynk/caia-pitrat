#include "dx.h"
void ATOME148T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V8=0,Z=0,V13=0,V11=0,V6=0,V3=0,V5=0;
int D;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=19;
x[jvj+1]=20148;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3496&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=D; pile[WZ2]=jvj+5; 
(*f[1948])( );if(v[102]) goto l11;     /*FNDOND0(202,D,jvj+5)*/
if((x[jvj+5]!=68)) goto l11;
x[jvj+6]=vo[14];z[jvj+6]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(642,jvj+6,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=1310; pile[WZ1]=D; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1310,D,jvj+7)*/
pile[v[22]]=365; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,D,jvj+8)*/
l5:if((x[jvj+7]<=0)) goto l11;
x[jvj+3]=s[x[jvj+7]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+7];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(117,jvj+3,V6)*/
V6=pile[WZ2]; 
x[jvj+18]=x[jvj+8] ;z[jvj+18]=z[jvj+8];
l7:if((x[jvj+18]<=0)) goto l6;
x[jvj+9]=s[x[jvj+18]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+18];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+9,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=V3; pile[WZ1]=jvj+10; 
(*f[1007])( );if(v[102]) goto l8;     /*DECFACTPREM0(V3,jvj+10)*/
x[jvj+19]=x[jvj+10] ;z[jvj+19]=z[jvj+10];
l9:if((x[jvj+19]<=0)) goto l8;
x[jvj+2]=s[x[jvj+19]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+19];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+2,V5)*/
V5=pile[WZ2]; 
if((V5!=V6)) goto l10;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(515,jvj+2,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=195; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(195,jvj+3,jvj+4)*/
V13=x[jvj+4];
l3:if((V13<=0)) goto l12;
Z=s[V13];
if((Z==V8)) goto l1;
if((Z<0)) goto l2;
l4:V13=t[V13];
goto l3;
l1:if((Z>=0)) goto l10;
l2:V10=abs(Z);
if((V8>=V10)) goto l10;
goto l4;
l6:x[jvj+7]=t[x[jvj+7]];
goto l5;
l8:x[jvj+18]=t[x[jvj+18]];
goto l7;
l11:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l12:pile[v[22]]=101; pile[WZ1]=D; pile[WZ2]=110; pile[WZ3]=(-656); pile[WZ4]=jvj+16; 
(*f[270])( );     /*QUADRI7(101,D,110,(-656),jvj+16)*/
pile[v[22]]=V11; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V11,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3496; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3496,246,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=20148; pile[WZ2]=218; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+14,20148,218,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=(-20); pile[WZ2]=jvj+15; pile[WZ3]=159; pile[WZ4]=jvj+17; 
(*f[298])( );     /*TRIENS1(jvj+16,(-20),jvj+15,159,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+17,1,158,jvj+11)*/
pile[v[22]]=365; pile[WZ1]=D; pile[WZ2]=jvj+9; 
(*f[1569])( );     /*DELIER0(365,D,jvj+9,jvj+11)*/
l10:x[jvj+19]=t[x[jvj+19]];
goto l9;
}
