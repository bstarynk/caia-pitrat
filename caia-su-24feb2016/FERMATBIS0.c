#include "dx.h"
void FERMATBIS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,M=0,V58=0,EY=0,PP=0,Q=0,V32=0,I=0,V45=0,V35=0,J=0,V31=0,V44=0,V70=0,V72=0,V68=0,V69=0,V71=0;
int R,ES,P;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=66;
x[jvj+1]=10726;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3735&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; ES=pile[v[22]+1]; P=pile[v[22]+2]; RES=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=Q=x[jvj+31]=incon;
pile[v[22]]=R; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(R,jvj+20)*/
x[jvj+16]=0 ;z[jvj+16]=0;
x[jvj+66]=x[ES] ;z[jvj+66]=z[ES];
l7:if((x[jvj+66]>0)) goto l8;
x[jvj+19]=0 ;z[jvj+19]=0;
l10:if((x[jvj+16]>0)) goto l11;
EY=x[jvj+19];
x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+65]=x[ES] ;z[jvj+65]=z[ES];
l1:if((x[jvj+65]>0)) goto l2;
x[jvj+10]=0 ;z[jvj+10]=0;
l4:if((x[jvj+7]>0)) goto l5;
x[jvj+24]=x[jvj+10] ;z[jvj+24]=z[jvj+10];
pile[v[22]]=111; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,jvj+20,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]!=25)) goto l29;
pile[v[22]]=102; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,jvj+20,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=P; pile[WZ2]=jvj+24; pile[WZ3]=jvj+25; 
(*f[4030])( );     /*FERMATBISA0(jvj+23,P,jvj+24,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+26)*/
pile[v[22]]=103; pile[WZ1]=jvj+20; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,jvj+20,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=P; pile[WZ2]=jvj+24; pile[WZ3]=jvj+28; 
(*f[4030])( );     /*FERMATBISA0(jvj+27,P,jvj+24,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+28,jvj+29)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=625; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,625,jvj+62)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=P; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,P,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=160; pile[WZ2]=jvj+61; 
(*f[54])( );     /*TRI1(jvj+60,160,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; pile[WZ2]=111; pile[WZ3]=jvj+63; 
(*f[58])( );     /*TRI3(jvj+61,jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+29; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+63,jvj+29,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+64; pile[WZ5]=jvj+30; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+64,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[799])( );if(v[102]) goto l29;     /*NORME0(jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+31,jvj+32)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+31,jvj+33)*/
if((x[jvj+33]!=0)) goto l13;
x[RES]=x[jvj+32] ;z[RES]=z[jvj+32];
l13:pile[v[22]]=111; pile[WZ1]=jvj+31; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,jvj+31,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=625)) goto l21;
pile[v[22]]=160; pile[WZ1]=jvj+31; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(160,jvj+31,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+36,PP)*/
PP=pile[WZ2]; 
Q=PP;
l21:if(x[RES]==incon) goto l22;
l30:if((v[217]<=0)) goto l31;
V70=x[jvj+31];
V72=x[RES];
pile[v[22]]=20; pile[WZ1]=10726; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10726,0,V68)*/
V68=pile[WZ3]; 
pile[WZ1]=V70; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(20,V70,V68,V69)*/
V69=pile[WZ3]; 
pile[WZ1]=V72; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(20,V72,V69,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; 
(*f[40])( );     /*SLG0(V71)*/
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; return;
l2:x[jvj+2]=s[x[jvj+65]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+65];
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=1280)) goto l3;
pile[v[22]]=160; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(160,jvj+2,jvj+5)*/
pile[v[22]]=130; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+5,V10)*/
V10=pile[WZ2]; 
M=V10;
if((M==0)) goto l3;
pile[v[22]]=102; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(102,jvj+2,jvj+6)*/
pile[v[22]]=jvj+7; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+6)*/
l3:x[jvj+65]=t[x[jvj+65]];
goto l1;
l5:x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+8,jvj+9)*/
pile[v[22]]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+10,jvj+9)*/
l6:x[jvj+7]=t[x[jvj+7]];
goto l4;
l8:x[jvj+11]=s[x[jvj+66]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+66];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+11,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=1280)) goto l9;
pile[v[22]]=160; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,jvj+11,jvj+14)*/
pile[v[22]]=130; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(130,jvj+14,V58)*/
V58=pile[WZ2]; 
if((V58!=0)) goto l9;
pile[v[22]]=102; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(102,jvj+11,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+15)*/
l9:x[jvj+66]=t[x[jvj+66]];
goto l7;
l11:x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; 
(*f[200])( );if(v[102]) goto l12;     /*NDD0(jvj+17,jvj+18)*/
pile[v[22]]=jvj+19; 
(*f[68])( );     /*PLUE0(jvj+19,jvj+18)*/
l12:x[jvj+16]=t[x[jvj+16]];
goto l10;
l16:pile[v[22]]=jvj+31; pile[WZ1]=jvj+45; 
(*f[887])( );     /*VARND0(jvj+31,jvj+45)*/
l17:if((x[jvj+45]<=0)) goto l29;
x[jvj+59]=s[x[jvj+45]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+45];
if((x[jvj+59]!=x[jvj+58])) goto l27;
x[jvj+45]=t[x[jvj+45]];
goto l17;
l22:if(Q!=incon) goto l23;
l29:x[RES]=135 ;z[RES]=135;
if(x[jvj+31]!=incon) goto l30;
goto l31;
l23:if((Q>=100)) goto l29;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+55; 
(*f[887])( );     /*VARND0(jvj+31,jvj+55)*/
for(i=x[jvj+55],V31=0;i>0;i=t[i],V31++)  ;
if((V31!=1)) goto l26;
pile[WZ1]=jvj+37; 
(*f[887])( );     /*VARND0(jvj+31,jvj+37)*/
if((x[jvj+37]<=0)) goto l26;
x[jvj+56]=s[x[jvj+37]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+37];
for(a=EY;a>0;a=t[a]) if(s[a]==x[jvj+56]) goto l24;
l26:if((Q>=20)) goto l29;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+57; 
(*f[887])( );     /*VARND0(jvj+31,jvj+57)*/
for(i=x[jvj+57],V44=0;i>0;i=t[i],V44++)  ;
if((V44!=2)) goto l29;
pile[WZ1]=jvj+44; 
(*f[887])( );     /*VARND0(jvj+31,jvj+44)*/
if((x[jvj+44]<=0)) goto l29;
x[jvj+58]=s[x[jvj+44]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+44];
for(a=EY;a>0;a=t[a]) if(s[a]==x[jvj+58]) goto l16;
goto l29;
l24:pile[v[22]]=jvj+56; pile[WZ1]=jvj+38; 
(*f[1290])( );if(v[102]) goto l26;     /*DEPEXP0(jvj+56,jvj+38)*/
V32=Q-1;
I=1;
l14:if((I>V32)) goto l25;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+39; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+39)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; pile[WZ2]=jvj+31; pile[WZ3]=jvj+40; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+38,jvj+39,jvj+31,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[799])( );if(v[102]) goto l15;     /*NORME0(jvj+40,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+42; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+42)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[760])( );     /*MEMEX0(jvj+41,jvj+42,jvj+43)*/
if((x[jvj+43]==135)) goto l26;
l15:I++;
goto l14;
l25:x[RES]=134 ;z[RES]=134;
goto l30;
l27:for(a=EY;a>0;a=t[a]) if(s[a]==x[jvj+59]) goto l28;
goto l29;
l28:pile[v[22]]=jvj+58; pile[WZ1]=jvj+46; 
(*f[1290])( );if(v[102]) goto l29;     /*DEPEXP0(jvj+58,jvj+46)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+49; 
(*f[1290])( );if(v[102]) goto l29;     /*DEPEXP0(jvj+59,jvj+49)*/
V45=Q-1;
V35=1;
l18:if((V35>V45)) goto l25;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V35; pile[WZ4]=jvj+47; 
(*f[192])( );     /*QUADRI4(100,41,130,V35,jvj+47)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=jvj+31; pile[WZ3]=jvj+48; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+46,jvj+47,jvj+31,jvj+48)*/
J=1;
l19:if((J<=V45)) goto l32;
V35++;
goto l18;
l32:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=J; pile[WZ4]=jvj+50; 
(*f[192])( );     /*QUADRI4(100,41,130,J,jvj+50)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; pile[WZ2]=jvj+48; pile[WZ3]=jvj+51; 
(*f[1589])( );     /*SUBSTITUTION0(jvj+49,jvj+50,jvj+48,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=jvj+52; 
(*f[799])( );if(v[102]) goto l20;     /*NORME0(jvj+51,jvj+52)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+53)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[760])( );     /*MEMEX0(jvj+52,jvj+53,jvj+54)*/
if((x[jvj+54]==135)) goto l29;
l20:J++;
goto l19;
}
