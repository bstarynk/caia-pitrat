#include "dx.h"
void GARBAG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,V1=0,V2=0,V9=0,V6=0,V8=0,V7=0,V10=0,V13=0,V15=0,V14=0,V20=0,V19=0,V21=0,V24=0,V25=0,V26=0,V29=0,V31=0,V32=0,V36=0,V35=0,V41=0,V38=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V40=0,V49=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,L=0,V45=0,V47=0,V48=0,V39=0,V70=0,V71=0,V82=0,V81=0,V80=0,V79=0,V72=0,V76=0,V74=0,V75=0,V77=0,V73=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=5;
if(v[0]>99700) (*f[6])( );


WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
(*f[648])( );     /*GARBAH0()*/
I=1;
l1:if((I<=sepcte)) goto l3;
V9=sepcte+1;
l4:if((V9<=v[0])) goto l6;
V10=0;
l7:if((V10<=v[14])) goto l9;
V21=0;
l11:if((V21<=v[81])) goto l13;
V26=0;
l15:x[jvj+1]=vo[V26];z[jvj+1]=vz[V26];
V29=x[jvj+1];
if((V29<=sepcte)) goto l14;
V31=t[V29];
if((V31<0)) goto l14;
pile[v[22]]=V29; 
(*f[649])( );     /*GBR0(V29)*/
l14:V26++;
if((V26<=49)) goto l15;
V32=1;
l16:if((V32<=v[11])) goto l18;
V39=sepcte+1;
V70=0;
V71=0;
V82=V71;
V81=V70;
V80=V39;
l32:if((V80<=lim)) goto l33;
V38=V82;
v[3]=V81;
if((V38>=4000000)) goto l22;
if((V38<=100000)) goto l22;
if((v[21]==0)) goto l22;
pile[v[22]]=158; pile[WZ1]=1169; pile[WZ2]=510; pile[WZ3]=V38; pile[WZ4]=jvj+3; 
(*f[192])( );     /*QUADRI4(158,1169,510,V38,jvj+3)*/
pile[v[22]]=jvj+3; 
(*f[605])( );     /*MONITEUR0(jvj+3)*/
l22:if((v[21]!=0)) goto l29;
if((v[26]!=0)) goto l29;
V40=g[520];
if((V40<=0)) goto l29;
V41=vg[520];
if((V41!=0)) goto l19;
if((V40<3)) goto l21;
l19:pile[v[22]]=520; pile[WZ1]=10499; pile[WZ2]=0; pile[WZ3]=38; pile[WZ4]=V38; pile[WZ5]=jvj+2; 
(*f[612])( );     /*INTERP9(520,10499,0,38,V38,jvj+2)*/
if((x[jvj+2]==135)) goto l20;
l29:if((V38>100000)) goto l31;
L=1;
l26:if((L<=sepcte)) goto l28;
V48=g[521];
if((V48<=0)) goto l30;
V49=vg[521];
if((V49!=0)) goto l23;
if((V48<3)) goto l25;
l23:pile[v[22]]=521; pile[WZ1]=10499; pile[WZ2]=0; pile[WZ3]=38; pile[WZ4]=V38; pile[WZ5]=jvj+4; 
(*f[612])( );     /*INTERP9(521,10499,0,38,V38,jvj+4)*/
if((x[jvj+4]==135)) goto l24;
l30:pile[v[22]]=20; 
(*f[15])( );     /*ERR1(20)*/
l31:v[0]=jvj; return;
l3:V1=r[I];
if((V1!=1)) goto l2;
V2=t[I];
if((V2<=0)) goto l2;
pile[v[22]]=V2; 
(*f[649])( );     /*GBR0(V2)*/
l2:I++;
goto l1;
l6:V6=z[V9];
if((V6<(-1))) goto l5;
V8=x[V9];
if((V8<=sepcte)) goto l5;
V7=t[V8];
if((V7<0)) goto l5;
pile[v[22]]=V8; 
(*f[649])( );     /*GBR0(V8)*/
l5:V9++;
goto l4;
l9:V13=ty[V10];
if((V13<=0)) goto l10;
V15=av[V10];
if((V15<=sepcte)) goto l10;
V14=t[V15];
if((V14<0)) goto l10;
pile[v[22]]=V15; 
(*f[649])( );     /*GBR0(V15)*/
l10:V20=ou[V10];
if((V20<=sepcte)) goto l8;
V19=t[V20];
if((V19<0)) goto l8;
pile[v[22]]=V20; 
(*f[649])( );     /*GBR0(V20)*/
l8:V10++;
goto l7;
l13:V24=vg[V21];
if((V24<=sepcte)) goto l12;
V25=t[V24];
if((V25<0)) goto l12;
pile[v[22]]=V24; 
(*f[649])( );     /*GBR0(V24)*/
l12:V21++;
goto l11;
l18:V36=lpr[V32];
if((V36<=sepcte)) goto l17;
V35=t[V36];
if((V35<0)) goto l17;
pile[v[22]]=V36; 
(*f[649])( );     /*GBR0(V36)*/
l17:V32++;
goto l16;
l20:if((V40<4)) goto l21;
goto l29;
l21:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V54; pile[WZ2]=10499; 
(*f[98])( );     /*SRA3(135,V54,10499,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V55; 
(*f[39])( );     /*SDX0(41,1,V55,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=V56; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V56,125,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=(-1829); 
(*f[37])( );     /*SRA0(V57,(-1829),V58)*/
V58=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V38; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,V38,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; 
(*f[40])( );     /*SLG0(V59)*/
if((V40!=2)) goto l29;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l29;
l24:if((V48<4)) goto l25;
goto l30;
l25:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V62)*/
V62=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V62; pile[WZ2]=10499; 
(*f[98])( );     /*SRA3(135,V62,10499,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(41,2,V63,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V64,125,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=V65; pile[WZ1]=(-4465); 
(*f[37])( );     /*SRA0(V65,(-4465),V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V38; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,V38,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; 
(*f[40])( );     /*SLG0(V67)*/
if((V48!=2)) goto l30;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l30;
l28:V45=r[L];
if((V45!=1)) goto l27;
x[jvj+5]=L ;z[jvj+5]=(L<=sepcte) ? L : 0;
V47=s[x[jvj+5]];
if((V47==66)) goto l27;
pile[v[22]]=jvj+5; 
(*f[651])( );     /*STRT2(jvj+5)*/
l27:L++;
goto l26;
l33:V79=t[V80];
V72=V79;
if((V72>=0)) goto l35;
if((V72==impos)) goto l36;
V76=(-V72);
V74=V81;
V75=V82;
t[V80]=V76;
l34:V77=V80+1;
V80=V77;
V81=V74;
V82=V75;
goto l32;
l35:V73=V82+1;
V74=V80;
V75=V73;
t[V80]=V81;
goto l34;
l36:V74=V81;
V75=V82;
t[V80]=0;
goto l34;
}
