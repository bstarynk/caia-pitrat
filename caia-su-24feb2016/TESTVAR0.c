#include "dx.h"
void TESTVAR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V6=0,V11=0,V=0,V40=0,V43=0,V35=0,V36=0,V37=0,V38=0,V39=0,V41=0,V42=0,V10=0,V22=0,V25=0,V30=0,V16=0,V50=0,V53=0,V45=0,V46=0,V47=0,V48=0,V49=0,V51=0,V52=0,V29=0,V59=0,V9=0,V61=0,V28=0;
int BL,S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=24;
if(v[0]>99700) (*f[6])( );

BL=pile[v[22]]; S=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((S==85)) goto l19;
if((S!=83)) goto l28;
pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(147,BL,jvj+16)*/
pile[v[22]]=184; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(184,BL,jvj+17)*/
l24:if((x[jvj+17]<=0)) goto l28;
x[jvj+9]=s[x[jvj+17]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+17];
pile[v[22]]=jvj+9; pile[WZ1]=68; pile[WZ2]=jvj+18; pile[WZ3]=jvj+19; 
(*f[748])( );     /*USMC0(jvj+9,68,jvj+18,jvj+19)*/
V61=x[jvj+19];
l25:if((V61>0)) goto l26;
x[jvj+17]=t[x[jvj+17]];
goto l24;
l2:x[jvj+1]=s[x[jvj+21]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+21];
pile[v[22]]=190; pile[WZ1]=jvj+1; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(190,jvj+1,V3)*/
V3=pile[WZ2]; 
if((V==V3)) goto l23;
l3:x[jvj+21]=t[x[jvj+21]];
l1:if((x[jvj+21]>0)) goto l2;
pile[v[22]]=159; pile[WZ1]=21; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,21,jvj+2)*/
x[jvj+22]=x[jvj+2] ;z[jvj+22]=z[jvj+2];
l4:if((x[jvj+22]>0)) goto l5;
V10=g[462];
if((V10<=0)) goto l23;
V11=vg[462];
if((V11!=0)) goto l7;
if((V10<3)) goto l9;
l7:pile[v[22]]=462; pile[WZ1]=10781; pile[WZ2]=0; pile[WZ3]=(-604); pile[WZ4]=BL; pile[WZ5]=(-601); pile[v[22]+6]=jvj+4; pile[v[22]+7]=(-611); pile[v[22]+8]=V; pile[v[22]+9]=jvj+5; 
(*f[318])( );     /*INTERP6(462,10781,0,(-604),BL,(-601),jvj+4,(-611),V,jvj+5)*/
if((x[jvj+5]==135)) goto l8;
l23:V59=t[V59];
l21:if((V59>0)) goto l22;
x[jvj+12]=t[x[jvj+12]];
l20:if((x[jvj+12]<=0)) goto l28;
x[jvj+4]=s[x[jvj+12]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+12];
pile[v[22]]=jvj+4; pile[WZ1]=68; pile[WZ2]=jvj+13; pile[WZ3]=jvj+14; 
(*f[748])( );     /*USMC0(jvj+4,68,jvj+13,jvj+14)*/
V59=x[jvj+13];
goto l21;
l5:x[jvj+3]=s[x[jvj+22]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+22];
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l6;     /*FNDC1(163,jvj+3,V6)*/
V6=pile[WZ2]; 
if((V==V6)) goto l23;
l6:x[jvj+22]=t[x[jvj+22]];
goto l4;
l8:if((V10<4)) goto l9;
goto l23;
l9:V40=x[BL];
V43=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=10781; 
(*f[98])( );     /*SRA3(135,V35,10781,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,1,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V37,125,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V40; pile[WZ2]=V38; 
(*f[39])( );     /*SDX0(20,V40,V38,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=V39; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V39,V,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V43; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(20,V43,V41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; 
(*f[40])( );     /*SLG0(V42)*/
if((V10!=2)) goto l23;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l23;
l11:x[jvj+6]=s[x[jvj+23]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+23];
pile[v[22]]=190; pile[WZ1]=jvj+6; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(190,jvj+6,V22)*/
V22=pile[WZ2]; 
if((V16==V22)) goto l27;
l12:x[jvj+23]=t[x[jvj+23]];
l10:if((x[jvj+23]>0)) goto l11;
pile[v[22]]=159; pile[WZ1]=21; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(159,21,jvj+7)*/
x[jvj+24]=x[jvj+7] ;z[jvj+24]=z[jvj+7];
l13:if((x[jvj+24]>0)) goto l14;
V29=g[463];
if((V29<=0)) goto l27;
V30=vg[463];
if((V30!=0)) goto l16;
if((V29<3)) goto l18;
l16:pile[v[22]]=463; pile[WZ1]=10781; pile[WZ2]=0; pile[WZ3]=(-604); pile[WZ4]=BL; pile[WZ5]=15; pile[v[22]+6]=jvj+9; pile[v[22]+7]=16; pile[v[22]+8]=V16; pile[v[22]+9]=jvj+10; 
(*f[318])( );     /*INTERP6(463,10781,0,(-604),BL,15,jvj+9,16,V16,jvj+10)*/
if((x[jvj+10]==135)) goto l17;
l27:V61=t[V61];
goto l25;
l14:x[jvj+8]=s[x[jvj+24]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+24];
pile[v[22]]=163; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(163,jvj+8,V25)*/
V25=pile[WZ2]; 
if((V16==V25)) goto l27;
l15:x[jvj+24]=t[x[jvj+24]];
goto l13;
l17:if((V29<4)) goto l18;
goto l27;
l18:V50=x[BL];
V53=x[jvj+9];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V45; pile[WZ2]=10781; 
(*f[98])( );     /*SRA3(135,V45,10781,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,2,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V47,125,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(20,V50,V48,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; pile[WZ1]=V16; 
(*f[37])( );     /*SRA0(V49,V16,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V53; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(20,V53,V51,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; 
(*f[40])( );     /*SLG0(V52)*/
if((V29!=2)) goto l27;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l27;
l19:pile[v[22]]=147; pile[WZ1]=BL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(147,BL,jvj+11)*/
pile[v[22]]=184; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(184,BL,jvj+12)*/
goto l20;
l22:V=s[V59];
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V) goto l23;
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==V) goto l23;
pile[v[22]]=jvj+4; pile[WZ1]=V; pile[WZ2]=jvj+15; 
(*f[747])( );     /*USK0(jvj+4,V,jvj+15)*/
pile[v[22]]=130; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+15,V9)*/
V9=pile[WZ2]; 
if((V9!=1)) goto l23;
x[jvj+21]=w[177][8];
goto l1;
l26:V16=s[V61];
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==V16) goto l27;
for(a=x[jvj+16];a>0;a=t[a]) if(s[a]==V16) goto l27;
pile[v[22]]=jvj+9; pile[WZ1]=V16; pile[WZ2]=jvj+20; 
(*f[747])( );     /*USK0(jvj+9,V16,jvj+20)*/
pile[v[22]]=130; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(130,jvj+20,V28)*/
V28=pile[WZ2]; 
if((V28!=1)) goto l27;
x[jvj+23]=w[177][8];
goto l10;
l28:v[0]=jvj; v[22]-=2; return;
}
