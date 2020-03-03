#include "dx.h"
void VK0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,V6=0,Z=0,V10=0,V41=0,V44=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V42=0,V43=0,V9=0,V8=0,T=0,V70=0,V21=0,V52=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V53=0,V18=0,V19=0,V20=0,V25=0,V30=0,V61=0,V64=0,V55=0,V56=0,V57=0,V58=0,V59=0,V60=0,V62=0,V63=0,V29=0;
int N,BL,BK;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=25;
x[jvj+1]=10436;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==278&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; BL=pile[v[22]+1]; BK=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=365; pile[WZ1]=BK; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(365,BK,jvj+2)*/
l1:if((x[jvj+2]<=0)) goto l26;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(130,jvj+3,V1)*/
V1=pile[WZ2]; 
if((V1!=N)) goto l2;
pile[v[22]]=365; pile[WZ1]=BL; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,BL,jvj+4)*/
l3:if((x[jvj+4]>0)) goto l4;
V25=x[BL];
pile[v[22]]=313; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(313,jvj+3,jvj+9)*/
l8:if((x[jvj+9]>0)) goto l9;
V8=x[jvj+3];
pile[v[22]]=365; pile[WZ1]=BK; pile[WZ2]=V8; 
(*f[134])( );     /*OTA0(365,BK,V8)*/
V9=g[21];
if((V9<=0)) goto l25;
V10=vg[21];
if((V10!=0)) goto l10;
if((V9<3)) goto l12;
l10:pile[v[22]]=21; pile[WZ1]=10436; pile[WZ2]=0; pile[WZ3]=(-678); pile[WZ4]=BK; pile[WZ5]=(-604); pile[v[22]+6]=BL; pile[v[22]+7]=jvj+10; 
(*f[187])( );     /*INTERP0(21,10436,0,(-678),BK,(-604),BL,jvj+10)*/
if((x[jvj+10]==135)) goto l11;
l25:pile[v[22]]=313; pile[WZ1]=jvj+3; pile[WZ2]=V25; 
(*f[134])( );     /*OTA0(313,jvj+3,V25)*/
pile[v[22]]=365; pile[WZ1]=BK; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(365,BK,jvj+11)*/
l13:if((x[jvj+11]>0)) goto l14;
x[jvj+15]=d[2];z[jvj+15]=0;
l20:if((x[jvj+15]>0)) goto l21;
V20=g[22];
if((V20<=0)) goto l26;
V21=vg[22];
if((V21!=0)) goto l17;
if((V20<3)) goto l19;
l17:pile[v[22]]=22; pile[WZ1]=10436; pile[WZ2]=0; pile[WZ3]=(-678); pile[WZ4]=BK; pile[WZ5]=jvj+14; 
(*f[232])( );     /*INTERP3(22,10436,0,(-678),BK,jvj+14)*/
if((x[jvj+14]==135)) goto l18;
l26:pile[v[22]]=365; pile[WZ1]=BK; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(365,BK,jvj+20)*/
l27:if((x[jvj+20]>0)) goto l28;
V29=g[23];
if((V29<=0)) goto l32;
V30=vg[23];
if((V30!=0)) goto l29;
if((V29<3)) goto l31;
l29:pile[v[22]]=23; pile[WZ1]=10436; pile[WZ2]=0; pile[WZ3]=(-604); pile[WZ4]=BL; pile[WZ5]=(-678); pile[v[22]+6]=BK; pile[v[22]+7]=jvj+23; 
(*f[187])( );     /*INTERP0(23,10436,0,(-604),BL,(-678),BK,jvj+23)*/
if((x[jvj+23]==135)) goto l30;
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l2:x[jvj+2]=t[x[jvj+2]];
goto l1;
l4:x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=279; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(279,jvj+5,jvj+6)*/
x[jvj+24]=x[jvj+6] ;z[jvj+24]=z[jvj+6];
l5:if((x[jvj+24]>0)) goto l6;
x[jvj+4]=t[x[jvj+4]];
goto l3;
l6:x[jvj+7]=s[x[jvj+24]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+24];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,jvj+7,V6)*/
V6=pile[WZ2]; 
if((V6!=N)) goto l7;
pile[v[22]]=109; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+7,jvj+8)*/
if((x[jvj+8]==x[BK])) goto l26;
l7:x[jvj+24]=t[x[jvj+24]];
goto l5;
l9:Z=s[x[jvj+9]];
if((Z!=x[BL])) goto l25;
x[jvj+9]=t[x[jvj+9]];
goto l8;
l11:if((V9<4)) goto l12;
goto l25;
l12:V41=x[BK];
V44=x[BL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V35; pile[WZ2]=10436; 
(*f[98])( );     /*SRA3(135,V35,10436,V36)*/
V36=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V36; 
(*f[39])( );     /*SDX0(41,1,V36,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=V37; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V37,125,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=V38; pile[WZ1]=(-4426); 
(*f[37])( );     /*SRA0(V38,(-4426),V39)*/
V39=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V41; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(20,V41,V39,V40)*/
V40=pile[WZ3]; 
pile[v[22]]=V40; pile[WZ1]=(-753); 
(*f[37])( );     /*SRA0(V40,(-753),V42)*/
V42=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V44; pile[WZ2]=V42; 
(*f[39])( );     /*SDX0(20,V44,V42,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; 
(*f[40])( );     /*SLG0(V43)*/
if((V9!=2)) goto l25;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l25;
l14:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=313; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(313,jvj+12,jvj+13)*/
V70=x[jvj+13];
l15:if((V70>0)) goto l16;
x[jvj+11]=t[x[jvj+11]];
goto l13;
l16:T=s[V70];
if((T!=x[BK])) goto l26;
V70=t[V70];
goto l15;
l18:if((V20<4)) goto l19;
goto l26;
l19:V52=x[BK];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V46; pile[WZ2]=10436; 
(*f[98])( );     /*SRA3(135,V46,10436,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V47; 
(*f[39])( );     /*SDX0(41,2,V47,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=V48; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V48,125,V49)*/
V49=pile[WZ2]; 
pile[v[22]]=V49; pile[WZ1]=(-4425); 
(*f[37])( );     /*SRA0(V49,(-4425),V50)*/
V50=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V52; pile[WZ2]=V50; 
(*f[39])( );     /*SDX0(20,V52,V50,V51)*/
V51=pile[WZ3]; 
pile[v[22]]=V51; pile[WZ1]=(-755); 
(*f[37])( );     /*SRA0(V51,(-755),V53)*/
V53=pile[WZ2]; 
pile[v[22]]=V53; 
(*f[40])( );     /*SLG0(V53)*/
if((V20!=2)) goto l26;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l26;
l21:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=240; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,240,jvj+17)*/
x[jvj+25]=x[jvj+17] ;z[jvj+25]=z[jvj+17];
l22:if((x[jvj+25]>0)) goto l23;
x[jvj+15]=t[x[jvj+15]];
goto l20;
l23:x[jvj+18]=s[x[jvj+25]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+25];
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(130,jvj+18,V18)*/
V18=pile[WZ2]; 
if((V18!=N)) goto l24;
pile[v[22]]=109; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(109,jvj+18,jvj+19)*/
if((x[jvj+19]!=x[BK])) goto l24;
V19=x[jvj+18];
pile[v[22]]=jvj+16; pile[WZ1]=240; pile[WZ2]=V19; 
(*f[134])( );     /*OTA0(jvj+16,240,V19)*/
l24:x[jvj+25]=t[x[jvj+25]];
goto l22;
l28:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=313; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(313,jvj+21,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[BL]) goto l32;
x[jvj+20]=t[x[jvj+20]];
goto l27;
l30:if((V29<4)) goto l31;
goto l32;
l31:V61=x[BL];
V64=x[BK];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V55; pile[WZ2]=10436; 
(*f[98])( );     /*SRA3(135,V55,10436,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V56; 
(*f[39])( );     /*SDX0(41,3,V56,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V57,125,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=V58; pile[WZ1]=(-4424); 
(*f[37])( );     /*SRA0(V58,(-4424),V59)*/
V59=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V61; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(20,V61,V59,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=(-1410); 
(*f[37])( );     /*SRA0(V60,(-1410),V62)*/
V62=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(20,V64,V62,V63)*/
V63=pile[WZ3]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
if((V29!=2)) goto l32;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l32;
}
