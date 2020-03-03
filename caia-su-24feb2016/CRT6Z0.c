#include "dx.h"
void CRT6Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V94=0,V165=0,V82=0,V132=0,V119=0,V206=0,V205=0,V208=0,V2=0,V207=0;
int RRRT;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=58;
x[jvj+1]=11556;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1744&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+58]=0 ;z[jvj+58]=0;
x[jvj+6]=x[jvj+58] ;z[jvj+6]=z[jvj+58];
pile[v[22]]=jvj+6; pile[WZ1]=RRRT; 
(*f[1939])( );     /*Z46Z0(jvj+6,RRRT)*/
(*f[1940])( );     /*Z47Z0(jvj+6,RRRT)*/
(*f[1941])( );     /*Z48Z0(jvj+6,RRRT)*/
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=870; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(870,jvj+2,V12)*/
V12=pile[WZ2]; 
if((V12!=1)) goto l8;
pile[v[22]]=jvj+6; pile[WZ1]=321; 
(*f[207])( );     /*PLUE2(jvj+6,321)*/
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+2,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==770)) goto l4;
if((x[jvj+8]!=625)) goto l6;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(160,jvj+2,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+10,V94)*/
V94=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+2,jvj+11)*/
pile[v[22]]=103; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+2,jvj+12)*/
pile[v[22]]=1294; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==1483) goto l5;
l6:x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1353,jvj+14,jvj+15)*/
if((x[jvj+15]!=68)) goto l8;
pile[v[22]]=498; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(498,jvj+14,jvj+16)*/
pile[v[22]]=1182; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1182,jvj+16,jvj+17)*/
if((68!=x[jvj+17])) goto l8;
pile[v[22]]=1294; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==1483) goto l7;
l8:pile[v[22]]=jvj+6; pile[WZ1]=697; 
(*f[207])( );     /*PLUE2(jvj+6,697)*/
if((V12!=2)) goto l14;
pile[v[22]]=868; pile[WZ1]=jvj+2; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(868,jvj+2,jvj+19)*/
if((x[jvj+19]==55)) goto l9;
pile[v[22]]=jvj+6; pile[WZ1]=354; 
(*f[207])( );     /*PLUE2(jvj+6,354)*/
if((x[jvj+19]!=25)) goto l9;
pile[WZ1]=475; 
(*f[207])( );     /*PLUE2(jvj+6,475)*/
l9:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+2,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==25)) goto l10;
if((x[jvj+21]!=625)) goto l14;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(160,jvj+2,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=41)) goto l12;
pile[v[22]]=1294; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==1483) goto l11;
l12:pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+25,V82)*/
V82=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+2,jvj+28)*/
pile[v[22]]=103; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+2,jvj+29)*/
pile[v[22]]=1294; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==1483) goto l13;
l14:pile[v[22]]=869; pile[WZ1]=jvj+2; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(869,jvj+2,jvj+31)*/
if((x[jvj+31]!=769)) goto l15;
pile[v[22]]=868; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(868,jvj+2,jvj+32)*/
if((x[jvj+32]==408)) goto l15;
pile[v[22]]=1300; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1300,jvj+2,jvj+33)*/
for(a=x[jvj+33];a>0;a=t[a]) if(s[a]==636) goto l15;
pile[v[22]]=jvj+6; pile[WZ1]=229; 
(*f[207])( );     /*PLUE2(jvj+6,229)*/
l15:if((V12<2)) goto l17;
if((V12>3)) goto l17;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+2,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=25)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+2,jvj+36)*/
pile[v[22]]=103; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(103,jvj+2,jvj+37)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+38; 
(*f[888])( );     /*LINEAIRE0(jvj+2,jvj+38)*/
if((x[jvj+38]==134)) goto l16;
l17:pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+2,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]==25)) goto l18;
if((x[jvj+40]==770)) goto l29;
if((x[jvj+40]==29)) goto l30;
if((x[jvj+40]==48)) goto l31;
if((x[jvj+40]==625)) goto l32;
if((x[jvj+40]!=55)) goto l33;
pile[v[22]]=1294; pile[WZ1]=jvj+2; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+54)*/
for(a=x[jvj+54];a>0;a=t[a]) if(s[a]==1598) goto l33;
pile[v[22]]=107; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+55)*/
pile[v[22]]=jvj+6; pile[WZ1]=537; 
(*f[207])( );     /*PLUE2(jvj+6,537)*/
l33:pile[v[22]]=1601; pile[WZ1]=jvj+2; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(1601,jvj+2,jvj+56)*/
if((x[jvj+56]==0)) goto l34;
pile[v[22]]=jvj+6; pile[WZ1]=720; 
(*f[207])( );     /*PLUE2(jvj+6,720)*/
l34:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+57)*/
for(i=x[jvj+6],V206=0;i>0;i=t[i],V206++)  ;
for(i=x[jvj+57],V205=0;i>0;i=t[i],V205++)  ;
if((V206!=V205)) goto l39;
V208=x[jvj+6];
l38:if((V208>0)) goto l41;
V2=135;
l35:if((V2==134)) goto l36;
l37:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:pile[v[22]]=jvj+6; pile[WZ1]=651; 
(*f[207])( );     /*PLUE2(jvj+6,651)*/
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+2,jvj+9)*/
pile[v[22]]=jvj+6; pile[WZ1]=648; 
(*f[207])( );     /*PLUE2(jvj+6,648)*/
goto l6;
l5:pile[v[22]]=jvj+6; pile[WZ1]=498; 
(*f[207])( );     /*PLUE2(jvj+6,498)*/
goto l6;
l7:pile[v[22]]=jvj+6; pile[WZ1]=345; 
(*f[207])( );     /*PLUE2(jvj+6,345)*/
pile[WZ1]=486; 
(*f[207])( );     /*PLUE2(jvj+6,486)*/
goto l8;
l10:pile[v[22]]=1101; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1101,jvj+2,V165)*/
V165=pile[WZ2]; 
if((V165!=2)) goto l14;
pile[v[22]]=1358; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1358,jvj+2,jvj+22)*/
if((x[jvj+22]!=68)) goto l14;
pile[v[22]]=102; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+2,jvj+23)*/
pile[v[22]]=103; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(103,jvj+2,jvj+24)*/
pile[v[22]]=jvj+6; pile[WZ1]=687; 
(*f[207])( );     /*PLUE2(jvj+6,687)*/
goto l14;
l11:pile[v[22]]=jvj+6; pile[WZ1]=681; 
(*f[207])( );     /*PLUE2(jvj+6,681)*/
goto l12;
l13:pile[v[22]]=jvj+6; pile[WZ1]=492; 
(*f[207])( );     /*PLUE2(jvj+6,492)*/
goto l14;
l16:pile[v[22]]=jvj+6; pile[WZ1]=468; 
(*f[207])( );     /*PLUE2(jvj+6,468)*/
goto l17;
l18:pile[v[22]]=jvj+6; pile[WZ1]=694; 
(*f[207])( );     /*PLUE2(jvj+6,694)*/
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+2,jvj+41)*/
pile[v[22]]=103; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,jvj+2,jvj+42)*/
pile[v[22]]=jvj+6; pile[WZ1]=723; 
(*f[207])( );     /*PLUE2(jvj+6,723)*/
pile[v[22]]=1358; pile[WZ1]=jvj+2; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(1358,jvj+2,jvj+43)*/
if((x[jvj+43]!=68)) goto l21;
pile[v[22]]=jvj+6; pile[WZ1]=717; 
(*f[207])( );     /*PLUE2(jvj+6,717)*/
pile[v[22]]=1101; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1101,jvj+2,V132)*/
V132=pile[WZ2]; 
if((V132<=1)) goto l19;
pile[v[22]]=jvj+6; pile[WZ1]=645; 
(*f[207])( );     /*PLUE2(jvj+6,645)*/
pile[WZ1]=663; 
(*f[207])( );     /*PLUE2(jvj+6,663)*/
l19:pile[v[22]]=1294; pile[WZ1]=jvj+2; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+44)*/
for(a=x[jvj+44];a>0;a=t[a]) if(s[a]==1327) goto l20;
l21:pile[v[22]]=1294; pile[WZ1]=jvj+2; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+45)*/
for(a=x[jvj+45];a>0;a=t[a]) if(s[a]==1483) goto l22;
l1:pile[v[22]]=1188; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1188,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l2;
l23:for(a=x[jvj+45];a>0;a=t[a]) if(s[a]==1327) goto l24;
l2:pile[v[22]]=1188; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1188,jvj+2,jvj+4)*/
if((x[jvj+4]==68)) goto l3;
l25:pile[v[22]]=jvj+6; pile[WZ1]=702; 
(*f[207])( );     /*PLUE2(jvj+6,702)*/
l3:pile[v[22]]=1188; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1188,jvj+2,jvj+5)*/
if((x[jvj+5]==68)) goto l27;
l26:pile[v[22]]=jvj+6; pile[WZ1]=714; 
(*f[207])( );     /*PLUE2(jvj+6,714)*/
l27:pile[v[22]]=1294; pile[WZ1]=jvj+2; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(1294,jvj+2,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==1327) goto l28;
goto l33;
l20:pile[v[22]]=jvj+6; pile[WZ1]=528; 
(*f[207])( );     /*PLUE2(jvj+6,528)*/
goto l21;
l22:pile[v[22]]=jvj+6; pile[WZ1]=594; 
(*f[207])( );     /*PLUE2(jvj+6,594)*/
goto l1;
l24:pile[v[22]]=jvj+6; pile[WZ1]=423; 
(*f[207])( );     /*PLUE2(jvj+6,423)*/
goto l2;
l28:pile[v[22]]=jvj+6; pile[WZ1]=369; 
(*f[207])( );     /*PLUE2(jvj+6,369)*/
pile[WZ1]=456; 
(*f[207])( );     /*PLUE2(jvj+6,456)*/
goto l33;
l29:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+2,jvj+47)*/
pile[v[22]]=jvj+6; pile[WZ1]=439; 
(*f[207])( );     /*PLUE2(jvj+6,439)*/
goto l33;
l30:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+2,jvj+48)*/
pile[v[22]]=103; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+2,jvj+49)*/
pile[v[22]]=jvj+6; pile[WZ1]=342; 
(*f[207])( );     /*PLUE2(jvj+6,342)*/
pile[WZ1]=343; 
(*f[207])( );     /*PLUE2(jvj+6,343)*/
goto l33;
l31:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+50)*/
pile[v[22]]=jvj+6; pile[WZ1]=234; 
(*f[207])( );     /*PLUE2(jvj+6,234)*/
goto l33;
l32:pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(160,jvj+2,jvj+51)*/
pile[v[22]]=130; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+51,V119)*/
V119=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+2,jvj+52)*/
pile[v[22]]=103; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+2,jvj+53)*/
pile[v[22]]=jvj+6; pile[WZ1]=558; 
(*f[207])( );     /*PLUE2(jvj+6,558)*/
goto l33;
l36:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+6)*/
goto l37;
l40:V208=t[V208];
goto l38;
l41:V207=s[V208];
for(a=x[jvj+57];a>0;a=t[a]) if(s[a]==V207) goto l40;
l39:V2=134;
goto l35;
}
