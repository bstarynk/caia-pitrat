#include "dx.h"
void EAFA2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V59=0,V61=0,V58=0,V60=0,V54=0,V12=0,V56=0,V15=0,V62=0,V33=0,V64=0,V36=0,V19=0,V20=0,V43=0,V45=0,V42=0,V44=0,V67=0,V69=0,V66=0,V68=0,V47=0,V49=0,V46=0,V48=0,V51=0,V53=0,V50=0,V52=0,V79=0;
int X,BL,R,K,MDF,CP,BT,Z,META;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=10532;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==717&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
X=pile[v[22]]; BL=pile[v[22]+1]; R=pile[v[22]+2]; K=pile[v[22]+3]; MDF=pile[v[22]+4]; CP=pile[v[22]+5]; BT=pile[v[22]+6]; Z=pile[v[22]+7]; META=pile[v[22]+8]; v[22]+=9; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[MDF]==324)) goto l1;
if((x[MDF]!=100)) goto l2;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,X,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=K; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,K,jvj+6)*/
if((x[jvj+5]!=x[jvj+6])) goto l2;
V59=x[BL];
V61=x[R];
pile[v[22]]=20; pile[WZ1]=V59; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V59,0,V58)*/
V58=pile[WZ3]; 
pile[WZ1]=V61; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(20,V61,V58,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; 
(*f[40])( );     /*SLG0(V60)*/
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+7)*/
if(x[jvj+7]!=20&&x[jvj+7]!=89&&x[jvj+7]!=96&&x[jvj+7]!=41&&x[jvj+7]!=21) goto l3;
pile[WZ1]=K; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,K,jvj+8)*/
if((x[jvj+8]==128)) goto l3;
if((x[jvj+9]=w[x[jvj+7]][3])==incon) goto l3;
pile[v[22]]=X; pile[WZ1]=jvj+9; pile[WZ3]=jvj+10; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(X,jvj+9,V54,jvj+10)*/
V54=pile[WZ2]; 
V12=V54;
pile[v[22]]=K; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(K,jvj+9,V56,jvj+11)*/
V56=pile[WZ2]; 
V15=V56;
if((V12==V15)) goto l6;
l3:pile[v[22]]=100; pile[WZ1]=K; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,K,jvj+12)*/
if((x[jvj+12]!=128)) goto l14;
pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,X,jvj+13)*/
if(x[jvj+13]!=20&&x[jvj+13]!=89&&x[jvj+13]!=96&&x[jvj+13]!=41&&x[jvj+13]!=21&&x[jvj+13]!=1317) goto l14;
if((x[jvj+14]=w[x[jvj+13]][3])==incon) goto l14;
pile[v[22]]=X; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l14;     /*FNDZ0(X,jvj+14,V62,jvj+15)*/
V62=pile[WZ2]; 
V33=V62;
pile[v[22]]=128; pile[WZ1]=K; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(128,K,jvj+16)*/
l4:if((x[jvj+16]<=0)) goto l14;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+14; pile[WZ3]=jvj+18; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(jvj+17,jvj+14,V64,jvj+18)*/
V64=pile[WZ2]; 
V36=V64;
if((V33==V36)) goto l6;
l5:x[jvj+16]=t[x[jvj+16]];
goto l4;
l1:pile[v[22]]=101; pile[WZ1]=X; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,X,jvj+3)*/
pile[v[22]]=100; pile[WZ1]=K; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,K,jvj+4)*/
if((x[jvj+4]==128)) goto l3;
pile[v[22]]=K; pile[WZ1]=1141; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(K,1141,jvj+3)*/
goto l3;
l6:if((x[MDF]==18)) goto l7;
if((x[MDF]==104)) goto l8;
if((x[MDF]==38)) goto l9;
if((x[MDF]==67)) goto l11;
if((x[MDF]==209)) goto l13;
if((x[MDF]!=208)) goto l14;
V51=x[BL];
V53=x[R];
pile[v[22]]=20; pile[WZ1]=V51; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V51,0,V50)*/
V50=pile[WZ3]; 
pile[WZ1]=V53; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V53,V50,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=274; pile[WZ3]=R; pile[WZ4]=jvj+22; 
(*f[181])( );     /*QUADRI2(109,BL,274,R,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[129])( );if(v[102]) goto l14;     /*EDIBLOC0(jvj+22,jvj+23)*/
l14:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(100,X,jvj+24)*/
x[jvj+34]=w[x[jvj+24]][9];
l15:if((x[jvj+34]>0)) goto l16;
if((x[jvj+24]!=39)) goto l19;
x[jvj+37]=w[x[jvj+24]][8];
l23:if((x[jvj+37]<=0)) goto l27;
x[jvj+30]=s[x[jvj+37]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+37];
pile[v[22]]=jvj+30; pile[WZ1]=X; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(jvj+30,X,jvj+31)*/
x[jvj+38]=x[jvj+31] ;z[jvj+38]=z[jvj+31];
l24:if((x[jvj+38]>0)) goto l25;
x[jvj+37]=t[x[jvj+37]];
goto l23;
l7:pile[v[22]]=K; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(K,117,1)*/
goto l14;
l8:pile[v[22]]=CP; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(CP,218,68)*/
goto l14;
l9:pile[v[22]]=CP; pile[WZ1]=jvj+19; 
(*f[378])( );     /*CPI0(CP,jvj+19)*/
if((V19=w[x[BT]][1])==incon) goto l28;
if((V19!=23)) goto l28;
V20=x[X];
pile[v[22]]=BT; pile[WZ1]=Z; pile[WZ2]=V20; 
(*f[134])( );     /*OTA0(BT,Z,V20)*/
l28:if((V79=w[x[BT]][1])==incon) goto l10;
if((V79!=23)) goto l29;
pile[v[22]]=Z; pile[WZ1]=BT; pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(Z,BT,jvj+19)*/
l10:pile[v[22]]=BL; 
(*f[365])( );     /*STK0(BL)*/
goto l14;
l11:if((x[BL]!=x[R])) goto l12;
V67=x[BL];
V69=x[Z];
pile[v[22]]=20; pile[WZ1]=V67; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V67,0,V66)*/
V66=pile[WZ3]; 
pile[WZ1]=V69; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(20,V69,V66,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=V68; 
(*f[40])( );     /*SLG0(V68)*/
goto l14;
l12:V43=x[BL];
V45=x[R];
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V43,0,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=V45; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,V45,V42,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
goto l14;
l13:V47=x[BL];
V49=x[Z];
pile[v[22]]=20; pile[WZ1]=V47; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V47,0,V46)*/
V46=pile[WZ3]; 
pile[WZ1]=V49; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,V49,V46,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; 
(*f[40])( );     /*SLG0(V48)*/
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=274; pile[WZ3]=Z; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(109,BL,274,Z,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[129])( );if(v[102]) goto l14;     /*EDIBLOC0(jvj+20,jvj+21)*/
goto l14;
l16:x[jvj+25]=s[x[jvj+34]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+34];
if((x[META]!=67)) goto l18;
if((x[jvj+25]==111)) goto l17;
l18:pile[v[22]]=jvj+25; pile[WZ1]=X; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+25,X,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=BL; pile[WZ2]=R; pile[WZ3]=K; pile[WZ4]=MDF; pile[WZ5]=CP; pile[v[22]+6]=jvj+25; pile[v[22]+7]=X; pile[v[22]+8]=META; 
(*f[717])( );     /*EAFA2(jvj+26,BL,R,K,MDF,CP,jvj+25,X,META)*/
l17:x[jvj+34]=t[x[jvj+34]];
goto l15;
l19:x[jvj+35]=w[x[jvj+24]][8];
l20:if((x[jvj+35]<=0)) goto l27;
x[jvj+27]=s[x[jvj+35]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+35];
pile[v[22]]=jvj+27; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(jvj+27,X,jvj+28)*/
x[jvj+36]=x[jvj+28] ;z[jvj+36]=z[jvj+28];
l21:if((x[jvj+36]>0)) goto l22;
x[jvj+35]=t[x[jvj+35]];
goto l20;
l22:x[jvj+29]=s[x[jvj+36]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+36];
pile[v[22]]=jvj+29; pile[WZ1]=BL; pile[WZ2]=R; pile[WZ3]=K; pile[WZ4]=MDF; pile[WZ5]=CP; pile[v[22]+6]=jvj+27; pile[v[22]+7]=X; pile[v[22]+8]=META; 
(*f[717])( );     /*EAFA2(jvj+29,BL,R,K,MDF,CP,jvj+27,X,META)*/
x[jvj+36]=t[x[jvj+36]];
goto l21;
l25:x[jvj+32]=s[x[jvj+38]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+38];
pile[v[22]]=102; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(102,jvj+32,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=BL; pile[WZ2]=R; pile[WZ3]=K; pile[WZ4]=MDF; pile[WZ5]=CP; pile[v[22]+6]=102; pile[v[22]+7]=jvj+32; pile[v[22]+8]=META; 
(*f[717])( );     /*EAFA2(jvj+33,BL,R,K,MDF,CP,102,jvj+32,META)*/
l26:x[jvj+38]=t[x[jvj+38]];
goto l24;
l27:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=9; return;
l29:pile[v[22]]=Z; pile[WZ1]=BT; pile[WZ2]=jvj+19; 
(*f[35])( );     /*CHGC1(Z,BT,jvj+19)*/
goto l10;
}
