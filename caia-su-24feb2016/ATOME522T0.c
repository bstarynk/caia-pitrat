#include "dx.h"
void ATOME522T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V18=0,V21=0,V20=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20522;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3872&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,R,jvj+2)*/
if((x[jvj+2]!=22)) goto l4;
pile[v[22]]=111; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,R,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
pile[v[22]]=1821; pile[WZ1]=145; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1821,145,jvj+5)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+4]) goto l1;
l4:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l4;     /*FNDOND0(498,jvj+6,jvj+7)*/
pile[v[22]]=1182; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+7,jvj+8)*/
if((68!=x[jvj+8])) goto l4;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(642,jvj+9,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=R; pile[WZ1]=jvj+10; 
(*f[891])( );     /*VAREXP0(R,jvj+10)*/
l2:if((x[jvj+10]<=0)) goto l4;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[3873])( );if(v[102]) goto l3;     /*INFB0(jvj+11,jvj+12)*/
x[jvj+13]=x[jvj+12] ;z[jvj+13]=z[jvj+12];
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+13,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+11,jvj+14)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+13; pile[WZ2]=R; pile[WZ3]=jvj+15; 
(*f[1719])( );     /*SUBSTITUTES0(jvj+14,jvj+13,R,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[965])( );if(v[102]) goto l3;     /*NORM0(jvj+15,jvj+16)*/
x[jvj+17]=x[jvj+16] ;z[jvj+17]=z[jvj+16];
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=134)) goto l3;
V20=V21+1;
pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+24)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+20; 
(*f[46])( );     /*TRI0(V18,858,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,v[13],642,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=3872; pile[WZ2]=246; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,3872,246,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=20522; pile[WZ2]=218; pile[WZ3]=jvj+23; 
(*f[58])( );     /*TRI3(jvj+22,20522,218,jvj+23)*/
pile[v[22]]=jvj+24; pile[WZ1]=(-20); pile[WZ2]=jvj+23; pile[WZ3]=159; pile[WZ4]=jvj+25; 
(*f[298])( );     /*TRIENS1(jvj+24,(-20),jvj+23,159,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+19; 
(*f[58])( );     /*TRI3(jvj+25,1,158,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=280; pile[WZ2]=jvj+14; pile[WZ3]=V20; 
(*f[2056])( );     /*VAUT0(jvj+19,280,jvj+14,V20)*/
l3:x[jvj+10]=t[x[jvj+10]];
goto l2;
}
