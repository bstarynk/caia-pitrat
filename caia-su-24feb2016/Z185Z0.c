#include "dx.h"
void Z185Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V3=0,V14=0,V16=0,V491=0,V439=0,V497=0,V146=0,V487=0,V317=0,V306=0,V511=0,V182=0,V171=0,V512=0,V489=0,V343=0,V495=0,V337=0,V513=0,V338=0,V514=0,V499=0,V503=0,V505=0,V63=0,V62=0,V389=0,V385=0,V387=0,V384=0,V114=0,V119=0,V117=0,V116=0,V113=0;
int EXEXEX,RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=139;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+12]=x[RRRT] ;z[jvj+12]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==770)) goto l9;
if((x[jvj+14]==29)) goto l11;
if((x[jvj+14]==27)) goto l12;
if((x[jvj+14]==408)) goto l13;
if((x[jvj+14]==30)) goto l17;
if((x[jvj+14]==25)) goto l21;
if((x[jvj+14]==625)) goto l40;
if((x[jvj+14]!=1889)) goto l45;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+12,jvj+5)*/
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+5,jvj+107)*/
if((x[jvj+107]!=484)) goto l45;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[200])( );if(v[102]) goto l44;     /*NDD0(jvj+5,jvj+6)*/
pile[v[22]]=202; pile[WZ2]=jvj+7; 
(*f[1948])( );if(v[102]) goto l44;     /*FNDOND0(202,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l45;
l44:pile[v[22]]=EXEXEX; pile[WZ1]=1833; 
(*f[207])( );     /*PLUE2(EXEXEX,1833)*/
l45:pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+12,jvj+108)*/
if((x[jvj+108]!=22)) goto l49;
pile[v[22]]=1821; pile[WZ1]=145; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(1821,145,jvj+109)*/
for(a=x[jvj+109];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l46;
l47:pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+12,jvj+113)*/
pile[v[22]]=100; pile[WZ1]=jvj+113; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+113,jvj+114)*/
if((x[jvj+114]!=484)) goto l49;
pile[v[22]]=1939; pile[WZ1]=145; pile[WZ2]=jvj+115; 
(*f[33])( );     /*FNDE0(1939,145,jvj+115)*/
for(a=x[jvj+115];a>0;a=t[a]) if(s[a]==x[jvj+14]) goto l48;
l49:pile[v[22]]=jvj+12; pile[WZ1]=jvj+117; 
(*f[1361])( );     /*VAROBJ0(jvj+12,jvj+117)*/
for(i=x[jvj+117],V389=0;i>0;i=t[i],V389++)  ;
if((V389==2)) goto l51;
if((V389!=3)) goto l61;
x[jvj+137]=x[jvj+117] ;z[jvj+137]=z[jvj+117];
l55:if((x[jvj+137]<=0)) goto l61;
x[jvj+124]=s[x[jvj+137]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+137];
pile[v[22]]=202; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[1948])( );if(v[102]) goto l56;     /*FNDOND0(202,jvj+124,jvj+125)*/
if((x[jvj+125]!=68)) goto l56;
pile[v[22]]=365; pile[WZ2]=jvj+126; 
(*f[1969])( );     /*FNDEND0(365,jvj+124,jvj+126)*/
for(i=x[jvj+126],V114=0;i>0;i=t[i],V114++)  ;
x[jvj+138]=x[jvj+117] ;z[jvj+138]=z[jvj+117];
l57:if((x[jvj+138]<=0)) goto l56;
x[jvj+127]=s[x[jvj+138]] ;z[jvj+127]=(x[jvj+127]<=sepcte) ? x[jvj+127] : z[jvj+138];
if((x[jvj+127]==x[jvj+124])) goto l58;
pile[v[22]]=202; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[1948])( );if(v[102]) goto l58;     /*FNDOND0(202,jvj+127,jvj+128)*/
if((x[jvj+128]!=68)) goto l58;
pile[v[22]]=365; pile[WZ2]=jvj+129; 
(*f[1969])( );     /*FNDEND0(365,jvj+127,jvj+129)*/
for(i=x[jvj+129],V119=0;i>0;i=t[i],V119++)  ;
x[jvj+139]=x[jvj+117] ;z[jvj+139]=z[jvj+117];
l59:if((x[jvj+139]<=0)) goto l58;
x[jvj+130]=s[x[jvj+139]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+139];
if((x[jvj+130]==x[jvj+124])) goto l60;
if((x[jvj+130]==x[jvj+127])) goto l60;
pile[v[22]]=202; pile[WZ1]=jvj+130; pile[WZ2]=jvj+131; 
(*f[1948])( );if(v[102]) goto l60;     /*FNDOND0(202,jvj+130,jvj+131)*/
if((x[jvj+131]!=68)) goto l60;
pile[v[22]]=365; pile[WZ2]=jvj+132; 
(*f[1969])( );     /*FNDEND0(365,jvj+130,jvj+132)*/
for(i=x[jvj+132],V117=0;i>0;i=t[i],V117++)  ;
V116=V117*V119;
V113=V114*V116;
if((V113>=500)) goto l60;
pile[v[22]]=EXEXEX; pile[WZ1]=1686; 
(*f[207])( );     /*PLUE2(EXEXEX,1686)*/
l60:x[jvj+139]=t[x[jvj+139]];
goto l59;
l2:x[jvj+1]=s[x[jvj+133]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+133];
if((x[jvj+1]==V171)) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==649)) goto l3;
l4:pile[v[22]]=jvj+4; pile[WZ1]=jvj+1; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+1)*/
l3:x[jvj+133]=t[x[jvj+133]];
l1:if((x[jvj+133]>0)) goto l2;
pile[v[22]]=EXEXEX; pile[WZ1]=1746; 
(*f[207])( );     /*PLUE2(EXEXEX,1746)*/
V512=t[V512];
l32:if((V512<=0)) goto l33;
V171=s[V512];
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+133]=x[jvj+88] ;z[jvj+133]=z[jvj+88];
goto l1;
l6:x[jvj+8]=s[x[jvj+134]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+134];
if((x[jvj+8]==V306)) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]==649)) goto l7;
l8:pile[v[22]]=jvj+11; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+8)*/
l7:x[jvj+134]=t[x[jvj+134]];
l5:if((x[jvj+134]>0)) goto l6;
pile[v[22]]=EXEXEX; pile[WZ1]=1740; 
(*f[207])( );     /*PLUE2(EXEXEX,1740)*/
V511=t[V511];
l31:if((V511<=0)) goto l33;
V306=s[V511];
x[jvj+11]=0 ;z[jvj+11]=0;
x[jvj+134]=x[jvj+84] ;z[jvj+134]=z[jvj+84];
goto l5;
l9:pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+12,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+15,jvj+16)*/
if((x[jvj+16]==41)) goto l10;
if((x[jvj+16]!=484)) goto l45;
pile[v[22]]=EXEXEX; pile[WZ1]=1653; 
(*f[207])( );     /*PLUE2(EXEXEX,1653)*/
goto l45;
l10:pile[v[22]]=EXEXEX; pile[WZ1]=1557; 
(*f[207])( );     /*PLUE2(EXEXEX,1557)*/
goto l45;
l11:pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+12,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=41)) goto l45;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+12,jvj+19)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1644; 
(*f[207])( );     /*PLUE2(EXEXEX,1644)*/
goto l45;
l12:pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+12,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]!=41)) goto l45;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+12,jvj+22)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1647; 
(*f[207])( );     /*PLUE2(EXEXEX,1647)*/
goto l45;
l13:pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+12,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+12,jvj+25)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1533; 
(*f[207])( );     /*PLUE2(EXEXEX,1533)*/
x[jvj+26]=vo[16];z[jvj+26]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+26,jvj+27)*/
pile[v[22]]=1182; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1182,jvj+27,jvj+28)*/
if((68!=x[jvj+28])) goto l14;
pile[v[22]]=EXEXEX; pile[WZ1]=1530; 
(*f[207])( );     /*PLUE2(EXEXEX,1530)*/
l14:pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+12,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+29,jvj+30)*/
if((x[jvj+30]!=484)) goto l15;
pile[v[22]]=EXEXEX; pile[WZ1]=1536; 
(*f[207])( );     /*PLUE2(EXEXEX,1536)*/
pile[WZ1]=1563; 
(*f[207])( );     /*PLUE2(EXEXEX,1563)*/
pile[v[22]]=111; pile[WZ1]=jvj+23; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+23,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=486)) goto l15;
pile[v[22]]=107; pile[WZ1]=jvj+23; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+23,jvj+33)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1815; 
(*f[207])( );     /*PLUE2(EXEXEX,1815)*/
l15:pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+23,V2)*/
V2=pile[WZ2]; 
if((V2==0)) goto l16;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+34; 
(*f[891])( );     /*VAREXP0(jvj+12,jvj+34)*/
for(i=x[jvj+34],V3=0;i>0;i=t[i],V3++)  ;
if((V3>2)) goto l16;
pile[v[22]]=EXEXEX; pile[WZ1]=1584; 
(*f[207])( );     /*PLUE2(EXEXEX,1584)*/
l16:pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(111,jvj+29,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=596)) goto l45;
x[jvj+37]=vo[16];z[jvj+37]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[1948])( );if(v[102]) goto l45;     /*FNDOND0(498,jvj+37,jvj+38)*/
pile[v[22]]=1182; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1182,jvj+38,jvj+39)*/
if((68!=x[jvj+39])) goto l45;
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+29,jvj+40)*/
pile[v[22]]=103; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+29,jvj+41)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1608; 
(*f[207])( );     /*PLUE2(EXEXEX,1608)*/
goto l45;
l17:pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(103,jvj+12,jvj+42)*/
pile[v[22]]=100; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+42,jvj+43)*/
if((x[jvj+43]!=484)) goto l18;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,jvj+12,jvj+44)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1539; 
(*f[207])( );     /*PLUE2(EXEXEX,1539)*/
l18:pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+12,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=484)) goto l19;
pile[v[22]]=EXEXEX; pile[WZ1]=1542; 
(*f[207])( );     /*PLUE2(EXEXEX,1542)*/
l19:x[jvj+47]=vo[16];z[jvj+47]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[1948])( );if(v[102]) goto l45;     /*FNDOND0(498,jvj+47,jvj+48)*/
pile[v[22]]=1182; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1182,jvj+48,jvj+49)*/
if((68!=x[jvj+49])) goto l45;
pile[v[22]]=EXEXEX; pile[WZ1]=1632; 
(*f[207])( );     /*PLUE2(EXEXEX,1632)*/
goto l45;
l21:x[jvj+50]=d[20];z[jvj+50]=0;
l20:if((x[jvj+50]<=0)) goto l45;
x[jvj+51]=s[x[jvj+50]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+50];
pile[v[22]]=jvj+51; pile[WZ1]=jvj+12; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+51,jvj+12,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+52,jvj+53)*/
if((x[jvj+53]!=43)) goto l24;
pile[v[22]]=103; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(103,jvj+52,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(100,jvj+54,jvj+55)*/
if((x[jvj+55]!=484)) goto l24;
pile[v[22]]=102; pile[WZ1]=jvj+52; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,jvj+52,jvj+56)*/
pile[v[22]]=101; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+56,jvj+57)*/
if((x[jvj+57]!=1805)) goto l24;
pile[v[22]]=268; pile[WZ1]=jvj+51; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+51,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+12; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(jvj+58,jvj+12,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]!=68)) goto l24;
pile[v[22]]=jvj+54; pile[WZ1]=jvj+61; 
(*f[200])( );if(v[102]) goto l24;     /*NDD0(jvj+54,jvj+61)*/
pile[v[22]]=202; pile[WZ2]=jvj+62; 
(*f[1948])( );if(v[102]) goto l24;     /*FNDOND0(202,jvj+61,jvj+62)*/
if((x[jvj+62]!=68)) goto l24;
pile[v[22]]=489; pile[WZ2]=jvj+63; 
(*f[1969])( );     /*FNDEND0(489,jvj+61,jvj+63)*/
for(i=x[jvj+63],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=1)) goto l24;
pile[v[22]]=365; pile[WZ2]=jvj+64; 
(*f[1969])( );     /*FNDEND0(365,jvj+61,jvj+64)*/
for(i=x[jvj+64],V16=0;i>0;i=t[i],V16++)  ;
if((V16==2)) goto l23;
if((V16!=1)) goto l24;
pile[v[22]]=EXEXEX; pile[WZ1]=1797; 
(*f[207])( );     /*PLUE2(EXEXEX,1797)*/
l24:pile[v[22]]=111; pile[WZ1]=jvj+52; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(111,jvj+52,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]==1329)) goto l25;
if((x[jvj+66]==486)) goto l26;
if((x[jvj+66]==636)) goto l27;
if((x[jvj+66]==1215)) goto l30;
if((x[jvj+66]!=1273)) goto l33;
pile[v[22]]=268; pile[WZ1]=jvj+51; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+51,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+12; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+85,jvj+12,jvj+86)*/
pile[v[22]]=130; pile[WZ1]=jvj+86; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+86,V182)*/
V182=pile[WZ2]; 
if((V182!=0)) goto l33;
pile[v[22]]=102; pile[WZ1]=jvj+52; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+52,jvj+87)*/
pile[v[22]]=107; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(107,jvj+52,jvj+88)*/
V512=x[jvj+88];
goto l32;
l23:pile[v[22]]=EXEXEX; pile[WZ1]=1674; 
(*f[207])( );     /*PLUE2(EXEXEX,1674)*/
goto l24;
l25:pile[v[22]]=268; pile[WZ1]=jvj+51; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+51,jvj+67)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+67; pile[WZ3]=jvj+68; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+12,jvj+67,V491,jvj+68)*/
V491=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+52; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(102,jvj+52,jvj+69)*/
pile[v[22]]=103; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(103,jvj+52,jvj+70)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1554; 
(*f[207])( );     /*PLUE2(EXEXEX,1554)*/
pile[WZ1]=1602; 
(*f[207])( );     /*PLUE2(EXEXEX,1602)*/
pile[v[22]]=130; pile[WZ1]=jvj+70; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+70,V439)*/
V439=pile[WZ2]; 
if((V439!=2)) goto l33;
pile[v[22]]=EXEXEX; pile[WZ1]=1551; 
(*f[207])( );     /*PLUE2(EXEXEX,1551)*/
l33:pile[v[22]]=268; pile[WZ1]=jvj+51; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(268,jvj+51,jvj+89)*/
pile[v[22]]=jvj+89; pile[WZ1]=jvj+12; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(jvj+89,jvj+12,jvj+90)*/
pile[v[22]]=100; pile[WZ1]=jvj+90; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(100,jvj+90,jvj+91)*/
if((x[jvj+91]!=41)) goto l34;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+51; pile[WZ3]=jvj+92; 
(*f[45])( );if(v[102]) goto l34;     /*FNDZ0(jvj+12,jvj+51,V489,jvj+92)*/
V489=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=1695; 
(*f[207])( );     /*PLUE2(EXEXEX,1695)*/
l34:pile[v[22]]=111; pile[WZ1]=jvj+90; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+90,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+93,jvj+94)*/
if((x[jvj+94]==485)) goto l35;
if((x[jvj+94]!=486)) goto l22;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+51; pile[WZ3]=jvj+97; 
(*f[45])( );if(v[102]) goto l22;     /*FNDZ0(jvj+12,jvj+51,V499,jvj+97)*/
V499=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+90; pile[WZ2]=jvj+98; 
(*f[33])( );     /*FNDE0(107,jvj+90,jvj+98)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1812; 
(*f[207])( );     /*PLUE2(EXEXEX,1812)*/
l22:x[jvj+50]=t[x[jvj+50]];
goto l20;
l26:pile[v[22]]=268; pile[WZ1]=jvj+51; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+51,jvj+71)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+71; pile[WZ3]=jvj+72; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+12,jvj+71,V497,jvj+72)*/
V497=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+52; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(107,jvj+52,jvj+73)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1545; 
(*f[207])( );     /*PLUE2(EXEXEX,1545)*/
goto l33;
l27:pile[v[22]]=268; pile[WZ1]=jvj+51; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+51,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+12; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+74,jvj+12,jvj+75)*/
pile[v[22]]=130; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+75,V146)*/
V146=pile[WZ2]; 
if((V146!=1)) goto l33;
x[jvj+76]=d[20];z[jvj+76]=0;
l28:if((x[jvj+76]<=0)) goto l33;
x[jvj+77]=s[x[jvj+76]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+76];
pile[v[22]]=jvj+77; pile[WZ1]=jvj+52; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+77,jvj+52,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+78,jvj+79)*/
if((x[jvj+79]!=484)) goto l29;
pile[v[22]]=268; pile[WZ1]=jvj+77; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(268,jvj+77,jvj+80)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+80; pile[WZ3]=jvj+81; 
(*f[45])( );if(v[102]) goto l29;     /*FNDZ0(jvj+52,jvj+80,V487,jvj+81)*/
V487=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=1818; 
(*f[207])( );     /*PLUE2(EXEXEX,1818)*/
l29:x[jvj+76]=t[x[jvj+76]];
goto l28;
l30:pile[v[22]]=268; pile[WZ1]=jvj+51; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+51,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+12; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(jvj+82,jvj+12,jvj+83)*/
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(130,jvj+83,V317)*/
V317=pile[WZ2]; 
if((V317!=0)) goto l33;
pile[v[22]]=107; pile[WZ1]=jvj+52; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,jvj+52,jvj+84)*/
V511=x[jvj+84];
goto l31;
l35:pile[v[22]]=107; pile[WZ1]=jvj+90; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(107,jvj+90,jvj+95)*/
for(i=x[jvj+95],V343=0;i>0;i=t[i],V343++)  ;
if((V343!=2)) goto l22;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+51; pile[WZ3]=jvj+96; 
(*f[45])( );if(v[102]) goto l22;     /*FNDZ0(jvj+12,jvj+51,V495,jvj+96)*/
V495=pile[WZ2]; 
V513=x[jvj+95];
l36:if((V513<=0)) goto l22;
V337=s[V513];
V514=x[jvj+95];
l37:if((V514>0)) goto l38;
V513=t[V513];
goto l36;
l38:V338=s[V514];
if((V337==V338)) goto l39;
pile[v[22]]=EXEXEX; pile[WZ1]=1851; 
(*f[207])( );     /*PLUE2(EXEXEX,1851)*/
l39:V514=t[V514];
goto l37;
l40:pile[v[22]]=160; pile[WZ1]=jvj+12; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(160,jvj+12,jvj+99)*/
x[jvj+100]=d[20];z[jvj+100]=0;
l41:if((x[jvj+100]<=0)) goto l45;
x[jvj+101]=s[x[jvj+100]] ;z[jvj+101]=(x[jvj+101]<=sepcte) ? x[jvj+101] : z[jvj+100];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+101; pile[WZ3]=jvj+102; 
(*f[45])( );if(v[102]) goto l42;     /*FNDZ0(jvj+12,jvj+101,V503,jvj+102)*/
V503=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(268,jvj+101,jvj+103)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+103; pile[WZ3]=jvj+104; 
(*f[45])( );if(v[102]) goto l42;     /*FNDZ0(jvj+12,jvj+103,V505,jvj+104)*/
V505=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=1638; 
(*f[207])( );     /*PLUE2(EXEXEX,1638)*/
pile[v[22]]=100; pile[WZ1]=jvj+99; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+99,jvj+105)*/
if((x[jvj+105]!=41)) goto l43;
pile[v[22]]=EXEXEX; pile[WZ1]=1593; 
(*f[207])( );     /*PLUE2(EXEXEX,1593)*/
l43:pile[v[22]]=130; pile[WZ1]=jvj+99; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+99,V63)*/
V63=pile[WZ2]; 
if((V63>=100)) goto l42;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+106; 
(*f[1945])( );if(v[102]) goto l42;     /*DEGREE0(jvj+12,jvj+106)*/
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+106,V62)*/
V62=pile[WZ2]; 
if((V62<0)) goto l42;
pile[v[22]]=EXEXEX; pile[WZ1]=1587; 
(*f[207])( );     /*PLUE2(EXEXEX,1587)*/
l42:x[jvj+100]=t[x[jvj+100]];
goto l41;
l46:x[jvj+110]=vo[16];z[jvj+110]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[1948])( );if(v[102]) goto l47;     /*FNDOND0(498,jvj+110,jvj+111)*/
pile[v[22]]=1182; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(1182,jvj+111,jvj+112)*/
if((68!=x[jvj+112])) goto l47;
pile[v[22]]=EXEXEX; pile[WZ1]=1566; 
(*f[207])( );     /*PLUE2(EXEXEX,1566)*/
pile[WZ1]=1758; 
(*f[207])( );     /*PLUE2(EXEXEX,1758)*/
goto l47;
l48:pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+12,jvj+116)*/
pile[v[22]]=EXEXEX; pile[WZ1]=1854; 
(*f[207])( );     /*PLUE2(EXEXEX,1854)*/
goto l49;
l51:x[jvj+135]=x[jvj+117] ;z[jvj+135]=z[jvj+117];
l50:if((x[jvj+135]<=0)) goto l61;
x[jvj+118]=s[x[jvj+135]] ;z[jvj+118]=(x[jvj+118]<=sepcte) ? x[jvj+118] : z[jvj+135];
pile[v[22]]=202; pile[WZ1]=jvj+118; pile[WZ2]=jvj+119; 
(*f[1948])( );if(v[102]) goto l52;     /*FNDOND0(202,jvj+118,jvj+119)*/
if((x[jvj+119]!=68)) goto l52;
pile[v[22]]=365; pile[WZ2]=jvj+120; 
(*f[1969])( );     /*FNDEND0(365,jvj+118,jvj+120)*/
for(i=x[jvj+120],V385=0;i>0;i=t[i],V385++)  ;
x[jvj+136]=x[jvj+117] ;z[jvj+136]=z[jvj+117];
l53:if((x[jvj+136]<=0)) goto l52;
x[jvj+121]=s[x[jvj+136]] ;z[jvj+121]=(x[jvj+121]<=sepcte) ? x[jvj+121] : z[jvj+136];
if((x[jvj+121]==x[jvj+118])) goto l54;
pile[v[22]]=202; pile[WZ1]=jvj+121; pile[WZ2]=jvj+122; 
(*f[1948])( );if(v[102]) goto l54;     /*FNDOND0(202,jvj+121,jvj+122)*/
if((x[jvj+122]!=68)) goto l54;
pile[v[22]]=365; pile[WZ2]=jvj+123; 
(*f[1969])( );     /*FNDEND0(365,jvj+121,jvj+123)*/
for(i=x[jvj+123],V387=0;i>0;i=t[i],V387++)  ;
V384=V385*V387;
if((V384>=200)) goto l54;
pile[v[22]]=EXEXEX; pile[WZ1]=1680; 
(*f[207])( );     /*PLUE2(EXEXEX,1680)*/
l54:x[jvj+136]=t[x[jvj+136]];
goto l53;
l52:x[jvj+135]=t[x[jvj+135]];
goto l50;
l56:x[jvj+137]=t[x[jvj+137]];
goto l55;
l58:x[jvj+138]=t[x[jvj+138]];
goto l57;
l61:v[0]=jvj; v[22]-=2; return;
}
