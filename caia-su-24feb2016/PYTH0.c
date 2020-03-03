#include "dx.h"
void PYTH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V15=0,V34=0,V37=0,V46=0,K=0,V73=0,V82=0,V88=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=87;
x[jvj+1]=11519;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==901&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+60]=x[jvj+64]=x[jvj+62]=K=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(100,R,jvj+8)*/
if((x[jvj+8]!=22)) goto l47;
pile[v[22]]=102; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(102,R,jvj+2)*/
pile[v[22]]=103; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(103,R,jvj+5)*/
x[jvj+65]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=485)) goto l1;
x[jvj+65]=x[jvj+2] ;z[jvj+65]=z[jvj+2];
l1:pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]!=485)) goto l2;
x[jvj+65]=x[jvj+5] ;z[jvj+65]=z[jvj+5];
l4:if((x[jvj+65]==(-99999998))) goto l47;
x[jvj+18]=x[jvj+65] ;z[jvj+18]=z[jvj+65];
x[jvj+66]=incon;
if((x[jvj+18]==x[jvj+2])) goto l3;
x[jvj+66]=x[jvj+2] ;z[jvj+66]=z[jvj+2];
l5:x[jvj+9]=x[jvj+66] ;z[jvj+9]=z[jvj+66];
pile[v[22]]=111; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+9,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=486)) goto l11;
pile[v[22]]=107; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(107,jvj+9,jvj+12)*/
for(i=x[jvj+12],V15=0;i>0;i=t[i],V15++)  ;
if((V15!=2)) goto l11;
x[jvj+67]=x[jvj+12] ;z[jvj+67]=z[jvj+12];
l6:if((x[jvj+67]<=0)) goto l11;
x[jvj+13]=s[x[jvj+67]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+67];
pile[v[22]]=100; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+13,jvj+14)*/
if((x[jvj+14]!=484)) goto l7;
x[jvj+15]=x[jvj+13] ;z[jvj+15]=z[jvj+13];
x[jvj+69]=x[jvj+15] ;z[jvj+69]=z[jvj+15];
x[jvj+68]=x[jvj+12] ;z[jvj+68]=z[jvj+12];
l8:if((x[jvj+68]<=0)) goto l7;
x[jvj+16]=s[x[jvj+68]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+68];
if((x[jvj+13]==x[jvj+16])) goto l9;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l10;
l9:x[jvj+68]=t[x[jvj+68]];
goto l8;
l2:if(x[jvj+65]==incon) goto l47;
goto l4;
l3:x[jvj+66]=x[jvj+5] ;z[jvj+66]=z[jvj+5];
goto l5;
l7:x[jvj+67]=t[x[jvj+67]];
goto l6;
l10:x[jvj+60]=x[jvj+69] ;z[jvj+60]=z[jvj+69];
l11:pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=485)) goto l43;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+21)*/
for(i=x[jvj+21],V34=0;i>0;i=t[i],V34++)  ;
if((V34!=2)) goto l43;
x[jvj+70]=x[jvj+21] ;z[jvj+70]=z[jvj+21];
l12:if((x[jvj+70]>0)) goto l13;
x[jvj+78]=x[jvj+21] ;z[jvj+78]=z[jvj+21];
l27:if((x[jvj+78]<=0)) goto l43;
x[jvj+40]=s[x[jvj+78]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+78];
pile[v[22]]=111; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+40,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=486)) goto l28;
pile[v[22]]=107; pile[WZ1]=jvj+40; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,jvj+40,jvj+43)*/
for(i=x[jvj+43],V73=0;i>0;i=t[i],V73++)  ;
if((V73!=2)) goto l28;
x[jvj+79]=x[jvj+43] ;z[jvj+79]=z[jvj+43];
l29:if((x[jvj+79]<=0)) goto l28;
x[jvj+44]=s[x[jvj+79]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+79];
pile[v[22]]=100; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+44,jvj+45)*/
if((x[jvj+45]!=484)) goto l30;
x[jvj+46]=x[jvj+44] ;z[jvj+46]=z[jvj+44];
x[jvj+85]=x[jvj+46] ;z[jvj+85]=z[jvj+46];
x[jvj+80]=x[jvj+43] ;z[jvj+80]=z[jvj+43];
l31:if((x[jvj+80]<=0)) goto l30;
x[jvj+47]=s[x[jvj+80]] ;z[jvj+47]=(x[jvj+47]<=sepcte) ? x[jvj+47] : z[jvj+80];
if((x[jvj+44]==x[jvj+47])) goto l32;
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[760])( );     /*MEMEX0(jvj+46,jvj+47,jvj+48)*/
if((x[jvj+48]==135)) goto l34;
l32:x[jvj+80]=t[x[jvj+80]];
goto l31;
l13:x[jvj+22]=s[x[jvj+70]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+70];
pile[v[22]]=111; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+22,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+23,jvj+24)*/
if((x[jvj+24]!=486)) goto l14;
pile[v[22]]=107; pile[WZ1]=jvj+22; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,jvj+22,jvj+25)*/
for(i=x[jvj+25],V37=0;i>0;i=t[i],V37++)  ;
if((V37!=2)) goto l14;
x[jvj+71]=x[jvj+25] ;z[jvj+71]=z[jvj+25];
l15:if((x[jvj+71]<=0)) goto l14;
x[jvj+26]=s[x[jvj+71]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+71];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=484)) goto l16;
x[jvj+28]=x[jvj+26] ;z[jvj+28]=z[jvj+26];
x[jvj+76]=x[jvj+28] ;z[jvj+76]=z[jvj+28];
x[jvj+72]=x[jvj+25] ;z[jvj+72]=z[jvj+25];
l17:if((x[jvj+72]<=0)) goto l16;
x[jvj+29]=s[x[jvj+72]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+72];
if((x[jvj+26]==x[jvj+29])) goto l18;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+29,jvj+30)*/
if((x[jvj+30]==135)) goto l20;
l18:x[jvj+72]=t[x[jvj+72]];
goto l17;
l14:x[jvj+70]=t[x[jvj+70]];
goto l12;
l16:x[jvj+71]=t[x[jvj+71]];
goto l15;
l20:x[jvj+73]=x[jvj+21] ;z[jvj+73]=z[jvj+21];
l19:if((x[jvj+73]<=0)) goto l18;
x[jvj+31]=s[x[jvj+73]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+73];
if((x[jvj+22]==x[jvj+31])) goto l21;
pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+31,jvj+32)*/
pile[v[22]]=101; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+32,jvj+33)*/
if((x[jvj+33]!=486)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+31,jvj+34)*/
for(i=x[jvj+34],V46=0;i>0;i=t[i],V46++)  ;
if((V46!=2)) goto l21;
x[jvj+74]=x[jvj+34] ;z[jvj+74]=z[jvj+34];
l22:if((x[jvj+74]<=0)) goto l21;
x[jvj+35]=s[x[jvj+74]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+74];
pile[v[22]]=100; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,jvj+35,jvj+36)*/
if((x[jvj+36]!=484)) goto l23;
x[jvj+37]=x[jvj+35] ;z[jvj+37]=z[jvj+35];
x[jvj+77]=x[jvj+37] ;z[jvj+77]=z[jvj+37];
x[jvj+75]=x[jvj+34] ;z[jvj+75]=z[jvj+34];
l24:if((x[jvj+75]<=0)) goto l23;
x[jvj+38]=s[x[jvj+75]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+75];
if((x[jvj+35]==x[jvj+38])) goto l25;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(jvj+37,jvj+38,jvj+39)*/
if((x[jvj+39]==135)) goto l26;
l25:x[jvj+75]=t[x[jvj+75]];
goto l24;
l21:x[jvj+73]=t[x[jvj+73]];
goto l19;
l23:x[jvj+74]=t[x[jvj+74]];
goto l22;
l26:x[jvj+64]=x[jvj+76] ;z[jvj+64]=z[jvj+76];
x[jvj+62]=x[jvj+77] ;z[jvj+62]=z[jvj+77];
K=1;
l43:if(x[jvj+60]!=incon) goto l44;
l47:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l28:x[jvj+78]=t[x[jvj+78]];
goto l27;
l30:x[jvj+79]=t[x[jvj+79]];
goto l29;
l34:x[jvj+81]=x[jvj+21] ;z[jvj+81]=z[jvj+21];
l33:if((x[jvj+81]<=0)) goto l32;
x[jvj+49]=s[x[jvj+81]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+81];
if((x[jvj+40]==x[jvj+49])) goto l35;
pile[v[22]]=111; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(111,jvj+49,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(101,jvj+50,jvj+51)*/
if((x[jvj+51]!=486)) goto l35;
pile[v[22]]=107; pile[WZ1]=jvj+49; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(107,jvj+49,jvj+52)*/
for(i=x[jvj+52],V82=0;i>0;i=t[i],V82++)  ;
if((V82!=3)) goto l35;
x[jvj+82]=x[jvj+52] ;z[jvj+82]=z[jvj+52];
l36:if((x[jvj+82]<=0)) goto l35;
x[jvj+53]=s[x[jvj+82]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+82];
pile[v[22]]=100; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(100,jvj+53,jvj+54)*/
if((x[jvj+54]!=484)) goto l37;
x[jvj+55]=x[jvj+53] ;z[jvj+55]=z[jvj+53];
x[jvj+86]=x[jvj+55] ;z[jvj+86]=z[jvj+55];
x[jvj+87]=x[jvj+52] ;z[jvj+87]=z[jvj+52];
l38:if((x[jvj+87]<=0)) goto l37;
x[jvj+83]=s[x[jvj+87]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+87];
if((x[jvj+53]==x[jvj+83])) goto l39;
x[jvj+56]=x[jvj+83] ;z[jvj+56]=z[jvj+83];
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[760])( );     /*MEMEX0(jvj+55,jvj+56,jvj+57)*/
if((x[jvj+57]==135)) goto l41;
l39:x[jvj+87]=t[x[jvj+87]];
goto l38;
l35:x[jvj+81]=t[x[jvj+81]];
goto l33;
l37:x[jvj+82]=t[x[jvj+82]];
goto l36;
l41:x[jvj+84]=x[jvj+52] ;z[jvj+84]=z[jvj+52];
l40:if((x[jvj+84]<=0)) goto l39;
x[jvj+58]=s[x[jvj+84]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+84];
if((x[jvj+53]==x[jvj+58])) goto l42;
if((x[jvj+83]==x[jvj+58])) goto l42;
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+58,V88)*/
V88=pile[WZ2]; 
x[jvj+64]=x[jvj+85] ;z[jvj+64]=z[jvj+85];
x[jvj+62]=x[jvj+86] ;z[jvj+62]=z[jvj+86];
K=V88;
goto l43;
l42:x[jvj+84]=t[x[jvj+84]];
goto l40;
l44:if(x[jvj+64]!=incon) goto l45;
goto l47;
l45:if(x[jvj+62]!=incon) goto l46;
goto l47;
l46:if(K!=incon) goto l48;
goto l47;
l48:pile[v[22]]=jvj+60; pile[WZ1]=475; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,475,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=459; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,459,jvj+63)*/
pile[v[22]]=117; pile[WZ1]=K; pile[WZ2]=447; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; pile[WZ5]=jvj+59; 
(*f[725])( );     /*QUADRI14(117,K,447,jvj+64,jvj+63,jvj+59)*/
pile[v[22]]=R; pile[WZ1]=1450; pile[WZ2]=jvj+59; 
(*f[35])( );     /*CHGC1(R,1450,jvj+59)*/
goto l47;
}
