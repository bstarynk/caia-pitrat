#include "dx.h"
void CDT6Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V80=0,V82=0,V137=0,V4=0,V16=0,V32=0,V10=0,V185=0,V184=0,V187=0,V2=0,V186=0;
int RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=11577;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1784&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+34]=0 ;z[jvj+34]=0;
x[jvj+11]=x[jvj+34] ;z[jvj+11]=z[jvj+34];
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(202,jvj+2,jvj+9)*/
if((x[jvj+9]!=68)) goto l8;
pile[v[22]]=277; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(277,jvj+2,jvj+10)*/
if((x[jvj+10]!=480)) goto l8;
pile[v[22]]=jvj+11; pile[WZ1]=322; 
(*f[207])( );     /*PLUE2(jvj+11,322)*/
pile[WZ1]=444; 
(*f[207])( );     /*PLUE2(jvj+11,444)*/
pile[WZ1]=474; 
(*f[207])( );     /*PLUE2(jvj+11,474)*/
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(498,jvj+12,jvj+13)*/
pile[v[22]]=1182; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1182,jvj+13,jvj+14)*/
if((68!=x[jvj+14])) goto l5;
pile[v[22]]=jvj+11; pile[WZ1]=381; 
(*f[207])( );     /*PLUE2(jvj+11,381)*/
pile[WZ1]=384; 
(*f[207])( );     /*PLUE2(jvj+11,384)*/
l5:pile[v[22]]=489; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(489,jvj+2,jvj+15)*/
if((x[jvj+15]!=0)) goto l6;
pile[v[22]]=jvj+11; pile[WZ1]=355; 
(*f[207])( );     /*PLUE2(jvj+11,355)*/
pile[WZ1]=356; 
(*f[207])( );     /*PLUE2(jvj+11,356)*/
l6:pile[v[22]]=1287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1287,jvj+2,jvj+16)*/
if((x[jvj+16]!=0)) goto l7;
pile[v[22]]=jvj+11; pile[WZ1]=633; 
(*f[207])( );     /*PLUE2(jvj+11,633)*/
l7:pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+17)*/
for(i=x[jvj+17],V80=0;i>0;i=t[i],V80++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(498,jvj+2,jvj+18)*/
pile[v[22]]=473; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(473,jvj+18,V82)*/
V82=pile[WZ2]; 
if((V80>=V82)) goto l8;
pile[v[22]]=jvj+11; pile[WZ1]=363; 
(*f[207])( );     /*PLUE2(jvj+11,363)*/
l8:pile[v[22]]=277; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(277,jvj+2,jvj+19)*/
if((x[jvj+19]!=480)) goto l21;
pile[v[22]]=1474; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1474,jvj+2,jvj+20)*/
pile[v[22]]=jvj+11; pile[WZ1]=549; 
(*f[207])( );     /*PLUE2(jvj+11,549)*/
pile[WZ1]=595; 
(*f[207])( );     /*PLUE2(jvj+11,595)*/
x[jvj+21]=vo[16];z[jvj+21]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,jvj+21,jvj+22)*/
pile[v[22]]=1182; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1182,jvj+22,jvj+23)*/
if((68!=x[jvj+23])) goto l2;
pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(280,jvj+2,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=495; 
(*f[207])( );     /*PLUE2(jvj+11,495)*/
l2:pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(202,jvj+2,jvj+5)*/
if((x[jvj+5]==68)) goto l10;
l3:pile[v[22]]=1347; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1347,jvj+2,jvj+6)*/
l10:x[jvj+25]=vo[16];z[jvj+25]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(498,jvj+25,jvj+26)*/
pile[v[22]]=1182; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1182,jvj+26,jvj+27)*/
if((68!=x[jvj+27])) goto l1;
pile[v[22]]=jvj+11; pile[WZ1]=357; 
(*f[207])( );     /*PLUE2(jvj+11,357)*/
pile[WZ1]=360; 
(*f[207])( );     /*PLUE2(jvj+11,360)*/
pile[WZ1]=400; 
(*f[207])( );     /*PLUE2(jvj+11,400)*/
pile[WZ1]=615; 
(*f[207])( );     /*PLUE2(jvj+11,615)*/
pile[v[22]]=164; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(164,jvj+2,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=57; 
(*f[207])( );     /*PLUE2(jvj+11,57)*/
pile[v[22]]=1353; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1353,jvj+25,jvj+28)*/
if((x[jvj+28]!=68)) goto l11;
pile[v[22]]=jvj+11; pile[WZ1]=346; 
(*f[207])( );     /*PLUE2(jvj+11,346)*/
l11:pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(280,jvj+2,V16)*/
V16=pile[WZ2]; 
if((V16>V4)) goto l12;
if((V16!=V4)) goto l13;
pile[v[22]]=jvj+11; pile[WZ1]=330; 
(*f[207])( );     /*PLUE2(jvj+11,330)*/
l13:V32=V4-V16;
if((V32>=300)) goto l15;
pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(202,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l15;
l14:pile[v[22]]=jvj+11; pile[WZ1]=324; 
(*f[207])( );     /*PLUE2(jvj+11,324)*/
l15:pile[v[22]]=280; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(280,jvj+2,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=jvj+11; pile[WZ1]=60; 
(*f[207])( );     /*PLUE2(jvj+11,60)*/
if((V10>0)) goto l16;
if((V10>=0)) goto l17;
l18:pile[v[22]]=1353; pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1353,jvj+25,jvj+30)*/
if((x[jvj+30]!=68)) goto l1;
pile[v[22]]=jvj+11; pile[WZ1]=487; 
(*f[207])( );     /*PLUE2(jvj+11,487)*/
pile[WZ1]=490; 
(*f[207])( );     /*PLUE2(jvj+11,490)*/
l1:pile[v[22]]=202; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(202,jvj+2,jvj+4)*/
if((x[jvj+4]==68)) goto l4;
l19:pile[v[22]]=1287; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(1287,jvj+2,jvj+31)*/
if((x[jvj+31]==0)) goto l4;
pile[v[22]]=jvj+11; pile[WZ1]=450; 
(*f[207])( );     /*PLUE2(jvj+11,450)*/
l4:pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(498,jvj+2,jvj+7)*/
pile[v[22]]=1348; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1348,jvj+7,jvj+8)*/
if((x[jvj+8]==68)) goto l21;
l20:pile[v[22]]=1347; pile[WZ1]=jvj+2; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1347,jvj+2,jvj+32)*/
pile[v[22]]=jvj+11; pile[WZ1]=675; 
(*f[207])( );     /*PLUE2(jvj+11,675)*/
l21:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+33)*/
for(i=x[jvj+11],V185=0;i>0;i=t[i],V185++)  ;
for(i=x[jvj+33],V184=0;i>0;i=t[i],V184++)  ;
if((V185!=V184)) goto l26;
V187=x[jvj+11];
l25:if((V187>0)) goto l28;
V2=135;
l22:if((V2==134)) goto l23;
l24:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l9:pile[v[22]]=1603; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(1603,jvj+2,jvj+24)*/
pile[v[22]]=jvj+11; pile[WZ1]=525; 
(*f[207])( );     /*PLUE2(jvj+11,525)*/
goto l10;
l12:pile[v[22]]=jvj+11; pile[WZ1]=171; 
(*f[207])( );     /*PLUE2(jvj+11,171)*/
goto l13;
l16:pile[v[22]]=jvj+11; pile[WZ1]=310; 
(*f[207])( );     /*PLUE2(jvj+11,310)*/
pile[WZ1]=337; 
(*f[207])( );     /*PLUE2(jvj+11,337)*/
l17:pile[v[22]]=jvj+11; pile[WZ1]=585; 
(*f[207])( );     /*PLUE2(jvj+11,585)*/
pile[v[22]]=1353; pile[WZ1]=jvj+25; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1353,jvj+25,jvj+29)*/
if((x[jvj+29]!=68)) goto l18;
pile[v[22]]=jvj+11; pile[WZ1]=483; 
(*f[207])( );     /*PLUE2(jvj+11,483)*/
pile[WZ1]=669; 
(*f[207])( );     /*PLUE2(jvj+11,669)*/
goto l18;
l23:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+11; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+11)*/
goto l24;
l27:V187=t[V187];
goto l25;
l28:V186=s[V187];
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==V186) goto l27;
l26:V2=134;
goto l22;
}
