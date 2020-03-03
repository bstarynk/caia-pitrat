#include "dx.h"
void ATOME180T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V33=0,V29=0,V30=0,V9=0,V21=0,K=0,V10=0,V90=0,V88=0,V78=0,V63=0,EA=0,V77=0,V79=0,V95=0,V96=0,V99=0,V101=0,V68=0,V73=0,V66=0,V71=0,V84=0,V85=0,V133=0,V131=0,V121=0,V106=0,EB=0,V120=0,V122=0,V138=0,V139=0,V142=0,V144=0,V111=0,V116=0,V109=0,V114=0,V127=0,V128=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=61;
x[jvj+1]=20180;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3659&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,R,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+8,jvj+9)*/
if((x[jvj+9]!=25)) goto l10;
x[jvj+10]=vo[14];z[jvj+10]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(642,jvj+10,V30)*/
V30=pile[WZ2]; 
x[jvj+11]=d[20];z[jvj+11]=0;
l5:if((x[jvj+11]<=0)) goto l10;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+12,R,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+13,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=486)) goto l6;
pile[v[22]]=107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(107,jvj+13,jvj+16)*/
for(i=x[jvj+16],V9=0;i>0;i=t[i],V9++)  ;
if((V9!=2)) goto l6;
x[jvj+60]=x[jvj+16] ;z[jvj+60]=z[jvj+16];
if((x[jvj+60]<=0)) goto l6;
x[jvj+2]=s[x[jvj+60]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+60];
pile[v[22]]=268; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+12,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+17,R,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+18,V21)*/
V21=pile[WZ2]; 
K=V21;
if((K==0)) goto l6;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(100,jvj+2,jvj+42)*/
if((x[jvj+42]!=484)) goto l26;
x[jvj+46]=0 ;z[jvj+46]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+43; 
(*f[200])( );if(v[102]) goto l16;     /*NDD0(jvj+2,jvj+43)*/
V90=abs(K);
V88=V90;
pile[v[22]]=V88; pile[WZ1]=jvj+44; 
(*f[991])( );if(v[102]) goto l16;     /*ENSFACT0(V88,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=V88; 
(*f[207])( );     /*PLUE2(jvj+44,V88)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+44,1)*/
x[jvj+50]=0 ;z[jvj+50]=0;
l12:if((x[jvj+44]>0)) goto l27;
V78=x[jvj+50];
l13:if((V78<=0)) goto l16;
V63=s[V78];
pile[v[22]]=V63; pile[WZ1]=jvj+43; pile[WZ2]=jvj+45; 
(*f[3591])( );     /*VALCOR0(V63,jvj+43,jvj+45)*/
if((x[jvj+45]==135)) goto l15;
l14:V78=t[V78];
goto l13;
l3:I=s[V33];
V29=K/I;
for(a=EB;a>0;a=t[a]) if(s[a]==V29) goto l11;
l4:V33=t[V33];
l2:if((V33>0)) goto l3;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+19; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+37; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+37)*/
pile[v[22]]=V30; pile[WZ1]=858; pile[WZ2]=jvj+33; 
(*f[46])( );     /*TRI0(V30,858,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,v[13],642,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=3659; pile[WZ2]=246; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,3659,246,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=20180; pile[WZ2]=218; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+35,20180,218,jvj+36)*/
pile[v[22]]=jvj+37; pile[WZ1]=(-20); pile[WZ2]=jvj+36; pile[WZ3]=159; pile[WZ4]=jvj+38; 
(*f[298])( );     /*TRIENS1(jvj+37,(-20),jvj+36,159,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+20; 
(*f[58])( );     /*TRI3(jvj+38,1,158,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+39; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=111; pile[WZ2]=jvj+40; 
(*f[54])( );     /*TRI1(jvj+39,111,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+19; pile[WZ2]=107; pile[WZ3]=jvj+41; 
(*f[301])( );     /*TRI11(jvj+40,jvj+19,107,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+21; 
(*f[58])( );     /*TRI3(jvj+41,22,100,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+20; 
(*f[1296])( );     /*NOUVCONTR0(jvj+21,jvj+20)*/
l9:x[jvj+61]=t[x[jvj+61]];
l8:if((x[jvj+61]<=0)) goto l6;
x[jvj+4]=s[x[jvj+61]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+61];
if((x[jvj+4]==x[jvj+2])) goto l9;
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(100,jvj+4,jvj+51)*/
if((x[jvj+51]!=484)) goto l42;
x[jvj+55]=0 ;z[jvj+55]=0;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+52; 
(*f[200])( );if(v[102]) goto l32;     /*NDD0(jvj+4,jvj+52)*/
V133=abs(K);
V131=V133;
pile[v[22]]=V131; pile[WZ1]=jvj+53; 
(*f[991])( );if(v[102]) goto l32;     /*ENSFACT0(V131,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=V131; 
(*f[207])( );     /*PLUE2(jvj+53,V131)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+53,1)*/
x[jvj+59]=0 ;z[jvj+59]=0;
l28:if((x[jvj+53]>0)) goto l43;
V121=x[jvj+59];
l29:if((V121<=0)) goto l32;
V106=s[V121];
pile[v[22]]=V106; pile[WZ1]=jvj+52; pile[WZ2]=jvj+54; 
(*f[3591])( );     /*VALCOR0(V106,jvj+52,jvj+54)*/
if((x[jvj+54]==135)) goto l31;
l30:V121=t[V121];
goto l29;
l6:x[jvj+11]=t[x[jvj+11]];
goto l5;
l10:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l11:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+22)*/
pile[WZ3]=25; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+25)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+3; pile[WZ4]=jvj+28; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+3,jvj+28,jvj+23)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V29; pile[WZ4]=jvj+31; 
(*f[192])( );     /*QUADRI4(100,41,130,V29,jvj+31)*/
pile[v[22]]=jvj+29; pile[WZ1]=111; pile[WZ2]=jvj+30; 
(*f[54])( );     /*TRI1(jvj+29,111,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=103; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+30,jvj+31,103,jvj+32)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+5; pile[WZ4]=jvj+32; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+5,jvj+32,jvj+24)*/
pile[WZ2]=111; pile[WZ3]=jvj+22; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+22,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+23)*/
pile[WZ2]=jvj+24; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+24)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+7)*/
goto l4;
l15:pile[v[22]]=jvj+46; pile[WZ1]=V63; 
(*f[207])( );     /*PLUE2(jvj+46,V63)*/
goto l14;
l16:EA=x[jvj+46];
l7:for(i=EA,V10=0;i>0;i=t[i],V10++)  ;
if((V10>=100)) goto l6;
x[jvj+61]=x[jvj+16] ;z[jvj+61]=z[jvj+16];
goto l8;
l17:EA=x[jvj+47];
goto l7;
l21:V95=s[x[jvj+49]];
V96=(-V95);
pile[v[22]]=jvj+48; pile[WZ1]=V96; 
(*f[207])( );     /*PLUE2(jvj+48,V96)*/
pile[WZ1]=V95; 
(*f[207])( );     /*PLUE2(jvj+48,V95)*/
x[jvj+49]=t[x[jvj+49]];
l20:if((x[jvj+49]>0)) goto l21;
V79=x[jvj+48];
l18:if((V79<=0)) goto l17;
V77=s[V79];
if((V77<V68)) goto l19;
if((V77>V66)) goto l19;
pile[v[22]]=jvj+47; pile[WZ1]=V77; 
(*f[207])( );     /*PLUE2(jvj+47,V77)*/
l19:V79=t[V79];
goto l18;
l23:V68=(-99999999);
l22:x[jvj+47]=0 ;z[jvj+47]=0;
V101=abs(K);
V99=V101;
pile[v[22]]=V99; pile[WZ1]=jvj+49; 
(*f[991])( );if(v[102]) goto l17;     /*ENSFACT0(V99,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=V99; 
(*f[207])( );     /*PLUE2(jvj+49,V99)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+49,1)*/
x[jvj+48]=0 ;z[jvj+48]=0;
goto l20;
l25:V66=99999999;
l24:V68=incon;
pile[v[22]]=jvj+2; 
(*f[1161])( );if(v[102]) goto l23;     /*INF0(jvj+2,V73)*/
V73=pile[WZ1]; 
V68=V73;
goto l22;
l26:V66=incon;
pile[v[22]]=jvj+2; 
(*f[1160])( );if(v[102]) goto l25;     /*SUP0(jvj+2,V71)*/
V71=pile[WZ1]; 
V66=V71;
goto l24;
l27:V84=s[x[jvj+44]];
V85=(-V84);
pile[v[22]]=jvj+50; pile[WZ1]=V85; 
(*f[207])( );     /*PLUE2(jvj+50,V85)*/
pile[WZ1]=V84; 
(*f[207])( );     /*PLUE2(jvj+50,V84)*/
x[jvj+44]=t[x[jvj+44]];
goto l12;
l31:pile[v[22]]=jvj+55; pile[WZ1]=V106; 
(*f[207])( );     /*PLUE2(jvj+55,V106)*/
goto l30;
l32:EB=x[jvj+55];
l1:x[jvj+6]=0 ;z[jvj+6]=0;
pile[v[22]]=jvj+2; pile[WZ1]=jvj+3; 
(*f[255])( );     /*COPEXP0(jvj+2,jvj+3)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[255])( );     /*COPEXP0(jvj+4,jvj+5)*/
V33=EA;
goto l2;
l33:EB=x[jvj+56];
goto l1;
l37:V138=s[x[jvj+58]];
V139=(-V138);
pile[v[22]]=jvj+57; pile[WZ1]=V139; 
(*f[207])( );     /*PLUE2(jvj+57,V139)*/
pile[WZ1]=V138; 
(*f[207])( );     /*PLUE2(jvj+57,V138)*/
x[jvj+58]=t[x[jvj+58]];
l36:if((x[jvj+58]>0)) goto l37;
V122=x[jvj+57];
l34:if((V122<=0)) goto l33;
V120=s[V122];
if((V120<V111)) goto l35;
if((V120>V109)) goto l35;
pile[v[22]]=jvj+56; pile[WZ1]=V120; 
(*f[207])( );     /*PLUE2(jvj+56,V120)*/
l35:V122=t[V122];
goto l34;
l39:V111=(-99999999);
l38:x[jvj+56]=0 ;z[jvj+56]=0;
V144=abs(K);
V142=V144;
pile[v[22]]=V142; pile[WZ1]=jvj+58; 
(*f[991])( );if(v[102]) goto l33;     /*ENSFACT0(V142,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=V142; 
(*f[207])( );     /*PLUE2(jvj+58,V142)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+58,1)*/
x[jvj+57]=0 ;z[jvj+57]=0;
goto l36;
l41:V109=99999999;
l40:V111=incon;
pile[v[22]]=jvj+4; 
(*f[1161])( );if(v[102]) goto l39;     /*INF0(jvj+4,V116)*/
V116=pile[WZ1]; 
V111=V116;
goto l38;
l42:V109=incon;
pile[v[22]]=jvj+4; 
(*f[1160])( );if(v[102]) goto l41;     /*SUP0(jvj+4,V114)*/
V114=pile[WZ1]; 
V109=V114;
goto l40;
l43:V127=s[x[jvj+53]];
V128=(-V127);
pile[v[22]]=jvj+59; pile[WZ1]=V128; 
(*f[207])( );     /*PLUE2(jvj+59,V128)*/
pile[WZ1]=V127; 
(*f[207])( );     /*PLUE2(jvj+59,V127)*/
x[jvj+53]=t[x[jvj+53]];
goto l28;
}
