#include "dx.h"
void STOBUG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V43=0,V3=0,V2=0,V13=0,V12=0,V18=0,V19=0,V17=0,V28=0,V29=0,V31=0,V=0,V6=0,V5=0,V35=0,V37=0,V66=0,V7=0,V41=0,V39=0,V75=0,V76=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V74=0,V77=0,A=0,MM=0,J=0,HH=0,V22=0,V23=0,V24=0,V25=0,V26=0,V30=0,V51=0,V50=0,V55=0,V46=0,V48=0,V47=0,V60=0,V89=0,V90=0,V81=0,V82=0,V83=0,V84=0,V85=0,V86=0,V88=0,V54=0,V10=0,V53=0,V62=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=37;
x[jvj+1]=10785;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==24&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+22]=incon;
vv[11]=1;
V43=vv[24];
if((V43<=0)) goto l1;
x[jvj+36]=V43 ;z[jvj+36]=(V43<=sepcte) ? V43 : 0;
x[jvj+22]=x[jvj+36] ;z[jvj+22]=z[jvj+36];
l1:V3=vv[0];
x[jvj+2]=d[0];z[jvj+2]=0;
l2:if((x[jvj+2]<=0)) goto l38;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=159; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(159,jvj+3,jvj+4)*/
x[jvj+37]=x[jvj+4] ;z[jvj+37]=z[jvj+4];
l3:if((x[jvj+37]>0)) goto l4;
x[jvj+2]=t[x[jvj+2]];
goto l2;
l4:x[jvj+5]=s[x[jvj+37]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+37];
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+5,V2)*/
V2=pile[WZ2]; 
if((V2!=V3)) goto l5;
x[jvj+16]=x[jvj+5] ;z[jvj+16]=z[jvj+5];
x[jvj+30]=x[jvj+3] ;z[jvj+30]=z[jvj+3];
if(x[jvj+22]!=incon) goto l35;
l38:V62=vv[21];
if((V62<=0)) goto l39;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l39:vv[11]=0;
l40:x[jvj+1]=incon; v[0]=jvj; return;
l5:x[jvj+37]=t[x[jvj+37]];
goto l3;
l8:x[jvj+6]=x[jvj+7] ;z[jvj+6]=z[jvj+7];
l7:pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(120,jvj+6,jvj+7)*/
pile[v[22]]=698; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(698,jvj+7,jvj+8)*/
x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+9,V12)*/
V12=pile[WZ2]; 
if((V12!=V13)) goto l8;
pile[v[22]]=jvj+9; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+9)*/
if((x[jvj+16]==547)) goto l36;
if((V10==844)) goto l23;
(*f[184])( );     /*DATE1(A,MM,J,HH)*/
A=pile[v[22]]; MM=pile[WZ1]; J=pile[WZ2]; HH=pile[WZ3]; 
V22=vv[39];
V23=vv[25];
V24=vv[37];
V25=vv[50];
V26=vv[27];
pile[v[22]]=jvj+9; pile[WZ1]=1078; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+9,1078,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=J; pile[WZ2]=943; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,J,943,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=MM; pile[WZ2]=942; pile[WZ3]=jvj+27; 
(*f[189])( );     /*TRI4(jvj+26,MM,942,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=A; pile[WZ2]=941; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,A,941,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=HH; pile[WZ2]=938; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,HH,938,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=935; pile[WZ3]=jvj+31; 
(*f[58])( );     /*TRI3(jvj+29,jvj+30,935,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+16; pile[WZ2]=913; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+31,jvj+16,913,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=V25; pile[WZ2]=610; pile[WZ3]=jvj+33; 
(*f[189])( );     /*TRI4(jvj+32,V25,610,jvj+33)*/
pile[v[22]]=jvj+33; pile[WZ1]=V24; pile[WZ2]=609; pile[WZ3]=jvj+34; 
(*f[189])( );     /*TRI4(jvj+33,V24,609,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=V23; pile[WZ2]=515; pile[WZ3]=jvj+35; 
(*f[189])( );     /*TRI4(jvj+34,V23,515,jvj+35)*/
pile[v[22]]=130; pile[WZ1]=V26; pile[WZ2]=510; pile[WZ3]=V22; pile[WZ4]=jvj+35; pile[WZ5]=jvj+15; 
(*f[190])( );     /*QUADRI3(130,V26,510,V22,jvj+35,jvj+15)*/
if((V10!=372)) goto l22;
pile[v[22]]=1247; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1247,jvj+9,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=39; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(39,jvj+9,jvj+14)*/
V29=ww[100];
pile[v[22]]=jvj+14; pile[WZ1]=V28; 
(*f[185])( );     /*QXX0(jvj+14,V28)*/
pile[v[22]]=jvj+15; pile[WZ1]=1026; pile[WZ2]=V29; 
(*f[43])( );     /*CHGC2(jvj+15,1026,V29)*/
l22:pile[v[22]]=1243; pile[WZ1]=1051; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(1243,1051,jvj+15)*/
pile[v[22]]=jvj+16; pile[WZ1]=1245; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+16,1245,1)*/
l23:if((V10!=844)) goto l25;
V17=vv[35];
x[jvj+11]=V17 ;z[jvj+11]=(V17<=sepcte) ? V17 : 0;
pile[v[22]]=983; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(983,jvj+11,jvj+12)*/
pile[v[22]]=878; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(878,jvj+12,jvj+13)*/
l10:if((x[jvj+13]<=0)) goto l25;
x[jvj+10]=s[x[jvj+13]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+13];
V18=vv[36];
if((V18==0)) goto l24;
pile[v[22]]=163; pile[WZ1]=jvj+10; 
(*f[44])( );if(v[102]) goto l24;     /*FNDC1(163,jvj+10,V19)*/
V19=pile[WZ2]; 
if((V19==V18)) goto l24;
x[jvj+13]=t[x[jvj+13]];
goto l10;
l9:x[jvj+6]=924 ;z[jvj+6]=924;
l6:V13=vv[30];
goto l7;
l13:V5=V6;
l18:if(V5!=incon) goto l14;
l21:if((V30!=2)) goto l36;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l36:if(x[jvj+22]!=incon) goto l37;
goto l38;
l14:V7=incon;
V35=vv[25];
if((V35<=sepbase)) goto l15;
if((V35>sepnouv)) goto l15;
V37=V35;
V66=V37;
pile[v[22]]=20; pile[WZ1]=V66; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(20,V66,V5,V7)*/
V7=pile[WZ3]; 
l15:if(V7==incon) goto l16;
l19:if(V7!=incon) goto l20;
goto l21;
l16:V7=V5;
goto l19;
l17:if((V30>=4)) goto l21;
pile[v[22]]=117; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(117,jvj+9,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(109,jvj+9,jvj+18)*/
V39=ww[100];
V75=x[jvj+16];
V76=x[jvj+18];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V67; pile[WZ2]=10785; 
(*f[98])( );     /*SRA3(135,V67,10785,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(41,1,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V69,125,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V70; pile[WZ2]=924; 
(*f[42])( );     /*SRA1(135,V70,924,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V41; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(41,V41,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V75; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(20,V75,V72,V74)*/
V74=pile[WZ3]; 
pile[WZ1]=V76; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(20,V76,V74,V6)*/
V6=pile[WZ3]; 
V5=incon;
pile[v[22]]=163; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(163,jvj+9,V)*/
V=pile[WZ2]; 
pile[v[22]]=V6; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V6,V,V5)*/
V5=pile[WZ2]; 
l12:if(V5==incon) goto l13;
goto l18;
l20:pile[v[22]]=41; pile[WZ1]=V39; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,V39,V7,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; 
(*f[40])( );     /*SLG0(V77)*/
goto l21;
l24:pile[v[22]]=jvj+10; pile[WZ1]=844; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+10,844,jvj+16)*/
l25:V30=g[407];
if((V30<=0)) goto l36;
V31=vg[407];
if((V31!=0)) goto l11;
if((V30<3)) goto l17;
l11:pile[v[22]]=407; pile[WZ1]=10785; pile[WZ2]=0; pile[WZ3]=(-624); pile[WZ4]=jvj+9; pile[WZ5]=(-612); pile[v[22]+6]=jvj+16; pile[v[22]+7]=jvj+17; 
(*f[187])( );     /*INTERP0(407,10785,0,(-624),jvj+9,(-612),jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l17;
goto l36;
l27:x[jvj+20]=t[x[jvj+20]];
l26:if((x[jvj+20]<=0)) goto l38;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+21,V50)*/
V50=pile[WZ2]; 
if((V50!=V51)) goto l27;
V53=x[jvj+21];
pile[v[22]]=jvj+19; pile[WZ1]=924; pile[WZ2]=V53; 
(*f[134])( );     /*OTA0(jvj+19,924,V53)*/
V54=g[468];
if((V54<=0)) goto l38;
V55=vg[468];
if((V55!=0)) goto l28;
if((V54<3)) goto l31;
l28:pile[v[22]]=468; pile[WZ1]=10785; pile[WZ2]=0; pile[WZ3]=(-2041); pile[WZ4]=jvj+22; pile[WZ5]=(-595); pile[v[22]+6]=jvj+21; pile[v[22]+7]=(-612); pile[v[22]+8]=jvj+16; pile[v[22]+9]=jvj+23; 
(*f[188])( );     /*INTERP1(468,10785,0,(-2041),jvj+22,(-595),jvj+21,(-612),jvj+16,jvj+23)*/
if((x[jvj+23]==135)) goto l31;
goto l38;
l30:V47=V48;
l32:if(V47!=incon) goto l33;
l34:if((V54!=2)) goto l38;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l38;
l31:if((V54>=4)) goto l34;
pile[v[22]]=117; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(117,jvj+21,V60)*/
V60=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(109,jvj+21,jvj+24)*/
V89=x[jvj+16];
V90=x[jvj+24];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V81; pile[WZ2]=10785; 
(*f[98])( );     /*SRA3(135,V81,10785,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(41,2,V82,V83)*/
V83=pile[WZ3]; 
pile[v[22]]=V83; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V83,125,V84)*/
V84=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V84; pile[WZ2]=jvj+22; 
(*f[42])( );     /*SRA1(135,V84,jvj+22,V85)*/
V85=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V60; pile[WZ2]=V85; 
(*f[39])( );     /*SDX0(41,V60,V85,V86)*/
V86=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V89; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(20,V89,V86,V88)*/
V88=pile[WZ3]; 
pile[WZ1]=V90; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(20,V90,V88,V48)*/
V48=pile[WZ3]; 
V47=incon;
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l29;     /*FNDC1(163,jvj+21,V46)*/
V46=pile[WZ2]; 
pile[v[22]]=V48; pile[WZ1]=V46; 
(*f[37])( );     /*SRA0(V48,V46,V47)*/
V47=pile[WZ2]; 
l29:if(V47==incon) goto l30;
goto l32;
l33:pile[v[22]]=V47; 
(*f[40])( );     /*SLG0(V47)*/
goto l34;
l35:if(x[jvj+22]!=983&&x[jvj+22]!=978&&x[jvj+22]!=1055&&x[jvj+22]!=844) goto l37;
V10=vv[34];
x[jvj+6]=incon;
if(x[jvj+22]==983||x[jvj+22]==844) goto l9;
x[jvj+6]=x[jvj+22] ;z[jvj+6]=z[jvj+22];
goto l6;
l37:if(x[jvj+22]!=966&&x[jvj+22]!=1136) goto l38;
pile[v[22]]=218; pile[WZ1]=jvj+22; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(218,jvj+22,jvj+19)*/
V51=vv[30];
pile[v[22]]=jvj+19; pile[WZ1]=924; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(jvj+19,924,jvj+20)*/
goto l26;
}
