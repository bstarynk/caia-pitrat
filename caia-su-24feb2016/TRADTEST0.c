#include "dx.h"
void TRADTEST0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V35=0,V63=0,V65=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V64=0,V34=0,V15=0,V53=0,V55=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0,V54=0,V14=0;
int R,B;
int RES;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11818;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==933&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; B=pile[v[22]+1]; RES=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RES]=incon;
pile[v[22]]=1688; pile[WZ1]=R; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1688,R,jvj+11)*/
l10:if((x[jvj+11]>0)) goto l11;
pile[v[22]]=1689; pile[WZ1]=R; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(1689,R,jvj+17)*/
l13:if((x[jvj+17]<=0)) goto l1;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=1749)) goto l14;
pile[v[22]]=102; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(102,jvj+18,jvj+21)*/
pile[v[22]]=100; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(100,jvj+21,jvj+22)*/
if((x[jvj+22]!=22)) goto l14;
pile[v[22]]=111; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+21,jvj+23)*/
pile[v[22]]=101; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+23,jvj+24)*/
x[jvj+9]=x[jvj+24] ;z[jvj+9]=z[jvj+24];
pile[v[22]]=1854; pile[WZ1]=jvj+9; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1854,jvj+9,jvj+25)*/
x[RES]=67 ;z[RES]=67;
V34=g[638];
if((V34<=0)) goto l1;
V35=vg[638];
if((V35!=0)) goto l7;
if((V34<3)) goto l9;
l7:pile[v[22]]=638; pile[WZ1]=11818; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=R; pile[WZ5]=20; pile[v[22]+6]=jvj+9; pile[v[22]+7]=jvj+10; 
(*f[187])( );     /*INTERP0(638,11818,0,(-601),R,20,jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l8;
l1:x[jvj+7]=0 ;z[jvj+7]=0;
x[jvj+2]=0 ;z[jvj+2]=0;
pile[v[22]]=jvj+2; pile[WZ1]=B; 
(*f[68])( );     /*PLUE0(jvj+2,B)*/
pile[v[22]]=1688; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(1688,R,jvj+3)*/
l2:if((x[jvj+3]<=0)) goto l3;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=jvj+2; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+2,jvj+4)*/
x[jvj+3]=t[x[jvj+3]];
goto l2;
l4:x[jvj+5]=s[x[jvj+2]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+2];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; 
(*f[1229])( );     /*ENSOP0(jvj+5,jvj+6)*/
x[jvj+34]=x[jvj+6] ;z[jvj+34]=z[jvj+6];
l5:if((x[jvj+34]>0)) goto l6;
x[jvj+2]=t[x[jvj+2]];
l3:if((x[jvj+2]>0)) goto l4;
x[jvj+36]=x[jvj+7] ;z[jvj+36]=z[jvj+7];
if(x[RES]==incon) goto l23;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l6:x[jvj+8]=s[x[jvj+34]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+34];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+7,jvj+8)*/
x[jvj+34]=t[x[jvj+34]];
goto l5;
l8:if((V34<4)) goto l9;
goto l1;
l9:V63=x[R];
V65=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V57; pile[WZ2]=11818; 
(*f[98])( );     /*SRA3(135,V57,11818,V58)*/
V58=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,2,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V59,125,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=30; pile[WZ1]=V60; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(30,V60,32,V61)*/
V61=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V63; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(20,V63,V61,V62)*/
V62=pile[WZ3]; 
pile[WZ1]=V65; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(20,V65,V62,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
if((V34!=2)) goto l1;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l1;
l11:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=1604)) goto l12;
pile[v[22]]=103; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(103,jvj+12,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+15,jvj+16)*/
if((x[jvj+16]!=576)) goto l12;
x[RES]=67 ;z[RES]=67;
goto l1;
l12:x[jvj+11]=t[x[jvj+11]];
goto l10;
l14:x[jvj+17]=t[x[jvj+17]];
goto l13;
l19:pile[v[22]]=39; pile[WZ1]=jvj+26; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(39,jvj+26,jvj+32)*/
l27:x[jvj+35]=t[x[jvj+35]];
l25:if((x[jvj+35]>0)) goto l26;
x[RES]=68 ;z[RES]=68;
goto l29;
l21:if((V14<4)) goto l22;
goto l29;
l22:V53=x[R];
V55=x[jvj+26];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V47; pile[WZ2]=11818; 
(*f[98])( );     /*SRA3(135,V47,11818,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,1,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V49,125,V50)*/
V50=pile[WZ2]; 
pile[v[22]]=30; pile[WZ1]=V50; pile[WZ2]=32; 
(*f[41])( );     /*SRB0(30,V50,32,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V53; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V53,V51,V52)*/
V52=pile[WZ3]; 
pile[WZ1]=V55; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(20,V55,V52,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; 
(*f[40])( );     /*SLG0(V54)*/
if((V14!=2)) goto l29;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l29;
l23:for(a=x[jvj+36];a>0;a=t[a]) if(s[a]==1329) goto l24;
x[jvj+35]=x[jvj+36] ;z[jvj+35]=z[jvj+36];
goto l25;
l24:x[RES]=67 ;z[RES]=67;
goto l29;
l26:x[jvj+26]=s[x[jvj+35]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+35];
pile[v[22]]=11; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(11,jvj+26,jvj+27)*/
if((x[jvj+27]==135)) goto l27;
l15:pile[v[22]]=555; pile[WZ1]=jvj+26; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(555,jvj+26,jvj+28)*/
if((x[jvj+28]==68)) goto l27;
l16:pile[v[22]]=1840; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(1840,jvj+26,jvj+29)*/
if((x[jvj+29]==68)) goto l27;
l17:pile[v[22]]=1703; pile[WZ1]=jvj+26; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1703,jvj+26,jvj+30)*/
if((x[jvj+30]==68)) goto l27;
l18:pile[v[22]]=109; pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(109,jvj+26,jvj+31)*/
goto l27;
l28:x[RES]=67 ;z[RES]=67;
V14=g[636];
if((V14<=0)) goto l29;
V15=vg[636];
if((V15!=0)) goto l20;
if((V14<3)) goto l22;
l20:pile[v[22]]=636; pile[WZ1]=11818; pile[WZ2]=0; pile[WZ3]=(-601); pile[WZ4]=R; pile[WZ5]=7; pile[v[22]+6]=jvj+26; pile[v[22]+7]=jvj+33; 
(*f[187])( );     /*INTERP0(636,11818,0,(-601),R,7,jvj+26,jvj+33)*/
if((x[jvj+33]==135)) goto l21;
goto l29;
}
