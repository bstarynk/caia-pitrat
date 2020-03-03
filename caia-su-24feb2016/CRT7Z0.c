#include "dx.h"
void CRT7Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V39=0,V95=0,V94=0,V97=0,V2=0,V96=0;
int RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=11557;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1745&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+24]=0 ;z[jvj+24]=0;
x[jvj+4]=x[jvj+24] ;z[jvj+4]=z[jvj+24];
pile[v[22]]=jvj+4; pile[WZ1]=RRRT; 
(*f[1942])( );     /*Z49Z0(jvj+4,RRRT)*/
(*f[1943])( );     /*Z52Z0(jvj+4,RRRT)*/
(*f[1944])( );     /*Z114Z0(jvj+4,RRRT)*/
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(870,jvj+2,V4)*/
V4=pile[WZ2]; 
if((V4!=1)) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=321; 
(*f[207])( );     /*PLUE2(jvj+4,321)*/
x[jvj+5]=vo[16];z[jvj+5]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,jvj+5,jvj+6)*/
pile[v[22]]=1182; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1182,jvj+6,jvj+7)*/
if((68!=x[jvj+7])) goto l2;
pile[v[22]]=jvj+4; pile[WZ1]=345; 
(*f[207])( );     /*PLUE2(jvj+4,345)*/
l2:pile[v[22]]=jvj+4; pile[WZ1]=697; 
(*f[207])( );     /*PLUE2(jvj+4,697)*/
if((V4!=2)) goto l3;
pile[v[22]]=868; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(868,jvj+2,jvj+8)*/
if((x[jvj+8]==55)) goto l3;
pile[v[22]]=jvj+4; pile[WZ1]=354; 
(*f[207])( );     /*PLUE2(jvj+4,354)*/
if((x[jvj+8]!=25)) goto l3;
pile[WZ1]=475; 
(*f[207])( );     /*PLUE2(jvj+4,475)*/
l3:x[jvj+9]=vo[16];z[jvj+9]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+9,jvj+10)*/
pile[v[22]]=1182; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1182,jvj+10,jvj+11)*/
if((68!=x[jvj+11])) goto l4;
pile[v[22]]=jvj+4; pile[WZ1]=486; 
(*f[207])( );     /*PLUE2(jvj+4,486)*/
l4:pile[v[22]]=1601; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1601,jvj+2,jvj+12)*/
if((x[jvj+12]==0)) goto l5;
pile[v[22]]=jvj+4; pile[WZ1]=720; 
(*f[207])( );     /*PLUE2(jvj+4,720)*/
l5:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+2,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==770)) goto l6;
if((x[jvj+14]==25)) goto l7;
if((x[jvj+14]!=625)) goto l10;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(160,jvj+2,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=41)) goto l9;
pile[v[22]]=jvj+4; pile[WZ1]=681; 
(*f[207])( );     /*PLUE2(jvj+4,681)*/
l9:pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+19,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+2,jvj+21)*/
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+2,jvj+22)*/
pile[v[22]]=jvj+4; pile[WZ1]=492; 
(*f[207])( );     /*PLUE2(jvj+4,492)*/
pile[WZ1]=558; 
(*f[207])( );     /*PLUE2(jvj+4,558)*/
l10:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+23)*/
for(i=x[jvj+4],V95=0;i>0;i=t[i],V95++)  ;
for(i=x[jvj+23],V94=0;i>0;i=t[i],V94++)  ;
if((V95!=V94)) goto l15;
V97=x[jvj+4];
l14:if((V97>0)) goto l17;
V2=135;
l11:if((V2==134)) goto l12;
l13:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l6:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+2,jvj+15)*/
pile[v[22]]=jvj+4; pile[WZ1]=439; 
(*f[207])( );     /*PLUE2(jvj+4,439)*/
goto l10;
l7:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+2,jvj+16)*/
pile[v[22]]=103; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+2,jvj+17)*/
pile[v[22]]=jvj+4; pile[WZ1]=396; 
(*f[207])( );     /*PLUE2(jvj+4,396)*/
pile[WZ1]=468; 
(*f[207])( );     /*PLUE2(jvj+4,468)*/
pile[WZ1]=594; 
(*f[207])( );     /*PLUE2(jvj+4,594)*/
pile[WZ1]=723; 
(*f[207])( );     /*PLUE2(jvj+4,723)*/
pile[v[22]]=1358; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1358,jvj+2,jvj+18)*/
if((x[jvj+18]!=68)) goto l1;
pile[v[22]]=jvj+4; pile[WZ1]=528; 
(*f[207])( );     /*PLUE2(jvj+4,528)*/
pile[WZ1]=717; 
(*f[207])( );     /*PLUE2(jvj+4,717)*/
l1:pile[v[22]]=1188; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1188,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l10;
l8:pile[v[22]]=jvj+4; pile[WZ1]=714; 
(*f[207])( );     /*PLUE2(jvj+4,714)*/
goto l10;
l12:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+4; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+4)*/
goto l13;
l16:V97=t[V97];
goto l14;
l17:V96=s[V97];
for(a=x[jvj+23];a>0;a=t[a]) if(s[a]==V96) goto l16;
l15:V2=134;
goto l11;
}
