#include "dx.h"
void ORDONNE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V103=0,V110=0,V89=0,V116=0,V40=0,V47=0,K=0,V55=0,V134=0,V141=0,V120=0,V147=0,V71=0,V78=0,V59=0,V157=0,V164=0;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=78;
x[jvj+1]=11274;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1762&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(509,jvj+2,jvj+3)*/
l1:if((x[jvj+3]>0)) goto l2;
l25:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]==29)) goto l4;
if((x[jvj+6]!=30)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+33)*/
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=484)) goto l20;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,jvj+4,jvj+35)*/
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=484)) goto l15;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+37; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+33,jvj+37)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+38; 
(*f[200])( );if(v[102]) goto l15;     /*NDD0(jvj+35,jvj+38)*/
V164=0;
pile[v[22]]=117; pile[WZ1]=V164; pile[WZ2]=218; pile[WZ3]=jvj+38; pile[WZ4]=jvj+65; 
(*f[567])( );     /*QUADRI11(117,V164,218,jvj+38,jvj+65)*/
pile[v[22]]=jvj+37; pile[WZ1]=1302; pile[WZ2]=jvj+65; 
(*f[35])( );     /*CHGC1(jvj+37,1302,jvj+65)*/
pile[v[22]]=117; pile[WZ1]=V164; pile[WZ2]=218; pile[WZ3]=jvj+37; pile[WZ4]=jvj+66; 
(*f[567])( );     /*QUADRI11(117,V164,218,jvj+37,jvj+66)*/
pile[v[22]]=jvj+38; pile[WZ1]=1303; pile[WZ2]=jvj+66; 
(*f[35])( );     /*CHGC1(jvj+38,1303,jvj+66)*/
l15:pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+35,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=485)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+41)*/
for(i=x[jvj+41],V134=0;i>0;i=t[i],V134++)  ;
if((V134!=2)) goto l20;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+42; 
(*f[200])( );if(v[102]) goto l20;     /*NDD0(jvj+33,jvj+42)*/
x[jvj+75]=x[jvj+41] ;z[jvj+75]=z[jvj+41];
l16:if((x[jvj+75]<=0)) goto l20;
x[jvj+43]=s[x[jvj+75]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+75];
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+43,jvj+44)*/
if((x[jvj+44]!=484)) goto l17;
x[jvj+45]=x[jvj+43] ;z[jvj+45]=z[jvj+43];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+45,jvj+46)*/
x[jvj+76]=x[jvj+41] ;z[jvj+76]=z[jvj+41];
l18:if((x[jvj+76]<=0)) goto l17;
x[jvj+47]=s[x[jvj+76]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+76];
if((x[jvj+43]==x[jvj+47])) goto l19;
pile[v[22]]=130; pile[WZ1]=jvj+47; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(130,jvj+47,V141)*/
V141=pile[WZ2]; 
V120=V141;
V147=(-V120);
pile[v[22]]=117; pile[WZ1]=V147; pile[WZ2]=218; pile[WZ3]=jvj+46; pile[WZ4]=jvj+67; 
(*f[567])( );     /*QUADRI11(117,V147,218,jvj+46,jvj+67)*/
pile[v[22]]=jvj+42; pile[WZ1]=1302; pile[WZ2]=jvj+67; 
(*f[35])( );     /*CHGC1(jvj+42,1302,jvj+67)*/
pile[v[22]]=117; pile[WZ1]=V147; pile[WZ2]=218; pile[WZ3]=jvj+42; pile[WZ4]=jvj+68; 
(*f[567])( );     /*QUADRI11(117,V147,218,jvj+42,jvj+68)*/
pile[v[22]]=jvj+46; pile[WZ1]=1303; pile[WZ2]=jvj+68; 
(*f[35])( );     /*CHGC1(jvj+46,1303,jvj+68)*/
l19:x[jvj+76]=t[x[jvj+76]];
goto l18;
l3:x[jvj+3]=t[x[jvj+3]];
goto l1;
l4:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+4,jvj+7)*/
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=484)) goto l10;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(103,jvj+4,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=484)) goto l5;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+11; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+7,jvj+11)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+12; 
(*f[200])( );if(v[102]) goto l5;     /*NDD0(jvj+9,jvj+12)*/
V157=1;
pile[v[22]]=117; pile[WZ1]=V157; pile[WZ2]=218; pile[WZ3]=jvj+12; pile[WZ4]=jvj+59; 
(*f[567])( );     /*QUADRI11(117,V157,218,jvj+12,jvj+59)*/
pile[v[22]]=jvj+11; pile[WZ1]=1302; pile[WZ2]=jvj+59; 
(*f[35])( );     /*CHGC1(jvj+11,1302,jvj+59)*/
pile[v[22]]=117; pile[WZ1]=V157; pile[WZ2]=218; pile[WZ3]=jvj+11; pile[WZ4]=jvj+60; 
(*f[567])( );     /*QUADRI11(117,V157,218,jvj+11,jvj+60)*/
pile[v[22]]=jvj+12; pile[WZ1]=1303; pile[WZ2]=jvj+60; 
(*f[35])( );     /*CHGC1(jvj+12,1303,jvj+60)*/
l5:pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+9,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=485)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+15)*/
for(i=x[jvj+15],V103=0;i>0;i=t[i],V103++)  ;
if((V103!=2)) goto l10;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+16; 
(*f[200])( );if(v[102]) goto l10;     /*NDD0(jvj+7,jvj+16)*/
x[jvj+71]=x[jvj+15] ;z[jvj+71]=z[jvj+15];
l6:if((x[jvj+71]<=0)) goto l10;
x[jvj+17]=s[x[jvj+71]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+71];
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=484)) goto l7;
x[jvj+19]=x[jvj+17] ;z[jvj+19]=z[jvj+17];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[200])( );if(v[102]) goto l7;     /*NDD0(jvj+19,jvj+20)*/
x[jvj+72]=x[jvj+15] ;z[jvj+72]=z[jvj+15];
l8:if((x[jvj+72]<=0)) goto l7;
x[jvj+21]=s[x[jvj+72]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+72];
if((x[jvj+17]==x[jvj+21])) goto l9;
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+21,V110)*/
V110=pile[WZ2]; 
V89=V110;
V116=1-V89;
pile[v[22]]=117; pile[WZ1]=V116; pile[WZ2]=218; pile[WZ3]=jvj+20; pile[WZ4]=jvj+61; 
(*f[567])( );     /*QUADRI11(117,V116,218,jvj+20,jvj+61)*/
pile[v[22]]=jvj+16; pile[WZ1]=1302; pile[WZ2]=jvj+61; 
(*f[35])( );     /*CHGC1(jvj+16,1302,jvj+61)*/
pile[v[22]]=117; pile[WZ1]=V116; pile[WZ2]=218; pile[WZ3]=jvj+16; pile[WZ4]=jvj+62; 
(*f[567])( );     /*QUADRI11(117,V116,218,jvj+16,jvj+62)*/
pile[v[22]]=jvj+20; pile[WZ1]=1303; pile[WZ2]=jvj+62; 
(*f[35])( );     /*CHGC1(jvj+20,1303,jvj+62)*/
l9:x[jvj+72]=t[x[jvj+72]];
goto l8;
l7:x[jvj+71]=t[x[jvj+71]];
goto l6;
l10:pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+7,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+22,jvj+23)*/
if((x[jvj+23]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+7; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+7,jvj+24)*/
for(i=x[jvj+24],V40=0;i>0;i=t[i],V40++)  ;
if((V40!=2)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+4,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=484)) goto l3;
pile[v[22]]=jvj+25; pile[WZ1]=jvj+27; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+25,jvj+27)*/
x[jvj+73]=x[jvj+24] ;z[jvj+73]=z[jvj+24];
l11:if((x[jvj+73]<=0)) goto l3;
x[jvj+28]=s[x[jvj+73]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+73];
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=484)) goto l12;
x[jvj+30]=x[jvj+28] ;z[jvj+30]=z[jvj+28];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(jvj+30,jvj+31)*/
x[jvj+74]=x[jvj+24] ;z[jvj+74]=z[jvj+24];
l13:if((x[jvj+74]<=0)) goto l12;
x[jvj+32]=s[x[jvj+74]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+74];
if((x[jvj+28]==x[jvj+32])) goto l14;
pile[v[22]]=130; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(130,jvj+32,V47)*/
V47=pile[WZ2]; 
K=V47;
V55=K+1;
pile[v[22]]=117; pile[WZ1]=V55; pile[WZ2]=218; pile[WZ3]=jvj+27; pile[WZ4]=jvj+63; 
(*f[567])( );     /*QUADRI11(117,V55,218,jvj+27,jvj+63)*/
pile[v[22]]=jvj+31; pile[WZ1]=1302; pile[WZ2]=jvj+63; 
(*f[35])( );     /*CHGC1(jvj+31,1302,jvj+63)*/
pile[v[22]]=117; pile[WZ1]=V55; pile[WZ2]=218; pile[WZ3]=jvj+31; pile[WZ4]=jvj+64; 
(*f[567])( );     /*QUADRI11(117,V55,218,jvj+31,jvj+64)*/
pile[v[22]]=jvj+27; pile[WZ1]=1303; pile[WZ2]=jvj+64; 
(*f[35])( );     /*CHGC1(jvj+27,1303,jvj+64)*/
l14:x[jvj+74]=t[x[jvj+74]];
goto l13;
l12:x[jvj+73]=t[x[jvj+73]];
goto l11;
l17:x[jvj+75]=t[x[jvj+75]];
goto l16;
l20:pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+33,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+50)*/
for(i=x[jvj+50],V71=0;i>0;i=t[i],V71++)  ;
if((V71!=2)) goto l3;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(103,jvj+4,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+51,jvj+52)*/
if((x[jvj+52]!=484)) goto l3;
pile[v[22]]=jvj+51; pile[WZ1]=jvj+53; 
(*f[200])( );if(v[102]) goto l3;     /*NDD0(jvj+51,jvj+53)*/
x[jvj+77]=x[jvj+50] ;z[jvj+77]=z[jvj+50];
l21:if((x[jvj+77]<=0)) goto l3;
x[jvj+54]=s[x[jvj+77]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+77];
pile[v[22]]=100; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+54,jvj+55)*/
if((x[jvj+55]!=484)) goto l22;
x[jvj+56]=x[jvj+54] ;z[jvj+56]=z[jvj+54];
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[200])( );if(v[102]) goto l22;     /*NDD0(jvj+56,jvj+57)*/
x[jvj+78]=x[jvj+50] ;z[jvj+78]=z[jvj+50];
l23:if((x[jvj+78]<=0)) goto l22;
x[jvj+58]=s[x[jvj+78]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+78];
if((x[jvj+54]==x[jvj+58])) goto l24;
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+58,V78)*/
V78=pile[WZ2]; 
V59=V78;
pile[v[22]]=117; pile[WZ1]=V59; pile[WZ2]=218; pile[WZ3]=jvj+53; pile[WZ4]=jvj+69; 
(*f[567])( );     /*QUADRI11(117,V59,218,jvj+53,jvj+69)*/
pile[v[22]]=jvj+57; pile[WZ1]=1302; pile[WZ2]=jvj+69; 
(*f[35])( );     /*CHGC1(jvj+57,1302,jvj+69)*/
pile[v[22]]=117; pile[WZ1]=V59; pile[WZ2]=218; pile[WZ3]=jvj+57; pile[WZ4]=jvj+70; 
(*f[567])( );     /*QUADRI11(117,V59,218,jvj+57,jvj+70)*/
pile[v[22]]=jvj+53; pile[WZ1]=1303; pile[WZ2]=jvj+70; 
(*f[35])( );     /*CHGC1(jvj+53,1303,jvj+70)*/
l24:x[jvj+78]=t[x[jvj+78]];
goto l23;
l22:x[jvj+77]=t[x[jvj+77]];
goto l21;
}
