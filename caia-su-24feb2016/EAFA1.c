#include "dx.h"
void EAFA1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V51=0,V53=0,V50=0,V52=0,V46=0,V11=0,V48=0,V14=0,V54=0,V29=0,V56=0,V32=0,V39=0,V41=0,V38=0,V40=0,V43=0,V45=0,V42=0,V44=0;
int BL,R,X,MDF,K,META;
int CP;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=35;
x[jvj+1]=10532;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==452&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
BL=pile[v[22]]; R=pile[v[22]+1]; X=pile[v[22]+2]; MDF=pile[v[22]+3]; K=pile[v[22]+4]; META=pile[v[22]+5]; CP=pile[v[22]+6]; v[22]+=7; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=67; pile[WZ1]=218; pile[WZ2]=CP; 
(*f[54])( );     /*TRI1(67,218,CP)*/
if((x[MDF]==324)) goto l1;
if((x[MDF]!=100)) goto l2;
pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,X,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=K; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(101,K,jvj+6)*/
if((x[jvj+5]!=x[jvj+6])) goto l2;
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
l2:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,X,jvj+7)*/
if(x[jvj+7]!=20&&x[jvj+7]!=89&&x[jvj+7]!=96&&x[jvj+7]!=41&&x[jvj+7]!=21) goto l3;
pile[WZ1]=K; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(100,K,jvj+8)*/
if((x[jvj+8]==128)) goto l3;
if((x[jvj+9]=w[x[jvj+7]][3])==incon) goto l3;
pile[v[22]]=X; pile[WZ1]=jvj+9; pile[WZ3]=jvj+10; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(X,jvj+9,V46,jvj+10)*/
V46=pile[WZ2]; 
V11=V46;
pile[v[22]]=K; pile[WZ3]=jvj+11; 
(*f[45])( );if(v[102]) goto l3;     /*FNDZ0(K,jvj+9,V48,jvj+11)*/
V48=pile[WZ2]; 
V14=V48;
if((V11==V14)) goto l6;
l3:pile[v[22]]=100; pile[WZ1]=K; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,K,jvj+12)*/
if((x[jvj+12]!=128)) goto l10;
pile[WZ1]=X; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(100,X,jvj+13)*/
if(x[jvj+13]!=20&&x[jvj+13]!=89&&x[jvj+13]!=96&&x[jvj+13]!=41&&x[jvj+13]!=21&&x[jvj+13]!=1317) goto l10;
if((x[jvj+14]=w[x[jvj+13]][3])==incon) goto l10;
pile[v[22]]=X; pile[WZ1]=jvj+14; pile[WZ3]=jvj+15; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(X,jvj+14,V54,jvj+15)*/
V54=pile[WZ2]; 
V29=V54;
pile[v[22]]=128; pile[WZ1]=K; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(128,K,jvj+16)*/
l4:if((x[jvj+16]<=0)) goto l10;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+14; pile[WZ3]=jvj+18; 
(*f[45])( );if(v[102]) goto l5;     /*FNDZ0(jvj+17,jvj+14,V56,jvj+18)*/
V56=pile[WZ2]; 
V32=V56;
if((V29==V32)) goto l6;
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
if((x[MDF]==67)) goto l9;
if((x[MDF]!=208)) goto l10;
V43=x[BL];
V45=x[R];
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V43,0,V42)*/
V42=pile[WZ3]; 
pile[WZ1]=V45; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,V45,V42,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; 
(*f[40])( );     /*SLG0(V44)*/
pile[v[22]]=109; pile[WZ1]=BL; pile[WZ2]=274; pile[WZ3]=R; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(109,BL,274,R,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[129])( );if(v[102]) goto l10;     /*EDIBLOC0(jvj+19,jvj+20)*/
l10:pile[v[22]]=100; pile[WZ1]=X; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(100,X,jvj+21)*/
x[jvj+31]=w[x[jvj+21]][9];
l11:if((x[jvj+31]>0)) goto l12;
if((x[jvj+21]!=39)) goto l15;
x[jvj+34]=w[x[jvj+21]][8];
l19:if((x[jvj+34]<=0)) goto l23;
x[jvj+27]=s[x[jvj+34]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+34];
pile[v[22]]=jvj+27; pile[WZ1]=X; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(jvj+27,X,jvj+28)*/
x[jvj+35]=x[jvj+28] ;z[jvj+35]=z[jvj+28];
l20:if((x[jvj+35]>0)) goto l21;
x[jvj+34]=t[x[jvj+34]];
goto l19;
l7:pile[v[22]]=K; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(K,117,1)*/
goto l10;
l8:pile[v[22]]=CP; pile[WZ1]=218; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(CP,218,68)*/
goto l10;
l9:if((x[BL]==x[R])) goto l10;
V39=x[BL];
V41=x[R];
pile[v[22]]=20; pile[WZ1]=V39; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V39,0,V38)*/
V38=pile[WZ3]; 
pile[WZ1]=V41; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,V41,V38,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; 
(*f[40])( );     /*SLG0(V40)*/
goto l10;
l12:x[jvj+22]=s[x[jvj+31]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+31];
if((x[META]!=67)) goto l14;
if((x[jvj+22]==111)) goto l13;
l14:pile[v[22]]=jvj+22; pile[WZ1]=X; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+22,X,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=BL; pile[WZ2]=R; pile[WZ3]=K; pile[WZ4]=MDF; pile[WZ5]=CP; pile[v[22]+6]=jvj+22; pile[v[22]+7]=X; pile[v[22]+8]=META; 
(*f[717])( );     /*EAFA2(jvj+23,BL,R,K,MDF,CP,jvj+22,X,META)*/
l13:x[jvj+31]=t[x[jvj+31]];
goto l11;
l15:x[jvj+32]=w[x[jvj+21]][8];
l16:if((x[jvj+32]<=0)) goto l23;
x[jvj+24]=s[x[jvj+32]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+32];
pile[v[22]]=jvj+24; pile[WZ1]=X; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(jvj+24,X,jvj+25)*/
x[jvj+33]=x[jvj+25] ;z[jvj+33]=z[jvj+25];
l17:if((x[jvj+33]>0)) goto l18;
x[jvj+32]=t[x[jvj+32]];
goto l16;
l18:x[jvj+26]=s[x[jvj+33]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+33];
pile[v[22]]=jvj+26; pile[WZ1]=BL; pile[WZ2]=R; pile[WZ3]=K; pile[WZ4]=MDF; pile[WZ5]=CP; pile[v[22]+6]=jvj+24; pile[v[22]+7]=X; pile[v[22]+8]=META; 
(*f[717])( );     /*EAFA2(jvj+26,BL,R,K,MDF,CP,jvj+24,X,META)*/
x[jvj+33]=t[x[jvj+33]];
goto l17;
l21:x[jvj+29]=s[x[jvj+35]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+35];
pile[v[22]]=102; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(102,jvj+29,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=BL; pile[WZ2]=R; pile[WZ3]=K; pile[WZ4]=MDF; pile[WZ5]=CP; pile[v[22]+6]=102; pile[v[22]+7]=jvj+29; pile[v[22]+8]=META; 
(*f[717])( );     /*EAFA2(jvj+30,BL,R,K,MDF,CP,102,jvj+29,META)*/
l22:x[jvj+35]=t[x[jvj+35]];
goto l20;
l23:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=7; return;
}
