#include "dx.h"
void VALFACT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RT=0,HH=0,V14=0,V9=0,V2=0,T=0,TT=0,V4=0,V11=0,V51=0,V48=0,V49=0,V70=0,V40=0,V42=0,V36=0,V56=0,V58=0,V68=0,V90=0,V87=0,V88=0,V109=0,V79=0,V81=0,V75=0,V95=0,V97=0,V107=0;
int X,ES,P;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=42;
if(v[0]>99700) (*f[6])( );

X=pile[v[22]]; ES=pile[v[22]+1]; P=pile[v[22]+2]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(111,X,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]!=486)) goto l30;
pile[v[22]]=107; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(107,X,jvj+5)*/
x[jvj+1]=0 ;z[jvj+1]=0;
l1:if((x[jvj+5]>0)) goto l2;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+2; 
(*f[46])( );     /*TRI0(0,117,jvj+2)*/
V14=x[jvj+1];
l4:if((V14>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,jvj+2,V2)*/
V2=pile[WZ2]; 
V4=incon;
if((V2==0)) goto l8;
if((V2>0)) goto l7;
l11:V4=V2;
l12:R=V4;
l13:v[0]=jvj; v[22]-=4; pile[v[22]+3]=R; return;
l2:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=100; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,jvj+6,jvj+7)*/
if((x[jvj+7]!=484)) goto l27;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; 
(*f[200])( );if(v[102]) goto l27;     /*NDD0(jvj+6,jvj+8)*/
pile[v[22]]=1310; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1310,jvj+8,jvj+9)*/
l14:if((x[jvj+9]>0)) goto l17;
pile[v[22]]=1287; pile[WZ1]=jvj+8; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1287,jvj+8,jvj+10)*/
if((x[jvj+10]==0)) goto l27;
pile[v[22]]=1310; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1310,jvj+8,jvj+11)*/
l15:if((x[jvj+11]>0)) goto l29;
RT=0;
l3:pile[v[22]]=jvj+1; pile[WZ1]=RT; 
(*f[978])( );     /*PLUB3(jvj+1,RT)*/
x[jvj+5]=t[x[jvj+5]];
goto l1;
l5:HH=s[V14];
if((HH==999)) goto l6;
V9=abs(HH);
pile[v[22]]=jvj+2; pile[WZ1]=117; pile[WZ2]=V9; 
(*f[186])( );     /*BTC0(jvj+2,117,V9)*/
l6:V14=t[V14];
goto l4;
l8:TT=999;
for(a=x[jvj+1];a>0;a=t[a]) if(s[a]==TT) goto l9;
goto l11;
l9:V4=999;
goto l12;
l10:V11=(-V2);
V4=V11;
goto l12;
l16:x[jvj+9]=t[x[jvj+9]];
goto l14;
l17:x[jvj+12]=s[x[jvj+9]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+9];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(117,jvj+12,V48)*/
V48=pile[WZ2]; 
if((V48!=P)) goto l16;
pile[v[22]]=195; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(195,jvj+12,jvj+13)*/
for(i=x[jvj+13],V49=0;i>0;i=t[i],V49++)  ;
if((V49!=1)) goto l16;
V70=x[jvj+13];
if((V70<=0)) goto l16;
V51=s[V70];
RT=V51;
goto l3;
l19:V40=0;
l18:RT=V40;
goto l3;
l21:x[jvj+15]=t[x[jvj+15]];
l20:if((x[jvj+15]<=0)) goto l19;
x[jvj+14]=s[x[jvj+15]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+15];
pile[v[22]]=510; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(510,jvj+14,V42)*/
V42=pile[WZ2]; 
if((V42!=P)) goto l21;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(515,jvj+14,V40)*/
V40=pile[WZ2]; 
goto l18;
l22:x[jvj+41]=x[ES] ;z[jvj+41]=z[ES];
l23:if((x[jvj+41]>0)) goto l24;
RT=999;
goto l3;
l24:x[jvj+16]=s[x[jvj+41]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=1280)) goto l25;
pile[v[22]]=103; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(103,jvj+16,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+19,V56)*/
V56=pile[WZ2]; 
if((P!=V56)) goto l25;
pile[v[22]]=160; pile[WZ1]=jvj+16; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(160,jvj+16,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(130,jvj+20,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+16; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(102,jvj+16,jvj+21)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[760])( );     /*MEMEX0(jvj+6,jvj+21,jvj+22)*/
if((x[jvj+22]==135)) goto l26;
l25:x[jvj+41]=t[x[jvj+41]];
goto l23;
l26:RT=V58;
goto l3;
l27:pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(130,jvj+6,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=V36; pile[WZ1]=jvj+15; 
(*f[1007])( );if(v[102]) goto l22;     /*DECFACTPREM0(V36,jvj+15)*/
V40=incon;
goto l20;
l29:x[jvj+23]=s[x[jvj+11]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+11];
pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(117,jvj+23,V68)*/
V68=pile[WZ2]; 
if((V68==P)) goto l27;
l28:x[jvj+11]=t[x[jvj+11]];
goto l15;
l30:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l44;     /*FNDO0(100,X,jvj+24)*/
if((x[jvj+24]!=484)) goto l44;
pile[v[22]]=X; pile[WZ1]=jvj+25; 
(*f[200])( );if(v[102]) goto l44;     /*NDD0(X,jvj+25)*/
pile[v[22]]=1310; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1310,jvj+25,jvj+26)*/
l31:if((x[jvj+26]>0)) goto l34;
pile[v[22]]=1287; pile[WZ1]=jvj+25; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(1287,jvj+25,jvj+27)*/
if((x[jvj+27]==0)) goto l44;
pile[v[22]]=1310; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(1310,jvj+25,jvj+28)*/
l32:if((x[jvj+28]>0)) goto l46;
R=0;
goto l13;
l33:x[jvj+26]=t[x[jvj+26]];
goto l31;
l34:x[jvj+29]=s[x[jvj+26]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+26];
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(117,jvj+29,V87)*/
V87=pile[WZ2]; 
if((V87!=P)) goto l33;
pile[v[22]]=195; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(195,jvj+29,jvj+30)*/
for(i=x[jvj+30],V88=0;i>0;i=t[i],V88++)  ;
if((V88!=1)) goto l33;
V109=x[jvj+30];
if((V109<=0)) goto l33;
V90=s[V109];
R=V90;
goto l13;
l36:V79=0;
l35:R=V79;
goto l13;
l38:x[jvj+32]=t[x[jvj+32]];
l37:if((x[jvj+32]<=0)) goto l36;
x[jvj+31]=s[x[jvj+32]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+32];
pile[v[22]]=510; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(510,jvj+31,V81)*/
V81=pile[WZ2]; 
if((V81!=P)) goto l38;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(515,jvj+31,V79)*/
V79=pile[WZ2]; 
goto l35;
l39:x[jvj+42]=x[ES] ;z[jvj+42]=z[ES];
l40:if((x[jvj+42]>0)) goto l41;
R=999;
goto l13;
l41:x[jvj+33]=s[x[jvj+42]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+42];
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=1280)) goto l42;
pile[v[22]]=103; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(103,jvj+33,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+36,V95)*/
V95=pile[WZ2]; 
if((P!=V95)) goto l42;
pile[v[22]]=160; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(160,jvj+33,jvj+37)*/
pile[v[22]]=130; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(130,jvj+37,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(102,jvj+33,jvj+38)*/
pile[v[22]]=X; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[760])( );     /*MEMEX0(X,jvj+38,jvj+39)*/
if((x[jvj+39]==135)) goto l43;
l42:x[jvj+42]=t[x[jvj+42]];
goto l40;
l43:R=V97;
goto l13;
l44:pile[v[22]]=130; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(130,X,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; pile[WZ1]=jvj+32; 
(*f[1007])( );if(v[102]) goto l39;     /*DECFACTPREM0(V75,jvj+32)*/
V79=incon;
goto l37;
l46:x[jvj+40]=s[x[jvj+28]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+28];
pile[v[22]]=117; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(117,jvj+40,V107)*/
V107=pile[WZ2]; 
if((V107==P)) goto l44;
l45:x[jvj+28]=t[x[jvj+28]];
goto l32;
l7:if((x[jvj+1]<=0)) goto l11;
T=s[x[jvj+1]];
if((T<0)) goto l10;
if((T==999)) goto l10;
x[jvj+1]=t[x[jvj+1]];
goto l7;
}
