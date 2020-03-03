#include "dx.h"
void ATOME93T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V88=0,V39=0,V65=0,V48=0,V74=0,V52=0,V56=0,WW=0,V89=0,V81=0,V21=0,V85=0,V26=0,V22=0,V24=0,V27=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=82;
x[jvj+1]=20093;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3233&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(1142,R,jvj+43)*/
if((x[jvj+43]!=68)) goto l32;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(870,R,V21)*/
V21=pile[WZ2]; 
x[jvj+44]=vo[14];z[jvj+44]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(642,jvj+44,V85)*/
V85=pile[WZ2]; 
x[jvj+14]=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(100,R,jvj+21)*/
if((x[jvj+21]!=22)) goto l32;
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(103,R,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+22,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+23,jvj+24)*/
if(x[jvj+24]!=29&&x[jvj+24]!=30) goto l9;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,R,jvj+25)*/
pile[v[22]]=V65; pile[WZ1]=510; pile[WZ2]=jvj+66; 
(*f[46])( );     /*TRI0(V65,510,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+25; pile[WZ2]=459; pile[WZ3]=jvj+67; 
(*f[58])( );     /*TRI3(jvj+66,jvj+25,459,jvj+67)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+24; pile[WZ4]=jvj+67; pile[WZ5]=jvj+14; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+24,jvj+67,jvj+14)*/
l9:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+26,V74)*/
V74=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+27,jvj+28)*/
if(x[jvj+28]!=29&&x[jvj+28]!=30) goto l10;
pile[v[22]]=V74; pile[WZ1]=510; pile[WZ2]=jvj+68; 
(*f[46])( );     /*TRI0(V74,510,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+22; pile[WZ2]=459; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+68,jvj+22,459,jvj+69)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+28; pile[WZ4]=jvj+69; pile[WZ5]=jvj+14; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+28,jvj+69,jvj+14)*/
l23:if((x[jvj+14]==(-99999998))) goto l32;
x[jvj+36]=0 ;z[jvj+36]=0;
pile[v[22]]=R; pile[WZ1]=jvj+32; 
(*f[887])( );     /*VARND0(R,jvj+32)*/
l14:if((x[jvj+32]>0)) goto l15;
x[jvj+15]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+14,V52)*/
V52=pile[WZ2]; 
if((V52!=0)) goto l7;
pile[v[22]]=447; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+14,jvj+15)*/
l24:pile[v[22]]=510; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,jvj+14,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(459,jvj+14,jvj+45)*/
l25:if((x[jvj+36]<=0)) goto l32;
x[jvj+46]=s[x[jvj+36]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+36];
pile[v[22]]=111; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(111,jvj+46,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(101,jvj+47,jvj+48)*/
if((x[jvj+48]!=55)) goto l26;
pile[v[22]]=870; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(870,jvj+46,V22)*/
V22=pile[WZ2]; 
if((V21>V22)) goto l26;
pile[v[22]]=107; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(107,jvj+46,jvj+49)*/
x[jvj+82]=x[jvj+49] ;z[jvj+82]=z[jvj+49];
l27:if((x[jvj+82]<=0)) goto l26;
x[jvj+4]=s[x[jvj+82]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+82];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+50; 
(*f[887])( );     /*VARND0(jvj+4,jvj+50)*/
for(i=x[jvj+50],V24=0;i>0;i=t[i],V24++)  ;
if((V21!=V24)) goto l28;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V88=x[jvj+5];
l1:if((V88>0)) goto l2;
x[jvj+62]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+4,jvj+6)*/
if((x[jvj+6]!=22)) goto l6;
pile[v[22]]=103; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+4,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+7,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+4,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
x[jvj+61]=x[jvj+9] ;z[jvj+61]=z[jvj+9];
if(x[jvj+61]!=25&&x[jvj+61]!=29&&x[jvj+61]!=30&&x[jvj+61]!=27&&x[jvj+61]!=28&&x[jvj+61]!=26) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+4,jvj+10)*/
V65=V39;
pile[v[22]]=V65; pile[WZ1]=510; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(V65,510,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+10; pile[WZ2]=459; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+59,jvj+10,459,jvj+60)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+61; pile[WZ4]=jvj+60; pile[WZ5]=jvj+62; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+61,jvj+60,jvj+62)*/
l4:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+11,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
x[jvj+65]=x[jvj+13] ;z[jvj+65]=z[jvj+13];
if(x[jvj+65]!=25&&x[jvj+65]!=29&&x[jvj+65]!=30&&x[jvj+65]!=27&&x[jvj+65]!=28&&x[jvj+65]!=26) goto l5;
V74=V48;
pile[v[22]]=V74; pile[WZ1]=510; pile[WZ2]=jvj+63; 
(*f[46])( );     /*TRI0(V74,510,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+7; pile[WZ2]=459; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+63,jvj+7,459,jvj+64)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+62; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+65,jvj+64,jvj+62)*/
l29:if((x[jvj+62]==(-99999998))) goto l28;
x[jvj+17]=x[jvj+62] ;z[jvj+17]=z[jvj+62];
x[jvj+51]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+17,V56)*/
V56=pile[WZ2]; 
if((V56!=0)) goto l8;
pile[v[22]]=447; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+17,jvj+18)*/
x[jvj+51]=x[jvj+18] ;z[jvj+51]=z[jvj+18];
l30:pile[v[22]]=510; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(510,jvj+17,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=V26; pile[WZ1]=jvj+15; pile[WZ2]=V27; pile[WZ3]=jvj+51; pile[WZ4]=jvj+52; 
(*f[3187])( );if(v[102]) goto l28;     /*ENTRAINE0(V26,jvj+15,V27,jvj+51,jvj+52)*/
x[jvj+41]=0 ;z[jvj+41]=0;
x[jvj+39]=d[27];z[jvj+39]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+52; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+52,jvj+40)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[196])( );     /*PLUF0(jvj+39,jvj+40,jvj+41)*/
x[jvj+37]=0 ;z[jvj+37]=0;
x[jvj+81]=x[jvj+49] ;z[jvj+81]=z[jvj+49];
l19:if((x[jvj+81]<=0)) goto l21;
x[jvj+38]=s[x[jvj+81]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+81];
if((x[jvj+38]==x[jvj+4])) goto l20;
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(jvj+37,jvj+38)*/
l20:x[jvj+81]=t[x[jvj+81]];
goto l19;
l2:VV=s[V88];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VV) goto l3;
l28:x[jvj+82]=t[x[jvj+82]];
goto l27;
l3:V88=t[V88];
goto l1;
l5:if(x[jvj+62]==incon) goto l6;
goto l29;
l6:x[jvj+62]=(-99999998);
goto l28;
l7:pile[v[22]]=447; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(447,jvj+14,jvj+16)*/
pile[v[22]]=844; pile[WZ1]=jvj+16; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(844,jvj+16,jvj+15)*/
goto l24;
l8:pile[v[22]]=447; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(447,jvj+17,jvj+19)*/
pile[v[22]]=844; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(844,jvj+19,jvj+20)*/
x[jvj+51]=x[jvj+20] ;z[jvj+51]=z[jvj+20];
goto l30;
l10:if(x[jvj+14]==incon) goto l32;
goto l23;
l12:WW=s[V89];
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==WW) goto l13;
l18:x[jvj+80]=t[x[jvj+80]];
l16:if((x[jvj+80]>0)) goto l17;
x[jvj+32]=t[x[jvj+32]];
goto l14;
l13:V89=t[V89];
l11:if((V89>0)) goto l12;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+36,jvj+29)*/
goto l18;
l15:x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=509; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[1969])( );     /*FNDEND0(509,jvj+33,jvj+34)*/
x[jvj+80]=x[jvj+34] ;z[jvj+80]=z[jvj+34];
goto l16;
l17:x[jvj+29]=s[x[jvj+80]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+80];
pile[v[22]]=868; pile[WZ1]=jvj+29; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(868,jvj+29,jvj+35)*/
if((x[jvj+35]!=55)) goto l18;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(870,jvj+29,V81)*/
V81=pile[WZ2]; 
if((V81<V21)) goto l18;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[887])( );     /*VARND0(jvj+29,jvj+30)*/
pile[v[22]]=R; pile[WZ1]=jvj+31; 
(*f[887])( );     /*VARND0(R,jvj+31)*/
V89=x[jvj+31];
goto l11;
l22:x[jvj+42]=s[x[jvj+37]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+37];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[68])( );     /*PLUE0(jvj+41,jvj+42)*/
x[jvj+37]=t[x[jvj+37]];
l21:if((x[jvj+37]>0)) goto l22;
pile[v[22]]=jvj+41; pile[WZ1]=jvj+53; 
(*f[299])( );     /*COPEL0(jvj+41,jvj+53)*/
pile[v[22]]=459; pile[WZ1]=jvj+17; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(459,jvj+17,jvj+54)*/
pile[v[22]]=jvj+45; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[760])( );     /*MEMEX0(jvj+45,jvj+54,jvj+55)*/
if((x[jvj+55]==135)) goto l31;
goto l28;
l26:x[jvj+36]=t[x[jvj+36]];
goto l25;
l31:x[jvj+72]=x[jvj+53] ;z[jvj+72]=z[jvj+53];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; pile[WZ2]=107; pile[WZ3]=jvj+73; 
(*f[301])( );     /*TRI11(jvj+71,jvj+72,107,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+73,22,100,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[799])( );if(v[102]) goto l28;     /*NORME0(jvj+56,jvj+57)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+77; 
(*f[270])( );     /*QUADRI7(101,jvj+46,110,(-631),jvj+77)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+78; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+78)*/
pile[WZ1]=jvj+46; pile[WZ3]=(-631); pile[WZ4]=jvj+79; 
(*f[270])( );     /*QUADRI7(101,jvj+46,110,(-631),jvj+79)*/
pile[v[22]]=V85; pile[WZ1]=858; pile[WZ2]=jvj+74; 
(*f[46])( );     /*TRI0(V85,858,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+75; 
(*f[189])( );     /*TRI4(jvj+74,v[13],642,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=3233; pile[WZ2]=246; pile[WZ3]=jvj+76; 
(*f[189])( );     /*TRI4(jvj+75,3233,246,jvj+76)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20093; pile[WZ4]=jvj+76; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(158,1,218,20093,jvj+76,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=159; pile[WZ2]=jvj+77; 
(*f[36])( );     /*PLUSC0(jvj+58,159,jvj+77)*/
pile[WZ2]=jvj+78; 
(*f[36])( );     /*PLUSC0(jvj+58,159,jvj+78)*/
pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+58,159,jvj+79)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[1558])( );     /*RESTAURE0(jvj+46,jvj+57,jvj+58)*/
goto l28;
l32:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
