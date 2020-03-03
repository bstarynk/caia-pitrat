#include "dx.h"
void ATOME114T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V26=0,V5=0,V27=0,V6=0,V17=0,V29=0,V14=0,V15=0,V18=0,V16=0,V19=0,V52=0,KA=0,V62=0,V83=0,KB=0,V93=0,V114=0,KC=0,V124=0,V145=0,KD=0,V155=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=125;
x[jvj+1]=20114;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3726&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,R,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+10,jvj+11)*/
if((x[jvj+11]!=29)) goto l16;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(111,RR,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=29)) goto l16;
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+14,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,R,jvj+15)*/
pile[v[22]]=111; pile[WZ1]=jvj+15; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+15,jvj+42)*/
pile[v[22]]=101; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+42,jvj+43)*/
if((x[jvj+43]!=485)) goto l26;
pile[v[22]]=107; pile[WZ1]=jvj+15; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(107,jvj+15,jvj+44)*/
x[jvj+110]=x[jvj+44] ;z[jvj+110]=z[jvj+44];
l18:if((x[jvj+110]<=0)) goto l26;
x[jvj+45]=s[x[jvj+110]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+110];
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(130,jvj+45,V52)*/
V52=pile[WZ2]; 
x[jvj+111]=x[jvj+44] ;z[jvj+111]=z[jvj+44];
l19:if((x[jvj+111]>0)) goto l21;
l20:x[jvj+110]=t[x[jvj+110]];
goto l18;
l2:V26=(-V15);
V5=V26;
l14:V16=V5-1;
V6=incon;
if((V18<0)) goto l3;
V6=V15;
l15:V17=V6+1;
V19=V16-V17;
if((V19>=10)) goto l16;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[760])( );     /*MEMEX0(jvj+22,jvj+23,jvj+24)*/
if((x[jvj+24]==135)) goto l7;
l16:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l3:V27=(-V14);
V6=V27;
goto l15;
l4:x[jvj+3]=x[jvj+18] ;z[jvj+3]=z[jvj+18];
l5:x[jvj+5]=incon;
if((V18<0)) goto l6;
x[jvj+5]=x[jvj+18] ;z[jvj+5]=z[jvj+18];
l1:V5=incon;
if((V18<0)) goto l2;
V5=V14;
goto l14;
l6:x[jvj+5]=x[jvj+22] ;z[jvj+5]=z[jvj+22];
goto l1;
l7:x[jvj+9]=0 ;z[jvj+9]=0;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+6)*/
x[jvj+7]=d[76];z[jvj+7]=0;
l8:if((V17<=V16)) goto l17;
pile[v[22]]=jvj+9; pile[WZ1]=jvj+25; 
(*f[299])( );     /*COPEL0(jvj+9,jvj+25)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+38)*/
pile[v[22]]=V29; pile[WZ1]=858; pile[WZ2]=jvj+34; 
(*f[46])( );     /*TRI0(V29,858,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,v[13],642,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=3726; pile[WZ2]=246; pile[WZ3]=jvj+36; 
(*f[189])( );     /*TRI4(jvj+35,3726,246,jvj+36)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20114; pile[WZ4]=jvj+36; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(158,1,218,20114,jvj+36,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=159; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+37)*/
pile[WZ2]=jvj+38; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+25; pile[WZ2]=107; pile[WZ3]=jvj+41; 
(*f[301])( );     /*TRI11(jvj+40,jvj+25,107,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+41,22,100,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+26; 
(*f[1296])( );     /*NOUVCONTR0(jvj+27,jvj+26)*/
goto l16;
l12:pile[v[22]]=103; pile[WZ1]=RR; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,RR,jvj+21)*/
pile[v[22]]=111; pile[WZ1]=jvj+21; pile[WZ2]=jvj+93; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(111,jvj+21,jvj+93)*/
pile[v[22]]=101; pile[WZ1]=jvj+93; pile[WZ2]=jvj+94; 
(*f[32])( );if(v[102]) goto l59;     /*FNDO0(101,jvj+93,jvj+94)*/
if((x[jvj+94]!=485)) goto l59;
pile[v[22]]=107; pile[WZ1]=jvj+21; pile[WZ2]=jvj+95; 
(*f[33])( );     /*FNDE0(107,jvj+21,jvj+95)*/
x[jvj+122]=x[jvj+95] ;z[jvj+122]=z[jvj+95];
l51:if((x[jvj+122]<=0)) goto l59;
x[jvj+96]=s[x[jvj+122]] ;z[jvj+96]=(x[jvj+96]<=sepcte) ? x[jvj+96] : z[jvj+122];
pile[v[22]]=130; pile[WZ1]=jvj+96; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(130,jvj+96,V145)*/
V145=pile[WZ2]; 
x[jvj+123]=x[jvj+95] ;z[jvj+123]=z[jvj+95];
l52:if((x[jvj+123]>0)) goto l54;
l53:x[jvj+122]=t[x[jvj+122]];
goto l51;
l17:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+28)*/
pile[WZ3]=485; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+32)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V17; pile[WZ4]=jvj+33; 
(*f[192])( );     /*QUADRI4(100,41,130,V17,jvj+33)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+32; pile[WZ4]=jvj+30; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+32,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=107; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+6)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+30,107,jvj+33)*/
pile[v[22]]=jvj+28; pile[WZ1]=111; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(jvj+28,111,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=103; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+4; pile[WZ4]=jvj+31; pile[WZ5]=jvj+8; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+4,jvj+31,jvj+8)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[196])( );     /*PLUF0(jvj+7,jvj+8,jvj+9)*/
V17++;
goto l8;
l21:x[jvj+46]=s[x[jvj+111]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+111];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+45; pile[WZ2]=jvj+47; 
(*f[760])( );     /*MEMEX0(jvj+46,jvj+45,jvj+47)*/
if((x[jvj+47]==135)) goto l22;
x[jvj+111]=t[x[jvj+111]];
goto l19;
l22:x[jvj+57]=0 ;z[jvj+57]=0;
x[jvj+113]=x[jvj+44] ;z[jvj+113]=z[jvj+44];
l23:if((x[jvj+113]>0)) goto l27;
x[jvj+48]=x[jvj+57] ;z[jvj+48]=z[jvj+57];
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[299])( );     /*COPEL0(jvj+48,jvj+49)*/
KA=V52;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=111; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,111,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+49; pile[WZ2]=107; pile[WZ3]=jvj+52; 
(*f[301])( );     /*TRI11(jvj+51,jvj+49,107,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+53; 
(*f[58])( );     /*TRI3(jvj+52,22,100,jvj+53)*/
l24:pile[v[22]]=111; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+53,jvj+54)*/
pile[v[22]]=101; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+54,jvj+55)*/
if((x[jvj+55]!=485)) goto l25;
pile[v[22]]=107; pile[WZ1]=jvj+53; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(107,jvj+53,jvj+56)*/
for(i=x[jvj+56],V62=0;i>0;i=t[i],V62++)  ;
if((V62!=1)) goto l25;
if((x[jvj+56]<=0)) goto l25;
x[jvj+112]=s[x[jvj+56]] ;z[jvj+112]=(x[jvj+112]<=sepcte) ? x[jvj+112] : z[jvj+56];
x[jvj+22]=x[jvj+112] ;z[jvj+22]=z[jvj+112];
l9:pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,R,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(111,jvj+16,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(101,jvj+59,jvj+60)*/
if((x[jvj+60]!=485)) goto l37;
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+61)*/
x[jvj+114]=x[jvj+61] ;z[jvj+114]=z[jvj+61];
l29:if((x[jvj+114]<=0)) goto l37;
x[jvj+62]=s[x[jvj+114]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+114];
pile[v[22]]=130; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(130,jvj+62,V83)*/
V83=pile[WZ2]; 
x[jvj+115]=x[jvj+61] ;z[jvj+115]=z[jvj+61];
l30:if((x[jvj+115]>0)) goto l32;
l31:x[jvj+114]=t[x[jvj+114]];
goto l29;
l25:x[jvj+22]=x[jvj+53] ;z[jvj+22]=z[jvj+53];
goto l9;
l26:KA=0;
x[jvj+53]=x[jvj+15] ;z[jvj+53]=z[jvj+15];
goto l24;
l27:x[jvj+58]=s[x[jvj+113]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+113];
if((x[jvj+58]==x[jvj+46])) goto l28;
pile[v[22]]=jvj+57; pile[WZ1]=jvj+58; 
(*f[68])( );     /*PLUE0(jvj+57,jvj+58)*/
l28:x[jvj+113]=t[x[jvj+113]];
goto l23;
l32:x[jvj+63]=s[x[jvj+115]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+115];
pile[v[22]]=jvj+63; pile[WZ1]=jvj+62; pile[WZ2]=jvj+64; 
(*f[760])( );     /*MEMEX0(jvj+63,jvj+62,jvj+64)*/
if((x[jvj+64]==135)) goto l33;
x[jvj+115]=t[x[jvj+115]];
goto l30;
l33:x[jvj+74]=0 ;z[jvj+74]=0;
x[jvj+117]=x[jvj+61] ;z[jvj+117]=z[jvj+61];
l34:if((x[jvj+117]>0)) goto l38;
x[jvj+65]=x[jvj+74] ;z[jvj+65]=z[jvj+74];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[299])( );     /*COPEL0(jvj+65,jvj+66)*/
KB=V83;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+66; pile[WZ2]=107; pile[WZ3]=jvj+69; 
(*f[301])( );     /*TRI11(jvj+68,jvj+66,107,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+70; 
(*f[58])( );     /*TRI3(jvj+69,22,100,jvj+70)*/
l35:pile[v[22]]=111; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+70,jvj+71)*/
pile[v[22]]=101; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+71,jvj+72)*/
if((x[jvj+72]!=485)) goto l36;
pile[v[22]]=107; pile[WZ1]=jvj+70; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(107,jvj+70,jvj+73)*/
for(i=x[jvj+73],V93=0;i>0;i=t[i],V93++)  ;
if((V93!=1)) goto l36;
if((x[jvj+73]<=0)) goto l36;
x[jvj+116]=s[x[jvj+73]] ;z[jvj+116]=(x[jvj+116]<=sepcte) ? x[jvj+116] : z[jvj+73];
x[jvj+18]=x[jvj+116] ;z[jvj+18]=z[jvj+116];
l10:V14=KB-KA;
pile[v[22]]=102; pile[WZ1]=RR; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(102,RR,jvj+17)*/
pile[v[22]]=111; pile[WZ1]=jvj+17; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+17,jvj+76)*/
pile[v[22]]=101; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+76,jvj+77)*/
if((x[jvj+77]!=485)) goto l48;
pile[v[22]]=107; pile[WZ1]=jvj+17; pile[WZ2]=jvj+78; 
(*f[33])( );     /*FNDE0(107,jvj+17,jvj+78)*/
x[jvj+118]=x[jvj+78] ;z[jvj+118]=z[jvj+78];
l40:if((x[jvj+118]<=0)) goto l48;
x[jvj+79]=s[x[jvj+118]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+118];
pile[v[22]]=130; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+79,V114)*/
V114=pile[WZ2]; 
x[jvj+119]=x[jvj+78] ;z[jvj+119]=z[jvj+78];
l41:if((x[jvj+119]>0)) goto l43;
l42:x[jvj+118]=t[x[jvj+118]];
goto l40;
l36:x[jvj+18]=x[jvj+70] ;z[jvj+18]=z[jvj+70];
goto l10;
l37:KB=0;
x[jvj+70]=x[jvj+16] ;z[jvj+70]=z[jvj+16];
goto l35;
l38:x[jvj+75]=s[x[jvj+117]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+117];
if((x[jvj+75]==x[jvj+63])) goto l39;
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[68])( );     /*PLUE0(jvj+74,jvj+75)*/
l39:x[jvj+117]=t[x[jvj+117]];
goto l34;
l43:x[jvj+80]=s[x[jvj+119]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+119];
pile[v[22]]=jvj+80; pile[WZ1]=jvj+79; pile[WZ2]=jvj+81; 
(*f[760])( );     /*MEMEX0(jvj+80,jvj+79,jvj+81)*/
if((x[jvj+81]==135)) goto l44;
x[jvj+119]=t[x[jvj+119]];
goto l41;
l44:x[jvj+91]=0 ;z[jvj+91]=0;
x[jvj+121]=x[jvj+78] ;z[jvj+121]=z[jvj+78];
l45:if((x[jvj+121]>0)) goto l49;
x[jvj+82]=x[jvj+91] ;z[jvj+82]=z[jvj+91];
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; 
(*f[299])( );     /*COPEL0(jvj+82,jvj+83)*/
KC=V114;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+84; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=111; pile[WZ2]=jvj+85; 
(*f[54])( );     /*TRI1(jvj+84,111,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=jvj+83; pile[WZ2]=107; pile[WZ3]=jvj+86; 
(*f[301])( );     /*TRI11(jvj+85,jvj+83,107,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+87; 
(*f[58])( );     /*TRI3(jvj+86,22,100,jvj+87)*/
l46:pile[v[22]]=111; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(111,jvj+87,jvj+88)*/
pile[v[22]]=101; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(101,jvj+88,jvj+89)*/
if((x[jvj+89]!=485)) goto l47;
pile[v[22]]=107; pile[WZ1]=jvj+87; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(107,jvj+87,jvj+90)*/
for(i=x[jvj+90],V124=0;i>0;i=t[i],V124++)  ;
if((V124!=1)) goto l47;
if((x[jvj+90]<=0)) goto l47;
x[jvj+120]=s[x[jvj+90]] ;z[jvj+120]=(x[jvj+120]<=sepcte) ? x[jvj+120] : z[jvj+90];
x[jvj+19]=x[jvj+120] ;z[jvj+19]=z[jvj+120];
l11:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[760])( );     /*MEMEX0(jvj+18,jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l12;
goto l16;
l47:x[jvj+19]=x[jvj+87] ;z[jvj+19]=z[jvj+87];
goto l11;
l48:KC=0;
x[jvj+87]=x[jvj+17] ;z[jvj+87]=z[jvj+17];
goto l46;
l49:x[jvj+92]=s[x[jvj+121]] ;z[jvj+92]=(x[jvj+92]<=sepcte) ? x[jvj+92] : z[jvj+121];
if((x[jvj+92]==x[jvj+80])) goto l50;
pile[v[22]]=jvj+91; pile[WZ1]=jvj+92; 
(*f[68])( );     /*PLUE0(jvj+91,jvj+92)*/
l50:x[jvj+121]=t[x[jvj+121]];
goto l45;
l54:x[jvj+97]=s[x[jvj+123]] ;z[jvj+97]=(x[jvj+97]<=sepcte) ? x[jvj+97] : z[jvj+123];
pile[v[22]]=jvj+97; pile[WZ1]=jvj+96; pile[WZ2]=jvj+98; 
(*f[760])( );     /*MEMEX0(jvj+97,jvj+96,jvj+98)*/
if((x[jvj+98]==135)) goto l55;
x[jvj+123]=t[x[jvj+123]];
goto l52;
l55:x[jvj+108]=0 ;z[jvj+108]=0;
x[jvj+125]=x[jvj+95] ;z[jvj+125]=z[jvj+95];
l56:if((x[jvj+125]>0)) goto l60;
x[jvj+99]=x[jvj+108] ;z[jvj+99]=z[jvj+108];
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; 
(*f[299])( );     /*COPEL0(jvj+99,jvj+100)*/
KD=V145;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+101; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=111; pile[WZ2]=jvj+102; 
(*f[54])( );     /*TRI1(jvj+101,111,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+100; pile[WZ2]=107; pile[WZ3]=jvj+103; 
(*f[301])( );     /*TRI11(jvj+102,jvj+100,107,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+104; 
(*f[58])( );     /*TRI3(jvj+103,22,100,jvj+104)*/
l57:pile[v[22]]=111; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(111,jvj+104,jvj+105)*/
pile[v[22]]=101; pile[WZ1]=jvj+105; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l58;     /*FNDO0(101,jvj+105,jvj+106)*/
if((x[jvj+106]!=485)) goto l58;
pile[v[22]]=107; pile[WZ1]=jvj+104; pile[WZ2]=jvj+107; 
(*f[33])( );     /*FNDE0(107,jvj+104,jvj+107)*/
for(i=x[jvj+107],V155=0;i>0;i=t[i],V155++)  ;
if((V155!=1)) goto l58;
if((x[jvj+107]<=0)) goto l58;
x[jvj+124]=s[x[jvj+107]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+107];
x[jvj+23]=x[jvj+124] ;z[jvj+23]=z[jvj+124];
l13:V15=KC-KD;
V18=V15+V14;
x[jvj+3]=incon;
if((V18<0)) goto l4;
x[jvj+3]=x[jvj+22] ;z[jvj+3]=z[jvj+22];
goto l5;
l58:x[jvj+23]=x[jvj+104] ;z[jvj+23]=z[jvj+104];
goto l13;
l59:KD=0;
x[jvj+104]=x[jvj+21] ;z[jvj+104]=z[jvj+21];
goto l57;
l60:x[jvj+109]=s[x[jvj+125]] ;z[jvj+109]=(x[jvj+109]<=sepcte) ? x[jvj+109] : z[jvj+125];
if((x[jvj+109]==x[jvj+97])) goto l61;
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; 
(*f[68])( );     /*PLUE0(jvj+108,jvj+109)*/
l61:x[jvj+125]=t[x[jvj+125]];
goto l56;
}
