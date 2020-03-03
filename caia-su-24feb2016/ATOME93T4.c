#include "dx.h"
void ATOME93T4(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int VV=0,V79=0,V35=0,V61=0,V44=0,V70=0,V48=0,V52=0,V17=0,V18=0,V76=0,V22=0,V20=0,V23=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=72;
x[jvj+1]=20093;z[jvj+1]=(-100);
x[jvj+2]=4;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3369&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,RR,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=55)) goto l22;
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1142,R,jvj+37)*/
if((x[jvj+37]!=68)) goto l22;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(870,R,V17)*/
V17=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(870,RR,V18)*/
V18=pile[WZ2]; 
if((V17>V18)) goto l22;
pile[v[22]]=107; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,RR,jvj+38)*/
x[jvj+39]=vo[14];z[jvj+39]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+39,V76)*/
V76=pile[WZ2]; 
x[jvj+14]=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,R,jvj+21)*/
if((x[jvj+21]!=22)) goto l22;
pile[v[22]]=103; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,R,jvj+22)*/
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+22,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+23,jvj+24)*/
if(x[jvj+24]!=29&&x[jvj+24]!=30) goto l9;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,R,jvj+25)*/
pile[v[22]]=V61; pile[WZ1]=510; pile[WZ2]=jvj+57; 
(*f[46])( );     /*TRI0(V61,510,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=jvj+25; pile[WZ2]=459; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+57,jvj+25,459,jvj+58)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+24; pile[WZ4]=jvj+58; pile[WZ5]=jvj+14; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+24,jvj+58,jvj+14)*/
l9:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+26)*/
pile[v[22]]=130; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+26,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+27,jvj+28)*/
if(x[jvj+28]!=29&&x[jvj+28]!=30) goto l10;
pile[v[22]]=V70; pile[WZ1]=510; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(V70,510,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+22; pile[WZ2]=459; pile[WZ3]=jvj+60; 
(*f[58])( );     /*TRI3(jvj+59,jvj+22,459,jvj+60)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+28; pile[WZ4]=jvj+60; pile[WZ5]=jvj+14; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+28,jvj+60,jvj+14)*/
l15:if((x[jvj+14]==(-99999998))) goto l22;
x[jvj+15]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+14,V48)*/
V48=pile[WZ2]; 
if((V48!=0)) goto l7;
pile[v[22]]=447; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+14,jvj+15)*/
l16:pile[v[22]]=510; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+14,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(459,jvj+14,jvj+40)*/
x[jvj+72]=x[jvj+38] ;z[jvj+72]=z[jvj+38];
l17:if((x[jvj+72]<=0)) goto l22;
x[jvj+4]=s[x[jvj+72]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+72];
pile[v[22]]=jvj+4; pile[WZ1]=jvj+41; 
(*f[887])( );     /*VARND0(jvj+4,jvj+41)*/
for(i=x[jvj+41],V20=0;i>0;i=t[i],V20++)  ;
if((V17!=V20)) goto l18;
pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[887])( );     /*VARND0(jvj+4,jvj+5)*/
V79=x[jvj+5];
l1:if((V79>0)) goto l2;
x[jvj+53]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+4,jvj+6)*/
if((x[jvj+6]!=22)) goto l6;
pile[v[22]]=103; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+4,jvj+7)*/
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+7,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+4,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+8,jvj+9)*/
x[jvj+52]=x[jvj+9] ;z[jvj+52]=z[jvj+9];
if(x[jvj+52]!=25&&x[jvj+52]!=29&&x[jvj+52]!=30&&x[jvj+52]!=27&&x[jvj+52]!=28&&x[jvj+52]!=26) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+4,jvj+10)*/
V61=V35;
pile[v[22]]=V61; pile[WZ1]=510; pile[WZ2]=jvj+50; 
(*f[46])( );     /*TRI0(V61,510,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+10; pile[WZ2]=459; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+50,jvj+10,459,jvj+51)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+53; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+52,jvj+51,jvj+53)*/
l4:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+4,jvj+11)*/
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+11,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+4,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
x[jvj+56]=x[jvj+13] ;z[jvj+56]=z[jvj+13];
if(x[jvj+56]!=25&&x[jvj+56]!=29&&x[jvj+56]!=30&&x[jvj+56]!=27&&x[jvj+56]!=28&&x[jvj+56]!=26) goto l5;
V70=V44;
pile[v[22]]=V70; pile[WZ1]=510; pile[WZ2]=jvj+54; 
(*f[46])( );     /*TRI0(V70,510,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+7; pile[WZ2]=459; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+54,jvj+7,459,jvj+55)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+53; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+56,jvj+55,jvj+53)*/
l19:if((x[jvj+53]==(-99999998))) goto l18;
x[jvj+17]=x[jvj+53] ;z[jvj+17]=z[jvj+53];
x[jvj+42]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+17,V52)*/
V52=pile[WZ2]; 
if((V52!=0)) goto l8;
pile[v[22]]=447; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+17,jvj+18)*/
x[jvj+42]=x[jvj+18] ;z[jvj+42]=z[jvj+18];
l20:pile[v[22]]=510; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(510,jvj+17,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=jvj+15; pile[WZ2]=V23; pile[WZ3]=jvj+42; pile[WZ4]=jvj+43; 
(*f[3187])( );if(v[102]) goto l18;     /*ENTRAINE0(V22,jvj+15,V23,jvj+42,jvj+43)*/
x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+31]=d[27];z[jvj+31]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+43; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+43,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[196])( );     /*PLUF0(jvj+31,jvj+32,jvj+33)*/
x[jvj+29]=0 ;z[jvj+29]=0;
x[jvj+71]=x[jvj+38] ;z[jvj+71]=z[jvj+38];
l11:if((x[jvj+71]<=0)) goto l13;
x[jvj+30]=s[x[jvj+71]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+71];
if((x[jvj+30]==x[jvj+4])) goto l12;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[68])( );     /*PLUE0(jvj+29,jvj+30)*/
l12:x[jvj+71]=t[x[jvj+71]];
goto l11;
l2:VV=s[V79];
for(a=x[jvj+3];a>0;a=t[a]) if(s[a]==VV) goto l3;
l18:x[jvj+72]=t[x[jvj+72]];
goto l17;
l3:V79=t[V79];
goto l1;
l5:if(x[jvj+53]==incon) goto l6;
goto l19;
l6:x[jvj+53]=(-99999998);
goto l18;
l7:pile[v[22]]=447; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(447,jvj+14,jvj+16)*/
pile[v[22]]=844; pile[WZ1]=jvj+16; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(844,jvj+16,jvj+15)*/
goto l16;
l8:pile[v[22]]=447; pile[WZ1]=jvj+17; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+17,jvj+19)*/
pile[v[22]]=844; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(844,jvj+19,jvj+20)*/
x[jvj+42]=x[jvj+20] ;z[jvj+42]=z[jvj+20];
goto l20;
l10:if(x[jvj+14]==incon) goto l22;
goto l15;
l14:x[jvj+34]=s[x[jvj+29]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+29];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+34)*/
x[jvj+29]=t[x[jvj+29]];
l13:if((x[jvj+29]>0)) goto l14;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+44; 
(*f[299])( );     /*COPEL0(jvj+33,jvj+44)*/
pile[v[22]]=459; pile[WZ1]=jvj+17; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(459,jvj+17,jvj+45)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[760])( );     /*MEMEX0(jvj+40,jvj+45,jvj+46)*/
if((x[jvj+46]==135)) goto l21;
goto l18;
l21:x[jvj+63]=x[jvj+44] ;z[jvj+63]=z[jvj+44];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=111; pile[WZ2]=jvj+62; 
(*f[54])( );     /*TRI1(jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=107; pile[WZ3]=jvj+64; 
(*f[301])( );     /*TRI11(jvj+62,jvj+63,107,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+47; 
(*f[58])( );     /*TRI3(jvj+64,22,100,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[799])( );if(v[102]) goto l18;     /*NORME0(jvj+47,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+68)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+69)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+70; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+70)*/
pile[v[22]]=V76; pile[WZ1]=858; pile[WZ2]=jvj+65; 
(*f[46])( );     /*TRI0(V76,858,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+66; 
(*f[189])( );     /*TRI4(jvj+65,v[13],642,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=3369; pile[WZ2]=246; pile[WZ3]=jvj+67; 
(*f[189])( );     /*TRI4(jvj+66,3369,246,jvj+67)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20093; pile[WZ4]=jvj+67; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(158,1,218,20093,jvj+67,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=159; pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+49,159,jvj+68)*/
pile[WZ2]=jvj+69; 
(*f[36])( );     /*PLUSC0(jvj+49,159,jvj+69)*/
pile[WZ2]=jvj+70; 
(*f[36])( );     /*PLUSC0(jvj+49,159,jvj+70)*/
pile[v[22]]=RR; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+48,jvj+49)*/
goto l18;
l22:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
}
