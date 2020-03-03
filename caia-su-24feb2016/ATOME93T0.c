#include "dx.h"
void ATOME93T0(void )
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
v[0]+=71;
x[jvj+1]=20093;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3186&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,RR,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=55)) goto l22;
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(1142,R,jvj+36)*/
if((x[jvj+36]!=68)) goto l22;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(870,R,V17)*/
V17=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(870,RR,V18)*/
V18=pile[WZ2]; 
if((V17>V18)) goto l22;
pile[v[22]]=107; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,RR,jvj+37)*/
x[jvj+38]=vo[14];z[jvj+38]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+38,V76)*/
V76=pile[WZ2]; 
x[jvj+13]=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,R,jvj+20)*/
if((x[jvj+20]!=22)) goto l22;
pile[v[22]]=103; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(103,R,jvj+21)*/
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+21,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,R,jvj+22)*/
pile[v[22]]=101; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+22,jvj+23)*/
if(x[jvj+23]!=29&&x[jvj+23]!=30) goto l9;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,R,jvj+24)*/
pile[v[22]]=V61; pile[WZ1]=510; pile[WZ2]=jvj+56; 
(*f[46])( );     /*TRI0(V61,510,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+24; pile[WZ2]=459; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+56,jvj+24,459,jvj+57)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+23; pile[WZ4]=jvj+57; pile[WZ5]=jvj+13; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+23,jvj+57,jvj+13)*/
l9:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,R,jvj+25)*/
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+25,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+26,jvj+27)*/
if(x[jvj+27]!=29&&x[jvj+27]!=30) goto l10;
pile[v[22]]=V70; pile[WZ1]=510; pile[WZ2]=jvj+58; 
(*f[46])( );     /*TRI0(V70,510,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=jvj+21; pile[WZ2]=459; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+58,jvj+21,459,jvj+59)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+27; pile[WZ4]=jvj+59; pile[WZ5]=jvj+13; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+27,jvj+59,jvj+13)*/
l15:if((x[jvj+13]==(-99999998))) goto l22;
x[jvj+14]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+13,V48)*/
V48=pile[WZ2]; 
if((V48!=0)) goto l7;
pile[v[22]]=447; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(447,jvj+13,jvj+14)*/
l16:pile[v[22]]=510; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+13,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(459,jvj+13,jvj+39)*/
x[jvj+71]=x[jvj+37] ;z[jvj+71]=z[jvj+37];
l17:if((x[jvj+71]<=0)) goto l22;
x[jvj+3]=s[x[jvj+71]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+71];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+40; 
(*f[887])( );     /*VARND0(jvj+3,jvj+40)*/
for(i=x[jvj+40],V20=0;i>0;i=t[i],V20++)  ;
if((V17!=V20)) goto l18;
pile[v[22]]=R; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(R,jvj+2)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(jvj+3,jvj+4)*/
V79=x[jvj+4];
l1:if((V79>0)) goto l2;
x[jvj+52]=incon;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+3,jvj+5)*/
if((x[jvj+5]!=22)) goto l6;
pile[v[22]]=103; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(103,jvj+3,jvj+6)*/
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(130,jvj+6,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+3,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+7,jvj+8)*/
x[jvj+51]=x[jvj+8] ;z[jvj+51]=z[jvj+8];
if(x[jvj+51]!=25&&x[jvj+51]!=29&&x[jvj+51]!=30&&x[jvj+51]!=27&&x[jvj+51]!=28&&x[jvj+51]!=26) goto l4;
pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(102,jvj+3,jvj+9)*/
V61=V35;
pile[v[22]]=V61; pile[WZ1]=510; pile[WZ2]=jvj+49; 
(*f[46])( );     /*TRI0(V61,510,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+9; pile[WZ2]=459; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,jvj+9,459,jvj+50)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=447; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=jvj+52; 
(*f[725])( );     /*QUADRI14(117,0,447,jvj+51,jvj+50,jvj+52)*/
l4:pile[v[22]]=102; pile[WZ1]=jvj+3; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+3,jvj+10)*/
pile[v[22]]=130; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+10,V44)*/
V44=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(111,jvj+3,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+11,jvj+12)*/
x[jvj+55]=x[jvj+12] ;z[jvj+55]=z[jvj+12];
if(x[jvj+55]!=25&&x[jvj+55]!=29&&x[jvj+55]!=30&&x[jvj+55]!=27&&x[jvj+55]!=28&&x[jvj+55]!=26) goto l5;
V70=V44;
pile[v[22]]=V70; pile[WZ1]=510; pile[WZ2]=jvj+53; 
(*f[46])( );     /*TRI0(V70,510,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+6; pile[WZ2]=459; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+53,jvj+6,459,jvj+54)*/
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=447; pile[WZ3]=jvj+55; pile[WZ4]=jvj+54; pile[WZ5]=jvj+52; 
(*f[725])( );     /*QUADRI14(117,1,447,jvj+55,jvj+54,jvj+52)*/
l19:if((x[jvj+52]==(-99999998))) goto l18;
x[jvj+16]=x[jvj+52] ;z[jvj+16]=z[jvj+52];
x[jvj+41]=incon;
pile[v[22]]=117; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+16,V52)*/
V52=pile[WZ2]; 
if((V52!=0)) goto l8;
pile[v[22]]=447; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(447,jvj+16,jvj+17)*/
x[jvj+41]=x[jvj+17] ;z[jvj+41]=z[jvj+17];
l20:pile[v[22]]=510; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(510,jvj+16,V23)*/
V23=pile[WZ2]; 
pile[v[22]]=V22; pile[WZ1]=jvj+14; pile[WZ2]=V23; pile[WZ3]=jvj+41; pile[WZ4]=jvj+42; 
(*f[3187])( );if(v[102]) goto l18;     /*ENTRAINE0(V22,jvj+14,V23,jvj+41,jvj+42)*/
x[jvj+32]=0 ;z[jvj+32]=0;
x[jvj+30]=d[27];z[jvj+30]=0;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+42; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+42,jvj+31)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[196])( );     /*PLUF0(jvj+30,jvj+31,jvj+32)*/
x[jvj+28]=0 ;z[jvj+28]=0;
x[jvj+70]=x[jvj+37] ;z[jvj+70]=z[jvj+37];
l11:if((x[jvj+70]<=0)) goto l13;
x[jvj+29]=s[x[jvj+70]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+70];
if((x[jvj+29]==x[jvj+3])) goto l12;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+29)*/
l12:x[jvj+70]=t[x[jvj+70]];
goto l11;
l2:VV=s[V79];
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==VV) goto l3;
l18:x[jvj+71]=t[x[jvj+71]];
goto l17;
l3:V79=t[V79];
goto l1;
l5:if(x[jvj+52]==incon) goto l6;
goto l19;
l6:x[jvj+52]=(-99999998);
goto l18;
l7:pile[v[22]]=447; pile[WZ1]=jvj+13; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(447,jvj+13,jvj+15)*/
pile[v[22]]=844; pile[WZ1]=jvj+15; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(844,jvj+15,jvj+14)*/
goto l16;
l8:pile[v[22]]=447; pile[WZ1]=jvj+16; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+16,jvj+18)*/
pile[v[22]]=844; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(844,jvj+18,jvj+19)*/
x[jvj+41]=x[jvj+19] ;z[jvj+41]=z[jvj+19];
goto l20;
l10:if(x[jvj+13]==incon) goto l22;
goto l15;
l14:x[jvj+33]=s[x[jvj+28]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+28];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+33)*/
x[jvj+28]=t[x[jvj+28]];
l13:if((x[jvj+28]>0)) goto l14;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+43; 
(*f[299])( );     /*COPEL0(jvj+32,jvj+43)*/
pile[v[22]]=459; pile[WZ1]=jvj+16; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(459,jvj+16,jvj+44)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[760])( );     /*MEMEX0(jvj+39,jvj+44,jvj+45)*/
if((x[jvj+45]==135)) goto l21;
goto l18;
l21:x[jvj+62]=x[jvj+43] ;z[jvj+62]=z[jvj+43];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+60; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=111; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,111,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=107; pile[WZ3]=jvj+63; 
(*f[301])( );     /*TRI11(jvj+61,jvj+62,107,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+46; 
(*f[58])( );     /*TRI3(jvj+63,22,100,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[799])( );if(v[102]) goto l18;     /*NORME0(jvj+46,jvj+47)*/
pile[v[22]]=101; pile[WZ1]=RR; pile[WZ2]=110; pile[WZ3]=(-631); pile[WZ4]=jvj+67; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+67)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+68; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+68)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+69; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+69)*/
pile[v[22]]=V76; pile[WZ1]=858; pile[WZ2]=jvj+64; 
(*f[46])( );     /*TRI0(V76,858,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+65; 
(*f[189])( );     /*TRI4(jvj+64,v[13],642,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=3186; pile[WZ2]=246; pile[WZ3]=jvj+66; 
(*f[189])( );     /*TRI4(jvj+65,3186,246,jvj+66)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20093; pile[WZ4]=jvj+66; pile[WZ5]=jvj+48; 
(*f[269])( );     /*QUADRI6(158,1,218,20093,jvj+66,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=159; pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+68)*/
pile[WZ2]=jvj+69; 
(*f[36])( );     /*PLUSC0(jvj+48,159,jvj+69)*/
pile[v[22]]=RR; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[1558])( );     /*RESTAURE0(RR,jvj+47,jvj+48)*/
goto l18;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
