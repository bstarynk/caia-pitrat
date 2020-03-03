#include "dx.h"
void SEGT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V69=0,V26=0,V=0,V31=0,V32=0,V34=0,V53=0,V51=0,V52=0,V54=0,V56=0,V58=0,V39=0,V42=0,V37=0,V45=0,V65=0,V67=0,V60=0,V62=0,V64=0,V66=0,V48=0,V50=0,V78=0,V77=0,V80=0,V7=0,V79=0,V82=0,V81=0,V84=0,V8=0,V83=0;
int BL;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11880;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1420&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+19; 
(*f[54])( );     /*TRI1(250,158,jvj+19)*/
pile[v[22]]=BL; 
(*f[302])( );if(v[102]) goto l19;     /*NBT0(BL,V31)*/
V31=pile[WZ1]; 
pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(565,BL,jvj+24)*/
for(i=x[jvj+24],V32=0;i>0;i=t[i],V32++)  ;
pile[v[22]]=184; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(184,BL,jvj+25)*/
for(i=x[jvj+25],V34=0;i>0;i=t[i],V34++)  ;
V53=x[BL];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V53; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V53,V51,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V34; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(41,V34,V52,V54)*/
V54=pile[WZ3]; 
pile[WZ1]=V32; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(41,V32,V54,V56)*/
V56=pile[WZ3]; 
pile[WZ1]=V31; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,V31,V56,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=V58; 
(*f[40])( );     /*SLG0(V58)*/
l19:pile[v[22]]=565; pile[WZ1]=BL; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(565,BL,jvj+26)*/
l20:if((x[jvj+26]>0)) goto l21;
pile[v[22]]=1913; pile[WZ1]=BL; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(1913,BL,jvj+30)*/
(*f[71])( );     /*ENLV0(1913,BL)*/
pile[v[22]]=258; pile[WZ1]=jvj+19; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(258,jvj+19,jvj+31)*/
l27:if((x[jvj+31]>0)) goto l28;
pile[v[22]]=258; pile[WZ1]=jvj+19; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(258,jvj+19,jvj+36)*/
pile[v[22]]=BL; 
(*f[302])( );if(v[102]) goto l32;     /*NBT0(BL,V48)*/
V48=pile[WZ1]; 
if((V48>3000)) goto l30;
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:x[jvj+12]=0 ;z[jvj+12]=0;
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(147,BL,jvj+10)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+11; 
(*f[938])( );     /*USE0(jvj+2,jvj+11)*/
V69=x[jvj+10];
l5:if((V69>0)) goto l6;
x[jvj+18]=0 ;z[jvj+18]=0;
pile[v[22]]=105; pile[WZ1]=jvj+2; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(105,jvj+2,jvj+13)*/
x[jvj+41]=x[jvj+13] ;z[jvj+41]=z[jvj+13];
l9:if((x[jvj+41]>0)) goto l10;
x[jvj+39]=incon;
pile[v[22]]=258; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(258,jvj+19,jvj+20)*/
x[jvj+42]=x[jvj+20] ;z[jvj+42]=z[jvj+20];
l12:if((x[jvj+42]>0)) goto l13;
pile[v[22]]=jvj+18; pile[WZ1]=223; pile[WZ2]=jvj+38; 
(*f[300])( );     /*TRI10(jvj+18,223,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=jvj+12; pile[WZ2]=222; pile[WZ3]=jvj+39; 
(*f[301])( );     /*TRI11(jvj+38,jvj+12,222,jvj+39)*/
l23:x[jvj+27]=x[jvj+39] ;z[jvj+27]=z[jvj+39];
pile[v[22]]=jvj+19; pile[WZ1]=258; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(jvj+19,258,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=184; pile[WZ2]=jvj+2; 
(*f[36])( );     /*PLUSC0(jvj+27,184,jvj+2)*/
l22:x[jvj+26]=t[x[jvj+26]];
goto l20;
l6:V2=s[V69];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V2) goto l8;
l7:V69=t[V69];
goto l5;
l8:pile[v[22]]=jvj+12; pile[WZ1]=V2; 
(*f[331])( );     /*PLUE3(jvj+12,V2)*/
goto l7;
l10:x[jvj+14]=s[x[jvj+41]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+41];
pile[v[22]]=111; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(111,jvj+14,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=82)) goto l11;
pile[v[22]]=436; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,jvj+14,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+17,V26)*/
V26=pile[WZ2]; 
V=V26;
pile[v[22]]=jvj+18; pile[WZ1]=V; 
(*f[331])( );     /*PLUE3(jvj+18,V)*/
l11:x[jvj+41]=t[x[jvj+41]];
goto l9;
l13:x[jvj+21]=s[x[jvj+42]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+42];
pile[v[22]]=222; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(222,jvj+21,jvj+22)*/
for(i=x[jvj+22],V78=0;i>0;i=t[i],V78++)  ;
for(i=x[jvj+12],V77=0;i>0;i=t[i],V77++)  ;
if((V78!=V77)) goto l34;
V80=x[jvj+22];
l33:if((V80>0)) goto l36;
V7=135;
l15:if((V7==135)) goto l16;
l14:x[jvj+42]=t[x[jvj+42]];
goto l12;
l16:pile[v[22]]=223; pile[WZ1]=jvj+21; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(223,jvj+21,jvj+23)*/
for(i=x[jvj+23],V82=0;i>0;i=t[i],V82++)  ;
for(i=x[jvj+18],V81=0;i>0;i=t[i],V81++)  ;
if((V82!=V81)) goto l38;
V84=x[jvj+23];
l37:if((V84>0)) goto l40;
V8=135;
l17:if((V8==135)) goto l18;
goto l14;
l18:x[jvj+39]=x[jvj+21] ;z[jvj+39]=z[jvj+21];
goto l23;
l21:x[jvj+2]=s[x[jvj+26]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+26];
pile[v[22]]=337; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(337,jvj+2,jvj+8)*/
pile[v[22]]=101; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+8,jvj+9)*/
if(x[jvj+9]==239||x[jvj+9]==229) goto l22;
l1:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+2,jvj+3)*/
if((x[jvj+3]!=42)) goto l4;
pile[v[22]]=107; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(107,jvj+2,jvj+4)*/
x[jvj+40]=x[jvj+4] ;z[jvj+40]=z[jvj+4];
l2:if((x[jvj+40]<=0)) goto l4;
x[jvj+5]=s[x[jvj+40]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+40];
pile[v[22]]=111; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+5,jvj+6)*/
pile[v[22]]=101; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+6,jvj+7)*/
if((x[jvj+7]==178)) goto l22;
l3:x[jvj+40]=t[x[jvj+40]];
goto l2;
l25:x[jvj+28]=s[x[jvj+43]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+43];
pile[v[22]]=jvj+28; 
(*f[302])( );if(v[102]) goto l26;     /*NBT0(jvj+28,V39)*/
V39=pile[WZ1]; 
pile[v[22]]=jvj+29; pile[WZ1]=117; pile[WZ2]=V39; 
(*f[186])( );     /*BTC0(jvj+29,117,V39)*/
l26:x[jvj+43]=t[x[jvj+43]];
l24:if((x[jvj+43]>0)) goto l25;
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+29,V42)*/
V42=pile[WZ2]; 
V37=V42;
for(i=x[jvj+33],V45=0;i>0;i=t[i],V45++)  ;
pile[v[22]]=223; pile[WZ1]=jvj+32; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(223,jvj+32,jvj+34)*/
pile[v[22]]=222; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(222,jvj+32,jvj+35)*/
V65=x[jvj+35];
V67=x[jvj+34];
pile[v[22]]=41; pile[WZ1]=V37; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V37,0,V60)*/
V60=pile[WZ3]; 
pile[WZ1]=V45; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(41,V45,V60,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=23; pile[WZ1]=V65; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(23,V65,V62,V64)*/
V64=pile[WZ3]; 
pile[WZ1]=V67; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(23,V67,V64,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
pile[v[22]]=jvj+32; pile[WZ1]=117; pile[WZ2]=V37; 
(*f[43])( );     /*CHGC2(jvj+32,117,V37)*/
l29:x[jvj+31]=t[x[jvj+31]];
goto l27;
l28:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=184; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(184,jvj+32,jvj+33)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(0,117,jvj+29)*/
x[jvj+43]=x[jvj+33] ;z[jvj+43]=z[jvj+33];
goto l24;
l35:V80=t[V80];
goto l33;
l36:V79=s[V80];
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V79) goto l35;
l34:V7=134;
goto l15;
l39:V84=t[V84];
goto l37;
l40:V83=s[V84];
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==V83) goto l39;
l38:V8=134;
goto l17;
l30:if((x[jvj+36]<=0)) goto l32;
x[jvj+37]=s[x[jvj+36]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+36];
pile[v[22]]=117; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(117,jvj+37,V50)*/
V50=pile[WZ2]; 
if((V50<=1500)) goto l31;
pile[v[22]]=BL; pile[WZ2]=2000; pile[WZ3]=jvj+30; 
(*f[1629])( );     /*SEGI0(BL,jvj+37,2000,jvj+30)*/
l31:x[jvj+36]=t[x[jvj+36]];
goto l30;
}
