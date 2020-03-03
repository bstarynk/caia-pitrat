#include "dx.h"
void PLUSHAUT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V61=0,NT=0,V32=0,V64=0,V66=0,V63=0,V65=0,V39=0,V22=0,V14=0,V13=0,V69=0,V70=0,V71=0,V72=0,V74=0,V75=0,V38=0,V51=0,V53=0,V56=0,V7=0,V1=0;
int N,E,B;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=44;
x[jvj+1]=10725;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1525&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; E=pile[v[22]+1]; B=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+9]=x[E] ;z[jvj+9]=z[E];
x[jvj+3]=x[N] ;z[jvj+3]=z[N];
l1:pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+4)*/
for(i=x[jvj+4],V61=0;i>0;i=t[i],V61++)  ;
NT=V61;
if((NT<=1)) goto l30;
pile[v[22]]=333; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(333,jvj+3,jvj+35)*/
for(i=x[jvj+35],V7=0;i>0;i=t[i],V7++)  ;
if((V7!=1)) goto l29;
pile[v[22]]=226; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+5)*/
l2:if((x[jvj+5]<=0)) goto l29;
x[jvj+37]=s[x[jvj+5]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+5];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[jvj+37]) goto l3;
pile[v[22]]=892; pile[WZ1]=jvj+9; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(892,jvj+9,jvj+36)*/
if((x[jvj+36]==0)) goto l29;
pile[v[22]]=jvj+3; pile[WZ1]=892; 
(*f[34])( );     /*CHGC0(jvj+3,892,jvj+36)*/
pile[WZ1]=333; pile[WZ2]=jvj+37; 
(*f[36])( );     /*PLUSC0(jvj+3,333,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=B; 
(*f[1251])( );     /*NDCOMMUNS0(jvj+37,B)*/
l31:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=3; return;
l3:x[jvj+5]=t[x[jvj+5]];
goto l2;
l5:x[jvj+42]=t[x[jvj+42]];
l4:if((x[jvj+42]<=0)) goto l8;
x[jvj+11]=s[x[jvj+42]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+42];
pile[v[22]]=287; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(287,jvj+11,jvj+12)*/
if((x[jvj+12]!=x[jvj+7])) goto l5;
pile[v[22]]=80; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(80,jvj+11,jvj+13)*/
if((x[jvj+13]!=x[jvj+8])) goto l5;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+6)*/
l8:x[jvj+38]=t[x[jvj+38]];
l6:if((x[jvj+38]>0)) goto l7;
for(i=x[jvj+14],V22=0;i>0;i=t[i],V22++)  ;
if((V22==0)) goto l28;
if((V22<=0)) goto l31;
if((V7<NT)) goto l9;
if((V7!=NT)) goto l31;
pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+3,jvj+18)*/
x[jvj+41]=incon;
pile[v[22]]=226; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(226,jvj+18,jvj+19)*/
for(i=x[jvj+19],V32=0;i>0;i=t[i],V32++)  ;
if((V32==1)) goto l12;
x[jvj+41]=x[jvj+14] ;z[jvj+41]=z[jvj+14];
l24:pile[v[22]]=1092; pile[WZ1]=1099; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1092,1099,jvj+27)*/
x[jvj+24]=vo[12];z[jvj+24]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(860,jvj+24,jvj+28)*/
if((x[jvj+28]!=530)) goto l23;
x[jvj+26]=vo[14];z[jvj+26]=vz[14];
pile[v[22]]=1092; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(1092,jvj+26,jvj+29)*/
if((x[jvj+29]!=x[jvj+27])) goto l23;
pile[v[22]]=978; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(978,jvj+24,jvj+25)*/
if((x[jvj+25]!=68)) goto l25;
pile[v[22]]=1044; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1044,jvj+26,V51)*/
V51=pile[WZ2]; 
pile[WZ1]=1099; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1044,1099,V53)*/
V53=pile[WZ2]; 
if((V51>=V53)) goto l25;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+14; pile[WZ2]=B; 
(*f[1721])( );     /*ENVIDOUBLE0(jvj+3,jvj+14,B)*/
l25:pile[v[22]]=jvj+26; pile[WZ1]=1044; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+26,1044,1)*/
l23:V38=g[457];
if((V38<=0)) goto l26;
V39=vg[457];
if((V39!=0)) goto l18;
if((V38<3)) goto l21;
l18:pile[v[22]]=457; pile[WZ1]=10725; pile[WZ2]=0; pile[WZ3]=(-6676); pile[WZ4]=V22; pile[WZ5]=jvj+23; 
(*f[612])( );     /*INTERP9(457,10725,0,(-6676),V22,jvj+23)*/
if((x[jvj+23]==135)) goto l20;
l26:pile[v[22]]=jvj+3; 
(*f[1275])( );     /*SORCHEMIN0(jvj+3)*/
l15:if((x[jvj+14]>0)) goto l16;
x[jvj+3]=x[jvj+18] ;z[jvj+3]=z[jvj+18];
pile[v[22]]=jvj+41; pile[WZ1]=892; pile[WZ2]=jvj+9; 
(*f[300])( );     /*TRI10(jvj+41,892,jvj+9)*/
goto l1;
l7:x[jvj+6]=s[x[jvj+38]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+38];
pile[v[22]]=287; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(287,jvj+6,jvj+7)*/
pile[v[22]]=80; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(80,jvj+6,jvj+8)*/
pile[v[22]]=892; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(892,jvj+9,jvj+10)*/
x[jvj+42]=x[jvj+10] ;z[jvj+42]=z[jvj+10];
goto l4;
l9:pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+15)*/
l10:if((x[jvj+15]<=0)) goto l31;
x[jvj+34]=s[x[jvj+15]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+15];
for(a=x[jvj+35];a>0;a=t[a]) if(s[a]==x[jvj+34]) goto l11;
pile[v[22]]=jvj+3; pile[WZ1]=892; pile[WZ2]=jvj+14; 
(*f[34])( );     /*CHGC0(jvj+3,892,jvj+14)*/
pile[WZ1]=333; pile[WZ2]=jvj+34; 
(*f[36])( );     /*PLUSC0(jvj+3,333,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=B; 
(*f[1251])( );     /*NDCOMMUNS0(jvj+34,B)*/
goto l31;
l11:x[jvj+15]=t[x[jvj+15]];
goto l10;
l12:x[jvj+16]=0 ;z[jvj+16]=0;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+3)*/
x[jvj+43]=x[jvj+14] ;z[jvj+43]=z[jvj+14];
l13:if((x[jvj+43]>0)) goto l14;
x[jvj+41]=x[jvj+16] ;z[jvj+41]=z[jvj+16];
goto l24;
l14:x[jvj+17]=s[x[jvj+43]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+43];
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[68])( );     /*PLUE0(jvj+16,jvj+17)*/
x[jvj+43]=t[x[jvj+43]];
goto l13;
l16:x[jvj+20]=s[x[jvj+14]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+14];
pile[v[22]]=80; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(80,jvj+20,jvj+21)*/
pile[v[22]]=287; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(287,jvj+20,jvj+22)*/
V64=x[jvj+22];
V66=x[jvj+21];
pile[v[22]]=20; pile[WZ1]=V64; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V64,0,V63)*/
V63=pile[WZ3]; 
pile[WZ1]=V66; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(20,V66,V63,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; 
(*f[40])( );     /*SLG0(V65)*/
l17:x[jvj+14]=t[x[jvj+14]];
goto l15;
l19:pile[v[22]]=V14; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V14,83,V13)*/
V13=pile[WZ2]; 
l22:pile[v[22]]=V13; pile[WZ1]=(-3027); 
(*f[37])( );     /*SRA0(V13,(-3027),V74)*/
V74=pile[WZ2]; 
pile[v[22]]=V74; pile[WZ1]=(-6679); 
(*f[37])( );     /*SRA0(V74,(-6679),V75)*/
V75=pile[WZ2]; 
pile[v[22]]=V75; 
(*f[40])( );     /*SLG0(V75)*/
if((V38!=2)) goto l26;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l26;
l20:if((V38<4)) goto l21;
goto l26;
l21:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V69)*/
V69=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V69; pile[WZ2]=10725; 
(*f[98])( );     /*SRA3(135,V69,10725,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V70,125,V71)*/
V71=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V22; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(41,V22,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; pile[WZ1]=(-4785); 
(*f[37])( );     /*SRA0(V72,(-4785),V14)*/
V14=pile[WZ2]; 
V13=incon;
if((V22>1)) goto l19;
V13=V14;
goto l22;
l27:pile[v[22]]=20; pile[WZ1]=jvj+3; pile[WZ2]=jvj+32; 
(*f[409])( );     /*TRI14(20,jvj+3,jvj+32)*/
l33:pile[v[22]]=jvj+32; pile[WZ1]=892; pile[WZ2]=jvj+33; 
(*f[300])( );     /*TRI10(jvj+32,892,jvj+33)*/
pile[v[22]]=jvj+30; pile[WZ1]=jvj+33; 
(*f[1722])( );     /*PLUSHAUT1(jvj+30,jvj+33)*/
goto l31;
l28:pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+3,jvj+30)*/
x[jvj+32]=incon;
pile[v[22]]=226; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(226,jvj+30,jvj+31)*/
for(i=x[jvj+31],V56=0;i>0;i=t[i],V56++)  ;
if((V56==1)) goto l27;
x[jvj+44]=0 ;z[jvj+44]=0;
x[jvj+32]=x[jvj+44] ;z[jvj+32]=z[jvj+44];
goto l33;
l29:pile[v[22]]=892; pile[WZ1]=jvj+3; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(892,jvj+3,jvj+38)*/
if((x[jvj+38]==0)) goto l30;
x[jvj+14]=0 ;z[jvj+14]=0;
goto l6;
l30:pile[v[22]]=498; pile[WZ1]=jvj+3; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(498,jvj+3,jvj+39)*/
pile[v[22]]=226; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(226,jvj+39,jvj+40)*/
for(i=x[jvj+40],V1=0;i>0;i=t[i],V1++)  ;
if((V1!=1)) goto l32;
pile[v[22]]=jvj+9; pile[WZ1]=892; pile[WZ2]=jvj+3; 
(*f[36])( );     /*PLUSC0(jvj+9,892,jvj+3)*/
l32:x[jvj+3]=x[jvj+39] ;z[jvj+3]=z[jvj+39];
x[jvj+9]=x[jvj+9] ;z[jvj+9]=z[jvj+9];
goto l1;
}
