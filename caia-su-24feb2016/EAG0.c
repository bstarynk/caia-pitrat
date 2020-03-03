#include "dx.h"
void EAG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V10=0,V18=0,V21=0,V9=0,V17=0,V59=0,V66=0,V78=0,V3=0,V68=0,V43=0,V88=0,V90=0,V83=0,V84=0,V85=0,V86=0,V87=0,V89=0,V42=0,V27=0,V51=0,V81=0,V101=0,V104=0,V108=0;
int L,BL;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=59;
x[jvj+1]=10113;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==373&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; BL=pile[v[22]+1]; M=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+5]=x[jvj+30]=x[jvj+24]=incon;
V21=bh[v[1]][1];
if(V21!=43&&V21!=45&&V21!=33) goto l3;
pile[v[22]]=374; pile[WZ1]=L; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(374,L,jvj+4)*/
x[M]=x[jvj+4] ;z[M]=z[jvj+4];
l4:pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(274,L,jvj+5)*/
l5:V9=bh[v[1]][1];
if(V9==43||V9==45||V9==33) goto l7;
x[jvj+2]=incon;
V10=bh[v[1]][2];
if((V10!=32)) goto l1;
pile[v[22]]=187; pile[WZ1]=240; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(187,240,jvj+54)*/
l31:if((x[jvj+54]>0)) goto l32;
l1:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+2; 
(*f[78])( );if(v[102]) goto l7;     /*SMA0(1,64,67,jvj+2)*/
l6:x[jvj+24]=x[jvj+2] ;z[jvj+24]=z[jvj+2];
l7:if((V9!=43)) goto l9;
V17=bh[v[1]][2];
if((V17==32)) goto l9;
x[jvj+3]=incon;
V18=bh[v[1]][3];
if((V18!=32)) goto l2;
pile[v[22]]=187; pile[WZ1]=240; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(187,240,jvj+56)*/
l34:if((x[jvj+56]>0)) goto l35;
l2:pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l9;     /*SMA0(1,64,67,jvj+3)*/
l8:x[jvj+30]=x[jvj+3] ;z[jvj+30]=z[jvj+3];
l9:if(x[jvj+5]!=incon) goto l10;
l13:if((V9!=45)) goto l19;
pile[v[22]]=358; pile[WZ1]=L; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(358,L,jvj+17)*/
if((V68=w[x[jvj+17]][1])==incon) goto l19;
if((V68==23)) goto l19;
pile[v[22]]=374; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(374,L,jvj+18)*/
pile[v[22]]=274; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(274,jvj+18,jvj+19)*/
z[jvj+19]=(-1);
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; 
(*f[71])( );     /*ENLV0(jvj+17,jvj+19)*/
l19:if(x[jvj+30]!=incon) goto l20;
l23:if(x[jvj+24]!=incon) goto l24;
l28:V81=bh[v[1]][1];
if(V81==43||V81==33) goto l29;
pile[v[22]]=BL; 
(*f[365])( );     /*STK0(BL)*/
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[M]=x[L] ;z[M]=z[L];
goto l4;
l10:if((V9==45)) goto l11;
if((V9!=33)) goto l12;
V78=bh[v[1]][2];
if((V78!=32)) goto l12;
pile[v[22]]=358; pile[WZ1]=L; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(358,L,jvj+9)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+10; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+10)*/
x[jvj+11]=vo[20];z[jvj+11]=vz[20];
pile[v[22]]=jvj+9; pile[WZ1]=358; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+9,358,jvj+49)*/
pile[v[22]]=158; pile[WZ1]=20; pile[WZ2]=218; pile[WZ3]=jvj+10; pile[WZ4]=jvj+49; pile[WZ5]=jvj+12; 
(*f[269])( );     /*QUADRI6(158,20,218,jvj+10,jvj+49,jvj+12)*/
pile[v[22]]=jvj+11; pile[WZ1]=443; pile[WZ2]=jvj+12; 
(*f[35])( );     /*CHGC1(jvj+11,443,jvj+12)*/
l12:V3=bh[v[1]][2];
if((V3!=32)) goto l13;
if(V9!=43&&V9!=45) goto l13;
pile[v[22]]=358; pile[WZ1]=L; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(358,L,jvj+13)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+14; 
(*f[378])( );     /*CPI0(jvj+5,jvj+14)*/
x[jvj+15]=vo[20];z[jvj+15]=vz[20];
pile[v[22]]=jvj+13; pile[WZ1]=358; pile[WZ2]=jvj+50; 
(*f[54])( );     /*TRI1(jvj+13,358,jvj+50)*/
pile[v[22]]=158; pile[WZ1]=20; pile[WZ2]=218; pile[WZ3]=jvj+14; pile[WZ4]=jvj+50; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(158,20,218,jvj+14,jvj+50,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=443; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+15,443,jvj+16)*/
goto l13;
l11:pile[v[22]]=358; pile[WZ1]=L; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(358,L,jvj+6)*/
if((V59=w[x[jvj+6]][1])==incon) goto l12;
if((V59!=23)) goto l12;
pile[v[22]]=374; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(374,L,jvj+7)*/
pile[v[22]]=274; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(274,jvj+7,jvj+8)*/
V66=x[jvj+5];
z[jvj+8]=(-1);
pile[v[22]]=jvj+6; pile[WZ1]=jvj+8; pile[WZ2]=V66; 
(*f[134])( );     /*OTA0(jvj+6,jvj+8,V66)*/
goto l12;
l15:if((V42<4)) goto l16;
goto l28;
l16:x[jvj+26]=vo[20];z[jvj+26]=vz[20];
pile[v[22]]=443; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(443,jvj+26,jvj+27)*/
pile[v[22]]=358; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(358,jvj+27,jvj+28)*/
V88=x[jvj+28];
V90=x[jvj+24];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V83; pile[WZ2]=10113; 
(*f[98])( );     /*SRA3(135,V83,10113,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V84,125,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=V85; pile[WZ1]=(-4061); 
(*f[37])( );     /*SRA0(V85,(-4061),V86)*/
V86=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V88; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(20,V88,V86,V87)*/
V87=pile[WZ3]; 
pile[WZ1]=V90; pile[WZ2]=V87; 
(*f[39])( );     /*SDX0(20,V90,V87,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; 
(*f[40])( );     /*SLG0(V89)*/
l17:if((V42!=2)) goto l28;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l28;
l20:if(x[jvj+5]!=incon) goto l21;
goto l23;
l21:if((V27=w[x[jvj+30]][1])==incon) goto l23;
if((V27==23)) goto l22;
if((V27!=20)) goto l23;
x[jvj+34]=vo[20];z[jvj+34]=vz[20];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+5; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+30,jvj+5,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; 
(*f[378])( );     /*CPI0(jvj+35,jvj+36)*/
pile[v[22]]=jvj+30; pile[WZ1]=358; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+30,358,jvj+53)*/
pile[v[22]]=158; pile[WZ1]=20; pile[WZ2]=218; pile[WZ3]=jvj+36; pile[WZ4]=jvj+53; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(158,20,218,jvj+36,jvj+53,jvj+37)*/
pile[v[22]]=jvj+34; pile[WZ1]=443; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(jvj+34,443,jvj+37)*/
goto l23;
l22:x[jvj+29]=vo[20];z[jvj+29]=vz[20];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+5; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(jvj+30,jvj+5,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[195])( );     /*CPE0(jvj+31,jvj+32)*/
pile[v[22]]=jvj+30; pile[WZ1]=358; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+30,358,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=23; pile[WZ2]=158; pile[WZ3]=jvj+52; 
(*f[58])( );     /*TRI3(jvj+51,23,158,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+32; pile[WZ2]=128; pile[WZ3]=jvj+33; 
(*f[301])( );     /*TRI11(jvj+52,jvj+32,128,jvj+33)*/
pile[v[22]]=jvj+29; pile[WZ1]=443; pile[WZ2]=jvj+33; 
(*f[35])( );     /*CHGC1(jvj+29,443,jvj+33)*/
goto l23;
l24:if(x[jvj+5]!=incon) goto l25;
l27:pile[v[22]]=146; pile[WZ1]=jvj+24; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(146,jvj+24,jvj+48)*/
if((x[jvj+48]!=129)) goto l28;
x[jvj+20]=vo[20];z[jvj+20]=vz[20];
pile[v[22]]=443; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(443,jvj+20,jvj+21)*/
pile[v[22]]=358; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(358,jvj+21,jvj+22)*/
pile[v[22]]=146; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(146,jvj+22,jvj+23)*/
if((x[jvj+23]==129)) goto l28;
l18:V42=g[41];
if((V42<=0)) goto l28;
V43=vg[41];
if((V43!=0)) goto l14;
if((V42<3)) goto l16;
l14:pile[v[22]]=41; pile[WZ1]=10113; pile[WZ2]=0; pile[WZ3]=(-709); pile[WZ4]=jvj+24; pile[WZ5]=jvj+25; 
(*f[232])( );     /*INTERP3(41,10113,0,(-709),jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l15;
goto l28;
l25:if((V51=w[x[jvj+24]][1])==incon) goto l26;
if((V51!=23)) goto l26;
x[jvj+38]=vo[20];z[jvj+38]=vz[20];
pile[v[22]]=443; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(443,jvj+38,jvj+39)*/
pile[v[22]]=158; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(158,jvj+39,jvj+40)*/
if((x[jvj+40]!=23)) goto l26;
pile[v[22]]=128; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(128,jvj+39,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[195])( );     /*CPE0(jvj+41,jvj+42)*/
z[jvj+5]=(-1);
pile[v[22]]=jvj+5; pile[WZ1]=jvj+24; pile[WZ2]=jvj+42; 
(*f[34])( );     /*CHGC0(jvj+5,jvj+24,jvj+42)*/
l26:x[jvj+43]=vo[20];z[jvj+43]=vz[20];
pile[v[22]]=443; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(443,jvj+43,jvj+44)*/
pile[v[22]]=158; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(158,jvj+44,jvj+45)*/
if((x[jvj+45]!=20)) goto l27;
pile[v[22]]=218; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(218,jvj+44,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; 
(*f[378])( );     /*CPI0(jvj+46,jvj+47)*/
z[jvj+5]=(-1);
if((V101=w[x[jvj+24]][1])==incon) goto l27;
if((V101!=23)) goto l30;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+24; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+5,jvj+24,jvj+47)*/
goto l27;
l30:pile[v[22]]=jvj+5; pile[WZ1]=jvj+24; pile[WZ2]=jvj+47; 
(*f[35])( );     /*CHGC1(jvj+5,jvj+24,jvj+47)*/
goto l27;
l32:x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=331; pile[WZ1]=jvj+55; 
(*f[219])( );if(v[102]) goto l33;     /*FNDC2(331,jvj+55,V104)*/
V104=pile[WZ2]; 
if((V104!=V9)) goto l33;
x[jvj+58]=x[jvj+55] ;z[jvj+58]=z[jvj+55];
x[jvj+2]=x[jvj+58] ;z[jvj+2]=z[jvj+58];
goto l6;
l33:x[jvj+54]=t[x[jvj+54]];
goto l31;
l35:x[jvj+57]=s[x[jvj+56]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+56];
pile[v[22]]=331; pile[WZ1]=jvj+57; 
(*f[219])( );if(v[102]) goto l36;     /*FNDC2(331,jvj+57,V108)*/
V108=pile[WZ2]; 
if((V108!=V17)) goto l36;
x[jvj+59]=x[jvj+57] ;z[jvj+59]=z[jvj+57];
x[jvj+3]=x[jvj+59] ;z[jvj+3]=z[jvj+59];
goto l8;
l36:x[jvj+56]=t[x[jvj+56]];
goto l34;
}
