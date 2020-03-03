#include "dx.h"
void ATOME141T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,LL=0,V60=0,V62=0,V64=0,V58=0,V59=0,V61=0,V63=0,V28=0,V56=0,V26=0,V95=0,V96=0,V84=0,V82=0,V97=0,V92=0,V83=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=82;
x[jvj+1]=20141;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3730&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,R,jvj+39)*/
pile[v[22]]=101; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+39,jvj+40)*/
if((x[jvj+40]!=25)) goto l25;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,RR,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=55)) goto l25;
pile[v[22]]=107; pile[WZ1]=RR; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,RR,jvj+43)*/
for(i=x[jvj+43],V28=0;i>0;i=t[i],V28++)  ;
pile[v[22]]=1188; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1188,R,jvj+11)*/
if((x[jvj+11]==68)) goto l25;
l23:x[jvj+44]=vo[14];z[jvj+44]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(642,jvj+44,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,R,jvj+12)*/
pile[v[22]]=103; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,R,jvj+16)*/
x[jvj+15]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=485)) goto l5;
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+15)*/
l6:x[jvj+19]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=485)) goto l7;
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+19)*/
l8:x[jvj+20]=0 ;z[jvj+20]=0;
l9:if((x[jvj+15]<=0)) goto l10;
x[jvj+21]=s[x[jvj+15]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+15];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+21)*/
x[jvj+15]=t[x[jvj+15]];
goto l9;
l2:x[jvj+78]=t[x[jvj+78]];
l1:if((x[jvj+78]<=0)) goto l25;
x[jvj+3]=s[x[jvj+78]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+78];
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=48)) goto l2;
pile[v[22]]=107; pile[WZ1]=jvj+3; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,jvj+3,jvj+6)*/
x[jvj+79]=x[jvj+6] ;z[jvj+79]=z[jvj+6];
l3:if((x[jvj+79]<=0)) goto l2;
x[jvj+7]=s[x[jvj+79]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+79];
pile[v[22]]=111; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+7,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=1280)) goto l4;
pile[v[22]]=103; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(103,jvj+7,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+10,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=RR; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(1294,RR,jvj+45)*/
for(a=x[jvj+45];a>0;a=t[a]) if(s[a]==1311) goto l24;
l25:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l4:x[jvj+79]=t[x[jvj+79]];
goto l3;
l5:pile[v[22]]=20; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[409])( );     /*TRI14(20,jvj+12,jvj+15)*/
goto l6;
l7:pile[v[22]]=20; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[409])( );     /*TRI14(20,jvj+16,jvj+19)*/
goto l8;
l11:x[jvj+22]=s[x[jvj+19]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+19];
pile[v[22]]=jvj+20; pile[WZ1]=jvj+22; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+22)*/
x[jvj+19]=t[x[jvj+19]];
l10:if((x[jvj+19]>0)) goto l11;
x[jvj+78]=x[jvj+43] ;z[jvj+78]=z[jvj+43];
goto l1;
l12:x[jvj+31]=0 ;z[jvj+31]=0;
l15:if((x[jvj+43]>0)) goto l16;
x[jvj+38]=0 ;z[jvj+38]=0;
l19:if((x[jvj+31]>0)) goto l20;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+47; 
(*f[299])( );     /*COPEL0(jvj+38,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+47; pile[WZ2]=107; pile[WZ3]=jvj+54; 
(*f[301])( );     /*TRI11(jvj+53,jvj+47,107,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+54,22,100,jvj+48)*/
pile[v[22]]=107; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+48,jvj+49)*/
for(i=x[jvj+49],V26=0;i>0;i=t[i],V26++)  ;
if((V26>=V28)) goto l25;
pile[v[22]]=jvj+48; pile[WZ1]=jvj+50; 
(*f[799])( );if(v[102]) goto l25;     /*NORME0(jvj+48,jvj+50)*/
if((v[217]<=0)) goto l26;
V60=x[R];
V62=x[RR];
V64=x[jvj+48];
pile[v[22]]=40; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(40,0,35,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V60; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(20,V60,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
pile[v[22]]=20; pile[WZ1]=V62; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V62,0,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=V61; 
(*f[40])( );     /*SLG0(V61)*/
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V64,0,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
l26:pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+58)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+59; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+59)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+60)*/
pile[v[22]]=V56; pile[WZ1]=858; pile[WZ2]=jvj+55; 
(*f[46])( );     /*TRI0(V56,858,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,v[13],642,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=3730; pile[WZ2]=246; pile[WZ3]=jvj+57; 
(*f[189])( );     /*TRI4(jvj+56,3730,246,jvj+57)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20141; pile[WZ4]=jvj+57; pile[WZ5]=jvj+51; 
(*f[269])( );     /*QUADRI6(158,1,218,20141,jvj+57,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=159; pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+51,159,jvj+58)*/
pile[WZ2]=jvj+59; 
(*f[36])( );     /*PLUSC0(jvj+51,159,jvj+59)*/
pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(jvj+51,159,jvj+60)*/
pile[v[22]]=RR; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+50,jvj+51)*/
goto l25;
l14:x[jvj+23]=s[x[jvj+80]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+80];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=V21; 
(*f[3733])( );     /*VALFACT0(jvj+23,jvj+24,V21,LL)*/
LL=pile[WZ3]; 
pile[v[22]]=jvj+25; pile[WZ1]=LL; 
(*f[978])( );     /*PLUB3(jvj+25,LL)*/
x[jvj+80]=t[x[jvj+80]];
l13:if((x[jvj+80]>0)) goto l14;
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==0) goto l37;
V95=x[jvj+25];
l27:if((V95>0)) goto l39;
V96=x[jvj+25];
if((V96<=0)) goto l17;
V84=s[V96];
V82=V84;
l28:x[jvj+77]=0 ;z[jvj+77]=0;
V97=x[jvj+25];
l29:if((V97>0)) goto l36;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V82; pile[WZ4]=jvj+61; 
(*f[192])( );     /*QUADRI4(100,41,130,V82,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[255])( );     /*COPEXP0(jvj+61,jvj+62)*/
x[jvj+81]=x[jvj+77] ;z[jvj+81]=z[jvj+77];
l30:if((x[jvj+81]>0)) goto l31;
l17:x[jvj+43]=t[x[jvj+43]];
goto l15;
l16:x[jvj+26]=s[x[jvj+43]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+43];
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=48)) goto l17;
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+24)*/
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+80]=x[jvj+20] ;z[jvj+80]=z[jvj+20];
goto l13;
l18:pile[v[22]]=R; pile[WZ1]=jvj+32; pile[WZ2]=V21; pile[WZ3]=jvj+34; 
(*f[3735])( );     /*FERMATBIS0(R,jvj+32,V21,jvj+34)*/
if((x[jvj+34]==135)) goto l22;
l21:x[jvj+31]=t[x[jvj+31]];
goto l19;
l20:x[jvj+35]=s[x[jvj+31]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+31];
pile[v[22]]=111; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+35,jvj+36)*/
pile[v[22]]=101; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+36,jvj+37)*/
if((x[jvj+37]!=48)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+35; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,jvj+35,jvj+32)*/
if((V21!=2)) goto l18;
pile[v[22]]=R; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[3734])( );     /*EVALPAIR0(R,jvj+32,jvj+33)*/
if((x[jvj+33]==135)) goto l22;
goto l21;
l22:pile[v[22]]=jvj+38; pile[WZ1]=jvj+35; 
(*f[68])( );     /*PLUE0(jvj+38,jvj+35)*/
goto l21;
l24:pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(1294,R,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==1327) goto l12;
goto l25;
l31:x[jvj+63]=s[x[jvj+81]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+81];
pile[v[22]]=jvj+63; pile[WZ1]=jvj+61; pile[WZ2]=jvj+64; 
(*f[760])( );     /*MEMEX0(jvj+63,jvj+61,jvj+64)*/
if((x[jvj+64]==135)) goto l32;
x[jvj+81]=t[x[jvj+81]];
goto l30;
l32:x[jvj+74]=0 ;z[jvj+74]=0;
x[jvj+82]=x[jvj+77] ;z[jvj+82]=z[jvj+77];
l33:if((x[jvj+82]>0)) goto l34;
x[jvj+65]=x[jvj+74] ;z[jvj+65]=z[jvj+74];
pile[v[22]]=jvj+65; pile[WZ1]=jvj+66; 
(*f[299])( );     /*COPEL0(jvj+65,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+67)*/
pile[WZ3]=485; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+69; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=jvj+66; pile[WZ2]=107; pile[WZ3]=jvj+70; 
(*f[301])( );     /*TRI11(jvj+69,jvj+66,107,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+71; 
(*f[58])( );     /*TRI3(jvj+70,22,100,jvj+71)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+72; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=jvj+62; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+72,jvj+62,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+71; pile[WZ4]=jvj+73; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+71,jvj+73,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=V21; pile[WZ2]=jvj+30; 
(*f[3732])( );if(v[102]) goto l17;     /*METEXPO0(jvj+29,V21,jvj+30)*/
if((x[jvj+30]==0)) goto l17;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+26; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+26)*/
goto l17;
l34:x[jvj+75]=s[x[jvj+82]] ;z[jvj+75]=(x[jvj+75]<=sepcte) ? x[jvj+75] : z[jvj+82];
if((x[jvj+75]==x[jvj+63])) goto l35;
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[68])( );     /*PLUE0(jvj+74,jvj+75)*/
l35:x[jvj+82]=t[x[jvj+82]];
goto l33;
l36:V92=s[V97];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V92; pile[WZ4]=jvj+76; 
(*f[192])( );     /*QUADRI4(100,41,130,V92,jvj+76)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+76; 
(*f[522])( );     /*PLUB2(jvj+77,jvj+76)*/
V97=t[V97];
goto l29;
l37:V82=0;
goto l28;
l38:V82=V83;
goto l28;
l39:V83=s[V95];
if((V83<0)) goto l38;
V95=t[V95];
goto l27;
}
