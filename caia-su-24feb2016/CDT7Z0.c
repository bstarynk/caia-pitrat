#include "dx.h"
void CDT7Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V65=0,V67=0,V106=0,V4=0,V14=0,V27=0,V9=0,V143=0,V142=0,V145=0,V2=0,V144=0;
int RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=29;
x[jvj+1]=11578;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1785&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+29]=0 ;z[jvj+29]=0;
x[jvj+10]=x[jvj+29] ;z[jvj+10]=z[jvj+29];
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(202,jvj+2,jvj+9)*/
if((x[jvj+9]!=68)) goto l8;
pile[v[22]]=jvj+10; pile[WZ1]=322; 
(*f[207])( );     /*PLUE2(jvj+10,322)*/
pile[WZ1]=444; 
(*f[207])( );     /*PLUE2(jvj+10,444)*/
pile[WZ1]=474; 
(*f[207])( );     /*PLUE2(jvj+10,474)*/
x[jvj+11]=vo[16];z[jvj+11]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(498,jvj+11,jvj+12)*/
pile[v[22]]=1182; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1182,jvj+12,jvj+13)*/
if((68!=x[jvj+13])) goto l5;
pile[v[22]]=jvj+10; pile[WZ1]=381; 
(*f[207])( );     /*PLUE2(jvj+10,381)*/
pile[WZ1]=384; 
(*f[207])( );     /*PLUE2(jvj+10,384)*/
l5:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+14)*/
if((x[jvj+14]!=0)) goto l6;
pile[v[22]]=jvj+10; pile[WZ1]=355; 
(*f[207])( );     /*PLUE2(jvj+10,355)*/
pile[WZ1]=356; 
(*f[207])( );     /*PLUE2(jvj+10,356)*/
l6:pile[v[22]]=1287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1287,jvj+2,jvj+15)*/
if((x[jvj+15]!=0)) goto l7;
pile[v[22]]=jvj+10; pile[WZ1]=633; 
(*f[207])( );     /*PLUE2(jvj+10,633)*/
l7:pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+16)*/
for(i=x[jvj+16],V65=0;i>0;i=t[i],V65++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(498,jvj+2,jvj+17)*/
pile[v[22]]=473; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(473,jvj+17,V67)*/
V67=pile[WZ2]; 
if((V65>=V67)) goto l8;
pile[v[22]]=jvj+10; pile[WZ1]=363; 
(*f[207])( );     /*PLUE2(jvj+10,363)*/
l8:pile[v[22]]=1474; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1474,jvj+2,jvj+18)*/
pile[v[22]]=jvj+10; pile[WZ1]=549; 
(*f[207])( );     /*PLUE2(jvj+10,549)*/
pile[WZ1]=595; 
(*f[207])( );     /*PLUE2(jvj+10,595)*/
x[jvj+19]=vo[16];z[jvj+19]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,jvj+19,jvj+20)*/
pile[v[22]]=1182; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1182,jvj+20,jvj+21)*/
if((68!=x[jvj+21])) goto l2;
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(280,jvj+2,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=495; 
(*f[207])( );     /*PLUE2(jvj+10,495)*/
l2:pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(202,jvj+2,jvj+5)*/
if((x[jvj+5]==68)) goto l10;
l3:pile[v[22]]=1347; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1347,jvj+2,jvj+6)*/
l10:x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,jvj+23,jvj+24)*/
pile[v[22]]=1182; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+24,jvj+25)*/
if((68!=x[jvj+25])) goto l1;
pile[v[22]]=jvj+10; pile[WZ1]=357; 
(*f[207])( );     /*PLUE2(jvj+10,357)*/
pile[WZ1]=360; 
(*f[207])( );     /*PLUE2(jvj+10,360)*/
pile[WZ1]=400; 
(*f[207])( );     /*PLUE2(jvj+10,400)*/
pile[WZ1]=615; 
(*f[207])( );     /*PLUE2(jvj+10,615)*/
pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(164,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=57; 
(*f[207])( );     /*PLUE2(jvj+10,57)*/
pile[WZ1]=346; 
(*f[207])( );     /*PLUE2(jvj+10,346)*/
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(280,jvj+2,V14)*/
V14=pile[WZ2]; 
if((V14>V4)) goto l11;
if((V14!=V4)) goto l12;
pile[v[22]]=jvj+10; pile[WZ1]=330; 
(*f[207])( );     /*PLUE2(jvj+10,330)*/
l12:V27=V4-V14;
if((V27>=300)) goto l14;
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l14;
l13:pile[v[22]]=jvj+10; pile[WZ1]=324; 
(*f[207])( );     /*PLUE2(jvj+10,324)*/
l14:pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(280,jvj+2,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=60; 
(*f[207])( );     /*PLUE2(jvj+10,60)*/
if((V9>0)) goto l15;
if((V9>=0)) goto l16;
l17:pile[v[22]]=jvj+10; pile[WZ1]=487; 
(*f[207])( );     /*PLUE2(jvj+10,487)*/
pile[WZ1]=490; 
(*f[207])( );     /*PLUE2(jvj+10,490)*/
l1:pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(202,jvj+2,jvj+4)*/
if((x[jvj+4]==68)) goto l4;
l18:pile[v[22]]=1287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1287,jvj+2,jvj+26)*/
if((x[jvj+26]==0)) goto l4;
pile[v[22]]=jvj+10; pile[WZ1]=450; 
(*f[207])( );     /*PLUE2(jvj+10,450)*/
l4:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(498,jvj+2,jvj+7)*/
pile[v[22]]=1348; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(1348,jvj+7,jvj+8)*/
if((x[jvj+8]==68)) goto l20;
l19:pile[v[22]]=1347; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1347,jvj+2,jvj+27)*/
pile[v[22]]=jvj+10; pile[WZ1]=675; 
(*f[207])( );     /*PLUE2(jvj+10,675)*/
l20:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+28)*/
for(i=x[jvj+10],V143=0;i>0;i=t[i],V143++)  ;
for(i=x[jvj+28],V142=0;i>0;i=t[i],V142++)  ;
if((V143!=V142)) goto l25;
V145=x[jvj+10];
l24:if((V145>0)) goto l27;
V2=135;
l21:if((V2==134)) goto l22;
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:pile[v[22]]=1603; pile[WZ1]=jvj+2; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1603,jvj+2,jvj+22)*/
pile[v[22]]=jvj+10; pile[WZ1]=525; 
(*f[207])( );     /*PLUE2(jvj+10,525)*/
goto l10;
l11:pile[v[22]]=jvj+10; pile[WZ1]=171; 
(*f[207])( );     /*PLUE2(jvj+10,171)*/
goto l12;
l15:pile[v[22]]=jvj+10; pile[WZ1]=310; 
(*f[207])( );     /*PLUE2(jvj+10,310)*/
pile[WZ1]=337; 
(*f[207])( );     /*PLUE2(jvj+10,337)*/
l16:pile[v[22]]=jvj+10; pile[WZ1]=483; 
(*f[207])( );     /*PLUE2(jvj+10,483)*/
pile[WZ1]=585; 
(*f[207])( );     /*PLUE2(jvj+10,585)*/
pile[WZ1]=669; 
(*f[207])( );     /*PLUE2(jvj+10,669)*/
goto l17;
l22:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+10)*/
goto l23;
l26:V145=t[V145];
goto l24;
l27:V144=s[V145];
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==V144) goto l26;
l25:V2=134;
goto l21;
}
