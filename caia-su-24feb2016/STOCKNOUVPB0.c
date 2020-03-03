#include "dx.h"
void STOCKNOUVPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V42=0,VV=0,VA=0,V10=0,V48=0,V19=0,V50=0,V29=0,V30=0,NN=0,V32=0,V35=0,V56=0,V52=0,V53=0,V54=0,V55=0,V57=0,V31=0,V25=0,V38=0,V39=0,V28=0,V17=0,V=0,V66=0,V67=0,V73=0,V79=0,V75=0,V74=0,V70=0,V68=0,V72=0,V71=0,V37=0,V80=0,V82=0,V83=0,V85=0,V81=0,V84=0,V77=0;
int Q,AL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=10855;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==976&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
Q=pile[v[22]]; AL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=748; pile[WZ1]=1097; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(748,1097,jvj+4)*/
l4:if((x[jvj+4]>0)) goto l5;
x[jvj+5]=vo[11];z[jvj+5]=vz[11];
pile[v[22]]=109; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(109,jvj+5,jvj+6)*/
x[jvj+7]=1097 ;z[jvj+7]=1097;
l6:pile[v[22]]=120; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(120,jvj+7,jvj+8)*/
pile[v[22]]=698; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(698,jvj+8,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
pile[v[22]]=109; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(109,jvj+10,jvj+11)*/
if((x[jvj+11]!=x[jvj+6])) goto l7;
pile[v[22]]=jvj+10; pile[WZ1]=1167; pile[WZ2]=0; 
(*f[43])( );     /*CHGC2(jvj+10,1167,0)*/
l31:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l2:x[jvj+3]=s[x[jvj+39]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+39];
pile[v[22]]=163; pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+3,V42)*/
V42=pile[WZ2]; 
if((V42!=VV)) goto l3;
x[jvj+4]=t[x[jvj+4]];
goto l4;
l3:x[jvj+39]=t[x[jvj+39]];
l1:if((x[jvj+39]>0)) goto l2;
VA=VV;
pile[v[22]]=AL; pile[WZ1]=VA; pile[WZ2]=jvj+12; 
(*f[755])( );if(v[102]) goto l31;     /*ALCAE0(AL,VA,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=397; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+12,397,68)*/
x[jvj+28]=vo[12];z[jvj+28]=vz[12];
pile[v[22]]=1173; pile[WZ1]=jvj+28; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(1173,jvj+28,V25)*/
V25=pile[WZ2]; 
pile[v[22]]=jvj+12; pile[WZ1]=897; pile[WZ2]=V25; 
(*f[177])( );     /*CHGC4(jvj+12,897,V25)*/
l21:pile[v[22]]=254; pile[WZ1]=1099; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(254,1099,V38)*/
V38=pile[WZ2]; 
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(1005,1099,V39)*/
V39=pile[WZ2]; 
V67=0;
V73=49;
V74=incon;
V79=v[V73];
V75=V79%1000000;
if((V75>0)) goto l33;
V74=137643;
l32:v[V73]=V74;
V70=V39+1;
V68=V70-V67;
V72=v[49]%V68;
V71=V67+V72;
V37=V71;
if((V37>=V38)) goto l22;
pile[v[22]]=jvj+12; pile[WZ1]=970; pile[WZ2]=324; 
(*f[35])( );     /*CHGC1(jvj+12,970,324)*/
l22:V28=vv[5];
if((V28!=0)) goto l24;
NN=1;
l13:x[jvj+26]=incon;
if((NN==3)) goto l14;
x[jvj+26]=67 ;z[jvj+26]=67;
l15:pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(1268,936,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=1038; pile[WZ1]=1058; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(1038,1058,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=498; pile[WZ1]=jvj+12; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(498,jvj+12,jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=109; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+38,109,jvj+25)*/
pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(163,jvj+12,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=jvj+25; pile[WZ1]=163; pile[WZ2]=V66; 
(*f[177])( );     /*CHGC4(jvj+25,163,V66)*/
l16:pile[v[22]]=jvj+25; pile[WZ1]=493; pile[WZ2]=100; 
(*f[43])( );     /*CHGC2(jvj+25,493,100)*/
pile[WZ1]=936; pile[WZ2]=V29; 
(*f[43])( );     /*CHGC2(jvj+25,936,V29)*/
pile[WZ1]=683; pile[WZ2]=NN; 
(*f[43])( );     /*CHGC2(jvj+25,683,NN)*/
pile[WZ1]=978; pile[WZ2]=jvj+26; 
(*f[35])( );     /*CHGC1(jvj+25,978,jvj+26)*/
pile[WZ1]=948; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+25,948,67)*/
pile[WZ1]=860; pile[WZ2]=530; 
(*f[35])( );     /*CHGC1(jvj+25,860,530)*/
pile[WZ1]=1058; pile[WZ2]=V30; 
(*f[43])( );     /*CHGC2(jvj+25,1058,V30)*/
pile[WZ1]=1161; pile[WZ2]=924; 
(*f[35])( );     /*CHGC1(jvj+25,1161,924)*/
(*f[554])( );     /*AJEXP1(jvj+25)*/
l23:NN++;
if((NN<=3)) goto l13;
l24:pile[v[22]]=128; pile[WZ1]=Q; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(128,Q,jvj+29)*/
l25:if((x[jvj+29]>0)) goto l26;
pile[v[22]]=454; pile[WZ1]=Q; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(454,Q,jvj+33)*/
l28:if((x[jvj+33]>0)) goto l29;
V31=g[486];
if((V31<=0)) goto l31;
V32=vg[486];
if((V32!=0)) goto l17;
if((V31<3)) goto l19;
l17:pile[v[22]]=486; pile[WZ1]=10855; pile[WZ2]=0; pile[WZ3]=(-2978); pile[WZ4]=AL; pile[WZ5]=(-657); pile[v[22]+6]=jvj+12; pile[v[22]+7]=jvj+27; 
(*f[187])( );     /*INTERP0(486,10855,0,(-2978),AL,(-657),jvj+12,jvj+27)*/
if((x[jvj+27]==135)) goto l18;
goto l31;
l5:VV=s[x[jvj+4]];
pile[v[22]]=878; pile[WZ1]=AL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(878,AL,jvj+2)*/
x[jvj+39]=x[jvj+2] ;z[jvj+39]=z[jvj+2];
goto l1;
l7:x[jvj+7]=x[jvj+8] ;z[jvj+7]=z[jvj+8];
goto l6;
l9:x[jvj+40]=t[x[jvj+40]];
l8:if((x[jvj+40]<=0)) goto l30;
x[jvj+14]=s[x[jvj+40]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+40];
pile[v[22]]=100; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+14,jvj+15)*/
if((x[jvj+15]!=454)) goto l9;
pile[v[22]]=436; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(436,jvj+14,jvj+16)*/
pile[v[22]]=140; pile[WZ1]=jvj+16; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+16,V10)*/
V10=pile[WZ2]; 
if((V!=V10)) goto l9;
pile[v[22]]=160; pile[WZ1]=jvj+14; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(160,jvj+14,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+18]!=128)) goto l9;
pile[v[22]]=925; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(925,jvj+19,jvj+20)*/
if((x[jvj+20]==0)) goto l11;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[195])( );     /*CPE0(jvj+20,jvj+21)*/
pile[v[22]]=jvj+14; pile[WZ1]=925; pile[WZ2]=jvj+21; 
(*f[34])( );     /*CHGC0(jvj+14,925,jvj+21)*/
l11:x[jvj+22]=d[80];z[jvj+22]=0;
l10:if((x[jvj+22]<=0)) goto l30;
x[jvj+23]=s[x[jvj+22]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+22];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+23; pile[WZ3]=jvj+24; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+19,jvj+23,V48,jvj+24)*/
V48=pile[WZ2]; 
V19=V48;
V50=V19;
pile[v[22]]=jvj+14; pile[WZ2]=V50; 
(*f[43])( );     /*CHGC2(jvj+14,jvj+23,V50)*/
l12:x[jvj+22]=t[x[jvj+22]];
goto l10;
l14:x[jvj+26]=68 ;z[jvj+26]=68;
goto l15;
l18:if((V31<4)) goto l19;
goto l31;
l19:pile[v[22]]=163; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,jvj+12,V35)*/
V35=pile[WZ2]; 
V56=x[AL];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=10855; 
(*f[98])( );     /*SRA3(135,V52,10855,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V53,125,V54)*/
V54=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; pile[WZ1]=V35; 
(*f[37])( );     /*SRA0(V55,V35,V57)*/
V57=pile[WZ2]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
l20:if((V31!=2)) goto l31;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l31;
l26:x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=158; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(158,jvj+30,jvj+31)*/
if(x[jvj+31]!=531&&x[jvj+31]!=453&&x[jvj+31]!=979&&x[jvj+31]!=1027&&x[jvj+31]!=41) goto l27;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+32; 
(*f[378])( );     /*CPI0(jvj+30,jvj+32)*/
pile[v[22]]=jvj+12; pile[WZ1]=128; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+12,128,jvj+32)*/
l27:x[jvj+29]=t[x[jvj+29]];
goto l25;
l29:x[jvj+19]=s[x[jvj+33]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+33];
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+19,jvj+34)*/
if((x[jvj+34]!=454)) goto l30;
pile[v[22]]=436; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(436,jvj+19,jvj+35)*/
pile[v[22]]=140; pile[WZ1]=jvj+35; 
(*f[44])( );if(v[102]) goto l30;     /*FNDC1(140,jvj+35,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=160; pile[WZ1]=jvj+19; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(160,jvj+19,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=128)) goto l30;
V=V17;
pile[v[22]]=454; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(454,jvj+12,jvj+13)*/
x[jvj+40]=x[jvj+13] ;z[jvj+40]=z[jvj+13];
goto l8;
l30:x[jvj+33]=t[x[jvj+33]];
goto l28;
l33:V77=V75%100000;
V84=V75/100000;
V81=V77*10;
V85=V77/10000;
V83=V84+V85;
V82=V83%10;
V80=V81+V82;
V74=V80;
goto l32;
}
