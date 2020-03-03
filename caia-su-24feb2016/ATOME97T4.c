#include "dx.h"
void ATOME97T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V17=0,V11=0,V46=0,V48=0;
int RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=49;
x[jvj+1]=20097;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3374&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
RR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,RR,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=55)) goto l17;
pile[v[22]]=870; pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(870,RR,V12)*/
V12=pile[WZ2]; 
if((V12!=2)) goto l17;
pile[v[22]]=107; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,RR,jvj+13)*/
for(i=x[jvj+13],V17=0;i>0;i=t[i],V17++)  ;
if((V17!=2)) goto l17;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=RR; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(RR,jvj+7)*/
l1:if((x[jvj+7]<=0)) goto l6;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=509; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[1969])( );     /*FNDEND0(509,jvj+8,jvj+9)*/
x[jvj+47]=x[jvj+9] ;z[jvj+47]=z[jvj+9];
l2:if((x[jvj+47]>0)) goto l3;
x[jvj+7]=t[x[jvj+7]];
goto l1;
l3:x[jvj+3]=s[x[jvj+47]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+47];
if((x[jvj+3]==x[RR])) goto l4;
pile[v[22]]=1417; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1417,jvj+3,jvj+4)*/
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==291) goto l5;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=1545; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1545,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==291) goto l5;
l4:x[jvj+47]=t[x[jvj+47]];
goto l2;
l5:pile[v[22]]=jvj+10; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+3)*/
goto l4;
l7:x[jvj+10]=t[x[jvj+10]];
l6:if((x[jvj+10]<=0)) goto l17;
x[jvj+14]=s[x[jvj+10]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=30)) goto l7;
pile[v[22]]=870; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,jvj+14,V11)*/
V11=pile[WZ2]; 
if((V11!=2)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,jvj+14,jvj+17)*/
pile[v[22]]=103; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,jvj+14,jvj+18)*/
x[jvj+48]=x[jvj+13] ;z[jvj+48]=z[jvj+13];
l8:if((x[jvj+48]<=0)) goto l7;
x[jvj+19]=s[x[jvj+48]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+48];
pile[v[22]]=111; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+19,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=26)) goto l9;
x[jvj+49]=x[jvj+13] ;z[jvj+49]=z[jvj+13];
l10:if((x[jvj+49]<=0)) goto l9;
x[jvj+22]=s[x[jvj+49]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+49];
if((x[jvj+19]==x[jvj+22])) goto l11;
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=25)) goto l11;
x[jvj+25]=d[20];z[jvj+25]=0;
l12:if((x[jvj+25]<=0)) goto l11;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=268; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+26,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+19; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+27,jvj+19,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+28,jvj+29)*/
if(x[jvj+29]!=96&&x[jvj+29]!=89&&x[jvj+29]!=41&&x[jvj+29]!=20&&x[jvj+29]!=128&&x[jvj+29]!=570&&x[jvj+29]!=1317) goto l13;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+26; pile[WZ3]=jvj+30; 
(*f[45])( );if(v[102]) goto l13;     /*FNDZ0(jvj+19,jvj+26,V46,jvj+30)*/
V46=pile[WZ2]; 
x[jvj+31]=V46 ;z[jvj+31]=(x[jvj+30]==20&&V46<=sepcte) ? V46 : (x[jvj+30]==41) ? (-1000) : 0;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[760])( );     /*MEMEX0(jvj+17,jvj+31,jvj+32)*/
if((x[jvj+32]==135)) goto l15;
l13:x[jvj+25]=t[x[jvj+25]];
goto l12;
l9:x[jvj+48]=t[x[jvj+48]];
goto l8;
l11:x[jvj+49]=t[x[jvj+49]];
goto l10;
l15:x[jvj+33]=d[20];z[jvj+33]=0;
l14:if((x[jvj+33]<=0)) goto l13;
x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=268; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(268,jvj+34,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+22; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(jvj+35,jvj+22,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+36,jvj+37)*/
if(x[jvj+37]!=96&&x[jvj+37]!=89&&x[jvj+37]!=41&&x[jvj+37]!=20&&x[jvj+37]!=128&&x[jvj+37]!=570&&x[jvj+37]!=1317) goto l16;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+34; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l16;     /*FNDZ0(jvj+22,jvj+34,V48,jvj+38)*/
V48=pile[WZ2]; 
x[jvj+39]=V48 ;z[jvj+39]=(x[jvj+38]==20&&V48<=sepcte) ? V48 : (x[jvj+38]==41) ? (-1000) : 0;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+39,jvj+40)*/
if((x[jvj+40]==135)) goto l18;
l16:x[jvj+33]=t[x[jvj+33]];
goto l14;
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l18:pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+45; 
(*f[270])( );     /*QUADRI7(101,jvj+14,110,(-601),jvj+45)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+46)*/
pile[v[22]]=206; pile[WZ1]=715; pile[WZ2]=jvj+42; 
(*f[54])( );     /*TRI1(206,715,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3372; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3372,246,jvj+44)*/
pile[v[22]]=158; pile[WZ1]=289; pile[WZ2]=218; pile[WZ3]=20097; pile[WZ4]=jvj+44; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(158,289,218,20097,jvj+44,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=159; pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+45)*/
pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+46)*/
(*f[481])( );     /*STOCKER0(jvj+41)*/
goto l16;
}
