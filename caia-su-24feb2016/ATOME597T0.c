#include "dx.h"
void ATOME597T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V99=0,V19=0,V106=0,V102=0,V21=0,V24=0,V38=0,V41=0;
int V;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=91;
x[jvj+1]=20597;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3805&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
V=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=202; pile[WZ1]=V; pile[WZ2]=jvj+9; 
(*f[1948])( );if(v[102]) goto l32;     /*FNDOND0(202,V,jvj+9)*/
if((x[jvj+9]!=68)) goto l32;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(642,jvj+5,V102)*/
V102=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=V; pile[WZ2]=jvj+10; 
(*f[1969])( );     /*FNDEND0(509,V,jvj+10)*/
x[jvj+79]=0 ;z[jvj+79]=0;
pile[v[22]]=V; pile[WZ1]=jvj+2; 
(*f[1290])( );if(v[102]) goto l8;     /*DEPEXP0(V,jvj+2)*/
x[jvj+83]=x[jvj+10] ;z[jvj+83]=z[jvj+10];
l1:if((x[jvj+83]<=0)) goto l8;
x[jvj+3]=s[x[jvj+83]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+83];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[3806])( );if(v[102]) goto l2;     /*DEFINEDBY0(jvj+3,jvj+2,jvj+4)*/
x[jvj+84]=x[jvj+4] ;z[jvj+84]=z[jvj+4];
l3:if((x[jvj+84]<=0)) goto l2;
x[jvj+80]=s[x[jvj+84]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+84];
x[jvj+91]=x[jvj+79] ;z[jvj+91]=z[jvj+79];
l33:if((x[jvj+91]>0)) goto l34;
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[68])( );     /*PLUE0(jvj+79,jvj+80)*/
l4:x[jvj+84]=t[x[jvj+84]];
goto l3;
l2:x[jvj+83]=t[x[jvj+83]];
goto l1;
l7:V19=s[V106];
pile[v[22]]=jvj+6; pile[WZ1]=V19; 
(*f[207])( );     /*PLUE2(jvj+6,V19)*/
V106=t[V106];
l6:if((V106>0)) goto l7;
x[jvj+14]=d[20];z[jvj+14]=0;
l11:if((x[jvj+14]<=0)) goto l10;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+15,jvj+16)*/
x[jvj+17]=d[20];z[jvj+17]=0;
l13:if((x[jvj+17]<=0)) goto l12;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=268; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(268,jvj+18,jvj+19)*/
x[jvj+85]=x[jvj+13] ;z[jvj+85]=z[jvj+13];
l15:if((x[jvj+85]<=0)) goto l14;
x[jvj+20]=s[x[jvj+85]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+85];
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=44)) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+20,jvj+23)*/
pile[v[22]]=100; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+23,jvj+24)*/
if((x[jvj+24]!=43)) goto l16;
pile[v[22]]=103; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+23,jvj+25)*/
if((x[V]!=x[jvj+25])) goto l16;
pile[v[22]]=102; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+23,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+26,jvj+27)*/
if((x[jvj+27]!=365)) goto l16;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,jvj+20,jvj+28)*/
x[jvj+86]=x[jvj+13] ;z[jvj+86]=z[jvj+13];
l17:if((x[jvj+86]<=0)) goto l16;
x[jvj+29]=s[x[jvj+86]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+86];
if((x[jvj+20]==x[jvj+29])) goto l18;
pile[v[22]]=111; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+29,jvj+30)*/
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+30,jvj+31)*/
if((x[jvj+31]!=50)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+29; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+29,jvj+32)*/
for(i=x[jvj+32],V38=0;i>0;i=t[i],V38++)  ;
if((V38!=1)) goto l18;
x[jvj+87]=x[jvj+32] ;z[jvj+87]=z[jvj+32];
l19:if((x[jvj+87]<=0)) goto l18;
x[jvj+33]=s[x[jvj+87]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+87];
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=54)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+36)*/
for(i=x[jvj+36],V41=0;i>0;i=t[i],V41++)  ;
if((V41!=3)) goto l20;
pile[v[22]]=436; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(436,jvj+33,jvj+37)*/
x[jvj+88]=x[jvj+36] ;z[jvj+88]=z[jvj+36];
l21:if((x[jvj+88]<=0)) goto l20;
x[jvj+38]=s[x[jvj+88]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+88];
pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,jvj+38,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=44)) goto l22;
pile[v[22]]=103; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+38,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+41,jvj+42)*/
if((x[jvj+42]!=43)) goto l22;
pile[v[22]]=103; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,jvj+41,jvj+43)*/
if((x[V]!=x[jvj+43])) goto l22;
pile[v[22]]=102; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+41,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=509)) goto l22;
pile[v[22]]=102; pile[WZ1]=jvj+38; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+38,jvj+46)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+46,jvj+47)*/
if((x[jvj+47]==135)) goto l24;
l22:x[jvj+88]=t[x[jvj+88]];
goto l21;
l8:for(i=x[jvj+79],V21=0;i>0;i=t[i],V21++)  ;
if((V21>=2)) goto l9;
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l10:x[jvj+10]=t[x[jvj+10]];
l9:if((x[jvj+10]<=0)) goto l32;
x[jvj+7]=s[x[jvj+10]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+7,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=50)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+13)*/
for(i=x[jvj+13],V24=0;i>0;i=t[i],V24++)  ;
if((V24!=2)) goto l10;
x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=929; pile[WZ1]=jvj+5; 
(*f[1975])( );if(v[102]) goto l5;     /*FNDCND0(929,jvj+5,V99)*/
V99=pile[WZ2]; 
pile[v[22]]=jvj+6; pile[WZ1]=V99; 
(*f[207])( );     /*PLUE2(jvj+6,V99)*/
l5:pile[v[22]]=1006; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(1006,jvj+7,jvj+8)*/
V106=x[jvj+8];
goto l6;
l12:x[jvj+14]=t[x[jvj+14]];
goto l11;
l14:x[jvj+17]=t[x[jvj+17]];
goto l13;
l16:x[jvj+85]=t[x[jvj+85]];
goto l15;
l18:x[jvj+86]=t[x[jvj+86]];
goto l17;
l20:x[jvj+87]=t[x[jvj+87]];
goto l19;
l24:x[jvj+89]=x[jvj+36] ;z[jvj+89]=z[jvj+36];
l23:if((x[jvj+89]<=0)) goto l22;
x[jvj+48]=s[x[jvj+89]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+89];
if((x[jvj+38]==x[jvj+48])) goto l25;
pile[v[22]]=111; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+48,jvj+49)*/
pile[v[22]]=101; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+49,jvj+50)*/
if((x[jvj+50]!=25)) goto l25;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+48; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+15,jvj+48,jvj+51)*/
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+51,jvj+52)*/
pile[v[22]]=101; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+52,jvj+53)*/
if((x[jvj+53]!=1803)) goto l25;
pile[v[22]]=160; pile[WZ1]=jvj+51; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,jvj+51,jvj+54)*/
if((x[V]!=x[jvj+54])) goto l25;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+48; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(jvj+16,jvj+48,jvj+55)*/
pile[v[22]]=101; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+55,jvj+56)*/
if((x[jvj+56]!=135)) goto l25;
pile[v[22]]=103; pile[WZ1]=jvj+51; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+51,jvj+57)*/
pile[v[22]]=102; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+51,jvj+58)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+57; pile[WZ2]=jvj+59; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+57,jvj+59)*/
if((x[jvj+59]==135)) goto l26;
l25:x[jvj+89]=t[x[jvj+89]];
goto l23;
l26:pile[v[22]]=jvj+37; pile[WZ1]=jvj+58; pile[WZ2]=jvj+60; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+58,jvj+60)*/
if((x[jvj+60]==135)) goto l28;
goto l25;
l28:x[jvj+90]=x[jvj+36] ;z[jvj+90]=z[jvj+36];
l27:if((x[jvj+90]<=0)) goto l25;
x[jvj+61]=s[x[jvj+90]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+90];
if((x[jvj+38]==x[jvj+61])) goto l29;
if((x[jvj+48]==x[jvj+61])) goto l29;
pile[v[22]]=111; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+61,jvj+62)*/
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+62,jvj+63)*/
if((x[jvj+63]!=25)) goto l29;
pile[v[22]]=jvj+18; pile[WZ1]=jvj+61; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+18,jvj+61,jvj+64)*/
pile[v[22]]=111; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+64,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]!=1801)) goto l29;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+61; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(jvj+19,jvj+61,jvj+67)*/
pile[v[22]]=101; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+67,jvj+68)*/
if((x[jvj+68]!=135)) goto l29;
pile[v[22]]=102; pile[WZ1]=jvj+64; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+64,jvj+69)*/
for(a=x[jvj+79];a>0;a=t[a]) if(s[a]==x[jvj+69]) goto l30;
l29:x[jvj+90]=t[x[jvj+90]];
goto l27;
l30:pile[v[22]]=103; pile[WZ1]=jvj+64; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,jvj+64,jvj+70)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+70,jvj+71)*/
if((x[jvj+71]==135)) goto l31;
goto l29;
l31:pile[v[22]]=jvj+69; pile[WZ1]=1006; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+69,1006,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=V; pile[WZ2]=110; pile[WZ3]=(-611); pile[WZ4]=jvj+77; 
(*f[270])( );     /*QUADRI7(101,V,110,(-611),jvj+77)*/
pile[v[22]]=V102; pile[WZ1]=858; pile[WZ2]=jvj+73; 
(*f[46])( );     /*TRI0(V102,858,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+74; 
(*f[189])( );     /*TRI4(jvj+73,v[13],642,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=3805; pile[WZ2]=246; pile[WZ3]=jvj+75; 
(*f[189])( );     /*TRI4(jvj+74,3805,246,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=20597; pile[WZ2]=218; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+75,20597,218,jvj+76)*/
pile[v[22]]=jvj+77; pile[WZ1]=(-20); pile[WZ2]=jvj+76; pile[WZ3]=159; pile[WZ4]=jvj+78; 
(*f[298])( );     /*TRIENS1(jvj+77,(-20),jvj+76,159,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+78,1,158,jvj+72)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+72; 
(*f[1296])( );     /*NOUVCONTR0(jvj+69,jvj+72)*/
goto l29;
l34:x[jvj+81]=s[x[jvj+91]] ;z[jvj+81]=(x[jvj+81]<=sepcte) ? x[jvj+81] : z[jvj+91];
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[760])( );     /*MEMEX0(jvj+80,jvj+81,jvj+82)*/
if((x[jvj+82]==135)) goto l4;
x[jvj+91]=t[x[jvj+91]];
goto l33;
}
