#include "dx.h"
void ATOME171T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V25=0,V28=0,V13=0,V16=0,I=0,J=0,V31=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=23;
x[jvj+1]=20171;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3553&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,R,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]!=625)) goto l5;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(160,R,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+4,V25)*/
V25=pile[WZ2]; 
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(642,jvj+5,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=V25; pile[WZ1]=jvj+6; 
(*f[992])( );if(v[102]) goto l5;     /*FACTPREM0(V25,jvj+6)*/
x[jvj+7]=d[20];z[jvj+7]=0;
l1:if((x[jvj+7]<=0)) goto l5;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+8,R,jvj+9)*/
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=596)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+9,jvj+12)*/
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+12,V13)*/
V13=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+8; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(268,jvj+8,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(jvj+13,R,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+14,V16)*/
V16=pile[WZ2]; 
if((V16!=0)) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+9,jvj+15)*/
I=V13;
pile[v[22]]=I; pile[WZ1]=jvj+16; 
(*f[992])( );if(v[102]) goto l2;     /*FACTPREM0(I,jvj+16)*/
V31=x[jvj+6];
l3:if((V31<=0)) goto l2;
J=s[V31];
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==J) goto l4;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+22; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+22)*/
pile[v[22]]=V28; pile[WZ1]=858; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(V28,858,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,v[13],642,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=3553; pile[WZ2]=246; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,3553,246,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=20171; pile[WZ2]=218; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+20,20171,218,jvj+21)*/
pile[v[22]]=jvj+22; pile[WZ1]=(-20); pile[WZ2]=jvj+21; pile[WZ3]=159; pile[WZ4]=jvj+23; 
(*f[298])( );     /*TRIENS1(jvj+22,(-20),jvj+21,159,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+23,1,158,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[1559])( );     /*CONTRADICTION0(jvj+17)*/
l4:V31=t[V31];
goto l3;
l2:x[jvj+7]=t[x[jvj+7]];
goto l1;
l5:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
