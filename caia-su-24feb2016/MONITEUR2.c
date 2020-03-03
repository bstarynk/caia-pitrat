#include "dx.h"
void MONITEUR2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,K=0,V2=0,V3=0,V1=0,V25=0,V24=0,V33=0,V32=0,NK=0,V35=0,V57=0,V58=0,V59=0,V61=0,V62=0,V63=0,V34=0,V38=0,V48=0,V54=0,V53=0,V55=0;
int M;
int SM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=50;
x[jvj+1]=10889;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1908&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; SM=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[SM]=x[jvj+33]=x[jvj+23]=incon;
pile[v[22]]=158; pile[WZ1]=M; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(158,M,jvj+3)*/
l1:K=v[108];
if((K<=0)) goto l2;
if((K>sepcte)) goto l2;
x[jvj+5]=K ;z[jvj+5]=(K<=sepcte) ? K : 0;
v[108]=0;
pile[v[22]]=117; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=250; pile[WZ4]=jvj+6; 
(*f[567])( );     /*QUADRI11(117,1,158,250,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=0; 
(*f[955])( );     /*OBJETROPGROS0(jvj+5,jvj+6,0)*/
l2:x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=1005; pile[WZ1]=jvj+7; 
(*f[71])( );     /*ENLV0(1005,jvj+7)*/
if(x[jvj+3]!=incon) goto l3;
l32:x[jvj+40]=68 ;z[jvj+40]=68;
if(x[jvj+3]!=incon) goto l33;
l40:if(x[SM]==incon) goto l41;
l45:if(x[jvj+3]!=incon) goto l46;
if(x[SM]!=incon) goto l50;
l51:if(x[jvj+23]==incon) goto l52;
if(x[SM]!=incon) goto l55;
l54:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l3:V2=(time(tzt)-inccc);
pile[v[22]]=1009; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(1009,jvj+7,V3)*/
V3=pile[WZ2]; 
V1=V2-V3;
if((x[jvj+3]==936)) goto l4;
x[jvj+4]=vo[12];z[jvj+4]=vz[12];
pile[v[22]]=936; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(936,jvj+4,V6)*/
V6=pile[WZ2]; 
if((V1<=V6)) goto l4;
v[138]=1;
l4:pile[v[22]]=jvj+7; pile[WZ1]=936; pile[WZ2]=V1; 
(*f[43])( );     /*CHGC2(jvj+7,936,V1)*/
l19:if((x[jvj+3]==80)) goto l20;
if((x[jvj+3]==936)) goto l22;
if((x[jvj+3]==493)) goto l57;
if((x[jvj+3]==1084)) goto l23;
if((x[jvj+3]==228)) goto l58;
if((x[jvj+3]!=1271)) goto l25;
pile[v[22]]=1271; pile[WZ1]=158; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(1271,158,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=SM; 
(*f[958])( );if(v[102]) goto l25;     /*MANAGER1(jvj+26,SM)*/
goto l32;
l6:x[jvj+48]=1196 ;z[jvj+48]=1196;
l28:x[jvj+40]=x[jvj+28] ;z[jvj+40]=z[jvj+28];
x[SM]=x[jvj+48] ;z[SM]=z[jvj+48];
l47:if((x[SM]==120)) goto l48;
if((x[SM]!=12)) goto l50;
pile[v[22]]=945; pile[WZ1]=1058; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(945,1058,V54)*/
V54=pile[WZ2]; 
x[jvj+39]=vo[14];z[jvj+39]=vz[14];
V53=V54/10;
if((x[jvj+40]!=68)) goto l44;
if(x[jvj+3]!=936&&x[jvj+3]!=876&&x[jvj+3]!=493&&x[jvj+3]!=1084&&x[jvj+3]!=1169&&x[jvj+3]!=1271) goto l49;
pile[v[22]]=jvj+39; pile[WZ1]=935; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(jvj+39,935,jvj+3)*/
l49:depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+V53;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : V53);
pile[v[22]]=jvj+39; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+39,893,12)*/
goto l51;
l7:x[jvj+48]=12 ;z[jvj+48]=12;
goto l28;
l8:x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=506; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(506,jvj+9,jvj+10)*/
if((x[jvj+10]==927)) goto l40;
l36:pile[v[22]]=M; 
(*f[961])( );     /*ARRETRAPIDE0(M)*/
goto l40;
l9:x[jvj+49]=12 ;z[jvj+49]=12;
l30:x[SM]=x[jvj+49] ;z[SM]=z[jvj+49];
goto l32;
l10:x[jvj+49]=1336 ;z[jvj+49]=1336;
goto l30;
l11:if((v[206]<=0)) goto l29;
(*f[962])( );     /*APPLIREG0()*/
l29:pile[v[22]]=M; pile[WZ1]=jvj+29; 
(*f[963])( );if(v[102]) goto l32;     /*EXAMEN0(M,jvj+29)*/
x[jvj+49]=incon;
if((x[jvj+29]==12)) goto l9;
if((x[jvj+29]==1336)) goto l10;
x[jvj+49]=120 ;z[jvj+49]=120;
goto l30;
l12:x[jvj+11]=vo[14];z[jvj+11]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(642,jvj+11,V25)*/
V25=pile[WZ2]; 
x[jvj+12]=vo[16];z[jvj+12]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(509,jvj+12,jvj+13)*/
l13:if((x[jvj+13]<=0)) goto l38;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=870; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(870,jvj+14,V24)*/
V24=pile[WZ2]; 
if((V24!=1)) goto l14;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[965])( );if(v[102]) goto l14;     /*NORM0(jvj+14,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(100,20,101,135,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l56;
l14:x[jvj+13]=t[x[jvj+13]];
goto l13;
l15:x[jvj+50]=80 ;z[jvj+50]=80;
l31:x[SM]=x[jvj+50] ;z[SM]=z[jvj+50];
goto l32;
l16:pile[v[22]]=V33; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V33,83,V32)*/
V32=pile[WZ2]; 
l18:pile[v[22]]=V32; pile[WZ1]=46; 
(*f[38])( );     /*SPC0(V32,46,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=V63; 
(*f[40])( );     /*SLG0(V63)*/
pile[v[22]]=V35; 
(*f[656])( );     /*SPLN2(V35,V34)*/
V34=pile[WZ1]; 
pile[v[22]]=V34; 
(*f[288])( );     /*SPLN0(V34)*/
l39:pile[v[22]]=jvj+19; pile[WZ1]=1201; pile[WZ2]=jvj+37; 
(*f[35])( );     /*CHGC1(jvj+19,1201,jvj+37)*/
goto l40;
l20:x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=1201; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1201,jvj+20,jvj+21)*/
if((x[jvj+21]==80)) goto l21;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[959])( );if(v[102]) goto l25;     /*FINDEPB0(jvj+22,jvj+23)*/
x[SM]=12 ;z[SM]=12;
if((x[jvj+22]!=1097)) goto l32;
pile[v[22]]=158; pile[WZ1]=1097; pile[WZ2]=218; pile[WZ3]=jvj+23; pile[WZ4]=jvj+8; 
(*f[181])( );     /*QUADRI2(158,1097,218,jvj+23,jvj+8)*/
pile[v[22]]=jvj+8; 
(*f[191])( );     /*MANAGER0(jvj+8)*/
goto l32;
l21:x[SM]=120 ;z[SM]=120;
goto l32;
l22:pile[v[22]]=SM; 
(*f[960])( );if(v[102]) goto l25;     /*MONITORE0(SM)*/
goto l32;
l23:pile[v[22]]=M; 
(*f[964])( );     /*BILANSANSCHOIX0(M)*/
l24:x[SM]=12 ;z[SM]=12;
goto l32;
l25:if(x[jvj+3]!=876&&x[jvj+3]!=1336) goto l26;
pile[v[22]]=jvj+3; pile[WZ1]=158; pile[WZ2]=jvj+27; 
(*f[54])( );     /*TRI1(jvj+3,158,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=SM; 
(*f[958])( );if(v[102]) goto l26;     /*MANAGER1(jvj+27,SM)*/
goto l32;
l26:if((x[jvj+3]==865)) goto l27;
if((x[jvj+3]==84)) goto l11;
if((x[jvj+3]!=287)) goto l32;
pile[v[22]]=218; pile[WZ1]=M; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(218,M,jvj+30)*/
pile[v[22]]=860; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(860,jvj+30,jvj+31)*/
if((x[jvj+31]==368)) goto l32;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+32; 
(*f[968])( );     /*FAIRESSAI0(jvj+30,jvj+32)*/
x[jvj+50]=incon;
if((x[jvj+32]==80)) goto l15;
x[jvj+50]=120 ;z[jvj+50]=120;
goto l31;
l27:pile[v[22]]=M; pile[WZ1]=jvj+28; 
(*f[956])( );if(v[102]) goto l32;     /*VEILLE0(M,jvj+28)*/
x[jvj+48]=incon;
if((x[jvj+28]!=68)) goto l5;
x[jvj+48]=120 ;z[jvj+48]=120;
l5:if(x[jvj+28]==899||x[jvj+28]==21||x[jvj+28]==39) goto l6;
if(x[jvj+48]==incon) goto l7;
goto l28;
l33:if((x[jvj+3]==1169)) goto l34;
if((x[jvj+3]==844)) goto l35;
if((x[jvj+3]==580)) goto l8;
if((x[jvj+3]==287)) goto l37;
if((x[jvj+3]==1137)) goto l12;
if((x[jvj+3]!=1201)) goto l40;
pile[v[22]]=218; pile[WZ1]=M; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(218,M,jvj+37)*/
x[jvj+19]=vo[14];z[jvj+19]=vz[14];
V38=x[jvj+37];
vv[46]=V38;
if((x[jvj+37]!=206)) goto l39;
if((v[207]<=0)) goto l17;
(*f[962])( );     /*APPLIREG0()*/
l17:if((v[33]!=0)) goto l39;
pile[v[22]]=1035; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(1035,jvj+19,NK)*/
NK=pile[WZ2]; 
V35=0;
pile[v[22]]=0; pile[WZ1]=(-9831); 
(*f[37])( );     /*SRA0(0,(-9831),V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; pile[WZ1]=(-9835); 
(*f[37])( );     /*SRA0(V57,(-9835),V58)*/
V58=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,NK,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=(-9838); 
(*f[37])( );     /*SRA0(V59,(-9838),V61)*/
V61=pile[WZ2]; 
pile[v[22]]=V61; pile[WZ1]=(-9841); 
(*f[37])( );     /*SRA0(V61,(-9841),V62)*/
V62=pile[WZ2]; 
pile[v[22]]=V62; pile[WZ1]=(-9844); 
(*f[37])( );     /*SRA0(V62,(-9844),V33)*/
V33=pile[WZ2]; 
V32=incon;
if((NK>1)) goto l16;
V32=V33;
goto l18;
l34:pile[v[22]]=M; pile[WZ1]=jvj+33; 
(*f[957])( );     /*PEUMEMOIRE0(M,jvj+33)*/
goto l40;
l35:
(*f[969])( );     /*SYMETRIE0()*/
goto l40;
l37:pile[v[22]]=218; pile[WZ1]=M; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(218,M,jvj+34)*/
pile[v[22]]=860; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(860,jvj+34,jvj+35)*/
if((x[jvj+35]!=368)) goto l40;
pile[v[22]]=0; pile[WZ1]=405; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(0,405,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+36; 
(*f[970])( );     /*EXEPLAN0(jvj+34,jvj+36)*/
goto l40;
l38:
(*f[967])( );     /*GARDEREG0()*/
goto l40;
l41:if(x[jvj+33]!=incon) goto l42;
goto l45;
l42:if((x[jvj+33]!=1169)) goto l43;
pile[v[22]]=1169; pile[WZ1]=158; pile[WZ2]=jvj+38; 
(*f[54])( );     /*TRI1(1169,158,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=SM; 
(*f[958])( );     /*MANAGER1(jvj+38,SM)*/
goto l45;
l43:x[SM]=x[jvj+33] ;z[SM]=z[jvj+33];
goto l45;
l44:pile[v[22]]=jvj+39; pile[WZ1]=935; pile[WZ2]=jvj+40; 
(*f[35])( );     /*CHGC1(jvj+39,935,jvj+40)*/
goto l49;
l46:if(x[SM]!=incon) goto l47;
goto l51;
l48:if((x[jvj+3]!=936)) goto l51;
x[jvj+41]=vo[12];z[jvj+41]=vz[12];
pile[v[22]]=1058; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(1058,jvj+41,V48)*/
V48=pile[WZ2]; 
depuis=vv[52]+600-(time(tzt)-inccc);ensuite=depuis+V48;alarm((depuis>=0) ? 1 : (ensuite>0) ? ensuite : V48);
goto l51;
l50:if((x[SM]!=1196)) goto l51;
pile[v[22]]=117; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(117,jvj+40,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=158; pile[WZ1]=1196; pile[WZ2]=510; pile[WZ3]=V55; pile[WZ4]=jvj+42; 
(*f[192])( );     /*QUADRI4(158,1196,510,V55,jvj+42)*/
pile[v[22]]=jvj+42; 
(*f[191])( );     /*MANAGER0(jvj+42)*/
goto l51;
l52:if(x[SM]!=incon) goto l53;
goto l54;
l53:if((x[SM]!=80)) goto l55;
pile[v[22]]=80; pile[WZ1]=158; pile[WZ2]=jvj+43; 
(*f[54])( );     /*TRI1(80,158,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[971])( );if(v[102]) goto l55;     /*MONITEUR1(jvj+43,jvj+44)*/
l55:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l56:pile[v[22]]=V25; pile[WZ1]=858; pile[WZ2]=jvj+45; 
(*f[46])( );     /*TRI0(V25,858,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,v[13],642,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=1908; pile[WZ2]=246; pile[WZ3]=jvj+47; 
(*f[189])( );     /*TRI4(jvj+46,1908,246,jvj+47)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=10889; pile[WZ4]=jvj+47; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(158,1,218,10889,jvj+47,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+14; 
(*f[966])( );     /*ELIMINE0(jvj+18,jvj+14)*/
goto l14;
l57:pile[v[22]]=493; pile[WZ1]=158; pile[WZ2]=jvj+24; 
(*f[54])( );     /*TRI1(493,158,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=SM; 
(*f[958])( );if(v[102]) goto l25;     /*MANAGER1(jvj+24,SM)*/
goto l32;
l58:pile[v[22]]=228; pile[WZ1]=158; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(228,158,jvj+25)*/
pile[v[22]]=jvj+25; 
(*f[191])( );     /*MANAGER0(jvj+25)*/
goto l24;
}
