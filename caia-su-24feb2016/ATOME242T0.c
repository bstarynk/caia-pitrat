#include "dx.h"
void ATOME242T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V17=0,V18=0;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=20242;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3590&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,R,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=1280)) goto l6;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,R,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l6;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,R,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+10,jvj+11)*/
if((x[jvj+11]!=41)) goto l6;
pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(160,R,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+12,jvj+13)*/
if((x[jvj+13]!=41)) goto l6;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(642,jvj+14,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=jvj+8; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+8,jvj+3)*/
pile[v[22]]=202; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,jvj+3,jvj+15)*/
if((x[jvj+15]!=68)) goto l6;
pile[v[22]]=365; pile[WZ2]=jvj+16; 
(*f[1969])( );     /*FNDEND0(365,jvj+3,jvj+16)*/
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+25]=x[jvj+16] ;z[jvj+25]=z[jvj+16];
l1:if((x[jvj+25]<=0)) goto l4;
x[jvj+2]=s[x[jvj+25]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+25];
pile[v[22]]=130; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+2,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=V17; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[3591])( );     /*VALCOR0(V17,jvj+3,jvj+4)*/
if((x[jvj+4]==135)) goto l3;
l2:x[jvj+25]=t[x[jvj+25]];
goto l1;
l3:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+2)*/
goto l2;
l6:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:if((x[jvj+16]<=0)) goto l6;
x[jvj+18]=s[x[jvj+16]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+16];
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==x[jvj+18]) goto l5;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+23; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+23)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(V18,858,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,v[13],642,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=3590; pile[WZ2]=246; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,3590,246,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=20242; pile[WZ2]=218; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,20242,218,jvj+22)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ2]=jvj+22; pile[WZ3]=159; pile[WZ4]=jvj+24; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+22,159,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+17; 
(*f[58])( );     /*TRI3(jvj+24,1,158,jvj+17)*/
pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[1569])( );     /*DELIER0(365,jvj+3,jvj+18,jvj+17)*/
l5:x[jvj+16]=t[x[jvj+16]];
goto l4;
}
