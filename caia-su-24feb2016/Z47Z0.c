#include "dx.h"
void Z47Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V32=0,V23=0,V15=0,V209=0,V618=0,V130=0,V604=0,V124=0,V629=0,V228=0,V239=0,V225=0,V622=0,V42=0,V633=0,V43=0,V634=0,V620=0,V266=0,V379=0,V344=0,V357=0,V351=0,V192=0,V181=0,V639=0,V428=0,V469=0,V522=0,V310=0,V313=0,V95=0,V614=0,V616=0,V610=0,V612=0;
int EXEXEX,RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=135;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=x[RRRT] ;z[jvj+4]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==1280)) goto l2;
if((x[jvj+6]==408)) goto l4;
if((x[jvj+6]==25)) goto l6;
if((x[jvj+6]==26)) goto l46;
if((x[jvj+6]!=625)) goto l58;
pile[v[22]]=160; pile[WZ1]=jvj+4; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(160,jvj+4,jvj+95)*/
pile[v[22]]=130; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+95,V469)*/
V469=pile[WZ2]; 
x[jvj+96]=d[20];z[jvj+96]=0;
l49:if((x[jvj+96]<=0)) goto l58;
x[jvj+97]=s[x[jvj+96]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+96];
pile[v[22]]=jvj+97; pile[WZ1]=jvj+4; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(jvj+97,jvj+4,jvj+98)*/
pile[v[22]]=100; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,jvj+98,jvj+99)*/
if((x[jvj+99]!=484)) goto l53;
pile[v[22]]=268; pile[WZ1]=jvj+97; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(268,jvj+97,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(jvj+100,jvj+4,jvj+101)*/
pile[v[22]]=100; pile[WZ1]=jvj+101; pile[WZ2]=jvj+102; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(100,jvj+101,jvj+102)*/
if((x[jvj+102]!=41)) goto l51;
pile[v[22]]=EXEXEX; pile[WZ1]=718; 
(*f[207])( );     /*PLUE2(EXEXEX,718)*/
l51:pile[v[22]]=130; pile[WZ1]=jvj+101; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+101,V522)*/
V522=pile[WZ2]; 
if((V522!=0)) goto l52;
pile[v[22]]=EXEXEX; pile[WZ1]=438; 
(*f[207])( );     /*PLUE2(EXEXEX,438)*/
pile[WZ1]=639; 
(*f[207])( );     /*PLUE2(EXEXEX,639)*/
l52:pile[v[22]]=EXEXEX; pile[WZ1]=504; 
(*f[207])( );     /*PLUE2(EXEXEX,504)*/
pile[WZ1]=664; 
(*f[207])( );     /*PLUE2(EXEXEX,664)*/
l53:pile[v[22]]=111; pile[WZ1]=jvj+98; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,jvj+98,jvj+103)*/
pile[v[22]]=101; pile[WZ1]=jvj+103; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+103,jvj+104)*/
if((x[jvj+104]!=596)) goto l54;
pile[v[22]]=102; pile[WZ1]=jvj+98; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,jvj+98,jvj+105)*/
pile[v[22]]=130; pile[WZ1]=jvj+105; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+105,V310)*/
V310=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+97; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(268,jvj+97,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=jvj+4; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(jvj+106,jvj+4,jvj+107)*/
pile[v[22]]=130; pile[WZ1]=jvj+107; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+107,V313)*/
V313=pile[WZ2]; 
if((V313!=0)) goto l54;
pile[v[22]]=103; pile[WZ1]=jvj+98; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(103,jvj+98,jvj+108)*/
pile[v[22]]=EXEXEX; pile[WZ1]=513; 
(*f[207])( );     /*PLUE2(EXEXEX,513)*/
pile[v[22]]=870; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(870,jvj+4,V95)*/
V95=pile[WZ2]; 
if((V95!=1)) goto l54;
pile[v[22]]=EXEXEX; pile[WZ1]=510; 
(*f[207])( );     /*PLUE2(EXEXEX,510)*/
l54:x[jvj+109]=vo[16];z[jvj+109]=vz[16];
pile[v[22]]=1353; pile[WZ1]=jvj+109; pile[WZ2]=jvj+110; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(1353,jvj+109,jvj+110)*/
if((x[jvj+110]!=68)) goto l56;
pile[v[22]]=498; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(498,jvj+109,jvj+111)*/
pile[v[22]]=1182; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(1182,jvj+111,jvj+112)*/
if((68!=x[jvj+112])) goto l56;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+97; pile[WZ3]=jvj+113; 
(*f[45])( );if(v[102]) goto l56;     /*FNDZ0(jvj+4,jvj+97,V614,jvj+113)*/
V614=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(268,jvj+97,jvj+114)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+114; pile[WZ3]=jvj+115; 
(*f[45])( );if(v[102]) goto l56;     /*FNDZ0(jvj+4,jvj+114,V616,jvj+115)*/
V616=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=670; 
(*f[207])( );     /*PLUE2(EXEXEX,670)*/
pile[v[22]]=1294; pile[WZ1]=jvj+4; pile[WZ2]=jvj+116; 
(*f[33])( );     /*FNDE0(1294,jvj+4,jvj+116)*/
for(a=x[jvj+116];a>0;a=t[a]) if(s[a]==1483) goto l55;
l56:pile[v[22]]=498; pile[WZ1]=jvj+109; pile[WZ2]=jvj+117; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(498,jvj+109,jvj+117)*/
pile[v[22]]=1182; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(1182,jvj+117,jvj+118)*/
if((68!=x[jvj+118])) goto l50;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+97; pile[WZ3]=jvj+119; 
(*f[45])( );if(v[102]) goto l50;     /*FNDZ0(jvj+4,jvj+97,V610,jvj+119)*/
V610=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(268,jvj+97,jvj+120)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+120; pile[WZ3]=jvj+121; 
(*f[45])( );if(v[102]) goto l50;     /*FNDZ0(jvj+4,jvj+120,V612,jvj+121)*/
V612=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=jvj+4; pile[WZ2]=jvj+122; 
(*f[33])( );     /*FNDE0(1294,jvj+4,jvj+122)*/
for(a=x[jvj+122];a>0;a=t[a]) if(s[a]==1483) goto l57;
l50:x[jvj+96]=t[x[jvj+96]];
goto l49;
l1:pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==485)) goto l19;
l42:x[jvj+134]=x[jvj+80] ;z[jvj+134]=z[jvj+80];
l41:if((x[jvj+134]<=0)) goto l19;
x[jvj+85]=s[x[jvj+134]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+134];
pile[v[22]]=130; pile[WZ1]=jvj+85; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+85,V192)*/
V192=pile[WZ2]; 
V639=x[jvj+80];
l44:if((V639<=0)) goto l43;
V181=s[V639];
if((x[jvj+85]==V181)) goto l45;
pile[v[22]]=EXEXEX; pile[WZ1]=408; 
(*f[207])( );     /*PLUE2(EXEXEX,408)*/
l45:V639=t[V639];
goto l44;
l2:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l58;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+4,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=41)) goto l3;
pile[v[22]]=160; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,jvj+4,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+11,jvj+12)*/
if((x[jvj+12]!=41)) goto l3;
pile[v[22]]=EXEXEX; pile[WZ1]=726; 
(*f[207])( );     /*PLUE2(EXEXEX,726)*/
l3:pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+9,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(160,jvj+4,jvj+13)*/
pile[v[22]]=130; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+13,V23)*/
V23=pile[WZ2]; 
if((V23==0)) goto l58;
pile[v[22]]=EXEXEX; pile[WZ1]=654; 
(*f[207])( );     /*PLUE2(EXEXEX,654)*/
l58:if(x[jvj+6]!=29&&x[jvj+6]!=30) goto l59;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+123; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(100,jvj+4,jvj+123)*/
if((x[jvj+123]!=22)) goto l59;
x[jvj+124]=vo[16];z[jvj+124]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+124; pile[WZ2]=jvj+125; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(498,jvj+124,jvj+125)*/
pile[v[22]]=1182; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(1182,jvj+125,jvj+126)*/
if((68!=x[jvj+126])) goto l59;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(102,jvj+4,jvj+127)*/
pile[v[22]]=103; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(103,jvj+4,jvj+128)*/
pile[v[22]]=EXEXEX; pile[WZ1]=301; 
(*f[207])( );     /*PLUE2(EXEXEX,301)*/
l59:v[0]=jvj; v[22]-=2; return;
l4:pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+4,jvj+14)*/
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=485)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l5;
pile[v[22]]=EXEXEX; pile[WZ1]=339; 
(*f[207])( );     /*PLUE2(EXEXEX,339)*/
l5:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+4,jvj+19)*/
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=596)) goto l58;
pile[v[22]]=102; pile[WZ1]=jvj+19; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(102,jvj+19,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(130,jvj+22,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+19; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(103,jvj+19,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=484)) goto l58;
x[jvj+25]=vo[16];z[jvj+25]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(498,jvj+25,jvj+26)*/
pile[v[22]]=1182; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(1182,jvj+26,jvj+27)*/
if((68!=x[jvj+27])) goto l58;
pile[v[22]]=EXEXEX; pile[WZ1]=690; 
(*f[207])( );     /*PLUE2(EXEXEX,690)*/
goto l58;
l6:pile[v[22]]=870; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(870,jvj+4,V209)*/
V209=pile[WZ2]; 
if((V209==1)) goto l8;
if((V209!=2)) goto l18;
pile[v[22]]=869; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(869,jvj+4,jvj+37)*/
if((x[jvj+37]!=769)) goto l18;
x[jvj+38]=d[20];z[jvj+38]=0;
l10:if((x[jvj+38]<=0)) goto l18;
x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+4; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(jvj+39,jvj+4,jvj+40)*/
pile[v[22]]=100; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+40,jvj+41)*/
if((x[jvj+41]!=484)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+39,jvj+42)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+42; pile[WZ3]=jvj+43; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+4,jvj+42,V618,jvj+43)*/
V618=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=312; 
(*f[207])( );     /*PLUE2(EXEXEX,312)*/
l12:pile[v[22]]=111; pile[WZ1]=jvj+40; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+40,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=485)) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+40; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(107,jvj+40,jvj+46)*/
for(i=x[jvj+46],V130=0;i>0;i=t[i],V130++)  ;
if((V130!=2)) goto l11;
pile[v[22]]=268; pile[WZ1]=jvj+39; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+39,jvj+47)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+47; pile[WZ3]=jvj+48; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+4,jvj+47,V604,jvj+48)*/
V604=pile[WZ2]; 
x[jvj+129]=x[jvj+46] ;z[jvj+129]=z[jvj+46];
l13:if((x[jvj+129]<=0)) goto l11;
x[jvj+49]=s[x[jvj+129]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+129];
pile[v[22]]=100; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+49,jvj+50)*/
if((x[jvj+50]!=484)) goto l14;
V629=x[jvj+46];
l15:if((V629<=0)) goto l14;
V124=s[V629];
if((x[jvj+49]==V124)) goto l16;
pile[v[22]]=EXEXEX; pile[WZ1]=531; 
(*f[207])( );     /*PLUE2(EXEXEX,531)*/
l16:V629=t[V629];
goto l15;
l8:x[jvj+28]=d[20];z[jvj+28]=0;
l7:if((x[jvj+28]<=0)) goto l18;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=268; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+29,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+4; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+30,jvj+4,jvj+31)*/
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=486)) goto l9;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+4; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+29,jvj+4,jvj+34)*/
pile[v[22]]=100; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+34,jvj+35)*/
if((x[jvj+35]!=484)) goto l9;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+36; 
(*f[887])( );     /*VARND0(jvj+31,jvj+36)*/
if((x[jvj+36]!=0)) goto l9;
pile[v[22]]=EXEXEX; pile[WZ1]=462; 
(*f[207])( );     /*PLUE2(EXEXEX,462)*/
l9:x[jvj+28]=t[x[jvj+28]];
goto l7;
l11:x[jvj+38]=t[x[jvj+38]];
goto l10;
l14:x[jvj+129]=t[x[jvj+129]];
goto l13;
l18:x[jvj+51]=d[20];z[jvj+51]=0;
l17:if((x[jvj+51]<=0)) goto l58;
x[jvj+52]=s[x[jvj+51]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+51];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+4; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+52,jvj+4,jvj+53)*/
pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]==486)) goto l20;
if((x[jvj+55]==636)) goto l33;
if((x[jvj+55]!=485)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+53; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(107,jvj+53,jvj+80)*/
for(i=x[jvj+80],V344=0;i>0;i=t[i],V344++)  ;
if((V344!=2)) goto l19;
pile[v[22]]=268; pile[WZ1]=jvj+52; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+52,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+4; pile[WZ2]=jvj+1; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+81,jvj+4,jvj+1)*/
pile[v[22]]=130; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(130,jvj+1,V357)*/
V357=pile[WZ2]; 
if((V357!=0)) goto l1;
x[jvj+132]=x[jvj+80] ;z[jvj+132]=z[jvj+80];
l37:if((x[jvj+132]<=0)) goto l1;
x[jvj+82]=s[x[jvj+132]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+132];
pile[v[22]]=100; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+82,jvj+83)*/
if((x[jvj+83]!=484)) goto l38;
x[jvj+133]=x[jvj+80] ;z[jvj+133]=z[jvj+80];
l39:if((x[jvj+133]<=0)) goto l38;
x[jvj+84]=s[x[jvj+133]] ;z[jvj+84]=(x[jvj+84]<=sepcte) ? x[jvj+84] : z[jvj+133];
if((x[jvj+82]==x[jvj+84])) goto l40;
pile[v[22]]=130; pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+84,V351)*/
V351=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=471; 
(*f[207])( );     /*PLUE2(EXEXEX,471)*/
l40:x[jvj+133]=t[x[jvj+133]];
goto l39;
l20:pile[v[22]]=107; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(107,jvj+53,jvj+56)*/
for(i=x[jvj+56],V228=0;i>0;i=t[i],V228++)  ;
if((V228!=2)) goto l27;
pile[v[22]]=268; pile[WZ1]=jvj+52; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(268,jvj+52,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+4; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+57,jvj+4,jvj+58)*/
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+58,V239)*/
V239=pile[WZ2]; 
V225=V239;
if((V225==0)) goto l21;
pile[v[22]]=EXEXEX; pile[WZ1]=540; 
(*f[207])( );     /*PLUE2(EXEXEX,540)*/
l21:pile[v[22]]=jvj+4; pile[WZ1]=jvj+57; pile[WZ3]=jvj+59; 
(*f[45])( );if(v[102]) goto l27;     /*FNDZ0(jvj+4,jvj+57,V622,jvj+59)*/
V622=pile[WZ2]; 
x[jvj+135]=x[jvj+56] ;z[jvj+135]=z[jvj+56];
l22:if((x[jvj+135]<=0)) goto l27;
x[jvj+130]=s[x[jvj+135]] ;z[jvj+130]=(x[jvj+130]<=sepcte) ? x[jvj+130] : z[jvj+135];
x[jvj+60]=x[jvj+130] ;z[jvj+60]=z[jvj+130];
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; 
(*f[887])( );     /*VARND0(jvj+60,jvj+61)*/
if((x[jvj+61]==0)) goto l23;
x[jvj+131]=x[jvj+56] ;z[jvj+131]=z[jvj+56];
l24:if((x[jvj+131]<=0)) goto l23;
x[jvj+62]=s[x[jvj+131]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+131];
if((x[jvj+130]==x[jvj+62])) goto l25;
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[1446])( );     /*NONUL0(jvj+62,jvj+63)*/
if((x[jvj+63]==135)) goto l26;
l25:x[jvj+131]=t[x[jvj+131]];
goto l24;
l23:x[jvj+135]=t[x[jvj+135]];
goto l22;
l26:pile[v[22]]=EXEXEX; pile[WZ1]=297; 
(*f[207])( );     /*PLUE2(EXEXEX,297)*/
pile[WZ1]=298; 
(*f[207])( );     /*PLUE2(EXEXEX,298)*/
goto l25;
l27:pile[v[22]]=268; pile[WZ1]=jvj+52; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+52,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+4; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+64,jvj+4,jvj+65)*/
pile[v[22]]=111; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+65,jvj+66)*/
pile[v[22]]=101; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+66,jvj+67)*/
if((x[jvj+67]!=486)) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+65; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(107,jvj+65,jvj+68)*/
V633=x[jvj+56];
l28:if((V633<=0)) goto l31;
V42=s[V633];
V634=x[jvj+68];
l29:if((V634>0)) goto l30;
V633=t[V633];
goto l28;
l30:V43=s[V634];
pile[v[22]]=EXEXEX; pile[WZ1]=135; 
(*f[207])( );     /*PLUE2(EXEXEX,135)*/
V634=t[V634];
goto l29;
l31:pile[v[22]]=jvj+4; pile[WZ1]=jvj+64; pile[WZ3]=jvj+69; 
(*f[45])( );if(v[102]) goto l19;     /*FNDZ0(jvj+4,jvj+64,V620,jvj+69)*/
V620=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=jvj+4; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(1294,jvj+4,jvj+70)*/
for(a=x[jvj+70];a>0;a=t[a]) if(s[a]==1340) goto l32;
l19:x[jvj+51]=t[x[jvj+51]];
goto l17;
l32:pile[v[22]]=EXEXEX; pile[WZ1]=414; 
(*f[207])( );     /*PLUE2(EXEXEX,414)*/
goto l19;
l33:pile[v[22]]=268; pile[WZ1]=jvj+52; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(268,jvj+52,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+4; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+71,jvj+4,jvj+72)*/
pile[v[22]]=130; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+72,V266)*/
V266=pile[WZ2]; 
if((V266!=1)) goto l19;
x[jvj+73]=d[20];z[jvj+73]=0;
l34:if((x[jvj+73]<=0)) goto l19;
x[jvj+74]=s[x[jvj+73]] ;z[jvj+74]=(x[jvj+74]<=sepcte) ? x[jvj+74] : z[jvj+73];
pile[v[22]]=jvj+74; pile[WZ1]=jvj+53; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+74,jvj+53,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(100,jvj+75,jvj+76)*/
if((x[jvj+76]!=484)) goto l35;
pile[v[22]]=268; pile[WZ1]=jvj+74; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(268,jvj+74,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+53; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+77,jvj+53,jvj+78)*/
pile[v[22]]=100; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+78,jvj+79)*/
if((x[jvj+79]!=484)) goto l36;
pile[v[22]]=EXEXEX; pile[WZ1]=672; 
(*f[207])( );     /*PLUE2(EXEXEX,672)*/
l36:pile[v[22]]=130; pile[WZ1]=jvj+78; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+78,V379)*/
V379=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=708; 
(*f[207])( );     /*PLUE2(EXEXEX,708)*/
l35:x[jvj+73]=t[x[jvj+73]];
goto l34;
l38:x[jvj+132]=t[x[jvj+132]];
goto l37;
l43:x[jvj+134]=t[x[jvj+134]];
goto l41;
l46:x[jvj+86]=vo[16];z[jvj+86]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(498,jvj+86,jvj+87)*/
pile[v[22]]=1182; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(1182,jvj+87,jvj+88)*/
if((68!=x[jvj+88])) goto l58;
x[jvj+89]=d[20];z[jvj+89]=0;
l47:if((x[jvj+89]<=0)) goto l58;
x[jvj+90]=s[x[jvj+89]] ;z[jvj+90]=(x[jvj+90]<=sepcte) ? x[jvj+90] : z[jvj+89];
pile[v[22]]=jvj+90; pile[WZ1]=jvj+4; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(jvj+90,jvj+4,jvj+91)*/
pile[v[22]]=100; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+91,jvj+92)*/
if((x[jvj+92]!=484)) goto l48;
pile[v[22]]=268; pile[WZ1]=jvj+90; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(268,jvj+90,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+4; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(jvj+93,jvj+4,jvj+94)*/
pile[v[22]]=130; pile[WZ1]=jvj+94; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(130,jvj+94,V428)*/
V428=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=609; 
(*f[207])( );     /*PLUE2(EXEXEX,609)*/
l48:x[jvj+89]=t[x[jvj+89]];
goto l47;
l55:pile[v[22]]=EXEXEX; pile[WZ1]=489; 
(*f[207])( );     /*PLUE2(EXEXEX,489)*/
goto l56;
l57:pile[v[22]]=EXEXEX; pile[WZ1]=508; 
(*f[207])( );     /*PLUE2(EXEXEX,508)*/
goto l50;
}
