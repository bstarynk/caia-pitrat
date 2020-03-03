#include "dx.h"
void EXAMEN0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V43=0,V42=0,V45=0,V47=0,V144=0,V141=0,V142=0,V143=0,RES=0,V145=0,V150=0,V147=0,V148=0,V149=0,V18=0,V151=0,V4=0,V6=0,V11=0,V22=0,V24=0,V30=0,V63=0,V66=0,V92=0,V94=0,V96=0,V98=0,V109=0,V159=0,V156=0,V158=0,V104=0,V65=0,V106=0,V153=0,V154=0,V72=0,V77=0,V76=0,V75=0,V112=0,V111=0,V136=0,V134=0,V132=0,V131=0,V122=0,V123=0,V121=0,V161=0,V162=0,V163=0,V164=0,V165=0,V179=0,V178=0;
int M;
int RT;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=92;
x[jvj+1]=10509;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==963&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; RT=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[RT]=x[jvj+55]=x[jvj+25]=incon;
x[jvj+2]=vo[12];z[jvj+2]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(860,jvj+2,jvj+3)*/
if((x[jvj+3]==336)) goto l1;
if((x[jvj+3]!=1082)) goto l2;
x[RT]=12 ;z[RT]=12;
pile[v[22]]=M; 
(*f[1309])( );     /*MARCHAPPROF0(M)*/
l2:x[jvj+4]=vo[13];z[jvj+4]=vz[13];
pile[v[22]]=1026; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1026,jvj+4,V43)*/
V43=pile[WZ2]; 
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=1025; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1025,jvj+5,jvj+6)*/
l3:if((x[jvj+6]<=0)) goto l5;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=1110; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(1110,jvj+7,V42)*/
V42=pile[WZ2]; 
if((V42!=V43)) goto l4;
pile[v[22]]=698; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(698,jvj+7,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[200])( );if(v[102]) goto l4;     /*NDD0(jvj+8,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
pile[v[22]]=489; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(489,jvj+10,jvj+11)*/
for(i=x[jvj+11],V45=0;i>0;i=t[i],V45++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(498,jvj+10,jvj+12)*/
pile[v[22]]=472; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(472,jvj+12,V47)*/
V47=pile[WZ2]; 
if((V45>=V47)) goto l4;
x[jvj+55]=x[jvj+10] ;z[jvj+55]=z[jvj+10];
l22:if(x[RT]==incon) goto l23;
l24:if((v[218]<=0)) goto l25;
(*f[1314])( );     /*RSNBILBT0()*/
l25:if(x[jvj+55]==incon) goto l26;
l33:if(x[RT]==incon) goto l34;
l36:if((v[224]<=0)) goto l38;
x[jvj+56]=vo[16];z[jvj+56]=vz[16];
pile[v[22]]=509; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[33])( );     /*FNDE0(509,jvj+56,jvj+57)*/
l37:if((x[jvj+57]<=0)) goto l38;
x[jvj+58]=s[x[jvj+57]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+57];
pile[v[22]]=jvj+58; pile[WZ1]=0; 
(*f[1315])( );     /*LETUBIS0(jvj+58,0)*/
x[jvj+57]=t[x[jvj+57]];
goto l37;
l1:
(*f[1308])( );     /*PROGRES0()*/
x[RT]=12 ;z[RT]=12;
goto l2;
l4:x[jvj+6]=t[x[jvj+6]];
goto l3;
l5:x[jvj+13]=vo[12];z[jvj+13]=vz[12];
pile[v[22]]=948; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(948,jvj+13,jvj+14)*/
if((x[jvj+14]==287)) goto l22;
l72:pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(250,158,jvj+25)*/
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=1030; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1030,jvj+23,jvj+24)*/
if((x[jvj+24]!=68)) goto l8;
pile[v[22]]=jvj+25; 
(*f[1307])( );     /*EXOU0(jvj+25)*/
l8:pile[v[22]]=454; pile[WZ1]=jvj+23; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(454,jvj+23,jvj+26)*/
l9:if((x[jvj+26]<=0)) goto l22;
x[jvj+18]=s[x[jvj+26]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+26];
pile[v[22]]=480; pile[WZ1]=jvj+18; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(480,jvj+18,jvj+27)*/
x[jvj+90]=x[jvj+27] ;z[jvj+90]=z[jvj+27];
l11:if((x[jvj+90]>0)) goto l12;
pile[v[22]]=844; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(844,jvj+18,jvj+19)*/
if((x[jvj+19]==68)) goto l10;
l14:pile[v[22]]=481; pile[WZ1]=jvj+18; pile[WZ2]=jvj+32; 
(*f[33])( );     /*FNDE0(481,jvj+18,jvj+32)*/
x[jvj+91]=x[jvj+32] ;z[jvj+91]=z[jvj+32];
l15:if((x[jvj+91]<=0)) goto l10;
x[jvj+33]=s[x[jvj+91]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+91];
pile[v[22]]=489; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(489,jvj+33,jvj+34)*/
for(i=x[jvj+34],V22=0;i>0;i=t[i],V22++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(498,jvj+33,jvj+35)*/
pile[v[22]]=750; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(750,jvj+35,V24)*/
V24=pile[WZ2]; 
if((V22>=V24)) goto l16;
pile[v[22]]=365; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(365,jvj+33,jvj+36)*/
for(i=x[jvj+36],V30=0;i>0;i=t[i],V30++)  ;
if((V30<V24)) goto l16;
pile[v[22]]=jvj+33; pile[WZ1]=V30; pile[WZ2]=25; pile[WZ3]=jvj+35; pile[WZ4]=250; pile[WZ5]=jvj+22; 
(*f[1304])( );     /*VALEXAM0(jvj+33,V30,25,jvj+35,250,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+25; 
(*f[1305])( );if(v[102]) goto l16;     /*VALGLO2(jvj+22,jvj+25,V18)*/
V18=pile[WZ2]; 
if((v[35]>0)) goto l7;
if((v[33]<=0)) goto l16;
x[jvj+20]=vo[14];z[jvj+20]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1226,jvj+20,jvj+21)*/
if((x[jvj+21]==67)) goto l7;
l16:x[jvj+91]=t[x[jvj+91]];
goto l15;
l6:V144=x[jvj+28];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(10,0,43,V141)*/
V141=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V141; pile[WZ2]=480; 
(*f[42])( );     /*SRA1(135,V141,480,V142)*/
V142=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V144; pile[WZ2]=V142; 
(*f[39])( );     /*SDX0(20,V144,V142,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=RES; pile[WZ2]=V143; 
(*f[39])( );     /*SDX0(41,RES,V143,V145)*/
V145=pile[WZ3]; 
pile[v[22]]=V145; 
(*f[40])( );     /*SLG0(V145)*/
pile[v[22]]=jvj+17; 
(*f[1306])( );     /*SORJGT0(jvj+17)*/
l13:x[jvj+90]=t[x[jvj+90]];
goto l11;
l7:V150=x[jvj+33];
pile[v[22]]=10; pile[WZ1]=0; pile[WZ2]=45; 
(*f[41])( );     /*SRB0(10,0,45,V147)*/
V147=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V147; pile[WZ2]=481; 
(*f[42])( );     /*SRA1(135,V147,481,V148)*/
V148=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V150; pile[WZ2]=V148; 
(*f[39])( );     /*SDX0(20,V150,V148,V149)*/
V149=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V149; 
(*f[39])( );     /*SDX0(41,V18,V149,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=V151; 
(*f[40])( );     /*SLG0(V151)*/
pile[v[22]]=jvj+22; 
(*f[1306])( );     /*SORJGT0(jvj+22)*/
goto l16;
l10:x[jvj+26]=t[x[jvj+26]];
goto l9;
l12:x[jvj+28]=s[x[jvj+90]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+90];
pile[v[22]]=489; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(489,jvj+28,jvj+29)*/
for(i=x[jvj+29],V4=0;i>0;i=t[i],V4++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(498,jvj+28,jvj+30)*/
pile[v[22]]=473; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(473,jvj+30,V6)*/
V6=pile[WZ2]; 
if((V4>=V6)) goto l13;
pile[v[22]]=365; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(365,jvj+28,jvj+31)*/
for(i=x[jvj+31],V11=0;i>0;i=t[i],V11++)  ;
if((V11<V6)) goto l13;
pile[v[22]]=jvj+28; pile[WZ1]=V11; pile[WZ2]=25; pile[WZ3]=jvj+30; pile[WZ4]=jvj+28; pile[WZ5]=jvj+17; 
(*f[1304])( );     /*VALEXAM0(jvj+28,V11,25,jvj+30,jvj+28,jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+25; 
(*f[1305])( );if(v[102]) goto l13;     /*VALGLO2(jvj+17,jvj+25,RES)*/
RES=pile[WZ2]; 
if((v[35]>0)) goto l6;
if((v[33]<=0)) goto l13;
x[jvj+15]=vo[14];z[jvj+15]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(1226,jvj+15,jvj+16)*/
if((x[jvj+16]==67)) goto l6;
goto l13;
l18:x[jvj+63]=x[jvj+37] ;z[jvj+63]=z[jvj+37];
l40:if(x[jvj+63]!=incon) goto l41;
l42:if((v[229]<=0)) goto l43;
x[jvj+64]=vo[14];z[jvj+64]=vz[14];
pile[v[22]]=929; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(929,jvj+64,V106)*/
V106=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10509; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10509,0,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V106; pile[WZ2]=V153; 
(*f[39])( );     /*SDX0(41,V106,V153,V154)*/
V154=pile[WZ3]; 
pile[v[22]]=V154; 
(*f[40])( );     /*SLG0(V154)*/
l20:pile[v[22]]=120; pile[WZ1]=jvj+25; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(120,jvj+25,jvj+43)*/
pile[v[22]]=204; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(204,jvj+43,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=698; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(698,jvj+43,jvj+44)*/
V159=x[jvj+44];
pile[v[22]]=41; pile[WZ1]=V109; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V109,0,V156)*/
V156=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V159; pile[WZ2]=V156; 
(*f[39])( );     /*SDX0(20,V159,V156,V158)*/
V158=pile[WZ3]; 
pile[v[22]]=V158; 
(*f[40])( );     /*SLG0(V158)*/
l21:x[jvj+25]=x[jvj+43] ;z[jvj+25]=z[jvj+43];
goto l20;
l23:x[jvj+45]=vo[13];z[jvj+45]=vz[13];
pile[v[22]]=963; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(963,jvj+45,jvj+46)*/
if((x[jvj+46]!=68)) goto l24;
x[jvj+47]=vo[12];z[jvj+47]=vz[12];
pile[v[22]]=909; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(909,jvj+47,jvj+48)*/
if((x[jvj+48]!=205)) goto l24;
pile[v[22]]=907; pile[WZ1]=jvj+45; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(907,jvj+45,jvj+49)*/
if((x[jvj+49]!=0)) goto l24;
pile[v[22]]=250; 
(*f[1313])( );     /*SAUVEPOS0(250)*/
x[RT]=12 ;z[RT]=12;
goto l24;
l26:if(x[jvj+25]!=incon) goto l27;
goto l33;
l27:if((v[223]<=0)) goto l32;
x[jvj+50]=x[jvj+25] ;z[jvj+50]=z[jvj+25];
l28:pile[v[22]]=120; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(120,jvj+50,jvj+51)*/
pile[v[22]]=698; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(698,jvj+51,jvj+52)*/
x[jvj+53]=x[jvj+52] ;z[jvj+53]=z[jvj+52];
pile[v[22]]=929; pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(929,jvj+53,V104)*/
V104=pile[WZ2]; 
if((V104!=v[223])) goto l29;
x[jvj+55]=x[jvj+53] ;z[jvj+55]=z[jvj+53];
l30:if(x[jvj+55]==incon) goto l31;
goto l33;
l29:x[jvj+50]=x[jvj+51] ;z[jvj+50]=z[jvj+51];
goto l28;
l31:if(x[jvj+25]!=incon) goto l32;
goto l33;
l32:pile[v[22]]=jvj+25; pile[WZ1]=jvj+54; 
(*f[1311])( );if(v[102]) goto l33;     /*EXAMENA0(jvj+25,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=jvj+25; pile[WZ2]=jvj+55; 
(*f[1312])( );if(v[102]) goto l33;     /*EXAMCOMP0(jvj+54,jvj+25,jvj+55)*/
goto l33;
l34:if(x[jvj+55]!=incon) goto l35;
goto l36;
l35:if((x[jvj+55]!=985)) goto l36;
x[RT]=120 ;z[RT]=120;
goto l36;
l38:if(x[jvj+25]!=incon) goto l39;
l43:if(x[jvj+55]!=incon) goto l44;
l45:if((v[29]<=0)) goto l54;
x[jvj+68]=vo[14];z[jvj+68]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+68; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(1226,jvj+68,jvj+69)*/
if((x[jvj+69]!=67)) goto l54;
x[jvj+70]=vo[16];z[jvj+70]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+70; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(454,jvj+70,jvj+71)*/
l46:if((x[jvj+71]<=0)) goto l54;
x[jvj+72]=s[x[jvj+71]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+71];
pile[v[22]]=480; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[33])( );     /*FNDE0(480,jvj+72,jvj+73)*/
x[jvj+92]=x[jvj+73] ;z[jvj+92]=z[jvj+73];
l47:if((x[jvj+92]>0)) goto l48;
x[jvj+71]=t[x[jvj+71]];
goto l46;
l39:x[jvj+59]=vo[12];z[jvj+59]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+59; pile[WZ2]=jvj+60; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(860,jvj+59,jvj+60)*/
if((x[jvj+60]!=530)) goto l42;
pile[v[22]]=978; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(978,jvj+59,jvj+61)*/
if((x[jvj+61]!=68)) goto l42;
x[jvj+37]=vo[14];z[jvj+37]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+37; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(1226,jvj+37,jvj+62)*/
if((x[jvj+62]!=67)) goto l42;
pile[v[22]]=1077; pile[WZ1]=1085; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(1077,1085,V65)*/
V65=pile[WZ2]; 
x[jvj+63]=incon;
V63=vv[183];
if((V63!=1)) goto l17;
pile[v[22]]=109; pile[WZ1]=jvj+59; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,jvj+59,jvj+86)*/
pile[v[22]]=983; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(983,jvj+86,jvj+87)*/
pile[v[22]]=878; pile[WZ1]=jvj+87; pile[WZ2]=jvj+88; 
(*f[33])( );     /*FNDE0(878,jvj+87,jvj+88)*/
l73:if((x[jvj+88]<=0)) goto l17;
x[jvj+89]=s[x[jvj+88]] ;z[jvj+89]=(x[jvj+89]<=sepcte) ? x[jvj+89] : z[jvj+88];
pile[v[22]]=163; pile[WZ1]=jvj+89; 
(*f[44])( );if(v[102]) goto l74;     /*FNDC1(163,jvj+89,V179)*/
V179=pile[WZ2]; 
pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l74;     /*FNDC1(163,jvj+59,V178)*/
V178=pile[WZ2]; 
if((V179==V178)) goto l74;
x[jvj+88]=t[x[jvj+88]];
goto l73;
l41:pile[v[22]]=jvj+25; pile[WZ1]=V65; pile[WZ2]=1; pile[WZ3]=1107; pile[WZ4]=jvj+63; 
(*f[1310])( );     /*LISTRIE0(jvj+25,V65,1,1107,jvj+63)*/
V66=vv[183];
if((V66!=1)) goto l42;
pile[v[22]]=jvj+37; pile[WZ1]=893; pile[WZ2]=12; 
(*f[35])( );     /*CHGC1(jvj+37,893,12)*/
goto l42;
l44:x[jvj+65]=vo[14];z[jvj+65]=vz[14];
pile[v[22]]=1226; pile[WZ1]=jvj+65; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(1226,jvj+65,jvj+66)*/
if((x[jvj+66]!=67)) goto l45;
pile[v[22]]=1227; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(1227,jvj+65,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=1009; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(1009,jvj+65,V77)*/
V77=pile[WZ2]; 
pile[v[22]]=jvj+55; pile[WZ1]=jvj+67; 
(*f[1290])( );if(v[102]) goto l45;     /*DEPEXP0(jvj+55,jvj+67)*/
V76=(time(tzt)-inccc);
V75=V76-V77;
v[14]=V72;
pile[v[22]]=jvj+65; pile[WZ1]=1048; pile[WZ2]=jvj+67; 
(*f[35])( );     /*CHGC1(jvj+65,1048,jvj+67)*/
pile[WZ1]=1122; pile[WZ2]=V75; 
(*f[43])( );     /*CHGC2(jvj+65,1122,V75)*/
goto l45;
l48:x[jvj+38]=s[x[jvj+92]] ;z[jvj+38]=(x[jvj+38]<=sepcte) ? x[jvj+38] : z[jvj+92];
pile[v[22]]=489; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(489,jvj+38,jvj+39)*/
for(i=x[jvj+39],V92=0;i>0;i=t[i],V92++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(498,jvj+38,jvj+40)*/
pile[v[22]]=473; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l19;     /*FNDC0(473,jvj+40,V94)*/
V94=pile[WZ2]; 
if((V92>=V94)) goto l49;
l19:pile[v[22]]=365; pile[WZ1]=jvj+38; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(365,jvj+38,jvj+41)*/
for(i=x[jvj+41],V96=0;i>0;i=t[i],V96++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(498,jvj+38,jvj+42)*/
pile[v[22]]=473; pile[WZ1]=jvj+42; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(473,jvj+42,V98)*/
V98=pile[WZ2]; 
if((V96<V98)) goto l49;
l50:pile[v[22]]=jvj+38; 
(*f[529])( );     /*SORETAT0(jvj+38)*/
l49:x[jvj+92]=t[x[jvj+92]];
goto l47;
l52:V111=V112;
l63:if(V111!=incon) goto l64;
l66:if(x[RT]==incon) goto l67;
l70:if(x[RT]!=incon) goto l71;
l69:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l53:x[jvj+76]=vo[12];z[jvj+76]=vz[12];
pile[v[22]]=948; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(948,jvj+76,jvj+77)*/
if(x[jvj+77]==68||x[jvj+77]==287) goto l57;
l56:x[RT]=1336 ;z[RT]=1336;
l57:x[jvj+74]=vo[14];z[jvj+74]=vz[14];
pile[v[22]]=jvj+74; pile[WZ1]=1226; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+74,1226,68)*/
if(x[RT]==incon) goto l58;
goto l66;
l54:if(x[jvj+55]==incon) goto l55;
goto l57;
l55:if(x[RT]==incon) goto l53;
goto l57;
l58:if(x[jvj+55]!=incon) goto l59;
l60:if(x[RT]==incon) goto l61;
goto l66;
l59:x[jvj+78]=vo[12];z[jvj+78]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(860,jvj+78,jvj+79)*/
if((x[jvj+79]!=1085)) goto l60;
pile[v[22]]=945; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(945,jvj+78,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=876; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(876,jvj+74,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=365; pile[WZ1]=jvj+55; pile[WZ2]=jvj+80; 
(*f[33])( );     /*FNDE0(365,jvj+55,jvj+80)*/
for(i=x[jvj+80],V132=0;i>0;i=t[i],V132++)  ;
V131=V132+V134;
if((V131<=V136)) goto l60;
x[RT]=12 ;z[RT]=12;
pile[v[22]]=jvj+74; pile[WZ1]=935; pile[WZ2]=1079; 
(*f[35])( );     /*CHGC1(jvj+74,935,1079)*/
goto l60;
l61:x[jvj+81]=vo[12];z[jvj+81]=vz[12];
pile[v[22]]=948; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l66;     /*FNDO0(948,jvj+81,jvj+82)*/
if(x[jvj+82]!=68&&x[jvj+82]!=287) goto l66;
pile[v[22]]=893; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(893,jvj+74,jvj+75)*/
if((x[jvj+75]==12)) goto l66;
l62:V122=(time(tzt)-inccc);
pile[v[22]]=1009; pile[WZ1]=jvj+74; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(1009,jvj+74,V123)*/
V123=pile[WZ2]; 
V121=V122-V123;
pile[v[22]]=0; pile[WZ1]=(-9722); 
(*f[37])( );     /*SRA0(0,(-9722),V161)*/
V161=pile[WZ2]; 
pile[v[22]]=V161; pile[WZ1]=(-9949); 
(*f[37])( );     /*SRA0(V161,(-9949),V162)*/
V162=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10290; pile[WZ2]=V162; 
(*f[39])( );     /*SDX0(20,10290,V162,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=V163; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V163,58,V164)*/
V164=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V121; pile[WZ2]=V164; 
(*f[39])( );     /*SDX0(41,V121,V164,V165)*/
V165=pile[WZ3]; 
pile[v[22]]=V165; pile[WZ1]=(-9522); 
(*f[37])( );     /*SRA0(V165,(-9522),V112)*/
V112=pile[WZ2]; 
V111=incon;
if((V121<=1)) goto l51;
pile[v[22]]=V112; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V112,83,V111)*/
V111=pile[WZ2]; 
l51:if(V111==incon) goto l52;
goto l63;
l64:pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
(*f[1316])( );     /*CREPROG0()*/
x[RT]=12 ;z[RT]=12;
goto l66;
l65:x[jvj+83]=vo[12];z[jvj+83]=vz[12];
pile[v[22]]=948; pile[WZ1]=jvj+83; pile[WZ2]=jvj+84; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(948,jvj+83,jvj+84)*/
if(x[jvj+84]==68||x[jvj+84]==287) goto l70;
l68:pile[v[22]]=865; pile[WZ1]=jvj+74; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l70;     /*FNDO0(865,jvj+74,jvj+85)*/
pile[v[22]]=jvj+55; 
(*f[1317])( );     /*AJOUCHOIX0(jvj+55)*/
x[RT]=120 ;z[RT]=120;
pile[v[22]]=jvj+85; 
(*f[1318])( );     /*BACKTRACK0(jvj+85)*/
goto l70;
l67:if(x[jvj+55]!=incon) goto l65;
goto l70;
l71:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l74:x[jvj+63]=x[jvj+89] ;z[jvj+63]=z[jvj+89];
l17:if(x[jvj+63]==incon) goto l18;
goto l40;
}
