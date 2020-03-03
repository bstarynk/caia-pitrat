#include "dx.h"
void ESTCEFINI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V21=0,V22=0,V19=0,V30=0,V31=0,V28=0,V49=0,V48=0,V122=0,V117=0,V118=0,V119=0,V120=0,V121=0,V59=0,V57=0,V65=0,V63=0,A=0,V146=0,V103=0,V10=0,V105=0,NM=0,V108=0,V124=0,V125=0,V126=0,V127=0,V128=0,V129=0,V131=0,V104=0;
int HIST;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=128;
x[jvj+1]=10450;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1323&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
HIST=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=68; pile[WZ1]=158; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(68,158,jvj+37)*/
x[jvj+22]=vo[14];z[jvj+22]=vz[14];
pile[v[22]]=1201; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1201,jvj+22,jvj+23)*/
if((x[jvj+23]==206)) goto l8;
l14:x[jvj+18]=vo[16];z[jvj+18]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(498,jvj+18,jvj+19)*/
pile[v[22]]=509; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(509,jvj+19,jvj+20)*/
if((x[jvj+20]!=0)) goto l76;
pile[v[22]]=477; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(477,jvj+19,jvj+21)*/
if((x[jvj+21]==0)) goto l8;
l76:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l3:x[jvj+2]=s[x[jvj+7]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+7];
if((v[244]<=0)) goto l5;
pile[v[22]]=1348; pile[WZ1]=jvj+2; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(1348,jvj+2,jvj+5)*/
if((x[jvj+5]==68)) goto l4;
l5:pile[v[22]]=480; pile[WZ1]=jvj+2; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(480,jvj+2,jvj+8)*/
x[jvj+114]=x[jvj+8] ;z[jvj+114]=z[jvj+8];
l6:if((x[jvj+114]<=0)) goto l4;
x[jvj+3]=s[x[jvj+114]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+114];
pile[v[22]]=489; pile[WZ1]=jvj+3; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(489,jvj+3,jvj+9)*/
for(i=x[jvj+9],V19=0;i>0;i=t[i],V19++)  ;
pile[v[22]]=473; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(473,jvj+2,V21)*/
V21=pile[WZ2]; 
if((V19<V21)) goto l76;
l1:pile[v[22]]=365; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(365,jvj+3,jvj+4)*/
for(i=x[jvj+4],V22=0;i>0;i=t[i],V22++)  ;
if((V22>V19)) goto l76;
x[jvj+114]=t[x[jvj+114]];
goto l6;
l4:x[jvj+7]=t[x[jvj+7]];
l2:if((x[jvj+7]>0)) goto l3;
x[jvj+38]=vo[16];z[jvj+38]=vz[16];
pile[v[22]]=1374; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(1374,jvj+38,jvj+39)*/
l23:if((x[jvj+39]>0)) goto l24;
x[jvj+41]=vo[16];z[jvj+41]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(454,jvj+41,jvj+42)*/
l27:if((x[jvj+42]>0)) goto l28;
x[jvj+47]=vo[16];z[jvj+47]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(454,jvj+47,jvj+48)*/
l32:if((x[jvj+48]>0)) goto l33;
x[jvj+53]=vo[16];z[jvj+53]=vz[16];
pile[v[22]]=242; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(242,jvj+53,jvj+54)*/
if((x[jvj+54]!=923)) goto l48;
pile[v[22]]=454; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(454,jvj+53,jvj+55)*/
l37:if((x[jvj+55]<=0)) goto l48;
x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=100; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+56,jvj+57)*/
if((x[jvj+57]!=454)) goto l38;
pile[v[22]]=160; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(160,jvj+56,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(100,jvj+58,jvj+59)*/
if((x[jvj+59]!=128)) goto l38;
pile[v[22]]=128; pile[WZ2]=jvj+60; 
(*f[33])( );     /*FNDE0(128,jvj+58,jvj+60)*/
pile[v[22]]=480; pile[WZ1]=jvj+56; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(480,jvj+56,jvj+61)*/
x[jvj+119]=x[jvj+60] ;z[jvj+119]=z[jvj+60];
l39:if((x[jvj+119]<=0)) goto l38;
x[jvj+62]=s[x[jvj+119]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+119];
pile[v[22]]=101; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+62,jvj+63)*/
if((x[jvj+63]!=923)) goto l40;
x[jvj+120]=x[jvj+61] ;z[jvj+120]=z[jvj+61];
l41:if((x[jvj+120]<=0)) goto l40;
x[jvj+64]=s[x[jvj+120]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+120];
pile[v[22]]=489; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[33])( );     /*FNDE0(489,jvj+64,jvj+65)*/
pile[v[22]]=921; pile[WZ2]=jvj+66; 
(*f[33])( );     /*FNDE0(921,jvj+64,jvj+66)*/
V146=x[jvj+65];
l42:if((V146>0)) goto l43;
x[jvj+120]=t[x[jvj+120]];
goto l41;
l8:x[jvj+14]=vo[16];z[jvj+14]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(454,jvj+14,jvj+15)*/
l9:if((x[jvj+15]>0)) goto l10;
x[jvj+6]=vo[16];z[jvj+6]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(454,jvj+6,jvj+7)*/
goto l2;
l10:x[jvj+10]=s[x[jvj+15]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+15];
if((v[244]<=0)) goto l12;
pile[v[22]]=1348; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1348,jvj+10,jvj+13)*/
if((x[jvj+13]==68)) goto l11;
l12:pile[v[22]]=481; pile[WZ1]=jvj+10; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(481,jvj+10,jvj+16)*/
x[jvj+115]=x[jvj+16] ;z[jvj+115]=z[jvj+16];
l13:if((x[jvj+115]<=0)) goto l11;
x[jvj+11]=s[x[jvj+115]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+115];
pile[v[22]]=489; pile[WZ1]=jvj+11; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(489,jvj+11,jvj+17)*/
for(i=x[jvj+17],V28=0;i>0;i=t[i],V28++)  ;
pile[v[22]]=750; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(750,jvj+10,V30)*/
V30=pile[WZ2]; 
if((V28<V30)) goto l76;
l7:pile[v[22]]=365; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(365,jvj+11,jvj+12)*/
for(i=x[jvj+12],V31=0;i>0;i=t[i],V31++)  ;
if((V31>V28)) goto l76;
x[jvj+115]=t[x[jvj+115]];
goto l13;
l11:x[jvj+15]=t[x[jvj+15]];
goto l9;
l16:if(x[jvj+116]==incon) goto l17;
l26:x[jvj+27]=x[jvj+116] ;z[jvj+27]=z[jvj+116];
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+27,jvj+34)*/
if((x[jvj+34]!=134)) goto l21;
pile[WZ1]=jvj+40; pile[WZ2]=110; pile[WZ3]=(-7085); pile[WZ4]=jvj+35; 
(*f[270])( );     /*QUADRI7(101,jvj+40,110,(-7085),jvj+35)*/
pile[v[22]]=HIST; pile[WZ1]=159; pile[WZ2]=jvj+35; 
(*f[36])( );     /*PLUSC0(HIST,159,jvj+35)*/
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
l21:if((x[jvj+27]!=250)) goto l18;
V122=x[jvj+40];
pile[v[22]]=23; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(23,0,126,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10450; pile[WZ2]=V117; 
(*f[39])( );     /*SDX0(20,10450,V117,V118)*/
V118=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V118; pile[WZ2]=1271; 
(*f[42])( );     /*SRA1(135,V118,1271,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=V119; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V119,(-9543),V120)*/
V120=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V122; pile[WZ2]=V120; 
(*f[39])( );     /*SDX0(20,V122,V120,V121)*/
V121=pile[WZ3]; 
pile[v[22]]=V121; 
(*f[40])( );     /*SLG0(V121)*/
pile[v[22]]=1271; pile[WZ1]=158; pile[WZ2]=jvj+36; 
(*f[54])( );     /*TRI1(1271,158,jvj+36)*/
pile[v[22]]=jvj+36; 
(*f[605])( );     /*MONITEUR0(jvj+36)*/
l18:pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]==135)) goto l25;
l19:pile[v[22]]=111; pile[WZ1]=jvj+27; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+27,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]==25)) goto l22;
l20:pile[v[22]]=jvj+27; pile[WZ1]=jvj+33; 
(*f[887])( );     /*VARND0(jvj+27,jvj+33)*/
for(i=x[jvj+33],V48=0;i>0;i=t[i],V48++)  ;
if((V48!=1)) goto l22;
if((x[jvj+33]<=0)) goto l22;
x[jvj+29]=s[x[jvj+33]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+33];
pile[v[22]]=498; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(498,jvj+29,jvj+30)*/
pile[v[22]]=473; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(473,jvj+30,V49)*/
V49=pile[WZ2]; 
if((V49==1)) goto l22;
l25:x[jvj+39]=t[x[jvj+39]];
goto l23;
l17:x[jvj+116]=250 ;z[jvj+116]=250;
goto l26;
l22:pile[v[22]]=jvj+37; pile[WZ1]=158; pile[WZ2]=1374; 
(*f[35])( );     /*CHGC1(jvj+37,158,1374)*/
goto l25;
l24:x[jvj+40]=s[x[jvj+39]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+39];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+24)*/
x[jvj+116]=incon;
if((v[244]!=0)) goto l15;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; 
(*f[799])( );if(v[102]) goto l15;     /*NORME0(jvj+24,jvj+25)*/
x[jvj+127]=x[jvj+25] ;z[jvj+127]=z[jvj+25];
x[jvj+116]=x[jvj+127] ;z[jvj+116]=z[jvj+127];
l15:if((v[244]<=0)) goto l16;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+26; 
(*f[965])( );if(v[102]) goto l16;     /*NORM0(jvj+24,jvj+26)*/
x[jvj+128]=x[jvj+26] ;z[jvj+128]=z[jvj+26];
x[jvj+116]=x[jvj+128] ;z[jvj+116]=z[jvj+128];
goto l26;
l28:x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=472; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(472,jvj+43,V59)*/
V59=pile[WZ2]; 
pile[v[22]]=480; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(480,jvj+43,jvj+44)*/
x[jvj+117]=x[jvj+44] ;z[jvj+117]=z[jvj+44];
l30:if((x[jvj+117]<=0)) goto l29;
x[jvj+45]=s[x[jvj+117]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+117];
pile[v[22]]=489; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(489,jvj+45,jvj+46)*/
for(i=x[jvj+46],V57=0;i>0;i=t[i],V57++)  ;
if((V57<=V59)) goto l31;
pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
pile[v[22]]=jvj+37; pile[WZ1]=158; pile[WZ2]=472; 
(*f[35])( );     /*CHGC1(jvj+37,158,472)*/
l31:x[jvj+117]=t[x[jvj+117]];
goto l30;
l29:x[jvj+42]=t[x[jvj+42]];
goto l27;
l33:x[jvj+49]=s[x[jvj+48]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+48];
pile[v[22]]=688; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(688,jvj+49,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=481; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(481,jvj+49,jvj+50)*/
x[jvj+118]=x[jvj+50] ;z[jvj+118]=z[jvj+50];
l35:if((x[jvj+118]<=0)) goto l34;
x[jvj+51]=s[x[jvj+118]] ;z[jvj+51]=(x[jvj+51]<=sepcte) ? x[jvj+51] : z[jvj+118];
pile[v[22]]=489; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(489,jvj+51,jvj+52)*/
for(i=x[jvj+52],V63=0;i>0;i=t[i],V63++)  ;
if((V63<=V65)) goto l36;
pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
pile[v[22]]=jvj+37; pile[WZ1]=158; pile[WZ2]=688; 
(*f[35])( );     /*CHGC1(jvj+37,158,688)*/
l36:x[jvj+118]=t[x[jvj+118]];
goto l35;
l34:x[jvj+48]=t[x[jvj+48]];
goto l32;
l38:x[jvj+55]=t[x[jvj+55]];
goto l37;
l40:x[jvj+119]=t[x[jvj+119]];
goto l39;
l43:A=s[V146];
x[jvj+121]=x[jvj+66] ;z[jvj+121]=z[jvj+66];
l44:if((x[jvj+121]>0)) goto l45;
V146=t[V146];
goto l42;
l45:x[jvj+67]=s[x[jvj+121]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+121];
pile[v[22]]=489; pile[WZ1]=jvj+67; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(489,jvj+67,jvj+68)*/
for(a=x[jvj+68];a>0;a=t[a]) if(s[a]==A) goto l47;
l46:x[jvj+121]=t[x[jvj+121]];
goto l44;
l47:pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
pile[v[22]]=jvj+37; pile[WZ1]=158; pile[WZ2]=923; 
(*f[35])( );     /*CHGC1(jvj+37,158,923)*/
goto l46;
l48:x[jvj+69]=vo[16];z[jvj+69]=vz[16];
pile[v[22]]=1208; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(1208,jvj+69,jvj+70)*/
if((x[jvj+70]!=766)) goto l66;
pile[v[22]]=454; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(454,jvj+69,jvj+71)*/
l49:if((x[jvj+71]<=0)) goto l66;
x[jvj+72]=s[x[jvj+71]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+71];
pile[v[22]]=100; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+72,jvj+73)*/
if((x[jvj+73]!=454)) goto l50;
pile[v[22]]=160; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(160,jvj+72,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(100,jvj+74,jvj+75)*/
if((x[jvj+75]!=128)) goto l50;
pile[v[22]]=128; pile[WZ2]=jvj+76; 
(*f[33])( );     /*FNDE0(128,jvj+74,jvj+76)*/
pile[v[22]]=480; pile[WZ1]=jvj+72; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(480,jvj+72,jvj+77)*/
x[jvj+122]=x[jvj+76] ;z[jvj+122]=z[jvj+76];
l51:if((x[jvj+122]<=0)) goto l50;
x[jvj+78]=s[x[jvj+122]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+122];
pile[v[22]]=101; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l52;     /*FNDO0(101,jvj+78,jvj+79)*/
if((x[jvj+79]!=766)) goto l52;
x[jvj+123]=x[jvj+77] ;z[jvj+123]=z[jvj+77];
l53:if((x[jvj+123]<=0)) goto l52;
x[jvj+80]=s[x[jvj+123]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+123];
pile[v[22]]=489; pile[WZ1]=jvj+80; pile[WZ2]=jvj+81; 
(*f[33])( );     /*FNDE0(489,jvj+80,jvj+81)*/
if((x[jvj+81]==0)) goto l54;
pile[v[22]]=843; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(843,jvj+80,jvj+82)*/
x[jvj+124]=x[jvj+82] ;z[jvj+124]=z[jvj+82];
l55:if((x[jvj+124]<=0)) goto l54;
x[jvj+83]=s[x[jvj+124]] ;z[jvj+83]=(x[jvj+83]<=sepcte) ? x[jvj+83] : z[jvj+124];
pile[v[22]]=489; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[33])( );     /*FNDE0(489,jvj+83,jvj+84)*/
if((x[jvj+84]==0)) goto l56;
pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
pile[v[22]]=jvj+37; pile[WZ1]=158; pile[WZ2]=766; 
(*f[35])( );     /*CHGC1(jvj+37,158,766)*/
l56:x[jvj+124]=t[x[jvj+124]];
goto l55;
l50:x[jvj+71]=t[x[jvj+71]];
goto l49;
l52:x[jvj+122]=t[x[jvj+122]];
goto l51;
l54:x[jvj+123]=t[x[jvj+123]];
goto l53;
l58:pile[v[22]]=489; pile[WZ1]=jvj+87; pile[WZ2]=jvj+89; 
(*f[33])( );     /*FNDE0(489,jvj+87,jvj+89)*/
if((x[jvj+89]<=0)) goto l69;
x[jvj+99]=s[x[jvj+89]] ;z[jvj+99]=(x[jvj+99]<=sepcte) ? x[jvj+99] : z[jvj+89];
pile[v[22]]=jvj+99; pile[WZ1]=jvj+100; 
(*f[1576])( );if(v[102]) goto l69;     /*SYMET0(jvj+99,jvj+100)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+93; 
(*f[46])( );     /*TRI0(0,117,jvj+93)*/
pile[v[22]]=480; pile[WZ1]=jvj+85; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(480,jvj+85,jvj+90)*/
x[jvj+126]=x[jvj+90] ;z[jvj+126]=z[jvj+90];
l59:if((x[jvj+126]>0)) goto l60;
pile[v[22]]=117; pile[WZ1]=jvj+93; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(117,jvj+93,V103)*/
V103=pile[WZ2]; 
V10=V103;
x[jvj+101]=x[jvj+100] ;z[jvj+101]=z[jvj+100];
pile[v[22]]=jvj+87; pile[WZ1]=jvj+101; pile[WZ2]=V10; pile[WZ3]=2; pile[WZ4]=jvj+87; 
(*f[1575])( );     /*CPTCIR0(jvj+87,jvj+101,V10,2,jvj+87,NM)*/
NM=pile[WZ5]; 
if((NM>=V10)) goto l69;
if((v[228]!=0)) goto l70;
V104=g[589];
if((V104<=0)) goto l70;
V105=vg[589];
if((V105!=0)) goto l62;
if((V104<3)) goto l64;
l62:pile[v[22]]=589; pile[WZ1]=10450; pile[WZ2]=0; pile[WZ3]=(-10446); pile[WZ4]=jvj+85; pile[WZ5]=(-625); pile[v[22]+6]=V10; pile[v[22]+7]=(-756); pile[v[22]+8]=NM; pile[v[22]+9]=jvj+94; 
(*f[1059])( );     /*INTERP11(589,10450,0,(-10446),jvj+85,(-625),V10,(-756),NM,jvj+94)*/
if((x[jvj+94]==135)) goto l63;
l70:pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
pile[v[22]]=jvj+37; pile[WZ1]=158; pile[WZ2]=462; 
(*f[35])( );     /*CHGC1(jvj+37,158,462)*/
l69:x[jvj+97]=t[x[jvj+97]];
l67:if((x[jvj+97]>0)) goto l68;
pile[v[22]]=158; pile[WZ1]=jvj+37; pile[WZ2]=jvj+109; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(158,jvj+37,jvj+109)*/
if((x[jvj+109]!=68)) goto l75;
x[jvj+110]=vo[16];z[jvj+110]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+110; pile[WZ2]=jvj+111; 
(*f[33])( );     /*FNDE0(509,jvj+110,jvj+111)*/
l72:if((x[jvj+111]<=0)) goto l75;
x[jvj+112]=s[x[jvj+111]] ;z[jvj+112]=(x[jvj+112]<=sepcte) ? x[jvj+112] : z[jvj+111];
pile[v[22]]=jvj+112; pile[WZ1]=jvj+102; 
(*f[255])( );     /*COPEXP0(jvj+112,jvj+102)*/
if((v[244]!=0)) goto l71;
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; 
(*f[799])( );if(v[102]) goto l71;     /*NORME0(jvj+102,jvj+103)*/
x[jvj+104]=x[jvj+103] ;z[jvj+104]=z[jvj+103];
pile[v[22]]=101; pile[WZ1]=jvj+104; pile[WZ2]=jvj+105; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(101,jvj+104,jvj+105)*/
if((x[jvj+105]==134)) goto l74;
l71:if((v[244]<=0)) goto l73;
pile[v[22]]=jvj+102; pile[WZ1]=jvj+106; 
(*f[965])( );if(v[102]) goto l73;     /*NORM0(jvj+102,jvj+106)*/
x[jvj+107]=x[jvj+106] ;z[jvj+107]=z[jvj+106];
pile[v[22]]=101; pile[WZ1]=jvj+107; pile[WZ2]=jvj+108; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(101,jvj+107,jvj+108)*/
if((x[jvj+108]==134)) goto l74;
l73:x[jvj+111]=t[x[jvj+111]];
goto l72;
l60:x[jvj+91]=s[x[jvj+126]] ;z[jvj+91]=(x[jvj+91]<=sepcte) ? x[jvj+91] : z[jvj+126];
pile[v[22]]=489; pile[WZ1]=jvj+91; pile[WZ2]=jvj+92; 
(*f[33])( );     /*FNDE0(489,jvj+91,jvj+92)*/
if((x[jvj+92]==0)) goto l61;
pile[v[22]]=jvj+93; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+93,117,1)*/
l61:x[jvj+126]=t[x[jvj+126]];
goto l59;
l63:if((V104<4)) goto l64;
goto l70;
l64:pile[v[22]]=436; pile[WZ1]=jvj+85; pile[WZ2]=jvj+95; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(436,jvj+85,jvj+95)*/
pile[v[22]]=140; pile[WZ1]=jvj+95; 
(*f[44])( );if(v[102]) goto l65;     /*FNDC1(140,jvj+95,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V124)*/
V124=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V124; pile[WZ2]=10450; 
(*f[98])( );     /*SRA3(135,V124,10450,V125)*/
V125=pile[WZ3]; 
pile[v[22]]=V125; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V125,125,V126)*/
V126=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V126; pile[WZ2]=462; 
(*f[42])( );     /*SRA1(135,V126,462,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=V127; pile[WZ1]=V108; 
(*f[37])( );     /*SRA0(V127,V108,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V10; pile[WZ2]=V128; 
(*f[39])( );     /*SDX0(41,V10,V128,V129)*/
V129=pile[WZ3]; 
pile[WZ1]=NM; pile[WZ2]=V129; 
(*f[39])( );     /*SDX0(41,NM,V129,V131)*/
V131=pile[WZ3]; 
pile[v[22]]=V131; 
(*f[40])( );     /*SLG0(V131)*/
l65:if((V104!=2)) goto l70;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l70;
l66:x[jvj+96]=vo[16];z[jvj+96]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+96; pile[WZ2]=jvj+97; 
(*f[33])( );     /*FNDE0(454,jvj+96,jvj+97)*/
goto l67;
l68:x[jvj+85]=s[x[jvj+97]] ;z[jvj+85]=(x[jvj+85]<=sepcte) ? x[jvj+85] : z[jvj+97];
pile[v[22]]=462; pile[WZ1]=jvj+85; pile[WZ2]=jvj+98; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(462,jvj+85,jvj+98)*/
if((x[jvj+98]!=68)) goto l69;
pile[v[22]]=480; pile[WZ2]=jvj+86; 
(*f[33])( );     /*FNDE0(480,jvj+85,jvj+86)*/
x[jvj+125]=x[jvj+86] ;z[jvj+125]=z[jvj+86];
l57:if((x[jvj+125]<=0)) goto l69;
x[jvj+87]=s[x[jvj+125]] ;z[jvj+87]=(x[jvj+87]<=sepcte) ? x[jvj+87] : z[jvj+125];
pile[v[22]]=489; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(489,jvj+87,jvj+88)*/
if((x[jvj+88]!=0)) goto l58;
x[jvj+125]=t[x[jvj+125]];
goto l57;
l74:pile[v[22]]=HIST; 
(*f[1559])( );     /*CONTRADICTION0(HIST)*/
pile[v[22]]=jvj+37; pile[WZ1]=158; pile[WZ2]=336; 
(*f[35])( );     /*CHGC1(jvj+37,158,336)*/
goto l73;
l75:pile[v[22]]=158; pile[WZ1]=jvj+37; pile[WZ2]=jvj+113; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(158,jvj+37,jvj+113)*/
if((x[jvj+113]!=68)) goto l76;
pile[v[22]]=HIST; 
(*f[1577])( );     /*SOLUTION0(HIST)*/
goto l76;
}
