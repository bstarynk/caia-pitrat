#include "dx.h"
void ATOME82T2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V=0,V57=0,V15=0,VV=0,V59=0,V52=0,V22=0,V27=0,V41=0,K=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=62;
x[jvj+1]=20082;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3363&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,R,jvj+28)*/
pile[v[22]]=101; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+28,jvj+29)*/
if((x[jvj+29]!=25)) goto l19;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(870,R,V22)*/
V22=pile[WZ2]; 
if((V22!=2)) goto l19;
pile[v[22]]=869; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(869,R,jvj+30)*/
if((x[jvj+30]!=769)) goto l19;
x[jvj+3]=vo[16];z[jvj+3]=vz[16];
x[jvj+31]=d[20];z[jvj+31]=0;
l11:if((x[jvj+31]<=0)) goto l19;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+32; pile[WZ1]=R; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+32,R,jvj+33)*/
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=485)) goto l12;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+36)*/
for(i=x[jvj+36],V27=0;i>0;i=t[i],V27++)  ;
if((V27!=2)) goto l12;
pile[v[22]]=268; pile[WZ1]=jvj+32; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(268,jvj+32,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=R; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(jvj+37,R,jvj+38)*/
pile[v[22]]=130; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(130,jvj+38,V41)*/
V41=pile[WZ2]; 
K=V41;
x[jvj+61]=x[jvj+36] ;z[jvj+61]=z[jvj+36];
l13:if((x[jvj+61]<=0)) goto l12;
x[jvj+39]=s[x[jvj+61]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+61];
pile[v[22]]=100; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+39,jvj+40)*/
if((x[jvj+40]!=484)) goto l14;
x[jvj+23]=x[jvj+39] ;z[jvj+23]=z[jvj+39];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+41; 
(*f[200])( );if(v[102]) goto l14;     /*NDD0(jvj+23,jvj+41)*/
x[jvj+20]=x[jvj+41] ;z[jvj+20]=z[jvj+41];
pile[v[22]]=498; pile[WZ1]=jvj+20; pile[WZ2]=jvj+42; 
(*f[1948])( );if(v[102]) goto l14;     /*FNDOND0(498,jvj+20,jvj+42)*/
x[jvj+7]=x[jvj+42] ;z[jvj+7]=z[jvj+42];
pile[v[22]]=100; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+7,jvj+8)*/
if((x[jvj+8]!=454)) goto l3;
pile[v[22]]=160; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,jvj+7,jvj+9)*/
pile[v[22]]=100; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,jvj+9,jvj+10)*/
if((x[jvj+10]!=128)) goto l3;
pile[v[22]]=128; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(128,jvj+9,jvj+11)*/
x[jvj+59]=x[jvj+11] ;z[jvj+59]=z[jvj+11];
l4:if((x[jvj+59]<=0)) goto l3;
x[jvj+12]=s[x[jvj+59]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+59];
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]==923)) goto l14;
l5:x[jvj+59]=t[x[jvj+59]];
goto l4;
l2:V=s[V57];
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V) goto l17;
V57=t[V57];
l1:if((V57>0)) goto l2;
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(642,jvj+19,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=509; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[1969])( );     /*FNDEND0(509,jvj+20,jvj+21)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+22)*/
x[jvj+60]=x[jvj+21] ;z[jvj+60]=z[jvj+21];
l9:if((x[jvj+60]<=0)) goto l18;
x[jvj+15]=s[x[jvj+60]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+60];
if((x[jvj+15]==x[R])) goto l10;
pile[v[22]]=1071; pile[WZ1]=jvj+3; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1071,jvj+3,jvj+14)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; 
(*f[887])( );     /*VARND0(jvj+15,jvj+16)*/
V59=x[jvj+14];
l6:if((V59>0)) goto l7;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+43)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=jvj+44; 
(*f[192])( );     /*QUADRI4(100,41,130,K,jvj+44)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+46; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=111; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(jvj+46,111,jvj+47)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+22; pile[WZ4]=jvj+47; pile[WZ5]=jvj+45; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+22,jvj+47,jvj+45)*/
pile[WZ2]=111; pile[WZ3]=jvj+43; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+43,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=107; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+44)*/
pile[WZ2]=jvj+45; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+45)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; pile[WZ3]=jvj+18; pile[WZ4]=jvj+25; 
(*f[3130])( );if(v[102]) goto l10;     /*SUBSTITUVAR1(jvj+15,jvj+23,jvj+24,jvj+18,jvj+25)*/
if((x[jvj+25]==135)) goto l8;
l10:x[jvj+60]=t[x[jvj+60]];
goto l9;
l3:pile[v[22]]=688; pile[WZ1]=jvj+7; 
(*f[1975])( );if(v[102]) goto l16;     /*FNDCND0(688,jvj+7,V15)*/
V15=pile[WZ2]; 
if((V15==1)) goto l14;
l16:x[jvj+62]=x[jvj+36] ;z[jvj+62]=z[jvj+36];
l15:if((x[jvj+62]<=0)) goto l14;
x[jvj+5]=s[x[jvj+62]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+62];
if((x[jvj+39]==x[jvj+5])) goto l17;
pile[v[22]]=1071; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(1071,jvj+3,jvj+4)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[887])( );     /*VARND0(jvj+5,jvj+6)*/
V57=x[jvj+4];
goto l1;
l7:VV=s[V59];
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==VV) goto l10;
V59=t[V59];
goto l6;
l8:pile[v[22]]=1070; pile[WZ1]=jvj+15; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1070,jvj+15,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=1070; 
(*f[35])( );     /*CHGC1(jvj+18,1070,jvj+17)*/
l20:pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=110; pile[WZ3]=(-608); pile[WZ4]=jvj+51; 
(*f[270])( );     /*QUADRI7(101,jvj+15,110,(-608),jvj+51)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+52; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+52)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+48; 
(*f[46])( );     /*TRI0(V52,858,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+49; 
(*f[189])( );     /*TRI4(jvj+48,v[13],642,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=3363; pile[WZ2]=246; pile[WZ3]=jvj+50; 
(*f[189])( );     /*TRI4(jvj+49,3363,246,jvj+50)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20082; pile[WZ4]=jvj+50; pile[WZ5]=jvj+26; 
(*f[269])( );     /*QUADRI6(158,1,218,20082,jvj+50,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=159; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+51)*/
pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+26,159,jvj+52)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+26; 
(*f[1296])( );     /*NOUVCONTR0(jvj+18,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+57)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+53; 
(*f[46])( );     /*TRI0(V52,858,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+54; 
(*f[189])( );     /*TRI4(jvj+53,v[13],642,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=3363; pile[WZ2]=246; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,3363,246,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=20082; pile[WZ2]=218; pile[WZ3]=jvj+56; 
(*f[58])( );     /*TRI3(jvj+55,20082,218,jvj+56)*/
pile[v[22]]=jvj+57; pile[WZ1]=(-20); pile[WZ2]=jvj+56; pile[WZ3]=159; pile[WZ4]=jvj+58; 
(*f[298])( );     /*TRIENS1(jvj+57,(-20),jvj+56,159,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+58,1,158,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=jvj+15; 
(*f[966])( );     /*ELIMINE0(jvj+27,jvj+15)*/
pile[v[22]]=R; pile[WZ1]=1070; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(R,1070,68)*/
goto l10;
l12:x[jvj+31]=t[x[jvj+31]];
goto l11;
l14:x[jvj+61]=t[x[jvj+61]];
goto l13;
l18:pile[v[22]]=jvj+3; pile[WZ1]=1071; pile[WZ2]=jvj+41; 
(*f[36])( );     /*PLUSC0(jvj+3,1071,jvj+41)*/
l17:x[jvj+62]=t[x[jvj+62]];
goto l15;
l19:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
