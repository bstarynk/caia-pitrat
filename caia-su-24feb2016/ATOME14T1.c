#include "dx.h"
void ATOME14T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V7=0,V9=0,V10=0,V11=0;
int N;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=15;
x[jvj+1]=20014;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3434&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=462; pile[WZ1]=N; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(462,N,jvj+7)*/
if((x[jvj+7]!=68)) goto l4;
pile[v[22]]=473; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(473,N,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=472; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(472,N,V10)*/
V10=pile[WZ2]; 
if((V9!=V10)) goto l4;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+8,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=N; pile[WZ1]=jvj+9; 
(*f[3044])( );     /*CLASSENDS0(N,jvj+9)*/
pile[v[22]]=159; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(159,jvj+9,jvj+10)*/
for(i=x[jvj+10],V7=0;i>0;i=t[i],V7++)  ;
if((V7>2)) goto l5;
l1:if((x[jvj+10]<=0)) goto l4;
x[jvj+3]=s[x[jvj+10]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+10];
pile[v[22]]=258; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(258,jvj+3,jvj+4)*/
for(i=x[jvj+4],V3=0;i>0;i=t[i],V3++)  ;
x[jvj+15]=t[x[jvj+10]];
l2:if((x[jvj+15]>0)) goto l3;
x[jvj+10]=t[x[jvj+10]];
goto l1;
l3:x[jvj+5]=s[x[jvj+15]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+15];
pile[v[22]]=258; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(258,jvj+5,jvj+6)*/
for(i=x[jvj+6],V5=0;i>0;i=t[i],V5++)  ;
if((V3!=V5)) goto l5;
x[jvj+15]=t[x[jvj+15]];
goto l2;
l5:pile[v[22]]=V11; pile[WZ1]=858; pile[WZ2]=jvj+12; 
(*f[46])( );     /*TRI0(V11,858,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+13; 
(*f[189])( );     /*TRI4(jvj+12,v[13],642,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=3434; pile[WZ2]=246; pile[WZ3]=jvj+14; 
(*f[189])( );     /*TRI4(jvj+13,3434,246,jvj+14)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20014; pile[WZ4]=jvj+14; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(158,1,218,20014,jvj+14,jvj+11)*/
pile[v[22]]=jvj+11; 
(*f[1559])( );     /*CONTRADICTION0(jvj+11)*/
l4:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
