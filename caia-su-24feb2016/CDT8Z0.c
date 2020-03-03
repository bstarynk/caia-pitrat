#include "dx.h"
void CDT8Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V36=0,V34=0,V57=0,V55=0,V25=0,V26=0,V48=0,V50=0,V103=0,V101=0,V4=0,V16=0,V10=0,V112=0,V111=0,V114=0,V2=0,V113=0;
int RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=11579;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1786&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+24]=0 ;z[jvj+24]=0;
x[jvj+7]=x[jvj+24] ;z[jvj+7]=z[jvj+24];
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=277; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(277,jvj+2,jvj+5)*/
if((x[jvj+5]!=480)) goto l15;
pile[v[22]]=202; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(202,jvj+2,jvj+6)*/
if((x[jvj+6]!=68)) goto l9;
pile[v[22]]=jvj+7; pile[WZ1]=1512; 
(*f[207])( );     /*PLUE2(jvj+7,1512)*/
pile[v[22]]=473; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l4;     /*FNDCND0(473,jvj+2,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=365; pile[WZ2]=jvj+8; 
(*f[1969])( );     /*FNDEND0(365,jvj+2,jvj+8)*/
for(i=x[jvj+8],V34=0;i>0;i=t[i],V34++)  ;
if((V34!=V36)) goto l3;
pile[v[22]]=jvj+7; pile[WZ1]=1650; 
(*f[207])( );     /*PLUE2(jvj+7,1650)*/
l3:if((V34>=V36)) goto l4;
pile[v[22]]=jvj+7; pile[WZ1]=1656; 
(*f[207])( );     /*PLUE2(jvj+7,1656)*/
l4:pile[v[22]]=472; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(472,jvj+2,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=489; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(489,jvj+2,jvj+9)*/
for(i=x[jvj+9],V55=0;i>0;i=t[i],V55++)  ;
if((V55!=V57)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=1677; 
(*f[207])( );     /*PLUE2(jvj+7,1677)*/
l5:pile[v[22]]=jvj+7; pile[WZ1]=1683; 
(*f[207])( );     /*PLUE2(jvj+7,1683)*/
pile[WZ1]=1689; 
(*f[207])( );     /*PLUE2(jvj+7,1689)*/
pile[WZ1]=1692; 
(*f[207])( );     /*PLUE2(jvj+7,1692)*/
pile[WZ1]=1791; 
(*f[207])( );     /*PLUE2(jvj+7,1791)*/
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+10,jvj+11)*/
pile[v[22]]=1182; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+11,jvj+12)*/
if((68!=x[jvj+12])) goto l7;
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l6;     /*FNDCND0(280,jvj+2,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=164; 
(*f[1975])( );if(v[102]) goto l6;     /*FNDCND0(164,jvj+2,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=1524; 
(*f[207])( );     /*PLUE2(jvj+7,1524)*/
l6:pile[v[22]]=jvj+7; pile[WZ1]=1707; 
(*f[207])( );     /*PLUE2(jvj+7,1707)*/
pile[WZ1]=1710; 
(*f[207])( );     /*PLUE2(jvj+7,1710)*/
l7:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[1969])( );     /*FNDEND0(489,jvj+2,jvj+13)*/
for(i=x[jvj+13],V48=0;i>0;i=t[i],V48++)  ;
if((V48!=1)) goto l9;
pile[v[22]]=365; pile[WZ2]=jvj+14; 
(*f[1969])( );     /*FNDEND0(365,jvj+2,jvj+14)*/
for(i=x[jvj+14],V50=0;i>0;i=t[i],V50++)  ;
if((V50==2)) goto l8;
if((V50!=1)) goto l9;
pile[v[22]]=498; pile[WZ2]=jvj+17; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(498,jvj+2,jvj+17)*/
pile[v[22]]=462; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(462,jvj+17,jvj+18)*/
if((x[jvj+18]!=68)) goto l9;
pile[v[22]]=jvj+7; pile[WZ1]=1794; 
(*f[207])( );     /*PLUE2(jvj+7,1794)*/
l9:pile[v[22]]=472; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l10;     /*FNDCND0(472,jvj+2,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=489; pile[WZ2]=jvj+19; 
(*f[1969])( );     /*FNDEND0(489,jvj+2,jvj+19)*/
for(i=x[jvj+19],V101=0;i>0;i=t[i],V101++)  ;
if((V101<=V103)) goto l10;
pile[v[22]]=jvj+7; pile[WZ1]=1803; 
(*f[207])( );     /*PLUE2(jvj+7,1803)*/
l10:x[jvj+20]=vo[16];z[jvj+20]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[1948])( );if(v[102]) goto l1;     /*FNDOND0(498,jvj+20,jvj+21)*/
pile[v[22]]=1182; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+21,jvj+22)*/
if((68!=x[jvj+22])) goto l1;
pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(164,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=57; 
(*f[207])( );     /*PLUE2(jvj+7,57)*/
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l11;     /*FNDCND0(280,jvj+2,V16)*/
V16=pile[WZ2]; 
if((V16<=V4)) goto l11;
pile[v[22]]=jvj+7; pile[WZ1]=171; 
(*f[207])( );     /*PLUE2(jvj+7,171)*/
l11:pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[1975])( );if(v[102]) goto l12;     /*FNDCND0(280,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+7; pile[WZ1]=60; 
(*f[207])( );     /*PLUE2(jvj+7,60)*/
l12:pile[v[22]]=jvj+7; pile[WZ1]=1728; 
(*f[207])( );     /*PLUE2(jvj+7,1728)*/
pile[WZ1]=1734; 
(*f[207])( );     /*PLUE2(jvj+7,1734)*/
l1:pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[1948])( );if(v[102]) goto l13;     /*FNDOND0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l2;
l13:pile[v[22]]=jvj+7; pile[WZ1]=1824; 
(*f[207])( );     /*PLUE2(jvj+7,1824)*/
l2:pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(202,jvj+2,jvj+4)*/
if((x[jvj+4]==68)) goto l15;
l14:pile[v[22]]=jvj+7; pile[WZ1]=1830; 
(*f[207])( );     /*PLUE2(jvj+7,1830)*/
l15:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+23)*/
for(i=x[jvj+7],V112=0;i>0;i=t[i],V112++)  ;
for(i=x[jvj+23],V111=0;i>0;i=t[i],V111++)  ;
if((V112!=V111)) goto l20;
V114=x[jvj+7];
l19:if((V114>0)) goto l22;
V2=135;
l16:if((V2==134)) goto l17;
l18:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l8:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[1948])( );if(v[102]) goto l9;     /*FNDOND0(498,jvj+2,jvj+15)*/
pile[v[22]]=462; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(462,jvj+15,jvj+16)*/
if((x[jvj+16]!=68)) goto l9;
pile[v[22]]=jvj+7; pile[WZ1]=1671; 
(*f[207])( );     /*PLUE2(jvj+7,1671)*/
goto l9;
l17:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+7)*/
goto l18;
l21:V114=t[V114];
goto l19;
l22:V113=s[V114];
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==V113) goto l21;
l20:V2=134;
goto l16;
}
