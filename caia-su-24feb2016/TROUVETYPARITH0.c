#include "dx.h"
void TROUVETYPARITH0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V10=0,V14=0,V36=0,V38=0,V39=0,V41=0,V42=0,V55=0,V56=0,V57=0,V58=0,V60=0,V61=0,V62=0,V17=0,V48=0,V45=0,V47=0,V43=0,V34=0,V44=0,V22=0,V76=0,V18=0,V19=0,V54=0,V49=0,V51=0,V53=0;
int S,ED,A;
int EX,NT,ND;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=74;
x[jvj+1]=11412;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==4059&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; ED=pile[v[22]+1]; A=pile[v[22]+2]; EX=pile[v[22]+3]; v[22]+=6; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+66]=x[A] ;z[jvj+66]=z[A];
l3:if((x[jvj+66]>0)) goto l4;
x[jvj+4]=0 ;z[jvj+4]=0;
x[jvj+65]=x[A] ;z[jvj+65]=z[A];
l1:if((x[jvj+65]>0)) goto l2;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=111; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(jvj+40,111,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+4; pile[WZ2]=107; pile[WZ3]=jvj+42; 
(*f[301])( );     /*TRI11(jvj+41,jvj+4,107,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+42,22,100,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; pile[WZ3]=jvj+10; 
(*f[4092])( );     /*BAGCTE0(jvj+9,jvj+11,jvj+12,jvj+10)*/
l5:if((x[jvj+10]>0)) goto l6;
x[jvj+68]=0 ;z[jvj+68]=0;
x[EX]=x[jvj+68] ;z[EX]=z[jvj+68];
pile[v[22]]=A; 
(*f[1809])( );     /*NUMEROTENS3(A)*/
pile[v[22]]=ED; pile[WZ1]=jvj+17; 
(*f[4093])( );     /*ENSTYPVAR0(ED,jvj+17)*/
pile[v[22]]=jvj+17; 
(*f[1809])( );     /*NUMEROTENS3(jvj+17)*/
for(i=x[jvj+17],V10=0;i>0;i=t[i],V10++)  ;
ND=V10;
l7:if((x[jvj+17]>0)) goto l8;
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=0; pile[WZ1]=510; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(0,510,jvj+19)*/
pile[v[22]]=A; pile[WZ1]=jvj+18; pile[WZ3]=ED; pile[WZ4]=jvj+20; 
(*f[4094])( );     /*GROUPEREG0(A,jvj+18,jvj+19,ED,jvj+20)*/
for(i=x[jvj+20],V14=0;i>0;i=t[i],V14++)  ;
NT=V14;
pile[v[22]]=20; pile[WZ1]=11412; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,11412,0,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=(-3496); 
(*f[37])( );     /*SRA0(V55,(-3496),V56)*/
V56=pile[WZ2]; 
pile[v[22]]=V56; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V56,61,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=ND; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,ND,V57,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; pile[WZ1]=(-3141); 
(*f[37])( );     /*SRA0(V58,(-3141),V60)*/
V60=pile[WZ2]; 
pile[v[22]]=V60; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V60,61,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NT; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,NT,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
x[jvj+72]=x[A] ;z[jvj+72]=z[A];
l20:if((x[jvj+72]>0)) goto l21;
x[jvj+74]=x[ED] ;z[jvj+74]=z[ED];
l26:if((x[jvj+74]>0)) goto l27;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=6; pile[v[22]+4]=NT; pile[v[22]+5]=ND; return;
l2:x[jvj+2]=s[x[jvj+65]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+65];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+4,jvj+3)*/
x[jvj+65]=t[x[jvj+65]];
goto l1;
l4:x[jvj+5]=s[x[jvj+66]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+66];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; pile[WZ3]=jvj+8; 
(*f[4092])( );     /*BAGCTE0(jvj+5,jvj+6,jvj+7,jvj+8)*/
pile[WZ1]=1260; pile[WZ2]=jvj+6; 
(*f[34])( );     /*CHGC0(jvj+5,1260,jvj+6)*/
pile[WZ1]=1261; pile[WZ2]=jvj+7; 
(*f[34])( );     /*CHGC0(jvj+5,1261,jvj+7)*/
pile[WZ1]=1363; pile[WZ2]=jvj+8; 
(*f[34])( );     /*CHGC0(jvj+5,1363,jvj+8)*/
x[jvj+66]=t[x[jvj+66]];
goto l3;
l6:x[jvj+13]=s[x[jvj+10]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+10];
pile[v[22]]=jvj+13; pile[WZ1]=515; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+13,515,1)*/
x[jvj+10]=t[x[jvj+10]];
goto l5;
l8:x[jvj+14]=s[x[jvj+17]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+17];
pile[v[22]]=642; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(642,jvj+14,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=892; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(892,jvj+14,jvj+15)*/
x[jvj+67]=x[jvj+15] ;z[jvj+67]=z[jvj+15];
l10:if((x[jvj+67]<=0)) goto l9;
x[jvj+16]=s[x[jvj+67]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+67];
pile[v[22]]=jvj+16; pile[WZ1]=510; pile[WZ2]=V12; 
(*f[43])( );     /*CHGC2(jvj+16,510,V12)*/
x[jvj+67]=t[x[jvj+67]];
goto l10;
l9:x[jvj+17]=t[x[jvj+17]];
goto l7;
l12:x[jvj+23]=s[x[jvj+69]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+69];
pile[v[22]]=510; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,jvj+23,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=jvj+24; pile[WZ1]=V36; 
(*f[207])( );     /*PLUE2(jvj+24,V36)*/
l13:x[jvj+69]=t[x[jvj+69]];
l11:if((x[jvj+69]>0)) goto l12;
x[jvj+73]=x[A] ;z[jvj+73]=z[A];
l23:if((x[jvj+73]<=0)) goto l22;
x[jvj+30]=s[x[jvj+73]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+73];
pile[v[22]]=510; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+30,V34)*/
V34=pile[WZ2]; 
if((V17!=V34)) goto l24;
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(642,jvj+30,V44)*/
V44=pile[WZ2]; 
V76=x[jvj+24];
l25:if((V76<=0)) goto l24;
V22=s[V76];
x[jvj+29]=0 ;z[jvj+29]=0;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+25; 
(*f[887])( );     /*VARND0(jvj+21,jvj+25)*/
x[jvj+26]=d[118];z[jvj+26]=0;
x[jvj+70]=x[jvj+25] ;z[jvj+70]=z[jvj+25];
l14:if((x[jvj+70]>0)) goto l15;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+36; 
(*f[299])( );     /*COPEL0(jvj+29,jvj+36)*/
x[jvj+35]=0 ;z[jvj+35]=0;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[887])( );     /*VARND0(jvj+30,jvj+31)*/
x[jvj+32]=d[118];z[jvj+32]=0;
x[jvj+71]=x[jvj+31] ;z[jvj+71]=z[jvj+31];
l17:if((x[jvj+71]>0)) goto l18;
pile[v[22]]=jvj+35; pile[WZ1]=jvj+37; 
(*f[299])( );     /*COPEL0(jvj+35,jvj+37)*/
x[jvj+63]=x[jvj+36] ;z[jvj+63]=z[jvj+36];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+49)*/
pile[WZ3]=26; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-2041); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(100,21,140,(-2041),jvj+57)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V43; pile[WZ4]=jvj+59; 
(*f[192])( );     /*QUADRI4(100,41,130,V43,jvj+59)*/
pile[v[22]]=jvj+57; pile[WZ1]=111; pile[WZ2]=jvj+58; 
(*f[54])( );     /*TRI1(jvj+57,111,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+59; pile[WZ4]=jvj+58; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+59,jvj+58,jvj+56)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V44; pile[WZ4]=jvj+54; 
(*f[192])( );     /*QUADRI4(100,41,130,V44,jvj+54)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=103; pile[WZ3]=jvj+55; 
(*f[58])( );     /*TRI3(jvj+53,jvj+54,103,jvj+55)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+56; pile[WZ4]=jvj+55; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+56,jvj+55,jvj+50)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1171; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,20,101,1171,jvj+61)*/
pile[v[22]]=jvj+37; pile[WZ1]=184; pile[WZ2]=jvj+60; 
(*f[300])( );     /*TRI10(jvj+37,184,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=111; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,111,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; pile[WZ2]=107; pile[WZ3]=jvj+64; 
(*f[301])( );     /*TRI11(jvj+62,jvj+63,107,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+64,22,100,jvj+51)*/
pile[v[22]]=100; pile[WZ2]=111; pile[WZ3]=jvj+49; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+49,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=107; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+38,107,jvj+50)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+38,107,jvj+51)*/
pile[v[22]]=EX; pile[WZ1]=jvj+38; 
(*f[68])( );     /*PLUE0(EX,jvj+38)*/
V76=t[V76];
goto l25;
l15:x[jvj+27]=s[x[jvj+70]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+70];
pile[v[22]]=510; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(510,jvj+27,V38)*/
V38=pile[WZ2]; 
if((V38!=V22)) goto l16;
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(642,jvj+27,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+43; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V39; pile[WZ4]=jvj+45; 
(*f[192])( );     /*QUADRI4(100,41,130,V39,jvj+45)*/
pile[v[22]]=jvj+43; pile[WZ1]=111; pile[WZ2]=jvj+44; 
(*f[54])( );     /*TRI1(jvj+43,111,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+45; pile[WZ4]=jvj+44; pile[WZ5]=jvj+28; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+45,jvj+44,jvj+28)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[196])( );     /*PLUF0(jvj+26,jvj+28,jvj+29)*/
l16:x[jvj+70]=t[x[jvj+70]];
goto l14;
l18:x[jvj+33]=s[x[jvj+71]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+71];
pile[v[22]]=510; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(510,jvj+33,V41)*/
V41=pile[WZ2]; 
if((V41!=V22)) goto l19;
pile[v[22]]=642; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(642,jvj+33,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-1544); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(100,21,140,(-1544),jvj+46)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V42; pile[WZ4]=jvj+48; 
(*f[192])( );     /*QUADRI4(100,41,130,V42,jvj+48)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=1050; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+47; pile[WZ5]=jvj+34; 
(*f[269])( );     /*QUADRI6(100,1050,102,jvj+48,jvj+47,jvj+34)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[196])( );     /*PLUF0(jvj+32,jvj+34,jvj+35)*/
l19:x[jvj+71]=t[x[jvj+71]];
goto l17;
l21:x[jvj+21]=s[x[jvj+72]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+72];
pile[v[22]]=510; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(510,jvj+21,V17)*/
V17=pile[WZ2]; 
V48=x[jvj+21];
pile[v[22]]=41; pile[WZ1]=V17; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V17,0,V45)*/
V45=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V48; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(20,V48,V45,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
pile[v[22]]=642; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(642,jvj+21,V43)*/
V43=pile[WZ2]; 
x[jvj+24]=0 ;z[jvj+24]=0;
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[887])( );     /*VARND0(jvj+21,jvj+22)*/
x[jvj+69]=x[jvj+22] ;z[jvj+69]=z[jvj+22];
goto l11;
l22:x[jvj+72]=t[x[jvj+72]];
goto l20;
l24:x[jvj+73]=t[x[jvj+73]];
goto l23;
l27:x[jvj+39]=s[x[jvj+74]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+74];
pile[v[22]]=515; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(515,jvj+39,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(510,jvj+39,V19)*/
V19=pile[WZ2]; 
V54=x[jvj+39];
pile[v[22]]=41; pile[WZ1]=V19; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V19,0,V49)*/
V49=pile[WZ3]; 
pile[WZ1]=V18; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,V18,V49,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V54; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V54,V51,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
l28:x[jvj+74]=t[x[jvj+74]];
goto l26;
}
