#include "dx.h"
void ATOME611T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V90=0,V27=0,V34=0,V37=0,V94=0,V92=0;
int NNNJ;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=89;
x[jvj+1]=20611;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3856&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNJ=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNJ; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,NNNJ,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=1889)) goto l29;
x[jvj+16]=vo[14];z[jvj+16]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(642,jvj+16,V90)*/
V90=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=NNNJ; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,NNNJ,jvj+2)*/
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(100,jvj+2,jvj+17)*/
if((x[jvj+17]!=484)) goto l29;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+2,jvj+3)*/
pile[v[22]]=202; pile[WZ2]=jvj+4; 
(*f[1948])( );if(v[102]) goto l6;     /*FNDOND0(202,jvj+3,jvj+4)*/
if((x[jvj+4]==68)) goto l29;
l6:pile[v[22]]=jvj+2; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l29;     /*NDD0(jvj+2,jvj+18)*/
pile[v[22]]=509; pile[WZ2]=jvj+19; 
(*f[1969])( );     /*FNDEND0(509,jvj+18,jvj+19)*/
x[jvj+13]=0 ;z[jvj+13]=0;
x[jvj+8]=vo[16];z[jvj+8]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(454,jvj+8,jvj+9)*/
l1:if((x[jvj+9]<=0)) goto l7;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=480; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(480,jvj+10,jvj+11)*/
x[jvj+83]=x[jvj+11] ;z[jvj+83]=z[jvj+11];
l2:if((x[jvj+83]>0)) goto l3;
x[jvj+9]=t[x[jvj+9]];
goto l1;
l3:x[jvj+5]=s[x[jvj+83]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+83];
pile[v[22]]=489; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[1969])( );     /*FNDEND0(489,jvj+5,jvj+12)*/
if((x[jvj+12]!=0)) goto l4;
pile[v[22]]=498; pile[WZ2]=jvj+6; 
(*f[1948])( );if(v[102]) goto l5;     /*FNDOND0(498,jvj+5,jvj+6)*/
pile[v[22]]=1348; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1348,jvj+6,jvj+7)*/
if((x[jvj+7]==68)) goto l4;
l5:pile[v[22]]=jvj+13; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+5)*/
l4:x[jvj+83]=t[x[jvj+83]];
goto l2;
l8:x[jvj+19]=t[x[jvj+19]];
l7:if((x[jvj+19]<=0)) goto l29;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=50)) goto l8;
pile[v[22]]=107; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(107,jvj+20,jvj+23)*/
for(i=x[jvj+23],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=2)) goto l8;
x[jvj+24]=d[20];z[jvj+24]=0;
l9:if((x[jvj+24]<=0)) goto l8;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=268; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(268,jvj+25,jvj+26)*/
x[jvj+27]=d[20];z[jvj+27]=0;
l11:if((x[jvj+27]<=0)) goto l10;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=268; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+28,jvj+29)*/
x[jvj+84]=x[jvj+23] ;z[jvj+84]=z[jvj+23];
l13:if((x[jvj+84]<=0)) goto l12;
x[jvj+30]=s[x[jvj+84]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+84];
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=44)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+30; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+30,jvj+33)*/
x[jvj+85]=x[jvj+23] ;z[jvj+85]=z[jvj+23];
l15:if((x[jvj+85]<=0)) goto l14;
x[jvj+34]=s[x[jvj+85]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+85];
if((x[jvj+30]==x[jvj+34])) goto l16;
pile[v[22]]=111; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,jvj+34,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=50)) goto l16;
pile[v[22]]=107; pile[WZ1]=jvj+34; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,jvj+34,jvj+37)*/
for(i=x[jvj+37],V34=0;i>0;i=t[i],V34++)  ;
if((V34!=1)) goto l16;
x[jvj+86]=x[jvj+37] ;z[jvj+86]=z[jvj+37];
l17:if((x[jvj+86]<=0)) goto l16;
x[jvj+38]=s[x[jvj+86]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+86];
pile[v[22]]=111; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+38,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=54)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+38,jvj+41)*/
for(i=x[jvj+41],V37=0;i>0;i=t[i],V37++)  ;
if((V37!=3)) goto l18;
pile[v[22]]=436; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(436,jvj+38,jvj+42)*/
x[jvj+87]=x[jvj+41] ;z[jvj+87]=z[jvj+41];
l19:if((x[jvj+87]<=0)) goto l18;
x[jvj+43]=s[x[jvj+87]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+87];
pile[v[22]]=111; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+43,jvj+44)*/
pile[v[22]]=101; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+44,jvj+45)*/
if((x[jvj+45]!=44)) goto l20;
pile[v[22]]=103; pile[WZ1]=jvj+43; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,jvj+43,jvj+46)*/
pile[v[22]]=100; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+46,jvj+47)*/
if((x[jvj+47]!=43)) goto l20;
pile[v[22]]=102; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+46,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=1601)) goto l20;
;
pile[v[22]]=102; pile[WZ1]=jvj+43; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+43,jvj+50)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+50,jvj+51)*/
if((x[jvj+51]==135)) goto l22;
l20:x[jvj+87]=t[x[jvj+87]];
goto l19;
l10:x[jvj+24]=t[x[jvj+24]];
goto l9;
l12:x[jvj+27]=t[x[jvj+27]];
goto l11;
l14:x[jvj+84]=t[x[jvj+84]];
goto l13;
l16:x[jvj+85]=t[x[jvj+85]];
goto l15;
l18:x[jvj+86]=t[x[jvj+86]];
goto l17;
l22:x[jvj+88]=x[jvj+41] ;z[jvj+88]=z[jvj+41];
l21:if((x[jvj+88]<=0)) goto l20;
x[jvj+52]=s[x[jvj+88]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+88];
if((x[jvj+43]==x[jvj+52])) goto l23;
pile[v[22]]=111; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+52,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+53,jvj+54)*/
if((x[jvj+54]!=25)) goto l23;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+52; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+25,jvj+52,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+55,jvj+56)*/
if((x[jvj+56]!=43)) goto l23;
pile[v[22]]=102; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,jvj+55,jvj+57)*/
pile[v[22]]=101; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+57,jvj+58)*/
if((x[jvj+58]!=1879)) goto l23;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+26; pile[WZ3]=jvj+59; 
(*f[45])( );if(v[102]) goto l23;     /*FNDZ0(jvj+52,jvj+26,V94,jvj+59)*/
V94=pile[WZ2]; 
x[jvj+61]=V94 ;z[jvj+61]=(x[jvj+59]==20&&V94<=sepcte) ? V94 : (x[jvj+59]==41) ? (-1000) : 0;
pile[v[22]]=103; pile[WZ1]=jvj+55; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(103,jvj+55,jvj+60)*/
pile[v[22]]=jvj+33; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[760])( );     /*MEMEX0(jvj+33,jvj+61,jvj+62)*/
if((x[jvj+62]==135)) goto l24;
l23:x[jvj+88]=t[x[jvj+88]];
goto l21;
l24:pile[v[22]]=jvj+42; pile[WZ1]=jvj+60; pile[WZ2]=jvj+63; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+60,jvj+63)*/
if((x[jvj+63]==135)) goto l26;
goto l23;
l26:x[jvj+89]=x[jvj+41] ;z[jvj+89]=z[jvj+41];
l25:if((x[jvj+89]<=0)) goto l23;
x[jvj+64]=s[x[jvj+89]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+89];
if((x[jvj+43]==x[jvj+64])) goto l27;
if((x[jvj+52]==x[jvj+64])) goto l27;
pile[v[22]]=111; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+64,jvj+65)*/
pile[v[22]]=101; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+65,jvj+66)*/
if((x[jvj+66]!=25)) goto l27;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+64; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+28,jvj+64,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+67,jvj+68)*/
if((x[jvj+68]!=43)) goto l27;
pile[v[22]]=102; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+67,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=1888)) goto l27;
pile[v[22]]=jvj+64; pile[WZ1]=jvj+29; pile[WZ3]=jvj+71; 
(*f[45])( );if(v[102]) goto l27;     /*FNDZ0(jvj+64,jvj+29,V92,jvj+71)*/
V92=pile[WZ2]; 
x[jvj+73]=V92 ;z[jvj+73]=(x[jvj+71]==20&&V92<=sepcte) ? V92 : (x[jvj+71]==41) ? (-1000) : 0;
pile[v[22]]=103; pile[WZ1]=jvj+67; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,jvj+67,jvj+72)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[760])( );     /*MEMEX0(jvj+2,jvj+73,jvj+74)*/
if((x[jvj+74]==135)) goto l28;
l27:x[jvj+89]=t[x[jvj+89]];
goto l25;
l28:pile[v[22]]=jvj+42; pile[WZ1]=jvj+72; pile[WZ2]=jvj+75; 
(*f[760])( );     /*MEMEX0(jvj+42,jvj+72,jvj+75)*/
if((x[jvj+75]==135)) goto l30;
goto l27;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l30:pile[v[22]]=101; pile[WZ1]=NNNJ; pile[WZ2]=110; pile[WZ3]=(-11739); pile[WZ4]=jvj+81; 
(*f[270])( );     /*QUADRI7(101,NNNJ,110,(-11739),jvj+81)*/
pile[v[22]]=V90; pile[WZ1]=858; pile[WZ2]=jvj+77; 
(*f[46])( );     /*TRI0(V90,858,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+78; 
(*f[189])( );     /*TRI4(jvj+77,v[13],642,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=3856; pile[WZ2]=246; pile[WZ3]=jvj+79; 
(*f[189])( );     /*TRI4(jvj+78,3856,246,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=20611; pile[WZ2]=218; pile[WZ3]=jvj+80; 
(*f[58])( );     /*TRI3(jvj+79,20611,218,jvj+80)*/
pile[v[22]]=jvj+81; pile[WZ1]=(-20); pile[WZ2]=jvj+80; pile[WZ3]=159; pile[WZ4]=jvj+82; 
(*f[298])( );     /*TRIENS1(jvj+81,(-20),jvj+80,159,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+82,1,158,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=489; pile[WZ2]=jvj+2; pile[WZ3]=1350; 
(*f[1753])( );     /*LIER1(jvj+76,489,jvj+2,1350)*/
goto l27;
}
