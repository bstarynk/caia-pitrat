#include "dx.h"
void ATOME9T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int D=0,V14=0,B=0,BB=0,V16=0,V=0,V47=0,V25=0,V40=0,V26=0,V68=0,V79=0,V92=0,V103=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=81;
x[jvj+1]=20009;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3243&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,R,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]!=55)) goto l22;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(870,R,V25)*/
V25=pile[WZ2]; 
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+22,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(678,R,jvj+11)*/
l6:if((x[jvj+11]>0)) goto l7;
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[1948])( );if(v[102]) goto l22;     /*FNDOND0(498,jvj+23,jvj+24)*/
x[jvj+19]=0 ;z[jvj+19]=0;
pile[v[22]]=R; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(R,jvj+12)*/
if((x[jvj+12]<=0)) goto l14;
x[jvj+16]=s[x[jvj+12]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+12];
pile[v[22]]=509; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[1969])( );     /*FNDEND0(509,jvj+16,jvj+17)*/
l11:if((x[jvj+17]<=0)) goto l14;
x[jvj+13]=s[x[jvj+17]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+17];
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(jvj+13,jvj+14)*/
pile[v[22]]=R; pile[WZ1]=jvj+15; 
(*f[887])( );     /*VARND0(R,jvj+15)*/
V47=x[jvj+15];
l8:if((V47>0)) goto l9;
pile[v[22]]=1294; pile[WZ1]=jvj+13; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1294,jvj+13,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==1291) goto l13;
l12:x[jvj+17]=t[x[jvj+17]];
goto l11;
l4:x[jvj+3]=s[x[jvj+78]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+78];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
if((x[jvj+4]<=0)) goto l5;
D=s[x[jvj+4]];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+3,jvj+62)*/
if((x[jvj+62]!=22)) goto l5;
pile[v[22]]=103; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(103,jvj+3,jvj+63)*/
pile[v[22]]=130; pile[WZ1]=jvj+63; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+63,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(111,jvj+3,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(101,jvj+64,jvj+65)*/
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(102,jvj+3,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+66,jvj+67)*/
if((x[jvj+67]!=484)) goto l27;
x[jvj+72]=x[jvj+65] ;z[jvj+72]=z[jvj+65];
B=V92;
l26:if(x[jvj+72]!=25&&x[jvj+72]!=26&&x[jvj+72]!=29&&x[jvj+72]!=30&&x[jvj+72]!=27&&x[jvj+72]!=28) goto l5;
x[jvj+7]=x[jvj+72] ;z[jvj+7]=z[jvj+72];
x[jvj+77]=x[jvj+36] ;z[jvj+77]=z[jvj+36];
l1:if((x[jvj+77]<=0)) goto l21;
x[jvj+5]=s[x[jvj+77]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+77];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
for(i=x[jvj+6],V14=0;i>0;i=t[i],V14++)  ;
if((V14!=1)) goto l2;
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==D) goto l23;
l2:x[jvj+77]=t[x[jvj+77]];
goto l1;
l5:x[jvj+78]=t[x[jvj+78]];
l3:if((x[jvj+78]>0)) goto l4;
x[jvj+80]=x[jvj+31] ;z[jvj+80]=z[jvj+31];
l28:if((x[jvj+80]>0)) goto l29;
l21:x[jvj+79]=t[x[jvj+79]];
l19:if((x[jvj+79]<=0)) goto l18;
x[jvj+33]=s[x[jvj+79]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+79];
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=48)) goto l21;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+36)*/
x[jvj+78]=x[jvj+25] ;z[jvj+78]=z[jvj+25];
goto l3;
l7:x[jvj+10]=s[x[jvj+11]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+11];
pile[v[22]]=472; pile[WZ1]=jvj+10; 
(*f[1975])( );if(v[102]) goto l22;     /*FNDCND0(472,jvj+10,V16)*/
V16=pile[WZ2]; 
if((V16!=1)) goto l22;
x[jvj+11]=t[x[jvj+11]];
goto l6;
l9:V=s[V47];
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==V) goto l10;
goto l12;
l10:V47=t[V47];
goto l8;
l13:pile[v[22]]=jvj+19; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+13)*/
goto l12;
l14:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(107,R,jvj+25)*/
pile[v[22]]=1216; pile[WZ1]=jvj+24; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1216,jvj+24,jvj+26)*/
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==1291) goto l15;
l22:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l15:for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==1301) goto l16;
goto l22;
l16:pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1294,R,jvj+27)*/
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==1301) goto l17;
goto l22;
l20:x[jvj+79]=x[jvj+31] ;z[jvj+79]=z[jvj+31];
goto l19;
l23:pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+51)*/
if((x[jvj+51]!=22)) goto l2;
pile[v[22]]=103; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,jvj+5,jvj+52)*/
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+52,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+5,jvj+53)*/
pile[v[22]]=101; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+53,jvj+54)*/
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+5,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+55,jvj+56)*/
if((x[jvj+56]!=484)) goto l25;
x[jvj+61]=x[jvj+54] ;z[jvj+61]=z[jvj+54];
BB=V68;
l24:if(x[jvj+61]!=25&&x[jvj+61]!=26&&x[jvj+61]!=29&&x[jvj+61]!=30&&x[jvj+61]!=27&&x[jvj+61]!=28) goto l2;
x[jvj+8]=x[jvj+61] ;z[jvj+8]=z[jvj+61];
pile[v[22]]=jvj+7; pile[WZ1]=B; pile[WZ2]=jvj+8; pile[WZ3]=BB; pile[WZ4]=jvj+9; 
(*f[3242])( );if(v[102]) goto l2;     /*INFEG0(jvj+7,B,jvj+8,BB,jvj+9)*/
if((x[jvj+9]==135)) goto l5;
goto l2;
l25:pile[v[22]]=100; pile[WZ1]=jvj+52; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+52,jvj+57)*/
if((x[jvj+57]!=484)) goto l2;
pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,jvj+5,jvj+58)*/
pile[v[22]]=130; pile[WZ1]=jvj+58; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+58,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+59)*/
pile[v[22]]=101; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,jvj+59,jvj+60)*/
pile[v[22]]=514; pile[WZ1]=jvj+60; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(514,jvj+60,jvj+61)*/
BB=V79;
goto l24;
l27:pile[v[22]]=100; pile[WZ1]=jvj+63; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(100,jvj+63,jvj+68)*/
if((x[jvj+68]!=484)) goto l5;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+3,jvj+69)*/
pile[v[22]]=130; pile[WZ1]=jvj+69; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+69,V103)*/
V103=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+3,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+70,jvj+71)*/
pile[v[22]]=514; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(514,jvj+71,jvj+72)*/
B=V103;
goto l26;
l29:x[jvj+73]=s[x[jvj+80]] ;z[jvj+73]=(x[jvj+73]<=sepcte) ? x[jvj+73] : z[jvj+80];
pile[v[22]]=jvj+73; pile[WZ1]=jvj+33; pile[WZ2]=jvj+74; 
(*f[760])( );     /*MEMEX0(jvj+73,jvj+33,jvj+74)*/
if((x[jvj+74]==135)) goto l30;
x[jvj+80]=t[x[jvj+80]];
goto l28;
l30:x[jvj+75]=0 ;z[jvj+75]=0;
x[jvj+81]=x[jvj+31] ;z[jvj+81]=z[jvj+31];
l31:if((x[jvj+81]>0)) goto l32;
x[jvj+37]=x[jvj+75] ;z[jvj+37]=z[jvj+75];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[299])( );     /*COPEL0(jvj+37,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=111; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(jvj+42,111,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+38; pile[WZ2]=107; pile[WZ3]=jvj+44; 
(*f[301])( );     /*TRI11(jvj+43,jvj+38,107,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+39; 
(*f[58])( );     /*TRI3(jvj+44,22,100,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; 
(*f[799])( );if(v[102]) goto l21;     /*NORME0(jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,jvj+28,110,(-631),jvj+48)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+49; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+49)*/
pile[WZ1]=jvj+28; pile[WZ3]=(-631); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(101,jvj+28,110,(-631),jvj+50)*/
pile[v[22]]=V40; pile[WZ1]=858; pile[WZ2]=jvj+45; 
(*f[46])( );     /*TRI0(V40,858,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,v[13],642,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=3243; pile[WZ2]=246; pile[WZ3]=jvj+47; 
(*f[189])( );     /*TRI4(jvj+46,3243,246,jvj+47)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20009; pile[WZ4]=jvj+47; pile[WZ5]=jvj+41; 
(*f[269])( );     /*QUADRI6(158,1,218,20009,jvj+47,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=159; pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+48)*/
pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+41,159,jvj+50)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[1558])( );     /*RESTAURE0(jvj+28,jvj+40,jvj+41)*/
goto l21;
l32:x[jvj+76]=s[x[jvj+81]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+81];
if((x[jvj+76]==x[jvj+73])) goto l33;
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; 
(*f[68])( );     /*PLUE0(jvj+75,jvj+76)*/
l33:x[jvj+81]=t[x[jvj+81]];
goto l31;
l17:if((x[jvj+19]<=0)) goto l22;
x[jvj+28]=s[x[jvj+19]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+19];
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=55)) goto l18;
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+31)*/
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(870,jvj+28,V26)*/
V26=pile[WZ2]; 
if((V25>V26)) goto l18;
pile[v[22]]=1294; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(1294,jvj+28,jvj+32)*/
for(a=x[jvj+32];a>0;a=t[a]) if(s[a]==1291) goto l20;
l18:x[jvj+19]=t[x[jvj+19]];
goto l17;
}
