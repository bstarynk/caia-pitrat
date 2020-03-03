#include "dx.h"
void ATOME579T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V22=0,V26=0,V29=0,V28=0;
int NNNJ;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=20579;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3833&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNJ=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,NNNJ,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=30)) goto l5;
pile[v[22]]=102; pile[WZ1]=NNNJ; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,NNNJ,jvj+4)*/
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=485)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+7)*/
for(i=x[jvj+7],V12=0;i>0;i=t[i],V12++)  ;
if((V12!=2)) goto l5;
pile[v[22]]=103; pile[WZ1]=NNNJ; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,NNNJ,jvj+8)*/
pile[v[22]]=130; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+8,V22)*/
V22=pile[WZ2]; 
if((V22!=0)) goto l5;
x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+9,jvj+10)*/
pile[v[22]]=1182; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1182,jvj+10,jvj+11)*/
if((68!=x[jvj+11])) goto l5;
x[jvj+12]=vo[14];z[jvj+12]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+12,V26)*/
V26=pile[WZ2]; 
x[jvj+26]=x[jvj+7] ;z[jvj+26]=z[jvj+7];
l1:if((x[jvj+26]<=0)) goto l5;
x[jvj+24]=s[x[jvj+26]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+26];
x[jvj+13]=x[jvj+24] ;z[jvj+13]=z[jvj+24];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l2;
pile[v[22]]=jvj+13; pile[WZ1]=jvj+15; 
(*f[200])( );if(v[102]) goto l2;     /*NDD0(jvj+13,jvj+15)*/
x[jvj+25]=x[jvj+7] ;z[jvj+25]=z[jvj+7];
l3:if((x[jvj+25]<=0)) goto l2;
x[jvj+16]=s[x[jvj+25]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+25];
if((x[jvj+24]==x[jvj+16])) goto l4;
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+16,V29)*/
V29=pile[WZ2]; 
V28=(-V29);
pile[v[22]]=101; pile[WZ1]=NNNJ; pile[WZ2]=110; pile[WZ3]=(-11739); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,NNNJ,110,(-11739),jvj+22)*/
pile[v[22]]=V26; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V26,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3833; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3833,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20579; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20579,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+23,1,158,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=164; pile[WZ2]=jvj+15; pile[WZ3]=V28; 
(*f[2056])( );     /*VAUT0(jvj+17,164,jvj+15,V28)*/
l4:x[jvj+25]=t[x[jvj+25]];
goto l3;
l2:x[jvj+26]=t[x[jvj+26]];
goto l1;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
