#include "dx.h"
void CRT8Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V137=0,V24=0,V63=0,V158=0,V160=0,V89=0,V104=0,V101=0,V153=0,V157=0,V149=0,V183=0,V182=0,V185=0,V2=0,V184=0;
int RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=46;
x[jvj+1]=11558;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1746&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
RRRT=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+46]=0 ;z[jvj+46]=0;
x[jvj+4]=x[jvj+46] ;z[jvj+4]=z[jvj+46];
pile[v[22]]=jvj+4; pile[WZ1]=RRRT; 
(*f[1946])( );     /*Z89Z0(jvj+4,RRRT)*/
(*f[1947])( );     /*Z185Z0(jvj+4,RRRT)*/
x[jvj+2]=x[RRRT] ;z[jvj+2]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+2,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==770)) goto l1;
if((x[jvj+6]==25)) goto l2;
if((x[jvj+6]==48)) goto l10;
if((x[jvj+6]==55)) goto l11;
if((x[jvj+6]!=30)) goto l12;
x[jvj+30]=vo[16];z[jvj+30]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[1948])( );if(v[102]) goto l12;     /*FNDOND0(498,jvj+30,jvj+31)*/
pile[v[22]]=1182; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1182,jvj+31,jvj+32)*/
if((68!=x[jvj+32])) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+2,jvj+33)*/
pile[v[22]]=103; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+2,jvj+34)*/
pile[v[22]]=jvj+4; pile[WZ1]=1755; 
(*f[207])( );     /*PLUE2(jvj+4,1755)*/
l12:pile[v[22]]=jvj+2; pile[WZ1]=jvj+35; 
(*f[1361])( );     /*VAROBJ0(jvj+2,jvj+35)*/
for(i=x[jvj+35],V89=0;i>0;i=t[i],V89++)  ;
if((V89==1)) goto l13;
l15:pile[v[22]]=jvj+2; pile[WZ1]=jvj+38; 
(*f[891])( );     /*VAREXP0(jvj+2,jvj+38)*/
for(i=x[jvj+38],V104=0;i>0;i=t[i],V104++)  ;
if((V104==1)) goto l16;
l17:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+2,jvj+39)*/
if((x[jvj+39]!=43)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+2,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=1929)) goto l19;
pile[v[22]]=103; pile[WZ1]=jvj+2; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+2,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[1945])( );if(v[102]) goto l19;     /*DEGREE0(jvj+42,jvj+43)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+43,V153)*/
V153=pile[WZ2]; 
if((V153!=2)) goto l19;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+44; 
(*f[891])( );     /*VAREXP0(jvj+42,jvj+44)*/
for(i=x[jvj+44],V157=0;i>0;i=t[i],V157++)  ;
if((V157==1)) goto l18;
l19:pile[v[22]]=1417; pile[WZ1]=RRRT; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1417,RRRT,jvj+45)*/
for(i=x[jvj+4],V183=0;i>0;i=t[i],V183++)  ;
for(i=x[jvj+45],V182=0;i>0;i=t[i],V182++)  ;
if((V183!=V182)) goto l24;
V185=x[jvj+4];
l23:if((V185>0)) goto l26;
V2=135;
l20:if((V2==134)) goto l21;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+2,jvj+7)*/
pile[v[22]]=jvj+4; pile[WZ1]=1548; 
(*f[207])( );     /*PLUE2(jvj+4,1548)*/
pile[WZ1]=1596; 
(*f[207])( );     /*PLUE2(jvj+4,1596)*/
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=486)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+10)*/
pile[v[22]]=jvj+4; pile[WZ1]=1599; 
(*f[207])( );     /*PLUE2(jvj+4,1599)*/
goto l12;
l2:pile[v[22]]=jvj+2; pile[WZ1]=jvj+11; 
(*f[1945])( );if(v[102]) goto l6;     /*DEGREE0(jvj+2,jvj+11)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+11,V24)*/
V24=pile[WZ2]; 
if((V24==1)) goto l3;
if((V24!=2)) goto l6;
pile[v[22]]=jvj+4; pile[WZ1]=1836; 
(*f[207])( );     /*PLUE2(jvj+4,1836)*/
l6:x[jvj+12]=d[20];z[jvj+12]=0;
l4:if((x[jvj+12]>0)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+2,jvj+26)*/
pile[v[22]]=103; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+2,jvj+27)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[1945])( );if(v[102]) goto l9;     /*DEGREE0(jvj+2,jvj+3)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+3,V137)*/
V137=pile[WZ2]; 
if((V137<=1)) goto l12;
l9:pile[v[22]]=jvj+4; pile[WZ1]=1821; 
(*f[207])( );     /*PLUE2(jvj+4,1821)*/
goto l12;
l3:pile[v[22]]=jvj+4; pile[WZ1]=1572; 
(*f[207])( );     /*PLUE2(jvj+4,1572)*/
goto l6;
l5:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+13,jvj+2,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=486)) goto l8;
pile[v[22]]=268; pile[WZ1]=jvj+13; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+13,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(jvj+17,jvj+2,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(130,jvj+18,V63)*/
V63=pile[WZ2]; 
if((V63!=0)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+14; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+14,jvj+19)*/
pile[v[22]]=jvj+4; pile[WZ1]=1605; 
(*f[207])( );     /*PLUE2(jvj+4,1605)*/
l8:pile[v[22]]=jvj+2; pile[WZ1]=jvj+13; pile[WZ3]=jvj+20; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+2,jvj+13,V158,jvj+20)*/
V158=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+13,jvj+21)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+21; pile[WZ3]=jvj+22; 
(*f[45])( );if(v[102]) goto l7;     /*FNDZ0(jvj+2,jvj+21,V160,jvj+22)*/
V160=pile[WZ2]; 
pile[v[22]]=jvj+4; pile[WZ1]=1527; 
(*f[207])( );     /*PLUE2(jvj+4,1527)*/
pile[WZ1]=1581; 
(*f[207])( );     /*PLUE2(jvj+4,1581)*/
pile[WZ1]=1611; 
(*f[207])( );     /*PLUE2(jvj+4,1611)*/
pile[WZ1]=1629; 
(*f[207])( );     /*PLUE2(jvj+4,1629)*/
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[1948])( );if(v[102]) goto l7;     /*FNDOND0(498,jvj+23,jvj+24)*/
pile[v[22]]=1182; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1182,jvj+24,jvj+25)*/
if((68!=x[jvj+25])) goto l7;
pile[v[22]]=jvj+4; pile[WZ1]=1704; 
(*f[207])( );     /*PLUE2(jvj+4,1704)*/
l7:x[jvj+12]=t[x[jvj+12]];
goto l4;
l10:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+28)*/
pile[v[22]]=jvj+4; pile[WZ1]=234; 
(*f[207])( );     /*PLUE2(jvj+4,234)*/
pile[WZ1]=1614; 
(*f[207])( );     /*PLUE2(jvj+4,1614)*/
goto l12;
l11:pile[v[22]]=107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+29)*/
pile[v[22]]=jvj+4; pile[WZ1]=1506; 
(*f[207])( );     /*PLUE2(jvj+4,1506)*/
goto l12;
l21:z[RRRT]=(-1);
pile[v[22]]=RRRT; pile[WZ1]=1417; pile[WZ2]=jvj+4; 
(*f[34])( );     /*CHGC0(RRRT,1417,jvj+4)*/
goto l22;
l25:V185=t[V185];
goto l23;
l26:V184=s[V185];
for(a=x[jvj+45];a>0;a=t[a]) if(s[a]==V184) goto l25;
l24:V2=134;
goto l20;
l13:if((x[jvj+35]<=0)) goto l15;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=202; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(202,jvj+36,jvj+37)*/
if((x[jvj+37]!=68)) goto l14;
pile[v[22]]=jvj+4; pile[WZ1]=1617; 
(*f[207])( );     /*PLUE2(jvj+4,1617)*/
pile[WZ1]=1788; 
(*f[207])( );     /*PLUE2(jvj+4,1788)*/
l14:x[jvj+35]=t[x[jvj+35]];
goto l13;
l16:if((x[jvj+38]<=0)) goto l17;
V101=s[x[jvj+38]];
pile[v[22]]=jvj+4; pile[WZ1]=1698; 
(*f[207])( );     /*PLUE2(jvj+4,1698)*/
x[jvj+38]=t[x[jvj+38]];
goto l16;
l18:if((x[jvj+44]<=0)) goto l19;
V149=s[x[jvj+44]];
pile[v[22]]=jvj+4; pile[WZ1]=1839; 
(*f[207])( );     /*PLUE2(jvj+4,1839)*/
x[jvj+44]=t[x[jvj+44]];
goto l18;
}
