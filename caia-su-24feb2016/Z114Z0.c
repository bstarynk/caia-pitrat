#include "dx.h"
void Z114Z0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V380=0,V144=0,V172=0,V276=0,V483=0,V485=0,V497=0,V499=0,V426=0,V509=0,V511=0,V479=0,V18=0,V473=0,V12=0,V521=0,V192=0,V487=0,V489=0,V233=0,V495=0,V67=0,V477=0,V60=0,V524=0,V513=0,V515=0,V451=0,V138=0,V325=0,V252=0,V169=0,V361=0,V248=0,V1=0,J=0,V89=0,K=0;
int EXEXEX,RRRT;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=100;
if(v[0]>99700) (*f[6])( );

EXEXEX=pile[v[22]]; RRRT=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+1]=x[RRRT] ;z[jvj+1]=z[RRRT];
pile[v[22]]=111; pile[WZ1]=jvj+1; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+1,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==25)) goto l2;
if((x[jvj+6]==770)) goto l44;
if((x[jvj+6]==29)) goto l46;
if((x[jvj+6]==48)) goto l47;
if((x[jvj+6]==55)) goto l48;
if((x[jvj+6]==625)) goto l53;
if((x[jvj+6]==408)) goto l55;
if((x[jvj+6]!=1280)) goto l57;
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+96; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(103,jvj+1,jvj+96)*/
pile[v[22]]=130; pile[WZ1]=jvj+96; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(130,jvj+96,V89)*/
V89=pile[WZ2]; 
if((V89!=2)) goto l57;
pile[v[22]]=160; pile[WZ1]=jvj+1; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(160,jvj+1,jvj+97)*/
pile[v[22]]=130; pile[WZ1]=jvj+97; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(130,jvj+97,K)*/
K=pile[WZ2]; 
if((K<=0)) goto l57;
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,jvj+1,jvj+98)*/
pile[v[22]]=EXEXEX; pile[WZ1]=426; 
(*f[207])( );     /*PLUE2(EXEXEX,426)*/
l57:v[0]=jvj; v[22]-=2; return;
l2:pile[v[22]]=EXEXEX; pile[WZ1]=340; 
(*f[207])( );     /*PLUE2(EXEXEX,340)*/
pile[WZ1]=369; 
(*f[207])( );     /*PLUE2(EXEXEX,369)*/
pile[WZ1]=456; 
(*f[207])( );     /*PLUE2(EXEXEX,456)*/
pile[WZ1]=694; 
(*f[207])( );     /*PLUE2(EXEXEX,694)*/
pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(870,jvj+1,V380)*/
V380=pile[WZ2]; 
if((V380==2)) goto l3;
if((V380==1)) goto l5;
if((V380<=1)) goto l9;
if((V380<=4)) goto l8;
l9:x[jvj+16]=vo[16];z[jvj+16]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,jvj+16,jvj+17)*/
pile[v[22]]=1182; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1182,jvj+17,jvj+18)*/
if((68!=x[jvj+18])) goto l12;
x[jvj+19]=d[20];z[jvj+19]=0;
l10:if((x[jvj+19]<=0)) goto l12;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+20; pile[WZ3]=jvj+21; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+1,jvj+20,V483,jvj+21)*/
V483=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(268,jvj+20,jvj+22)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+22; pile[WZ3]=jvj+23; 
(*f[45])( );if(v[102]) goto l11;     /*FNDZ0(jvj+1,jvj+22,V485,jvj+23)*/
V485=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=586; 
(*f[207])( );     /*PLUE2(EXEXEX,586)*/
l11:x[jvj+19]=t[x[jvj+19]];
goto l10;
l3:pile[v[22]]=EXEXEX; pile[WZ1]=294; 
(*f[207])( );     /*PLUE2(EXEXEX,294)*/
pile[v[22]]=1101; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1101,jvj+1,V144)*/
V144=pile[WZ2]; 
if((V144!=2)) goto l8;
pile[v[22]]=1105; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1105,jvj+1,jvj+7)*/
if((x[jvj+7]!=68)) goto l4;
pile[v[22]]=EXEXEX; pile[WZ1]=552; 
(*f[207])( );     /*PLUE2(EXEXEX,552)*/
l4:pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1358,jvj+1,jvj+8)*/
if((x[jvj+8]!=68)) goto l8;
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+1,jvj+9)*/
pile[v[22]]=103; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(103,jvj+1,jvj+10)*/
pile[v[22]]=EXEXEX; pile[WZ1]=687; 
(*f[207])( );     /*PLUE2(EXEXEX,687)*/
l8:pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1358,jvj+1,jvj+13)*/
if((x[jvj+13]!=68)) goto l9;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1101,jvj+1,V276)*/
V276=pile[WZ2]; 
if((V276<=1)) goto l9;
pile[v[22]]=102; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+1,jvj+14)*/
pile[v[22]]=103; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(103,jvj+1,jvj+15)*/
pile[v[22]]=EXEXEX; pile[WZ1]=372; 
(*f[207])( );     /*PLUE2(EXEXEX,372)*/
goto l9;
l5:pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(1358,jvj+1,jvj+11)*/
if((x[jvj+11]!=68)) goto l6;
pile[v[22]]=EXEXEX; pile[WZ1]=393; 
(*f[207])( );     /*PLUE2(EXEXEX,393)*/
l6:pile[v[22]]=1101; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1101,jvj+1,V172)*/
V172=pile[WZ2]; 
if((V172<=2)) goto l9;
pile[v[22]]=1294; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1294,jvj+1,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==1327) goto l7;
goto l9;
l7:pile[v[22]]=EXEXEX; pile[WZ1]=711; 
(*f[207])( );     /*PLUE2(EXEXEX,711)*/
goto l9;
l12:if((V380>5)) goto l14;
pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1358,jvj+1,jvj+24)*/
if((x[jvj+24]!=68)) goto l14;
pile[v[22]]=1569; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1569,jvj+1,jvj+2)*/
if((x[jvj+2]==67)) goto l14;
l13:pile[v[22]]=EXEXEX; pile[WZ1]=642; 
(*f[207])( );     /*PLUE2(EXEXEX,642)*/
l14:x[jvj+25]=vo[16];z[jvj+25]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(498,jvj+25,jvj+26)*/
pile[v[22]]=1182; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1182,jvj+26,jvj+27)*/
if((68!=x[jvj+27])) goto l17;
pile[v[22]]=EXEXEX; pile[WZ1]=333; 
(*f[207])( );     /*PLUE2(EXEXEX,333)*/
pile[WZ1]=334; 
(*f[207])( );     /*PLUE2(EXEXEX,334)*/
x[jvj+28]=d[20];z[jvj+28]=0;
l15:if((x[jvj+28]<=0)) goto l17;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+29; pile[WZ3]=jvj+30; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+1,jvj+29,V497,jvj+30)*/
V497=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+29,jvj+31)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+31; pile[WZ3]=jvj+32; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+1,jvj+31,V499,jvj+32)*/
V499=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=336; 
(*f[207])( );     /*PLUE2(EXEXEX,336)*/
pile[WZ1]=399; 
(*f[207])( );     /*PLUE2(EXEXEX,399)*/
pile[WZ1]=484; 
(*f[207])( );     /*PLUE2(EXEXEX,484)*/
l16:x[jvj+28]=t[x[jvj+28]];
goto l15;
l17:pile[v[22]]=1358; pile[WZ1]=jvj+1; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1358,jvj+1,jvj+33)*/
if((x[jvj+33]!=68)) goto l23;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1101,jvj+1,V426)*/
V426=pile[WZ2]; 
if((V426<=1)) goto l19;
pile[v[22]]=102; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+1,jvj+34)*/
pile[v[22]]=103; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(103,jvj+1,jvj+35)*/
pile[v[22]]=EXEXEX; pile[WZ1]=645; 
(*f[207])( );     /*PLUE2(EXEXEX,645)*/
pile[WZ1]=663; 
(*f[207])( );     /*PLUE2(EXEXEX,663)*/
l19:x[jvj+36]=d[20];z[jvj+36]=0;
l18:if((x[jvj+36]<=0)) goto l23;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=jvj+1; pile[WZ1]=jvj+37; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l20;     /*FNDZ0(jvj+1,jvj+37,V509,jvj+38)*/
V509=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(268,jvj+37,jvj+39)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+39; pile[WZ3]=jvj+40; 
(*f[45])( );if(v[102]) goto l20;     /*FNDZ0(jvj+1,jvj+39,V511,jvj+40)*/
V511=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=529; 
(*f[207])( );     /*PLUE2(EXEXEX,529)*/
l20:x[jvj+36]=t[x[jvj+36]];
goto l18;
l22:x[jvj+42]=s[x[jvj+41]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+41];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+1; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+42,jvj+1,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+43,jvj+44)*/
if((x[jvj+44]!=484)) goto l25;
pile[v[22]]=268; pile[WZ1]=jvj+42; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(268,jvj+42,jvj+45)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+45; pile[WZ3]=jvj+46; 
(*f[45])( );if(v[102]) goto l25;     /*FNDZ0(jvj+1,jvj+45,V479,jvj+46)*/
V479=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=228; 
(*f[207])( );     /*PLUE2(EXEXEX,228)*/
pile[WZ1]=312; 
(*f[207])( );     /*PLUE2(EXEXEX,312)*/
l25:pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(111,jvj+43,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]==486)) goto l26;
if((x[jvj+48]!=636)) goto l34;
pile[v[22]]=268; pile[WZ1]=jvj+42; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+42,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+1; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(jvj+54,jvj+1,jvj+55)*/
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(130,jvj+55,V192)*/
V192=pile[WZ2]; 
if((V192!=1)) goto l34;
x[jvj+56]=d[20];z[jvj+56]=0;
l32:if((x[jvj+56]<=0)) goto l34;
x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+57; pile[WZ3]=jvj+58; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+43,jvj+57,V487,jvj+58)*/
V487=pile[WZ2]; 
pile[v[22]]=268; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(268,jvj+57,jvj+59)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+59; pile[WZ3]=jvj+60; 
(*f[45])( );if(v[102]) goto l33;     /*FNDZ0(jvj+43,jvj+59,V489,jvj+60)*/
V489=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=136; 
(*f[207])( );     /*PLUE2(EXEXEX,136)*/
pile[WZ1]=148; 
(*f[207])( );     /*PLUE2(EXEXEX,148)*/
l33:x[jvj+56]=t[x[jvj+56]];
goto l32;
l23:x[jvj+41]=d[20];z[jvj+41]=0;
l21:if((x[jvj+41]>0)) goto l22;
pile[v[22]]=1188; pile[WZ1]=jvj+1; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1188,jvj+1,jvj+3)*/
if((x[jvj+3]==68)) goto l1;
l42:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,jvj+1,jvj+72)*/
pile[v[22]]=103; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(103,jvj+1,jvj+73)*/
pile[v[22]]=EXEXEX; pile[WZ1]=423; 
(*f[207])( );     /*PLUE2(EXEXEX,423)*/
l1:pile[v[22]]=1188; pile[WZ1]=jvj+1; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(1188,jvj+1,jvj+4)*/
if((x[jvj+4]==68)) goto l57;
l43:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,jvj+1,jvj+74)*/
pile[v[22]]=103; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(103,jvj+1,jvj+75)*/
pile[v[22]]=EXEXEX; pile[WZ1]=702; 
(*f[207])( );     /*PLUE2(EXEXEX,702)*/
goto l57;
l26:pile[v[22]]=107; pile[WZ1]=jvj+43; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+43,jvj+49)*/
for(i=x[jvj+49],V18=0;i>0;i=t[i],V18++)  ;
if((V18!=2)) goto l34;
pile[v[22]]=268; pile[WZ1]=jvj+42; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(268,jvj+42,jvj+50)*/
pile[v[22]]=jvj+1; pile[WZ1]=jvj+50; pile[WZ3]=jvj+51; 
(*f[45])( );if(v[102]) goto l34;     /*FNDZ0(jvj+1,jvj+50,V473,jvj+51)*/
V473=pile[WZ2]; 
V521=x[jvj+49];
l27:if((V521<=0)) goto l34;
V12=s[V521];
x[jvj+99]=x[jvj+49] ;z[jvj+99]=z[jvj+49];
l28:if((x[jvj+99]>0)) goto l29;
V521=t[V521];
goto l27;
l29:x[jvj+52]=s[x[jvj+99]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+99];
if((V12==x[jvj+52])) goto l30;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[1446])( );     /*NONUL0(jvj+52,jvj+53)*/
if((x[jvj+53]==135)) goto l31;
l30:x[jvj+99]=t[x[jvj+99]];
goto l28;
l31:pile[v[22]]=EXEXEX; pile[WZ1]=297; 
(*f[207])( );     /*PLUE2(EXEXEX,297)*/
pile[WZ1]=298; 
(*f[207])( );     /*PLUE2(EXEXEX,298)*/
goto l30;
l34:pile[v[22]]=268; pile[WZ1]=jvj+42; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(268,jvj+42,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+1; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(jvj+61,jvj+1,jvj+62)*/
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(130,jvj+62,V233)*/
V233=pile[WZ2]; 
pile[v[22]]=jvj+1; pile[WZ1]=jvj+42; pile[WZ3]=jvj+63; 
(*f[45])( );if(v[102]) goto l35;     /*FNDZ0(jvj+1,jvj+42,V495,jvj+63)*/
V495=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=366; 
(*f[207])( );     /*PLUE2(EXEXEX,366)*/
l35:pile[v[22]]=111; pile[WZ1]=jvj+62; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+62,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+64,jvj+65)*/
if((x[jvj+65]!=485)) goto l41;
pile[v[22]]=107; pile[WZ1]=jvj+62; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(107,jvj+62,jvj+66)*/
for(i=x[jvj+66],V67=0;i>0;i=t[i],V67++)  ;
if((V67!=2)) goto l41;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+42; pile[WZ3]=jvj+67; 
(*f[45])( );if(v[102]) goto l41;     /*FNDZ0(jvj+1,jvj+42,V477,jvj+67)*/
V477=pile[WZ2]; 
V524=x[jvj+66];
l36:if((V524<=0)) goto l41;
V60=s[V524];
x[jvj+100]=x[jvj+66] ;z[jvj+100]=z[jvj+66];
l37:if((x[jvj+100]>0)) goto l38;
V524=t[V524];
goto l36;
l38:x[jvj+68]=s[x[jvj+100]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+100];
if((V60==x[jvj+68])) goto l39;
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[1353])( );     /*POSOUNUL0(jvj+68,jvj+69)*/
if((x[jvj+69]==135)) goto l40;
l39:x[jvj+100]=t[x[jvj+100]];
goto l37;
l40:pile[v[22]]=EXEXEX; pile[WZ1]=303; 
(*f[207])( );     /*PLUE2(EXEXEX,303)*/
goto l39;
l41:pile[v[22]]=jvj+1; pile[WZ1]=jvj+42; pile[WZ3]=jvj+70; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+1,jvj+42,V513,jvj+70)*/
V513=pile[WZ2]; 
pile[WZ1]=jvj+61; pile[WZ3]=jvj+71; 
(*f[45])( );if(v[102]) goto l24;     /*FNDZ0(jvj+1,jvj+61,V515,jvj+71)*/
V515=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=505; 
(*f[207])( );     /*PLUE2(EXEXEX,505)*/
l24:x[jvj+41]=t[x[jvj+41]];
goto l21;
l44:pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(870,jvj+1,V451)*/
V451=pile[WZ2]; 
if((V451!=1)) goto l45;
pile[v[22]]=EXEXEX; pile[WZ1]=651; 
(*f[207])( );     /*PLUE2(EXEXEX,651)*/
pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(102,jvj+1,jvj+76)*/
pile[v[22]]=EXEXEX; pile[WZ1]=648; 
(*f[207])( );     /*PLUE2(EXEXEX,648)*/
l45:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,jvj+1,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(100,jvj+77,jvj+78)*/
if((x[jvj+78]!=484)) goto l57;
x[jvj+79]=vo[16];z[jvj+79]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(498,jvj+79,jvj+80)*/
pile[v[22]]=1182; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(1182,jvj+80,jvj+81)*/
if((68!=x[jvj+81])) goto l57;
pile[v[22]]=EXEXEX; pile[WZ1]=417; 
(*f[207])( );     /*PLUE2(EXEXEX,417)*/
goto l57;
l46:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,jvj+1,jvj+82)*/
pile[v[22]]=103; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(103,jvj+1,jvj+83)*/
pile[v[22]]=EXEXEX; pile[WZ1]=342; 
(*f[207])( );     /*PLUE2(EXEXEX,342)*/
pile[WZ1]=343; 
(*f[207])( );     /*PLUE2(EXEXEX,343)*/
goto l57;
l47:pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+84)*/
pile[v[22]]=EXEXEX; pile[WZ1]=234; 
(*f[207])( );     /*PLUE2(EXEXEX,234)*/
goto l57;
l48:pile[v[22]]=107; pile[WZ1]=jvj+1; pile[WZ2]=jvj+85; 
(*f[33])( );     /*FNDE0(107,jvj+1,jvj+85)*/
pile[v[22]]=EXEXEX; pile[WZ1]=420; 
(*f[207])( );     /*PLUE2(EXEXEX,420)*/
pile[WZ1]=424; 
(*f[207])( );     /*PLUE2(EXEXEX,424)*/
pile[v[22]]=1232; pile[WZ1]=jvj+1; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(1232,jvj+1,jvj+86)*/
if((x[jvj+86]==0)) goto l49;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+87; 
(*f[887])( );     /*VARND0(jvj+1,jvj+87)*/
for(i=x[jvj+87],V138=0;i>0;i=t[i],V138++)  ;
if((V138<=1)) goto l49;
pile[v[22]]=EXEXEX; pile[WZ1]=732; 
(*f[207])( );     /*PLUE2(EXEXEX,732)*/
l49:for(i=x[jvj+86],V325=0;i>0;i=t[i],V325++)  ;
if((V325<=1)) goto l50;
pile[v[22]]=EXEXEX; pile[WZ1]=693; 
(*f[207])( );     /*PLUE2(EXEXEX,693)*/
pile[WZ1]=696; 
(*f[207])( );     /*PLUE2(EXEXEX,696)*/
l50:pile[v[22]]=1294; pile[WZ1]=jvj+1; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(1294,jvj+1,jvj+88)*/
for(a=x[jvj+88];a>0;a=t[a]) if(s[a]==1598) goto l51;
pile[v[22]]=EXEXEX; pile[WZ1]=537; 
(*f[207])( );     /*PLUE2(EXEXEX,537)*/
l51:pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(870,jvj+1,V252)*/
V252=pile[WZ2]; 
if((V252!=1)) goto l57;
for(a=x[jvj+88];a>0;a=t[a]) if(s[a]==1598) goto l52;
goto l57;
l52:pile[v[22]]=EXEXEX; pile[WZ1]=699; 
(*f[207])( );     /*PLUE2(EXEXEX,699)*/
goto l57;
l53:pile[v[22]]=160; pile[WZ1]=jvj+1; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(160,jvj+1,jvj+89)*/
pile[v[22]]=130; pile[WZ1]=jvj+89; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(130,jvj+89,V169)*/
V169=pile[WZ2]; 
pile[v[22]]=EXEXEX; pile[WZ1]=684; 
(*f[207])( );     /*PLUE2(EXEXEX,684)*/
pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(870,jvj+1,V361)*/
V361=pile[WZ2]; 
if((V361!=1)) goto l57;
pile[v[22]]=102; pile[WZ2]=jvj+90; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,jvj+1,jvj+90)*/
pile[v[22]]=103; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(103,jvj+1,jvj+91)*/
pile[v[22]]=1294; pile[WZ2]=jvj+92; 
(*f[33])( );     /*FNDE0(1294,jvj+1,jvj+92)*/
for(a=x[jvj+92];a>0;a=t[a]) if(s[a]==1483) goto l54;
goto l57;
l54:pile[v[22]]=EXEXEX; pile[WZ1]=498; 
(*f[207])( );     /*PLUE2(EXEXEX,498)*/
goto l57;
l55:pile[v[22]]=102; pile[WZ1]=jvj+1; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,jvj+1,jvj+93)*/
pile[v[22]]=130; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+93,V248)*/
V248=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=jvj+1; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(103,jvj+1,jvj+94)*/
pile[v[22]]=EXEXEX; pile[WZ1]=477; 
(*f[207])( );     /*PLUE2(EXEXEX,477)*/
l56:pile[v[22]]=870; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(870,jvj+1,V1)*/
V1=pile[WZ2]; 
if((V1!=1)) goto l57;
pile[v[22]]=103; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(103,jvj+1,jvj+95)*/
pile[v[22]]=130; pile[WZ1]=jvj+95; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(130,jvj+95,J)*/
J=pile[WZ2]; 
if((J==0)) goto l57;
pile[v[22]]=EXEXEX; pile[WZ1]=315; 
(*f[207])( );     /*PLUE2(EXEXEX,315)*/
goto l57;
}
