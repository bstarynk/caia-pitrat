#include "dx.h"
void Z52Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V528=0,V567=0,V603=0,V484=0,V61=0,V89=0,V100=0,K=0,V629=0,V127=0,V219=0,V185=0,V198=0,V192=0,V609=0,V279=0,V637=0,V505=0,V497=0,V638=0,V387=0,V615=0,V627=0,V546=0,V639=0,V425=0,V621=0,V419=0,V640=0,V433=0,V268=0,V313=0,V335=0,V151=0,V154=0,V2=0,V611=0,V613=0;
int EXEXEX,RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=113;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[RRRT] ;z[jvj+1]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+1,jvj+2)*/
pile[v[22]]=101; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+2,jvj+3)*/
if((x[jvj+3]==408)) goto l1;
if((x[jvj+3]==1280)) goto l6;
if((x[jvj+3]==25)) goto l9;
if((x[jvj+3]==26)) goto l39;
if((x[jvj+3]!=625)) goto l49;
pile[v[22]]=160; pile[WZ1]=jvj+1; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(160,jvj+1,jvj+83)*/
pile[v[22]]=130; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(130,jvj+83,V313)*/
V313=pile[WZ2]; 
x[jvj+84]=d[20];z[jvj+84]=0;
l42:if((x[jvj+84]<=0)) goto l49;
x[jvj+85]=s[x[jvj+84]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+84];
pile[v[22]]=jvj+85; pile[WZ1]=jvj+1; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+85,jvj+1,jvj+86)*/
pile[v[22]]=100; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(100,jvj+86,jvj+87)*/
if((x[jvj+87]!=484)) goto l46;
pile[v[22]]=268; pile[WZ1]=jvj+85; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(268,jvj+85,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+1; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l46;     /*FNDO0(jvj+88,jvj+1,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,jvj+89,jvj+90)*/
if((x[jvj+90]!=41)) goto l44;
pile[v[22]]=EXEXEX; pile[WZ1]=718; 
(*f[207])( );     /*PLUE2(EXEXEX,718)*/
l44:pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(130,jvj+89,V335)*/
V335=pile[WZ2]; 
if((V335!=0)) goto l45;
pile[v[22]]=EXEXEX; pile[WZ1]=438; 
(*f[207])( );     /*PLUE2(EXEXEX,438)*/
pile[WZ1]=639; 
(*f[207])( );     /*PLUE2(EXEXEX,639)*/
l45:pile[v[22]]=EXEXEX; pile[WZ1]=664; 
(*f[207])( );     /*PLUE2(EXEXEX,664)*/
l46:pile[v[22]]=111; pile[WZ1]=jvj+86; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+86,jvj+91)*/
pile[v[22]]=101; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+91,jvj+92)*/
if((x[jvj+92]!=596)) goto l47;
pile[v[22]]=102; pile[WZ1]=jvj+86; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,jvj+86,jvj+93)*/
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+93,V151)*/
V151=pile[WZ2]; 
pile[v[22]]=268; pile[WZ1]=jvj+85; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(268,jvj+85,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=jvj+1; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(jvj+94,jvj+1,jvj+95)*/
pile[v[22]]=130; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+95,V154)*/
V154=pile[WZ2]; 
if((V154!=0)) goto l47;
pile[v[22]]=103; pile[WZ1]=jvj+86; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,jvj+86,jvj+96)*/
pile[v[22]]=EXEXEX; pile[WZ1]=513; 
(*f[207])( );     /*PLUE2(EXEXEX,513)*/
pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(870,jvj+1,V2)*/
V2=pile[WZ2]; 
if((V2!=1)) goto l47;
pile[v[22]]=EXEXEX; pile[WZ1]=510; 
(*f[207])( );     /*PLUE2(EXEXEX,510)*/
l47:x[jvj+97]=vo[16];z[jvj+97]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+97; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(498,jvj+97,jvj+98)*/
pile[v[22]]=1182; pile[WZ1]=jvj+98; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(1182,jvj+98,jvj+99)*/
if((68!=x[jvj+99])) goto l43;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+85; pile[WZ3]=jvj+100; 
(*f[45])( );if(v[102]) goto l43;     /*FNDZ0(jvj+1,jvj+85,V611,jvj+100)*/
V611=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+101; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(268,jvj+85,jvj+101)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+101; pile[WZ3]=jvj+102; 
(*f[45])( );if(v[102]) goto l43;     /*FNDZ0(jvj+1,jvj+101,V613,jvj+102)*/
V613=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=489; 
(*f[207])( );     /*PLUE2(EXEXEX,489)*/
pile[WZ1]=670; 
(*f[207])( );     /*PLUE2(EXEXEX,670)*/
pile[v[22]]=1294; pile[WZ1]=jvj+1; pile[WZ2]=jvj+103; 
(*f[33])( );     /*FNDE0(1294,jvj+1,jvj+103)*/
for(a=x[jvj+103];a>0;a=t[a]) if(s[a]==1483) goto l48;
l43:x[jvj+84]=t[x[jvj+84]];
goto l42;
l1:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+1,jvj+4)*/
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+4,jvj+5)*/
if((x[jvj+5]!=484)) goto l4;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(498,jvj+6,jvj+7)*/
pile[v[22]]=1182; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1182,jvj+7,jvj+8)*/
if((68!=x[jvj+8])) goto l2;
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+1,jvj+9)*/
pile[v[22]]=EXEXEX; pile[WZ1]=309; 
(*f[207])( );     /*PLUE2(EXEXEX,309)*/
l2:pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+1,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+10,V528)*/
V528=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=441; 
(*f[207])( );     /*PLUE2(EXEXEX,441)*/
l3:pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=485)) goto l4;
pile[v[22]]=EXEXEX; pile[WZ1]=339; 
(*f[207])( );     /*PLUE2(EXEXEX,339)*/
l4:pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+1,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=486)) goto l49;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
l5:if((x[jvj+16]<=0)) goto l49;
V567=s[x[jvj+16]];
pile[v[22]]=EXEXEX; pile[WZ1]=147; 
(*f[207])( );     /*PLUE2(EXEXEX,147)*/
x[jvj+16]=t[x[jvj+16]];
goto l5;
l6:pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(103,jvj+1,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+17,V603)*/
V603=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+1,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+18,jvj+19)*/
if((x[jvj+19]!=484)) goto l7;
pile[v[22]]=EXEXEX; pile[WZ1]=715; 
(*f[207])( );     /*PLUE2(EXEXEX,715)*/
l7:pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+17,jvj+20)*/
if((x[jvj+20]!=41)) goto l49;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(102,jvj+1,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=484)) goto l49;
pile[v[22]]=160; pile[WZ1]=jvj+1; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(160,jvj+1,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=41)) goto l49;
pile[v[22]]=EXEXEX; pile[WZ1]=726; 
(*f[207])( );     /*PLUE2(EXEXEX,726)*/
l49:if(x[jvj+3]!=29&&x[jvj+3]!=30) goto l50;
pile[v[22]]=100; pile[WZ1]=jvj+1; pile[WZ2]=jvj+104; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+1,jvj+104)*/
if((x[jvj+104]!=22)) goto l50;
x[jvj+105]=vo[16];z[jvj+105]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(498,jvj+105,jvj+106)*/
pile[v[22]]=1182; pile[WZ1]=jvj+106; pile[WZ2]=jvj+107; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(1182,jvj+106,jvj+107)*/
if((68!=x[jvj+107])) goto l50;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+1,jvj+108)*/
pile[v[22]]=103; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+1,jvj+109)*/
pile[v[22]]=EXEXEX; pile[WZ1]=301; 
(*f[207])( );     /*PLUE2(EXEXEX,301)*/
pile[WZ1]=612; 
(*f[207])( );     /*PLUE2(EXEXEX,612)*/
l50:v[0]=jvj; v[22]-=2; return;
l9:x[jvj+25]=d[20];z[jvj+25]=0;
l8:if((x[jvj+25]<=0)) goto l49;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+1; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+26,jvj+1,jvj+27)*/
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=484)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+26,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+1; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+29,jvj+1,jvj+30)*/
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+30,V484)*/
V484=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=318; 
(*f[207])( );     /*PLUE2(EXEXEX,318)*/
l11:pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=486)) goto l12;
pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,jvj+1,V61)*/
V61=pile[WZ2]; 
if((V61!=1)) goto l12;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+30,jvj+33)*/
if((x[jvj+33]!=0)) goto l12;
pile[v[22]]=EXEXEX; pile[WZ1]=462; 
(*f[207])( );     /*PLUE2(EXEXEX,462)*/
l12:pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(111,jvj+27,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]==486)) goto l13;
if((x[jvj+35]==636)) goto l15;
if((x[jvj+35]!=485)) goto l31;
pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+50)*/
for(i=x[jvj+50],V185=0;i>0;i=t[i],V185++)  ;
if((V185!=2)) goto l31;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(268,jvj+26,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+1; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+51,jvj+1,jvj+52)*/
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+52,V198)*/
V198=pile[WZ2]; 
if((V198!=0)) goto l23;
x[jvj+110]=x[jvj+50] ;z[jvj+110]=z[jvj+50];
l19:if((x[jvj+110]<=0)) goto l23;
x[jvj+53]=s[x[jvj+110]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+110];
pile[v[22]]=100; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+53,jvj+54)*/
if((x[jvj+54]!=484)) goto l20;
x[jvj+111]=x[jvj+50] ;z[jvj+111]=z[jvj+50];
l21:if((x[jvj+111]<=0)) goto l20;
x[jvj+55]=s[x[jvj+111]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+111];
if((x[jvj+53]==x[jvj+55])) goto l22;
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+55,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=471; 
(*f[207])( );     /*PLUE2(EXEXEX,471)*/
l22:x[jvj+111]=t[x[jvj+111]];
goto l21;
l10:x[jvj+25]=t[x[jvj+25]];
goto l8;
l13:pile[v[22]]=107; pile[WZ1]=jvj+27; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+27,jvj+36)*/
for(i=x[jvj+36],V89=0;i>0;i=t[i],V89++)  ;
if((V89!=2)) goto l14;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+26,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+1; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(jvj+37,jvj+1,jvj+38)*/
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+38,V100)*/
V100=pile[WZ2]; 
K=V100;
if((K==0)) goto l14;
pile[v[22]]=EXEXEX; pile[WZ1]=540; 
(*f[207])( );     /*PLUE2(EXEXEX,540)*/
l14:pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(268,jvj+26,jvj+39)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+39; pile[WZ3]=jvj+40; 
(*f[45])( );if(v[102]) goto l31;     /*FNDZ0(jvj+1,jvj+39,V629,jvj+40)*/
V629=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=414; 
(*f[207])( );     /*PLUE2(EXEXEX,414)*/
l31:pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(870,jvj+1,V387)*/
V387=pile[WZ2]; 
if((V387!=1)) goto l32;
pile[v[22]]=1188; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1188,jvj+1,jvj+59)*/
if((x[jvj+59]!=68)) goto l32;
pile[v[22]]=1358; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1358,jvj+1,jvj+60)*/
if((x[jvj+60]!=68)) goto l32;
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(268,jvj+26,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+1; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(jvj+61,jvj+1,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[887])( );     /*VARND0(jvj+62,jvj+63)*/
if((x[jvj+63]!=0)) goto l32;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+26; pile[WZ3]=jvj+64; 
(*f[45])( );if(v[102]) goto l32;     /*FNDZ0(jvj+1,jvj+26,V615,jvj+64)*/
V615=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=636; 
(*f[207])( );     /*PLUE2(EXEXEX,636)*/
l32:pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+26,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=jvj+1; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+65,jvj+1,jvj+66)*/
pile[v[22]]=111; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+66,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+67,jvj+68)*/
if((x[jvj+68]==486)) goto l33;
if((x[jvj+68]!=485)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+66; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(107,jvj+66,jvj+71)*/
for(i=x[jvj+71],V425=0;i>0;i=t[i],V425++)  ;
if((V425!=2)) goto l10;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+26; pile[WZ3]=jvj+72; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+1,jvj+26,V621,jvj+72)*/
V621=pile[WZ2]; 
V640=x[jvj+71];
l35:if((V640<=0)) goto l10;
V419=s[V640];
x[jvj+113]=x[jvj+71] ;z[jvj+113]=z[jvj+71];
l36:if((x[jvj+113]>0)) goto l37;
V640=t[V640];
goto l35;
l15:pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(268,jvj+26,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+1; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(jvj+41,jvj+1,jvj+42)*/
pile[v[22]]=130; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+42,V127)*/
V127=pile[WZ2]; 
if((V127!=1)) goto l31;
x[jvj+43]=d[20];z[jvj+43]=0;
l16:if((x[jvj+43]<=0)) goto l31;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+27; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+44,jvj+27,jvj+45)*/
pile[v[22]]=100; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+45,jvj+46)*/
if((x[jvj+46]!=484)) goto l17;
pile[v[22]]=268; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+44,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+27; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+47,jvj+27,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]!=484)) goto l18;
pile[v[22]]=EXEXEX; pile[WZ1]=672; 
(*f[207])( );     /*PLUE2(EXEXEX,672)*/
l18:pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+48,V219)*/
V219=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=708; 
(*f[207])( );     /*PLUE2(EXEXEX,708)*/
l17:x[jvj+43]=t[x[jvj+43]];
goto l16;
l20:x[jvj+110]=t[x[jvj+110]];
goto l19;
l23:pile[v[22]]=jvj+1; pile[WZ1]=jvj+51; pile[WZ3]=jvj+56; 
(*f[45])( );if(v[102]) goto l31;     /*FNDZ0(jvj+1,jvj+51,V609,jvj+56)*/
V609=pile[WZ2]; 
x[jvj+112]=x[jvj+50] ;z[jvj+112]=z[jvj+50];
l24:if((x[jvj+112]<=0)) goto l31;
x[jvj+57]=s[x[jvj+112]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+112];
pile[v[22]]=100; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(100,jvj+57,jvj+58)*/
if((x[jvj+58]!=484)) goto l28;
V637=x[jvj+50];
l26:if((V637<=0)) goto l28;
V279=s[V637];
if((x[jvj+57]==V279)) goto l27;
pile[v[22]]=EXEXEX; pile[WZ1]=531; 
(*f[207])( );     /*PLUE2(EXEXEX,531)*/
l27:V637=t[V637];
goto l26;
l25:x[jvj+112]=t[x[jvj+112]];
goto l24;
l28:pile[v[22]]=130; pile[WZ1]=jvj+57; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+57,V505)*/
V505=pile[WZ2]; 
V638=x[jvj+50];
l29:if((V638<=0)) goto l25;
V497=s[V638];
if((x[jvj+57]==V497)) goto l30;
pile[v[22]]=EXEXEX; pile[WZ1]=408; 
(*f[207])( );     /*PLUE2(EXEXEX,408)*/
l30:V638=t[V638];
goto l29;
l33:pile[v[22]]=jvj+1; pile[WZ1]=jvj+26; pile[WZ3]=jvj+69; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+1,jvj+26,V627,jvj+69)*/
V627=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+66; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(107,jvj+66,jvj+70)*/
V639=x[jvj+70];
l34:if((V639<=0)) goto l10;
V546=s[V639];
pile[v[22]]=EXEXEX; pile[WZ1]=141; 
(*f[207])( );     /*PLUE2(EXEXEX,141)*/
V639=t[V639];
goto l34;
l37:x[jvj+73]=s[x[jvj+113]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+113];
if((V419==x[jvj+73])) goto l38;
pile[v[22]]=130; pile[WZ1]=jvj+73; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+73,V433)*/
V433=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=306; 
(*f[207])( );     /*PLUE2(EXEXEX,306)*/
pile[WZ1]=307; 
(*f[207])( );     /*PLUE2(EXEXEX,307)*/
l38:x[jvj+113]=t[x[jvj+113]];
goto l36;
l39:x[jvj+74]=vo[16];z[jvj+74]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(498,jvj+74,jvj+75)*/
pile[v[22]]=1182; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(1182,jvj+75,jvj+76)*/
if((68!=x[jvj+76])) goto l49;
x[jvj+77]=d[20];z[jvj+77]=0;
l40:if((x[jvj+77]<=0)) goto l49;
x[jvj+78]=s[x[jvj+77]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+77];
pile[v[22]]=jvj+78; pile[WZ1]=jvj+1; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+78,jvj+1,jvj+79)*/
pile[v[22]]=100; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(100,jvj+79,jvj+80)*/
if((x[jvj+80]!=484)) goto l41;
pile[v[22]]=268; pile[WZ1]=jvj+78; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(268,jvj+78,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+1; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+81,jvj+1,jvj+82)*/
pile[v[22]]=130; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(130,jvj+82,V268)*/
V268=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=609; 
(*f[207])( );     /*PLUE2(EXEXEX,609)*/
l41:x[jvj+77]=t[x[jvj+77]];
goto l40;
l48:pile[v[22]]=EXEXEX; pile[WZ1]=508; 
(*f[207])( );     /*PLUE2(EXEXEX,508)*/
goto l43;
}
