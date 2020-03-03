#include "dx.h"
void EDITEG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,DY=0,V8=0,V45=0,V40=0,V41=0,V42=0,V43=0,V44=0,V46=0,V7=0,V34=0,V69=0,V70=0,V71=0,V72=0,V73=0,V74=0,V33=0,V14=0,V16=0,V15=0,NR=0,DZ=0,NT=0,V18=0,V19=0,V21=0,V56=0,V48=0,V49=0,V50=0,V51=0,V52=0,V54=0,V55=0,V20=0,V29=0,V25=0,V67=0,V58=0,V59=0,V60=0,V61=0,V62=0,V64=0,V65=0,V66=0,V28=0,V12=0,V82=0,V78=0,V79=0,V81=0;
int LL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=10270;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==120&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
LL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NT=x[jvj+11]=DZ=x[jvj+4]=incon;
x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=629; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(629,jvj+2)*/
V4=LL+1;
pile[v[22]]=V4; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+3; 
(*f[78])( );if(v[102]) goto l24;     /*SMA0(V4,36,67,jvj+3)*/
(*f[107])( );     /*CRC0(V4,DY)*/
DY=pile[WZ1]; 
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
V14=bh[v[1]][DY];
if((V14!=32)) goto l11;
V16=DY+1;
V15=bh[v[1]][V16];
if((V15!=32)) goto l11;
NR=0;
DZ=DY;
l10:NT=0;
l13:pile[v[22]]=jvj+4; pile[WZ1]=NR; pile[WZ2]=jvj+8; 
(*f[133])( );if(v[102]) goto l17;     /*TLDEBL1(jvj+4,NR,jvj+8)*/
pile[v[22]]=246; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(246,jvj+8,V19)*/
V19=pile[WZ2]; 
x[jvj+11]=x[jvj+8] ;z[jvj+11]=z[jvj+8];
v[90]=V19;
v[97]=0;
vv[26]=1;
l21:if(NT!=incon) goto l22;
l1:pile[v[22]]=708; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(708,jvj+4,jvj+5)*/
if(x[jvj+5]==68||x[jvj+5]==729) goto l24;
l5:V7=g[342];
if((V7<=0)) goto l24;
V8=vg[342];
if((V8!=0)) goto l2;
if((V7<3)) goto l4;
l2:pile[v[22]]=342; pile[WZ1]=10270; pile[WZ2]=0; pile[WZ3]=(-625); pile[WZ4]=jvj+4; pile[WZ5]=jvj+6; 
(*f[232])( );     /*INTERP3(342,10270,0,(-625),jvj+4,jvj+6)*/
if((x[jvj+6]==135)) goto l3;
l24:x[jvj+14]=vo[20];z[jvj+14]=vz[20];
pile[v[22]]=jvj+14; pile[WZ1]=346; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+14,346,68)*/
if(DZ!=incon) goto l25;
l26:if(x[jvj+4]==incon) goto l9;
l27:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:if((V7<4)) goto l4;
goto l24;
l4:V45=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=10270; 
(*f[98])( );     /*SRA3(135,V40,10270,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(41,3,V41,V42)*/
V42=pile[WZ3]; 
pile[v[22]]=V42; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V42,125,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V45; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(20,V45,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=V44; pile[WZ1]=(-2268); 
(*f[37])( );     /*SRA0(V44,(-2268),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
if((V7!=2)) goto l24;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l24;
l7:if((V33<4)) goto l8;
goto l27;
l8:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=10270; 
(*f[98])( );     /*SRA3(135,V69,10270,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=4; pile[WZ2]=V70; 
(*f[39])( );     /*SDX0(41,4,V70,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=V71; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V71,125,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=178; 
(*f[42])( );     /*SRA1(135,V72,178,V73)*/
V73=pile[WZ3]; 
pile[WZ1]=V73; pile[WZ2]=345; 
(*f[42])( );     /*SRA1(135,V73,345,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; 
(*f[40])( );     /*SLG0(V74)*/
if((V33!=2)) goto l27;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l27;
l9:V33=g[503];
if((V33<=0)) goto l27;
V34=vg[503];
if((V34!=0)) goto l6;
if((V33<3)) goto l8;
l6:pile[v[22]]=503; pile[WZ1]=10270; pile[WZ2]=0; pile[WZ3]=jvj+7; 
(*f[291])( );     /*INTERP4(503,10270,0,jvj+7)*/
if((x[jvj+7]==135)) goto l7;
goto l27;
l11:if(V14==44||V14==59) goto l12;
V18=DY+1;
pile[v[22]]=V18; 
(*f[126])( );     /*LND2(V18,NR,DZ)*/
NR=pile[WZ1]; DZ=pile[WZ2]; 
goto l13;
l12:DZ=DY;
NR=0;
goto l10;
l15:if((V20<4)) goto l16;
goto l21;
l16:V56=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V48; pile[WZ2]=10270; 
(*f[98])( );     /*SRA3(135,V48,10270,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,2,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V50,125,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NR; pile[WZ2]=V51; 
(*f[39])( );     /*SDX0(41,NR,V51,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=(-3869); 
(*f[37])( );     /*SRA0(V52,(-3869),V54)*/
V54=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
if((V20!=2)) goto l21;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l21;
l17:V20=g[280];
if((V20<=0)) goto l21;
V21=vg[280];
if((V21!=0)) goto l14;
if((V20<3)) goto l16;
l14:pile[v[22]]=280; pile[WZ1]=10270; pile[WZ2]=0; pile[WZ3]=(-732); pile[WZ4]=NR; pile[WZ5]=(-625); pile[v[22]+6]=jvj+4; pile[v[22]+7]=jvj+9; 
(*f[353])( );     /*INTERP7(280,10270,0,(-732),NR,(-625),jvj+4,jvj+9)*/
if((x[jvj+9]==135)) goto l15;
goto l21;
l19:if((V28<4)) goto l20;
goto l1;
l20:V67=x[jvj+4];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V58; pile[WZ2]=10270; 
(*f[98])( );     /*SRA3(135,V58,10270,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(41,1,V59,V60)*/
V60=pile[WZ3]; 
pile[v[22]]=V60; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V60,125,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V25; pile[WZ2]=V61; 
(*f[39])( );     /*SDX0(41,V25,V61,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=(-5626); 
(*f[37])( );     /*SRA0(V62,(-5626),V64)*/
V64=pile[WZ2]; 
pile[v[22]]=V64; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V64,(-9543),V65)*/
V65=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V67; pile[WZ2]=V65; 
(*f[39])( );     /*SDX0(20,V67,V65,V66)*/
V66=pile[WZ3]; 
pile[v[22]]=V66; 
(*f[40])( );     /*SLG0(V66)*/
if((V28!=2)) goto l1;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l1;
l22:if(x[jvj+11]!=incon) goto l23;
goto l1;
l23:if((NT!=0)) goto l1;
pile[v[22]]=297; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(297,jvj+11,jvj+12)*/
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+13)*/
for(i=x[jvj+13],V25=0;i>0;i=t[i],V25++)  ;
if((V25<=1)) goto l1;
V28=g[343];
if((V28<=0)) goto l1;
V29=vg[343];
if((V29!=0)) goto l18;
if((V28<3)) goto l20;
l18:pile[v[22]]=343; pile[WZ1]=10270; pile[WZ2]=0; pile[WZ3]=(-620); pile[WZ4]=V25; pile[WZ5]=(-625); pile[v[22]+6]=jvj+4; pile[v[22]+7]=jvj+10; 
(*f[353])( );     /*INTERP7(343,10270,0,(-620),V25,(-625),jvj+4,jvj+10)*/
if((x[jvj+10]==135)) goto l19;
goto l1;
l25:V12=bh[v[1]][DZ];
if(V12!=44&&V12!=59) goto l26;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(250,158,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=629; 
(*f[35])( );     /*CHGC1(jvj+14,629,jvj+15)*/
V82=DZ;
l28:pile[v[22]]=V82; pile[WZ1]=jvj+16; 
(*f[335])( );if(v[102]) goto l26;     /*LANT0(V82,jvj+16,V78)*/
V78=pile[WZ2]; 
V79=bh[v[1]][V82];
if((V79==44)) goto l30;
if((V79!=59)) goto l29;
pile[v[22]]=jvj+15; pile[WZ1]=258; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+15,258,jvj+16)*/
l29:V81=bh[v[1]][V78];
if(V81!=44&&V81!=59) goto l26;
V82=V78;
goto l28;
l30:pile[v[22]]=jvj+15; pile[WZ1]=159; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+15,159,jvj+16)*/
goto l29;
}
