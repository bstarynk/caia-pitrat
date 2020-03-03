#include "dx.h"
void SOLUTION0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V9=0,V11=0,V59=0,V60=0,V62=0,V5=0,V34=0,V42=0,V25=0,V29=0,V64=0,V65=0,V35=0,V37=0,V39=0,V67=0,V68=0,V70=0,V71=0,V72=0,V52=0,V50=0,V46=0,V44=0;
int HIST;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=32;
x[jvj+1]=11649;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1577&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; v[22]+=1; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+14]=incon;
x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=jvj+2; pile[WZ1]=493; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,493,1)*/
if((v[111]!=0)) goto l11;
pile[v[22]]=493; pile[WZ1]=HIST; 
(*f[1567])( );     /*ARCHIVE2(493,HIST)*/
l11:x[jvj+3]=vo[14];z[jvj+3]=vz[14];
pile[v[22]]=220; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(220,jvj+3,V42)*/
V42=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=1572; pile[WZ2]=V42; 
(*f[43])( );     /*CHGC2(jvj+3,1572,V42)*/
l12:x[jvj+20]=vo[12];z[jvj+20]=vz[12];
pile[v[22]]=1257; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1257,jvj+20,jvj+21)*/
if((x[jvj+21]!=68)) goto l14;
pile[v[22]]=493; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(493,jvj+3,V25)*/
V25=pile[WZ2]; 
x[jvj+14]=0 ;z[jvj+14]=0;
pile[v[22]]=865; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(865,jvj+3,jvj+8)*/
l6:x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=80; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(80,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[1291])( );if(v[102]) goto l7;     /*CONVEXP0(jvj+10,jvj+11)*/
pile[v[22]]=287; pile[WZ1]=jvj+9; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(287,jvj+9,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1290])( );if(v[102]) goto l7;     /*DEPEXP0(jvj+12,jvj+13)*/
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=436; pile[WZ3]=jvj+13; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(111,jvj+11,436,jvj+13,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[522])( );     /*PLUB2(jvj+14,jvj+15)*/
l7:pile[v[22]]=498; pile[WZ1]=jvj+9; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(498,jvj+9,jvj+8)*/
goto l6;
l1:pile[v[22]]=893; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(893,jvj+3,jvj+4)*/
if((x[jvj+4]==12)) goto l16;
l15:pile[v[22]]=jvj+3; pile[WZ1]=893; pile[WZ2]=493; 
(*f[35])( );     /*CHGC1(jvj+3,893,493)*/
l16:V35=vv[22];
if((V35==0)) goto l5;
V34=incon;
if((V35<=0)) goto l9;
V34=78;
l9:if(V34==incon) goto l10;
l17:if(V34!=incon) goto l18;
l5:V5=g[598];
if((V5<=0)) goto l19;
V6=vg[598];
if((V6!=0)) goto l2;
if((V5<3)) goto l3;
l2:pile[v[22]]=598; pile[WZ1]=11649; pile[WZ2]=0; pile[WZ3]=jvj+5; 
(*f[291])( );     /*INTERP4(598,11649,0,jvj+5)*/
if((x[jvj+5]==135)) goto l3;
l19:x[jvj+24]=vo[12];z[jvj+24]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(860,jvj+24,jvj+25)*/
if((x[jvj+25]!=228)) goto l20;
pile[v[22]]=228; pile[WZ1]=158; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(228,158,jvj+26)*/
pile[v[22]]=jvj+26; 
(*f[605])( );     /*MONITEUR0(jvj+26)*/
l20:if(x[jvj+25]!=1082&&x[jvj+25]!=336) goto l21;
pile[v[22]]=158; pile[WZ1]=1084; pile[WZ2]=218; pile[WZ3]=493; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(158,1084,218,493,jvj+27)*/
pile[v[22]]=jvj+27; 
(*f[605])( );     /*MONITEUR0(jvj+27)*/
l21:if((x[jvj+25]!=844)) goto l22;
pile[v[22]]=493; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,jvj+24,V52)*/
V52=pile[WZ2]; 
x[jvj+28]=vo[14];z[jvj+28]=vz[14];
pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(493,jvj+28,V50)*/
V50=pile[WZ2]; 
if((V50>V52)) goto l22;
pile[v[22]]=844; pile[WZ1]=158; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(844,158,jvj+29)*/
pile[v[22]]=jvj+29; 
(*f[605])( );     /*MONITEUR0(jvj+29)*/
l22:pile[v[22]]=493; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(493,jvj+24,V46)*/
V46=pile[WZ2]; 
x[jvj+30]=vo[14];z[jvj+30]=vz[14];
pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(493,jvj+30,V44)*/
V44=pile[WZ2]; 
if((V44<=V46)) goto l23;
pile[WZ1]=158; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(493,158,jvj+31)*/
pile[v[22]]=jvj+31; 
(*f[605])( );     /*MONITEUR0(jvj+31)*/
l23:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:if((V5>=4)) goto l4;
x[jvj+6]=vo[12];z[jvj+6]=vz[12];
pile[v[22]]=493; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(493,jvj+6,V9)*/
V9=pile[WZ2]; 
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(493,jvj+7,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=(-5729); 
(*f[37])( );     /*SRA0(0,(-5729),V59)*/
V59=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V11; pile[WZ2]=V59; 
(*f[39])( );     /*SDX0(41,V11,V59,V60)*/
V60=pile[WZ3]; 
pile[WZ1]=V9; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(41,V9,V60,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; 
(*f[40])( );     /*SLG0(V62)*/
l4:if((V5!=2)) goto l19;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l19;
l10:V34=74;
goto l17;
l13:if(x[jvj+14]!=incon) goto l24;
l14:pile[v[22]]=860; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(860,jvj+20,jvj+23)*/
if(x[jvj+23]!=967&&x[jvj+23]!=682) goto l1;
pile[v[22]]=493; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(493,jvj+3,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,0,493,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V29; pile[WZ2]=V64; 
(*f[39])( );     /*SDX0(41,V29,V64,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
x[jvj+16]=vo[16];z[jvj+16]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(454,jvj+16,jvj+17)*/
l8:if((x[jvj+17]<=0)) goto l1;
x[jvj+18]=s[x[jvj+17]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+17];
pile[v[22]]=480; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(480,jvj+18,jvj+19)*/
pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[1776])( );     /*SORTROUV0(jvj+18,jvj+19)*/
x[jvj+17]=t[x[jvj+17]];
goto l8;
l18:pile[v[22]]=929; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(929,jvj+3,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(493,jvj+3,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=493; 
(*f[42])( );     /*SRA1(135,0,493,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V39; pile[WZ2]=V67; 
(*f[39])( );     /*SDX0(41,V39,V67,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V68; pile[WZ2]=929; 
(*f[42])( );     /*SRA1(135,V68,929,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V70,58,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=V71; pile[WZ1]=V37; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V71,V37,41,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; 
(*f[40])( );     /*SLG0(V72)*/
pile[v[22]]=V34; 
(*f[143])( );     /*SORCONTEXTE0(V34)*/
goto l5;
l24:pile[v[22]]=V25; pile[WZ1]=493; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(V25,493,jvj+32)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+14; pile[WZ2]=256; pile[WZ3]=jvj+22; 
(*f[301])( );     /*TRI11(jvj+32,jvj+14,256,jvj+22)*/
pile[v[22]]=jvj+3; pile[WZ1]=1258; pile[WZ2]=jvj+22; 
(*f[774])( );     /*TJPLUS0(jvj+3,1258,jvj+22)*/
goto l14;
}
