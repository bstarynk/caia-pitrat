#include "dx.h"
void SUP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V1=0,V29=0,V30=0,V76=0,V79=0,V77=0,V14=0,V24=0,V60=0,V71=0,V59=0,V41=0,V96=0,V95=0,V111=0,V112=0,V118=0,V119=0,V114=0,V121=0,V122=0,V116=0,V117=0,V57=0,V123=0,V120=0,V124=0,V125=0,V131=0,V132=0,V127=0,V134=0,V135=0,V129=0,V130=0,V39=0,V136=0,V133=0;
int A;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=10123;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1160&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
A=pile[v[22]]; v[22]+=2; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(111,A,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=586)) goto l22;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,A,jvj+4)*/
pile[v[22]]=130; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(130,jvj+4,R)*/
R=pile[WZ2]; 
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+21]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+21];
pile[v[22]]=jvj+2; 
(*f[1160])( );if(v[102]) goto l3;     /*SUP0(jvj+2,V3)*/
V3=pile[WZ1]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V3; 
(*f[186])( );     /*BTC0(jvj+3,117,V3)*/
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+3,V1)*/
V1=pile[WZ2]; 
R=V1;
goto l23;
l7:x[jvj+8]=s[x[jvj+24]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+24];
pile[v[22]]=jvj+8; 
(*f[1160])( );if(v[102]) goto l20;     /*SUP0(jvj+8,V76)*/
V76=pile[WZ1]; 
if((V76<0)) goto l20;
x[jvj+24]=t[x[jvj+24]];
l6:if((x[jvj+24]>0)) goto l7;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(1,117,jvj+10)*/
l8:if((x[jvj+22]>0)) goto l9;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+10,V77)*/
V77=pile[WZ2]; 
R=V77;
goto l23;
l9:x[jvj+9]=s[x[jvj+22]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+22];
pile[v[22]]=jvj+9; 
(*f[1160])( );if(v[102]) goto l10;     /*SUP0(jvj+9,V79)*/
V79=pile[WZ1]; 
pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=V79; 
(*f[818])( );     /*MTC0(jvj+10,117,V79)*/
l10:x[jvj+22]=t[x[jvj+22]];
goto l8;
l11:pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+4,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]==52)) goto l12;
if((x[jvj+14]==596)) goto l13;
if((x[jvj+14]==485)) goto l19;
if((x[jvj+14]!=486)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+22)*/
x[jvj+24]=x[jvj+22] ;z[jvj+24]=z[jvj+22];
goto l6;
l12:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+4,jvj+15)*/
pile[v[22]]=jvj+15; 
(*f[1161])( );if(v[102]) goto l20;     /*INF0(jvj+15,V14)*/
V14=pile[WZ1]; 
V24=(-V14);
R=V24;
goto l23;
l13:pile[v[22]]=102; pile[WZ1]=jvj+4; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(102,jvj+4,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+16,V60)*/
V60=pile[WZ2]; 
if((V60>=0)) goto l16;
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(103,jvj+4,jvj+17)*/
pile[v[22]]=130; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(130,jvj+17,V71)*/
V71=pile[WZ2]; 
V111=1;
V112=2;
if((V112>0)) goto l24;
l31:V124=0;
V125=2;
if((V125>0)) goto l32;
l16:pile[v[22]]=jvj+16; pile[WZ1]=jvj+18; 
(*f[1352])( );     /*POSITIF0(jvj+16,jvj+18)*/
if((x[jvj+18]==135)) goto l17;
l20:pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+4,jvj+23)*/
if((x[jvj+23]!=484)) goto l22;
V29=(-999999);
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; 
(*f[200])( );if(v[102]) goto l21;     /*NDD0(jvj+4,jvj+5)*/
pile[v[22]]=1395; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1395,jvj+5,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l21;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+7,V30)*/
V30=pile[WZ2]; 
if(V30>V29) V29=V30;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l14:pile[v[22]]=jvj+17; 
(*f[1161])( );if(v[102]) goto l31;     /*INF0(jvj+17,V59)*/
V59=pile[WZ1]; 
pile[v[22]]=V59; pile[WZ1]=V60; 
(*f[1006])( );if(v[102]) goto l31;     /*POWER0(V59,V60,R)*/
R=pile[WZ2]; 
goto l23;
l15:pile[v[22]]=jvj+17; 
(*f[1160])( );if(v[102]) goto l16;     /*SUP0(jvj+17,V41)*/
V41=pile[WZ1]; 
pile[v[22]]=V41; pile[WZ1]=V60; 
(*f[1006])( );if(v[102]) goto l16;     /*POWER0(V41,V60,R)*/
R=pile[WZ2]; 
goto l23;
l17:pile[v[22]]=jvj+16; 
(*f[1160])( );if(v[102]) goto l20;     /*SUP0(jvj+16,V96)*/
V96=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=jvj+4; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(103,jvj+4,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[1352])( );     /*POSITIF0(jvj+19,jvj+20)*/
if((x[jvj+20]==135)) goto l18;
goto l20;
l18:pile[v[22]]=jvj+19; 
(*f[1160])( );if(v[102]) goto l20;     /*SUP0(jvj+19,V95)*/
V95=pile[WZ1]; 
pile[v[22]]=V95; pile[WZ1]=V96; 
(*f[1006])( );if(v[102]) goto l20;     /*POWER0(V95,V96,R)*/
R=pile[WZ2]; 
goto l23;
l19:pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+21)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
goto l1;
l21:if((V29==(-999999))) goto l22;
R=V29;
goto l23;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l24:V118=V71%V112;
V119=V118;
if((V119<0)) goto l30;
V114=V119;
l25:V121=V111%V112;
V122=V121;
if((V122<0)) goto l29;
V116=V122;
l26:V117=incon;
if((V114==V116)) goto l28;
V117=134;
l27:V57=V117;
if((V57==135)) goto l14;
goto l31;
l28:V117=135;
goto l27;
l29:V123=V122+V112;
V116=V123;
goto l26;
l30:V120=V119+V112;
V114=V120;
goto l25;
l32:V131=V71%V125;
V132=V131;
if((V132<0)) goto l38;
V127=V132;
l33:V134=V124%V125;
V135=V134;
if((V135<0)) goto l37;
V129=V135;
l34:V130=incon;
if((V127==V129)) goto l36;
V130=134;
l35:V39=V130;
if((V39==135)) goto l15;
goto l16;
l36:V130=135;
goto l35;
l37:V136=V135+V125;
V129=V136;
goto l34;
l38:V133=V132+V125;
V127=V133;
goto l33;
}
