#include "dx.h"
void CORRECTIF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V34=0,V125=0,V130=0,V283=0,V61=0,V=0,V222=0,V241=0,V226=0,NY=0,VR=0,E1=0;
int R,BA,XP,Q;
int T;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=243;
x[jvj+1]=11744;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1232&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; BA=pile[v[22]+1]; XP=pile[v[22]+2]; Q=pile[v[22]+3]; T=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[T]=NY=VR=x[jvj+157]=x[jvj+159]=x[jvj+243]=x[jvj+161]=incon;
pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(100,R,jvj+37)*/
if(x[jvj+37]==96||x[jvj+37]==89||x[jvj+37]==41||x[jvj+37]==20||x[jvj+37]==128||x[jvj+37]==570||x[jvj+37]==1317) goto l35;
if((x[jvj+37]==73)) goto l36;
if((x[jvj+37]==43)) goto l39;
if((x[jvj+37]!=22)) goto l53;
pile[v[22]]=111; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(111,R,jvj+70)*/
pile[v[22]]=101; pile[WZ1]=jvj+70; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+70,jvj+2)*/
pile[v[22]]=118; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(118,jvj+2,V61)*/
V61=pile[WZ2]; 
if((V61==2)) goto l40;
if((V61==1)) goto l44;
if((V61==0)) goto l49;
if((V61!=3)) goto l53;
pile[v[22]]=1045; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(1045,jvj+2,jvj+20)*/
if((x[jvj+20]==68)) goto l53;
l20:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(155,jvj+2,jvj+21)*/
if((x[jvj+21]==68)) goto l53;
l52:pile[v[22]]=160; pile[WZ1]=R; pile[WZ2]=jvj+97; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(160,R,jvj+97)*/
pile[v[22]]=102; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,R,jvj+98)*/
pile[v[22]]=103; pile[WZ2]=jvj+99; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,R,jvj+99)*/
pile[v[22]]=1835; pile[WZ1]=jvj+2; pile[WZ2]=jvj+100; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1835,jvj+2,jvj+100)*/
pile[v[22]]=jvj+98; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+101; 
(*f[1232])( );     /*CORRECTIF0(jvj+98,BA,jvj+100,Q,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=jvj+102; 
(*f[255])( );     /*COPEXP0(jvj+101,jvj+102)*/
pile[v[22]]=1836; pile[WZ1]=jvj+2; pile[WZ2]=jvj+103; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1836,jvj+2,jvj+103)*/
pile[v[22]]=jvj+99; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+104; 
(*f[1232])( );     /*CORRECTIF0(jvj+99,BA,jvj+103,Q,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=jvj+105; 
(*f[255])( );     /*COPEXP0(jvj+104,jvj+105)*/
pile[v[22]]=1837; pile[WZ1]=jvj+2; pile[WZ2]=jvj+106; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1837,jvj+2,jvj+106)*/
pile[v[22]]=jvj+97; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+107; 
(*f[1232])( );     /*CORRECTIF0(jvj+97,BA,jvj+106,Q,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=jvj+108; 
(*f[255])( );     /*COPEXP0(jvj+107,jvj+108)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+190; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+190)*/
pile[v[22]]=jvj+108; pile[WZ1]=160; pile[WZ2]=jvj+189; 
(*f[54])( );     /*TRI1(jvj+108,160,jvj+189)*/
pile[v[22]]=jvj+189; pile[WZ1]=jvj+190; pile[WZ2]=111; pile[WZ3]=jvj+191; 
(*f[58])( );     /*TRI3(jvj+189,jvj+190,111,jvj+191)*/
pile[v[22]]=jvj+191; pile[WZ1]=jvj+105; pile[WZ2]=103; pile[WZ3]=jvj+192; 
(*f[58])( );     /*TRI3(jvj+191,jvj+105,103,jvj+192)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+102; pile[WZ4]=jvj+192; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+102,jvj+192,T)*/
l57:pile[v[22]]=100; pile[WZ1]=R; pile[WZ2]=jvj+119; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(100,R,jvj+119)*/
if((x[jvj+119]!=22)) goto l74;
pile[v[22]]=111; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(111,R,jvj+26)*/
pile[v[22]]=101; pile[WZ1]=jvj+26; pile[WZ2]=jvj+120; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(101,jvj+26,jvj+120)*/
pile[v[22]]=118; pile[WZ1]=jvj+120; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(118,jvj+120,V241)*/
V241=pile[WZ2]; 
if((V241!=1)) goto l24;
pile[v[22]]=155; pile[WZ2]=jvj+121; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(155,jvj+120,jvj+121)*/
if((x[jvj+121]!=68)) goto l24;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+122; 
(*f[33])( );     /*FNDE0(107,R,jvj+122)*/
pile[v[22]]=1916; pile[WZ1]=1714; pile[WZ2]=jvj+123; 
(*f[33])( );     /*FNDE0(1916,1714,jvj+123)*/
for(a=x[jvj+123];a>0;a=t[a]) if(s[a]==x[jvj+120]) goto l58;
l24:pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]==20)) goto l64;
l25:V125=incon;
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(103,R,jvj+30)*/
V125=2;
l27:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(102,R,jvj+29)*/
l26:pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,R,jvj+28)*/
l30:if(V125==incon) goto l64;
if((V125!=(-99999998))) goto l31;
l64:if(x[T]==incon) goto l65;
l80:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l2:pile[v[22]]=1045; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1045,jvj+2,jvj+4)*/
if((x[jvj+4]==68)) goto l53;
l3:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(155,jvj+2,jvj+5)*/
if((x[jvj+5]==68)) goto l53;
l41:pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,R,jvj+12)*/
pile[v[22]]=102; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,R,jvj+9)*/
x[jvj+242]=incon;
pile[v[22]]=1656; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1656,jvj+2,jvj+8)*/
if((x[jvj+8]!=68)) goto l7;
pile[v[22]]=BA; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[1492])( );     /*EXPVAUT0(BA,jvj+9,jvj+10)*/
x[jvj+242]=x[jvj+10] ;z[jvj+242]=z[jvj+10];
l8:V34=incon;
pile[v[22]]=1656; pile[WZ1]=jvj+2; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(1656,jvj+2,jvj+11)*/
if((x[jvj+11]!=68)) goto l9;
pile[v[22]]=BA; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1492])( );     /*EXPVAUT0(BA,jvj+12,jvj+13)*/
V34=x[jvj+13];
l10:x[jvj+239]=incon;
if((x[jvj+242]!=V34)) goto l11;
x[jvj+239]=x[jvj+242] ;z[jvj+239]=z[jvj+242];
l11:if((x[jvj+242]==1881)) goto l15;
if((V34==1881)) goto l15;
l12:if((x[jvj+242]==129)) goto l16;
if((V34==129)) goto l16;
l13:if((x[jvj+242]==1917)) goto l17;
l14:if((V34==1917)) goto l17;
if(x[jvj+239]==incon) goto l18;
l4:x[jvj+6]=incon;
if((x[jvj+239]!=250)) goto l5;
pile[v[22]]=1835; pile[WZ1]=jvj+2; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1835,jvj+2,jvj+6)*/
l42:pile[v[22]]=jvj+9; pile[WZ1]=BA; pile[WZ2]=jvj+6; pile[WZ3]=Q; pile[WZ4]=jvj+78; 
(*f[1232])( );     /*CORRECTIF0(jvj+9,BA,jvj+6,Q,jvj+78)*/
x[jvj+7]=incon;
if((x[jvj+239]!=250)) goto l6;
pile[v[22]]=1836; pile[WZ1]=jvj+2; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1836,jvj+2,jvj+7)*/
l43:pile[v[22]]=jvj+12; pile[WZ1]=BA; pile[WZ2]=jvj+7; pile[WZ3]=Q; pile[WZ4]=jvj+79; 
(*f[1232])( );     /*CORRECTIF0(jvj+12,BA,jvj+7,Q,jvj+79)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+80; 
(*f[255])( );     /*COPEXP0(jvj+78,jvj+80)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+81; 
(*f[255])( );     /*COPEXP0(jvj+79,jvj+81)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+181; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+181)*/
pile[v[22]]=jvj+181; pile[WZ1]=111; pile[WZ2]=jvj+182; 
(*f[54])( );     /*TRI1(jvj+181,111,jvj+182)*/
pile[v[22]]=jvj+182; pile[WZ1]=jvj+81; pile[WZ2]=103; pile[WZ3]=jvj+183; 
(*f[58])( );     /*TRI3(jvj+182,jvj+81,103,jvj+183)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+183; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+183,T)*/
goto l57;
l5:x[jvj+6]=x[jvj+239] ;z[jvj+6]=z[jvj+239];
goto l42;
l6:x[jvj+7]=x[jvj+239] ;z[jvj+7]=z[jvj+239];
goto l43;
l7:x[jvj+242]=250 ;z[jvj+242]=250;
goto l8;
l9:V34=250;
goto l10;
l15:x[jvj+239]=1881 ;z[jvj+239]=1881;
if((V34==1881)) goto l13;
if((x[jvj+242]!=1881)) goto l12;
goto l14;
l16:x[jvj+239]=129 ;z[jvj+239]=129;
goto l13;
l17:x[jvj+239]=1917 ;z[jvj+239]=1917;
goto l4;
l18:x[jvj+239]=250 ;z[jvj+239]=250;
goto l4;
l21:x[jvj+86]=x[XP] ;z[jvj+86]=z[XP];
l83:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+184; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+184)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+184; pile[WZ4]=jvj+185; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+184,jvj+185)*/
x[jvj+87]=incon;
pile[v[22]]=1901; pile[WZ1]=1714; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(1901,1714,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l22;
x[jvj+87]=x[Q] ;z[jvj+87]=z[Q];
l45:pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(107,R,jvj+84)*/
pile[v[22]]=102; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(102,R,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=BA; pile[WZ2]=jvj+86; pile[WZ3]=jvj+87; pile[WZ4]=jvj+88; 
(*f[1232])( );     /*CORRECTIF0(jvj+85,BA,jvj+86,jvj+87,jvj+88)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,250,jvj+89)*/
pile[v[22]]=jvj+88; pile[WZ1]=jvj+89; pile[WZ2]=jvj+90; 
(*f[760])( );     /*MEMEX0(jvj+88,jvj+89,jvj+90)*/
if((x[jvj+90]==134)) goto l46;
l1:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(155,jvj+2,jvj+3)*/
if((x[jvj+3]==68)) goto l53;
l48:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,R,jvj+91)*/
pile[v[22]]=1835; pile[WZ1]=jvj+2; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1835,jvj+2,jvj+92)*/
pile[v[22]]=jvj+91; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+93; 
(*f[1232])( );     /*CORRECTIF0(jvj+91,BA,jvj+92,Q,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=jvj+94; 
(*f[255])( );     /*COPEXP0(jvj+93,jvj+94)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+186; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+186)*/
pile[v[22]]=jvj+186; pile[WZ1]=111; pile[WZ2]=jvj+187; 
(*f[54])( );     /*TRI1(jvj+186,111,jvj+187)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+94; pile[WZ4]=jvj+187; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+94,jvj+187,T)*/
goto l57;
l22:x[jvj+87]=x[jvj+185] ;z[jvj+87]=z[jvj+185];
goto l45;
l28:V125=0;
goto l26;
l29:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(102,R,jvj+31)*/
V125=1;
l31:V130=incon;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(107,R,jvj+32)*/
if((x[jvj+32]!=0)) goto l32;
V130=67;
l61:NY=V125;
VR=V130;
goto l64;
l32:V130=68;
goto l61;
l33:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(155,jvj+2,jvj+33)*/
if((x[jvj+33]==68)) goto l53;
l51:pile[v[22]]=R; pile[WZ1]=T; 
(*f[255])( );     /*COPEXP0(R,T)*/
goto l57;
l36:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(111,R,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+38,jvj+39)*/
pile[v[22]]=117; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(117,jvj+39,V283)*/
V283=pile[WZ2]; 
if((V283==0)) goto l82;
if((V283==1)) goto l37;
if((V283==2)) goto l38;
if((V283!=3)) goto l53;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,R,jvj+52)*/
pile[v[22]]=103; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,R,jvj+53)*/
pile[v[22]]=160; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(160,R,jvj+54)*/
pile[v[22]]=1835; pile[WZ1]=jvj+39; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1835,jvj+39,jvj+55)*/
pile[v[22]]=jvj+52; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+56; 
(*f[1232])( );     /*CORRECTIF0(jvj+52,BA,jvj+55,Q,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[255])( );     /*COPEXP0(jvj+56,jvj+57)*/
pile[v[22]]=1836; pile[WZ1]=jvj+39; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1836,jvj+39,jvj+58)*/
pile[v[22]]=jvj+53; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+59; 
(*f[1232])( );     /*CORRECTIF0(jvj+53,BA,jvj+58,Q,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; 
(*f[255])( );     /*COPEXP0(jvj+59,jvj+60)*/
pile[v[22]]=1837; pile[WZ1]=jvj+39; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1837,jvj+39,jvj+61)*/
pile[v[22]]=jvj+54; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+62; 
(*f[1232])( );     /*CORRECTIF0(jvj+54,BA,jvj+61,Q,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+173; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+173)*/
pile[v[22]]=jvj+63; pile[WZ1]=160; pile[WZ2]=jvj+172; 
(*f[54])( );     /*TRI1(jvj+63,160,jvj+172)*/
pile[v[22]]=jvj+172; pile[WZ1]=jvj+173; pile[WZ2]=111; pile[WZ3]=jvj+174; 
(*f[58])( );     /*TRI3(jvj+172,jvj+173,111,jvj+174)*/
pile[v[22]]=jvj+174; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+175; 
(*f[58])( );     /*TRI3(jvj+174,jvj+60,103,jvj+175)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+175; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+57,jvj+175,T)*/
goto l57;
l37:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,R,jvj+40)*/
pile[v[22]]=1835; pile[WZ1]=jvj+39; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1835,jvj+39,jvj+41)*/
pile[v[22]]=jvj+40; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+42; 
(*f[1232])( );     /*CORRECTIF0(jvj+40,BA,jvj+41,Q,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+167; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+167)*/
pile[v[22]]=jvj+167; pile[WZ1]=111; pile[WZ2]=jvj+168; 
(*f[54])( );     /*TRI1(jvj+167,111,jvj+168)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+43; pile[WZ4]=jvj+168; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+43,jvj+168,T)*/
goto l57;
l38:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,R,jvj+44)*/
pile[v[22]]=103; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,R,jvj+45)*/
pile[v[22]]=1835; pile[WZ1]=jvj+39; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1835,jvj+39,jvj+46)*/
pile[v[22]]=jvj+44; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+47; 
(*f[1232])( );     /*CORRECTIF0(jvj+44,BA,jvj+46,Q,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[255])( );     /*COPEXP0(jvj+47,jvj+48)*/
pile[v[22]]=1836; pile[WZ1]=jvj+39; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1836,jvj+39,jvj+49)*/
pile[v[22]]=jvj+45; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+50; 
(*f[1232])( );     /*CORRECTIF0(jvj+45,BA,jvj+49,Q,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+50,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+169; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+169)*/
pile[v[22]]=jvj+169; pile[WZ1]=111; pile[WZ2]=jvj+170; 
(*f[54])( );     /*TRI1(jvj+169,111,jvj+170)*/
pile[v[22]]=jvj+170; pile[WZ1]=jvj+51; pile[WZ2]=103; pile[WZ3]=jvj+171; 
(*f[58])( );     /*TRI3(jvj+170,jvj+51,103,jvj+171)*/
pile[v[22]]=100; pile[WZ1]=73; pile[WZ2]=102; pile[WZ3]=jvj+48; pile[WZ4]=jvj+171; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,73,102,jvj+48,jvj+171,T)*/
goto l57;
l39:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+64; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(102,R,jvj+64)*/
pile[v[22]]=101; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(101,jvj+64,jvj+65)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(103,R,jvj+66)*/
pile[v[22]]=1835; pile[WZ1]=jvj+65; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l53;     /*FNDO0(1835,jvj+65,jvj+67)*/
pile[v[22]]=jvj+66; pile[WZ1]=BA; pile[WZ3]=Q; pile[WZ4]=jvj+68; 
(*f[1232])( );     /*CORRECTIF0(jvj+66,BA,jvj+67,Q,jvj+68)*/
pile[v[22]]=jvj+68; pile[WZ1]=jvj+69; 
(*f[255])( );     /*COPEXP0(jvj+68,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+65; pile[WZ4]=jvj+177; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+65,jvj+177)*/
pile[v[22]]=jvj+69; pile[WZ1]=103; pile[WZ2]=jvj+176; 
(*f[54])( );     /*TRI1(jvj+69,103,jvj+176)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+177; pile[WZ4]=jvj+176; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+177,jvj+176,T)*/
goto l57;
l40:pile[v[22]]=1045; pile[WZ1]=jvj+2; pile[WZ2]=jvj+71; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1045,jvj+2,jvj+71)*/
if((x[jvj+71]!=68)) goto l2;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(102,R,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+73; 
(*f[1232])( );     /*CORRECTIF0(jvj+72,BA,129,Q,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; 
(*f[255])( );     /*COPEXP0(jvj+73,jvj+74)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(103,R,jvj+75)*/
pile[v[22]]=BA; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[1230])( );if(v[102]) goto l2;     /*TRADMATCH0(BA,jvj+75,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=jvj+77; 
(*f[255])( );     /*COPEXP0(jvj+76,jvj+77)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+178; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+178)*/
pile[v[22]]=jvj+178; pile[WZ1]=111; pile[WZ2]=jvj+179; 
(*f[54])( );     /*TRI1(jvj+178,111,jvj+179)*/
pile[v[22]]=jvj+179; pile[WZ1]=jvj+77; pile[WZ2]=103; pile[WZ3]=jvj+180; 
(*f[58])( );     /*TRI3(jvj+179,jvj+77,103,jvj+180)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+74; pile[WZ4]=jvj+180; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+74,jvj+180,T)*/
goto l57;
l44:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(155,jvj+2,jvj+82)*/
if((x[jvj+82]!=68)) goto l1;
pile[v[22]]=1916; pile[WZ1]=1714; pile[WZ2]=jvj+83; 
(*f[33])( );     /*FNDE0(1916,1714,jvj+83)*/
for(a=x[jvj+83];a>0;a=t[a]) if(s[a]==x[jvj+2]) goto l1;
x[jvj+86]=incon;
if((x[XP]!=250)) goto l21;
x[jvj+86]=129 ;z[jvj+86]=129;
goto l83;
l46:x[T]=x[jvj+185] ;z[T]=z[jvj+185];
pile[v[22]]=1883; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(1883,jvj+2,jvj+23)*/
l23:if((x[jvj+84]<=0)) goto l47;
x[jvj+24]=s[x[jvj+84]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+84];
pile[v[22]]=jvj+24; pile[WZ1]=BA; pile[WZ2]=jvj+23; pile[WZ3]=Q; pile[WZ4]=jvj+25; 
(*f[1232])( );     /*CORRECTIF0(jvj+24,BA,jvj+23,Q,jvj+25)*/
pile[v[22]]=T; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(T,107,jvj+25)*/
x[jvj+84]=t[x[jvj+84]];
goto l23;
l47:pile[v[22]]=T; pile[WZ1]=102; pile[WZ2]=jvj+88; 
(*f[35])( );     /*CHGC1(T,102,jvj+88)*/
goto l57;
l49:pile[v[22]]=155; pile[WZ1]=jvj+2; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(155,jvj+2,jvj+95)*/
if((x[jvj+95]!=68)) goto l33;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+96; 
(*f[33])( );     /*FNDE0(107,R,jvj+96)*/
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=1883; pile[WZ1]=jvj+2; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(1883,jvj+2,jvj+14)*/
l19:if((x[jvj+96]<=0)) goto l84;
x[jvj+15]=s[x[jvj+96]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+96];
pile[v[22]]=jvj+15; pile[WZ1]=BA; pile[WZ2]=jvj+14; pile[WZ3]=Q; pile[WZ4]=jvj+16; 
(*f[1232])( );     /*CORRECTIF0(jvj+15,BA,jvj+14,Q,jvj+16)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+16; 
(*f[68])( );     /*PLUE0(jvj+17,jvj+16)*/
x[jvj+96]=t[x[jvj+96]];
goto l19;
l53:pile[v[22]]=140; pile[WZ1]=R; 
(*f[44])( );if(v[102]) goto l56;     /*FNDC1(140,R,V)*/
V=pile[WZ2]; 
pile[v[22]]=292; pile[WZ1]=21; pile[WZ2]=jvj+109; 
(*f[33])( );     /*FNDE0(292,21,jvj+109)*/
for(a=x[jvj+109];a>0;a=t[a]) if(s[a]==V) goto l54;
pile[v[22]]=BA; pile[WZ1]=V; pile[WZ2]=jvj+110; 
(*f[1491])( );     /*VDSBA0(BA,V,jvj+110)*/
l35:x[T]=x[R] ;z[T]=z[R];
goto l57;
l54:for(a=x[jvj+109];a>0;a=t[a]) if(s[a]==V) goto l55;
l56:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+111; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,R,jvj+111)*/
pile[v[22]]=101; pile[WZ1]=jvj+111; pile[WZ2]=jvj+112; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+111,jvj+112)*/
if((x[jvj+112]!=1604)) goto l57;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(102,R,jvj+113)*/
pile[v[22]]=140; pile[WZ1]=jvj+113; 
(*f[44])( );if(v[102]) goto l57;     /*FNDC1(140,jvj+113,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+114; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(103,R,jvj+114)*/
pile[v[22]]=101; pile[WZ1]=jvj+114; pile[WZ2]=jvj+115; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+114,jvj+115)*/
if((x[jvj+115]==1814)) goto l85;
if(x[jvj+115]==1709||x[jvj+115]==1050||x[jvj+115]==1814) goto l57;
pile[v[22]]=1775; pile[WZ1]=jvj+115; pile[WZ2]=jvj+116; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(1775,jvj+115,jvj+116)*/
pile[v[22]]=BA; pile[WZ1]=V222; pile[WZ2]=jvj+117; 
(*f[1491])( );     /*VDSBA0(BA,V222,jvj+117)*/
pile[v[22]]=129; pile[WZ1]=jvj+117; pile[WZ2]=jvj+118; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(129,jvj+117,jvj+118)*/
if((x[jvj+118]==1881)) goto l57;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+198; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+198)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V222; pile[WZ4]=jvj+202; 
(*f[270])( );     /*QUADRI7(100,21,140,V222,jvj+202)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=654; pile[WZ4]=jvj+225; 
(*f[181])( );     /*QUADRI2(100,20,101,654,jvj+225)*/
pile[WZ3]=653; pile[WZ4]=jvj+230; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+230)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+230; pile[WZ4]=jvj+229; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+230,jvj+229)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+116; pile[WZ4]=jvj+227; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+116,jvj+227)*/
pile[v[22]]=jvj+225; pile[WZ1]=111; pile[WZ2]=jvj+226; 
(*f[54])( );     /*TRI1(jvj+225,111,jvj+226)*/
pile[v[22]]=jvj+226; pile[WZ1]=jvj+227; pile[WZ2]=103; pile[WZ3]=jvj+228; 
(*f[58])( );     /*TRI3(jvj+226,jvj+227,103,jvj+228)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+229; pile[WZ4]=jvj+228; pile[WZ5]=jvj+200; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+229,jvj+228,jvj+200)*/
pile[v[22]]=jvj+198; pile[WZ1]=111; pile[WZ2]=jvj+199; 
(*f[54])( );     /*TRI1(jvj+198,111,jvj+199)*/
pile[v[22]]=jvj+199; pile[WZ1]=jvj+200; pile[WZ2]=103; pile[WZ3]=jvj+201; 
(*f[58])( );     /*TRI3(jvj+199,jvj+200,103,jvj+201)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+202; pile[WZ4]=jvj+201; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+202,jvj+201,T)*/
goto l57;
l55:pile[v[22]]=R; pile[WZ1]=T; 
(*f[255])( );     /*COPEXP0(R,T)*/
goto l57;
l58:pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+124; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(102,R,jvj+124)*/
x[jvj+36]=0 ;z[jvj+36]=0;
x[jvj+240]=x[jvj+122] ;z[jvj+240]=z[jvj+122];
l34:if((x[jvj+240]<=0)) goto l59;
x[jvj+34]=s[x[jvj+240]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+240];
pile[v[22]]=jvj+34; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+35; 
(*f[1232])( );     /*CORRECTIF0(jvj+34,BA,129,Q,jvj+35)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+35; 
(*f[522])( );     /*PLUB2(jvj+36,jvj+35)*/
x[jvj+240]=t[x[jvj+240]];
goto l34;
l60:x[jvj+122]=t[x[jvj+122]];
l59:if((x[jvj+122]<=0)) goto l24;
x[jvj+125]=s[x[jvj+122]] ;z[jvj+125]=(x[jvj+125]<=sepcte) ? x[jvj+125] : z[jvj+122];
pile[v[22]]=100; pile[WZ1]=jvj+125; pile[WZ2]=jvj+126; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(100,jvj+125,jvj+126)*/
if((x[jvj+126]!=22)) goto l60;
pile[v[22]]=111; pile[WZ2]=jvj+127; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,jvj+125,jvj+127)*/
pile[v[22]]=101; pile[WZ1]=jvj+127; pile[WZ2]=jvj+128; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+127,jvj+128)*/
V226=x[jvj+128];
if(V226!=44&&V226!=1725) goto l60;
pile[v[22]]=102; pile[WZ1]=jvj+125; pile[WZ2]=jvj+129; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(102,jvj+125,jvj+129)*/
pile[v[22]]=100; pile[WZ1]=jvj+129; pile[WZ2]=jvj+130; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(100,jvj+129,jvj+130)*/
if((x[jvj+130]!=21)) goto l60;
pile[v[22]]=103; pile[WZ1]=jvj+125; pile[WZ2]=jvj+131; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(103,jvj+125,jvj+131)*/
x[jvj+157]=x[jvj+120] ;z[jvj+157]=z[jvj+120];
x[jvj+159]=x[jvj+124] ;z[jvj+159]=z[jvj+124];
x[jvj+243]=x[jvj+36] ;z[jvj+243]=z[jvj+36];
x[jvj+161]=x[jvj+131] ;z[jvj+161]=z[jvj+131];
goto l24;
l63:x[jvj+132]=s[x[jvj+150]] ;z[jvj+132]=(x[jvj+132]<=sepcte) ? x[jvj+132] : z[jvj+150];
pile[v[22]]=jvj+132; pile[WZ1]=BA; pile[WZ2]=1881; pile[WZ3]=Q; pile[WZ4]=jvj+133; 
(*f[1232])( );     /*CORRECTIF0(jvj+132,BA,1881,Q,jvj+133)*/
pile[v[22]]=jvj+134; pile[WZ1]=jvj+133; 
(*f[68])( );     /*PLUE0(jvj+134,jvj+133)*/
x[jvj+150]=t[x[jvj+150]];
l62:if((x[jvj+150]>0)) goto l63;
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+149; pile[WZ4]=T; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+149,T)*/
pile[v[22]]=T; pile[WZ1]=107; pile[WZ2]=jvj+134; 
(*f[34])( );     /*CHGC0(T,107,jvj+134)*/
goto l80;
l65:if(NY!=incon) goto l66;
l75:if(x[jvj+157]!=incon) goto l76;
l81:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=250; pile[WZ4]=T; 
(*f[181])( );     /*QUADRI2(100,20,101,250,T)*/
goto l80;
l66:if(VR!=incon) goto l67;
goto l75;
l67:if((NY==1)) goto l68;
if((NY!=2)) goto l69;
if((VR!=67)) goto l69;
pile[v[22]]=jvj+26; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+140; 
(*f[1232])( );     /*CORRECTIF0(jvj+26,BA,129,Q,jvj+140)*/
pile[v[22]]=jvj+140; pile[WZ1]=jvj+141; 
(*f[255])( );     /*COPEXP0(jvj+140,jvj+141)*/
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+142; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(102,R,jvj+142)*/
pile[v[22]]=jvj+142; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+143; 
(*f[1232])( );     /*CORRECTIF0(jvj+142,BA,129,Q,jvj+143)*/
pile[v[22]]=jvj+143; pile[WZ1]=jvj+144; 
(*f[255])( );     /*COPEXP0(jvj+143,jvj+144)*/
pile[v[22]]=103; pile[WZ1]=R; pile[WZ2]=jvj+145; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(103,R,jvj+145)*/
pile[v[22]]=jvj+145; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+146; 
(*f[1232])( );     /*CORRECTIF0(jvj+145,BA,129,Q,jvj+146)*/
pile[v[22]]=jvj+146; pile[WZ1]=jvj+147; 
(*f[255])( );     /*COPEXP0(jvj+146,jvj+147)*/
pile[v[22]]=jvj+141; pile[WZ1]=111; pile[WZ2]=jvj+204; 
(*f[54])( );     /*TRI1(jvj+141,111,jvj+204)*/
pile[v[22]]=jvj+204; pile[WZ1]=jvj+147; pile[WZ2]=103; pile[WZ3]=jvj+205; 
(*f[58])( );     /*TRI3(jvj+204,jvj+147,103,jvj+205)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+144; pile[WZ4]=jvj+205; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+144,jvj+205,T)*/
goto l80;
l68:if((VR!=67)) goto l69;
pile[v[22]]=jvj+26; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+135; 
(*f[1232])( );     /*CORRECTIF0(jvj+26,BA,129,Q,jvj+135)*/
pile[v[22]]=jvj+135; pile[WZ1]=jvj+136; 
(*f[255])( );     /*COPEXP0(jvj+135,jvj+136)*/
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+137; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(102,R,jvj+137)*/
pile[v[22]]=jvj+137; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+138; 
(*f[1232])( );     /*CORRECTIF0(jvj+137,BA,129,Q,jvj+138)*/
pile[v[22]]=jvj+138; pile[WZ1]=jvj+139; 
(*f[255])( );     /*COPEXP0(jvj+138,jvj+139)*/
pile[v[22]]=jvj+136; pile[WZ1]=111; pile[WZ2]=jvj+203; 
(*f[54])( );     /*TRI1(jvj+136,111,jvj+203)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+139; pile[WZ4]=jvj+203; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+139,jvj+203,T)*/
goto l80;
l69:if((VR!=68)) goto l75;
if((NY!=0)) goto l75;
pile[v[22]]=jvj+26; pile[WZ1]=BA; pile[WZ2]=129; pile[WZ3]=Q; pile[WZ4]=jvj+148; 
(*f[1232])( );     /*CORRECTIF0(jvj+26,BA,129,Q,jvj+148)*/
pile[v[22]]=jvj+148; pile[WZ1]=jvj+149; 
(*f[255])( );     /*COPEXP0(jvj+148,jvj+149)*/
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+150; 
(*f[33])( );     /*FNDE0(107,R,jvj+150)*/
x[jvj+134]=0 ;z[jvj+134]=0;
goto l62;
l71:x[jvj+151]=s[x[jvj+241]] ;z[jvj+151]=(x[jvj+151]<=sepcte) ? x[jvj+151] : z[jvj+241];
pile[v[22]]=jvj+151; pile[WZ1]=jvj+152; 
(*f[255])( );     /*COPEXP0(jvj+151,jvj+152)*/
pile[v[22]]=jvj+153; 
(*f[68])( );     /*PLUE0(jvj+153,jvj+152)*/
x[jvj+241]=t[x[jvj+241]];
l70:if((x[jvj+241]>0)) goto l71;
pile[v[22]]=jvj+161; pile[WZ1]=jvj+162; 
(*f[255])( );     /*COPEXP0(jvj+161,jvj+162)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=1698; pile[WZ4]=jvj+210; 
(*f[181])( );     /*QUADRI2(100,20,101,1698,jvj+210)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=E1; pile[WZ4]=jvj+214; 
(*f[270])( );     /*QUADRI7(100,21,140,E1,jvj+214)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=156; pile[WZ4]=jvj+231; 
(*f[181])( );     /*QUADRI2(100,20,101,156,jvj+231)*/
pile[v[22]]=jvj+231; pile[WZ1]=111; pile[WZ2]=jvj+232; 
(*f[54])( );     /*TRI1(jvj+231,111,jvj+232)*/
pile[v[22]]=jvj+232; pile[WZ1]=jvj+153; pile[WZ2]=107; pile[WZ3]=jvj+233; 
(*f[301])( );     /*TRI11(jvj+232,jvj+153,107,jvj+233)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+160; pile[WZ4]=jvj+233; pile[WZ5]=jvj+212; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+160,jvj+233,jvj+212)*/
pile[v[22]]=jvj+210; pile[WZ1]=111; pile[WZ2]=jvj+211; 
(*f[54])( );     /*TRI1(jvj+210,111,jvj+211)*/
pile[v[22]]=jvj+211; pile[WZ1]=jvj+212; pile[WZ2]=103; pile[WZ3]=jvj+213; 
(*f[58])( );     /*TRI3(jvj+211,jvj+212,103,jvj+213)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+214; pile[WZ4]=jvj+213; pile[WZ5]=jvj+164; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+214,jvj+213,jvj+164)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+215; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+215)*/
pile[WZ3]=74; pile[WZ4]=jvj+234; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+234)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=E1; pile[WZ4]=jvj+236; 
(*f[270])( );     /*QUADRI7(100,21,140,E1,jvj+236)*/
pile[v[22]]=jvj+234; pile[WZ1]=111; pile[WZ2]=jvj+235; 
(*f[54])( );     /*TRI1(jvj+234,111,jvj+235)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+236; pile[WZ4]=jvj+235; pile[WZ5]=jvj+219; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+236,jvj+235,jvj+219)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=74; pile[WZ4]=jvj+237; 
(*f[181])( );     /*QUADRI2(100,20,101,74,jvj+237)*/
pile[v[22]]=jvj+237; pile[WZ1]=111; pile[WZ2]=jvj+238; 
(*f[54])( );     /*TRI1(jvj+237,111,jvj+238)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+162; pile[WZ4]=jvj+238; pile[WZ5]=jvj+217; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+162,jvj+238,jvj+217)*/
pile[v[22]]=jvj+215; pile[WZ1]=111; pile[WZ2]=jvj+216; 
(*f[54])( );     /*TRI1(jvj+215,111,jvj+216)*/
pile[v[22]]=jvj+216; pile[WZ1]=jvj+217; pile[WZ2]=103; pile[WZ3]=jvj+218; 
(*f[58])( );     /*TRI3(jvj+216,jvj+217,103,jvj+218)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+219; pile[WZ4]=jvj+218; pile[WZ5]=jvj+165; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+219,jvj+218,jvj+165)*/
pile[v[22]]=jvj+163; pile[WZ1]=BA; pile[WZ2]=228; 
(*f[1493])( );     /*NATFNA0(jvj+163,BA,228)*/
pile[v[22]]=jvj+164; pile[WZ2]=865; 
(*f[1493])( );     /*NATFNA0(jvj+164,BA,865)*/
pile[v[22]]=jvj+165; 
(*f[1493])( );     /*NATFNA0(jvj+165,BA,865)*/
x[T]=x[jvj+163] ;z[T]=z[jvj+163];
pile[v[22]]=1260; pile[WZ2]=jvj+154; 
(*f[33])( );     /*FNDE0(1260,BA,jvj+154)*/
l72:if((x[jvj+154]>0)) goto l73;
pile[v[22]]=BA; pile[WZ1]=jvj+164; pile[WZ2]=Q; 
(*f[1495])( );     /*TRADRIFA0(BA,jvj+164,Q)*/
pile[WZ1]=jvj+165; 
(*f[1495])( );     /*TRADRIFA0(BA,jvj+165,Q)*/
goto l80;
l73:x[jvj+155]=s[x[jvj+154]] ;z[jvj+155]=(x[jvj+155]<=sepcte) ? x[jvj+155] : z[jvj+154];
pile[v[22]]=jvj+155; 
(*f[1494])( );     /*FNDEXPR0(jvj+155)*/
x[jvj+154]=t[x[jvj+154]];
goto l72;
l74:if(x[T]==incon) goto l81;
goto l80;
l76:if(x[jvj+159]!=incon) goto l77;
goto l81;
l77:if(x[jvj+243]!=incon) goto l78;
goto l81;
l78:if(x[jvj+161]!=incon) goto l79;
goto l81;
l79:pile[v[22]]=218; pile[WZ1]=BA; pile[WZ2]=jvj+156; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(218,BA,jvj+156)*/
pile[v[22]]=145; pile[WZ1]=jvj+157; pile[WZ2]=jvj+158; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(145,jvj+157,jvj+158)*/
pile[v[22]]=jvj+156; 
(*f[1239])( );if(v[102]) goto l81;     /*NOUVAR0(jvj+156,E1)*/
E1=pile[WZ1]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+158; pile[WZ4]=jvj+206; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+158,jvj+206)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=E1; pile[WZ4]=jvj+208; 
(*f[270])( );     /*QUADRI7(100,21,140,E1,jvj+208)*/
pile[v[22]]=jvj+206; pile[WZ1]=111; pile[WZ2]=jvj+207; 
(*f[54])( );     /*TRI1(jvj+206,111,jvj+207)*/
pile[v[22]]=jvj+208; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+209; 
(*f[298])( );     /*TRIENS1(jvj+208,(-20),jvj+207,107,jvj+209)*/
pile[v[22]]=jvj+209; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+163; 
(*f[58])( );     /*TRI3(jvj+209,22,100,jvj+163)*/
pile[v[22]]=jvj+159; pile[WZ1]=jvj+160; 
(*f[255])( );     /*COPEXP0(jvj+159,jvj+160)*/
x[jvj+153]=0 ;z[jvj+153]=0;
x[jvj+241]=x[jvj+243] ;z[jvj+241]=z[jvj+243];
goto l70;
l82:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+39; pile[WZ4]=jvj+166; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+39,jvj+166)*/
pile[WZ1]=73; pile[WZ2]=111; pile[WZ3]=jvj+166; pile[WZ4]=T; 
(*f[181])( );     /*QUADRI2(100,73,111,jvj+166,T)*/
goto l57;
l84:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+2; pile[WZ4]=jvj+188; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+2,jvj+188)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+188; pile[WZ4]=T; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+188,T)*/
pile[v[22]]=436; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(436,R,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=T; pile[WZ1]=436; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(T,436,jvj+19)*/
l50:pile[v[22]]=T; pile[WZ1]=107; pile[WZ2]=jvj+17; 
(*f[34])( );     /*CHGC0(T,107,jvj+17)*/
goto l57;
l85:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=278; pile[WZ4]=jvj+193; 
(*f[181])( );     /*QUADRI2(100,20,101,278,jvj+193)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=V222; pile[WZ4]=jvj+197; 
(*f[270])( );     /*QUADRI7(100,21,140,V222,jvj+197)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+223; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+223)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+223; pile[WZ4]=jvj+220; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+223,jvj+220)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=653; pile[WZ4]=jvj+224; 
(*f[181])( );     /*QUADRI2(100,20,101,653,jvj+224)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+224; pile[WZ4]=jvj+222; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+224,jvj+222)*/
pile[v[22]]=jvj+220; pile[WZ1]=111; pile[WZ2]=jvj+221; 
(*f[54])( );     /*TRI1(jvj+220,111,jvj+221)*/
pile[v[22]]=100; pile[WZ1]=484; pile[WZ2]=102; pile[WZ3]=jvj+222; pile[WZ4]=jvj+221; pile[WZ5]=jvj+195; 
(*f[269])( );     /*QUADRI6(100,484,102,jvj+222,jvj+221,jvj+195)*/
pile[v[22]]=jvj+193; pile[WZ1]=111; pile[WZ2]=jvj+194; 
(*f[54])( );     /*TRI1(jvj+193,111,jvj+194)*/
pile[v[22]]=jvj+194; pile[WZ1]=jvj+195; pile[WZ2]=103; pile[WZ3]=jvj+196; 
(*f[58])( );     /*TRI3(jvj+194,jvj+195,103,jvj+196)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+197; pile[WZ4]=jvj+196; pile[WZ5]=T; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+197,jvj+196,T)*/
goto l57;
}
