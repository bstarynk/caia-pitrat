#include "dx.h"
void ATOME234T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V38=0,V40=0,V42=0,V10=0,P=0,LL=0,V56=0,V58=0,V54=0,V55=0,V57=0,V52=0,V20=0,V18=0,SOMPRD=0,V68=0,V94=0,V95=0,V83=0,V81=0,V96=0,V91=0,V82=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=85;
x[jvj+1]=20234;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3750&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,R,jvj+41)*/
pile[v[22]]=101; pile[WZ1]=jvj+41; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+41,jvj+42)*/
if((x[jvj+42]!=25)) goto l29;
pile[v[22]]=1188; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(1188,R,jvj+3)*/
if((x[jvj+3]==68)) goto l29;
l25:x[jvj+43]=vo[14];z[jvj+43]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(642,jvj+43,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+44; 
(*f[33])( );     /*FNDE0(1294,R,jvj+44)*/
pile[v[22]]=102; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(102,R,jvj+4)*/
pile[v[22]]=103; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(103,R,jvj+8)*/
x[jvj+7]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(111,jvj+4,jvj+5)*/
pile[v[22]]=101; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(101,jvj+5,jvj+6)*/
if((x[jvj+6]!=485)) goto l1;
pile[v[22]]=107; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(107,jvj+4,jvj+7)*/
l2:x[jvj+11]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(111,jvj+8,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(101,jvj+9,jvj+10)*/
if((x[jvj+10]!=485)) goto l3;
pile[v[22]]=107; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(107,jvj+8,jvj+11)*/
l4:x[jvj+12]=0 ;z[jvj+12]=0;
l5:if((x[jvj+7]<=0)) goto l6;
x[jvj+13]=s[x[jvj+7]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+7];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+13)*/
x[jvj+7]=t[x[jvj+7]];
goto l5;
l1:pile[v[22]]=20; pile[WZ1]=jvj+4; pile[WZ2]=jvj+7; 
(*f[409])( );     /*TRI14(20,jvj+4,jvj+7)*/
goto l2;
l3:pile[v[22]]=20; pile[WZ1]=jvj+8; pile[WZ2]=jvj+11; 
(*f[409])( );     /*TRI14(20,jvj+8,jvj+11)*/
goto l4;
l7:x[jvj+14]=s[x[jvj+11]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+14; 
(*f[68])( );     /*PLUE0(jvj+12,jvj+14)*/
x[jvj+11]=t[x[jvj+11]];
l6:if((x[jvj+11]>0)) goto l7;
x[jvj+45]=d[124];z[jvj+45]=0;
l26:if((x[jvj+45]<=0)) goto l29;
P=s[x[jvj+45]];
x[jvj+20]=0 ;z[jvj+20]=0;
pile[v[22]]=R; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(R,jvj+19)*/
x[jvj+80]=x[jvj+19] ;z[jvj+80]=z[jvj+19];
l11:if((x[jvj+80]>0)) goto l12;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+24; 
(*f[46])( );     /*TRI0(1,117,jvj+24)*/
x[jvj+81]=x[jvj+20] ;z[jvj+81]=z[jvj+20];
l13:if((x[jvj+81]>0)) goto l14;
pile[v[22]]=117; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(117,jvj+24,V42)*/
V42=pile[WZ2]; 
V10=V42;
if((V10>9)) goto l27;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+46; 
(*f[3671])( );if(v[102]) goto l27;     /*PRDPOS0(jvj+20,jvj+46)*/
pile[WZ1]=P; pile[WZ2]=jvj+46; pile[WZ3]=jvj+47; 
(*f[3751])( );if(v[102]) goto l27;     /*CRECOMBI0(jvj+20,P,jvj+46,jvj+47)*/
for(i=x[jvj+47],V20=0;i>0;i=t[i],V20++)  ;
x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+83]=x[jvj+47] ;z[jvj+83]=z[jvj+47];
l17:if((x[jvj+83]>0)) goto l18;
x[jvj+40]=0 ;z[jvj+40]=0;
l21:if((x[jvj+33]>0)) goto l22;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+48; 
(*f[299])( );     /*COPEL0(jvj+40,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=111; pile[WZ2]=jvj+53; 
(*f[54])( );     /*TRI1(jvj+52,111,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+48; pile[WZ2]=107; pile[WZ3]=jvj+54; 
(*f[301])( );     /*TRI11(jvj+53,jvj+48,107,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+54,22,100,jvj+49)*/
pile[v[22]]=107; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+49,jvj+50)*/
for(i=x[jvj+50],V18=0;i>0;i=t[i],V18++)  ;
if((V18>=V20)) goto l27;
V68=x[jvj+44];
l28:if((V68<=0)) goto l27;
SOMPRD=s[V68];
if((v[217]<=0)) goto l31;
V56=x[R];
V58=x[jvj+49];
pile[v[22]]=40; pile[WZ1]=0; pile[WZ2]=35; 
(*f[41])( );     /*SRB0(40,0,35,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V54; 
(*f[39])( );     /*SDX0(20,V56,V54,V55)*/
V55=pile[WZ3]; 
pile[v[22]]=V55; 
(*f[40])( );     /*SLG0(V55)*/
pile[v[22]]=20; pile[WZ1]=V58; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V58,0,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; 
(*f[40])( );     /*SLG0(V57)*/
l31:pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+60; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+60)*/
pile[v[22]]=V52; pile[WZ1]=858; pile[WZ2]=jvj+56; 
(*f[46])( );     /*TRI0(V52,858,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+57; 
(*f[189])( );     /*TRI4(jvj+56,v[13],642,jvj+57)*/
pile[v[22]]=jvj+57; pile[WZ1]=3750; pile[WZ2]=246; pile[WZ3]=jvj+58; 
(*f[189])( );     /*TRI4(jvj+57,3750,246,jvj+58)*/
pile[v[22]]=jvj+58; pile[WZ1]=20234; pile[WZ2]=218; pile[WZ3]=jvj+59; 
(*f[58])( );     /*TRI3(jvj+58,20234,218,jvj+59)*/
pile[v[22]]=jvj+60; pile[WZ1]=(-20); pile[WZ2]=jvj+59; pile[WZ3]=159; pile[WZ4]=jvj+61; 
(*f[298])( );     /*TRIENS1(jvj+60,(-20),jvj+59,159,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+51; 
(*f[58])( );     /*TRI3(jvj+61,1,158,jvj+51)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+51; 
(*f[1296])( );     /*NOUVCONTR0(jvj+49,jvj+51)*/
V68=t[V68];
goto l28;
l9:x[jvj+17]=s[x[jvj+79]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+79];
pile[v[22]]=117; pile[WZ1]=jvj+17; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(117,jvj+17,V38)*/
V38=pile[WZ2]; 
if((V38!=P)) goto l10;
pile[v[22]]=195; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(195,jvj+17,jvj+18)*/
l30:pile[v[22]]=jvj+15; pile[WZ1]=218; pile[WZ2]=jvj+55; 
(*f[54])( );     /*TRI1(jvj+15,218,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+18; pile[WZ2]=195; pile[WZ3]=jvj+21; 
(*f[301])( );     /*TRI11(jvj+55,jvj+18,195,jvj+21)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[68])( );     /*PLUE0(jvj+20,jvj+21)*/
x[jvj+80]=t[x[jvj+80]];
goto l11;
l10:x[jvj+79]=t[x[jvj+79]];
l8:if((x[jvj+79]>0)) goto l9;
pile[v[22]]=195; pile[WZ1]=1280; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(195,1280,jvj+18)*/
goto l30;
l12:x[jvj+15]=s[x[jvj+80]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+80];
x[jvj+18]=incon;
pile[v[22]]=1310; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1310,jvj+15,jvj+16)*/
x[jvj+79]=x[jvj+16] ;z[jvj+79]=z[jvj+16];
goto l8;
l14:x[jvj+22]=s[x[jvj+81]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+81];
pile[v[22]]=195; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(195,jvj+22,jvj+23)*/
for(i=x[jvj+23],V40=0;i>0;i=t[i],V40++)  ;
pile[v[22]]=jvj+24; pile[WZ1]=117; pile[WZ2]=V40; 
(*f[818])( );     /*MTC0(jvj+24,117,V40)*/
x[jvj+81]=t[x[jvj+81]];
goto l13;
l16:x[jvj+25]=s[x[jvj+82]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+82];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+26; pile[WZ2]=P; 
(*f[3733])( );     /*VALFACT0(jvj+25,jvj+26,P,LL)*/
LL=pile[WZ3]; 
pile[v[22]]=jvj+27; pile[WZ1]=LL; 
(*f[978])( );     /*PLUB3(jvj+27,LL)*/
x[jvj+82]=t[x[jvj+82]];
l15:if((x[jvj+82]>0)) goto l16;
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==0) goto l42;
V94=x[jvj+27];
l32:if((V94>0)) goto l44;
V95=x[jvj+27];
if((V95<=0)) goto l19;
V83=s[V95];
V81=V83;
l33:x[jvj+78]=0 ;z[jvj+78]=0;
V96=x[jvj+27];
l34:if((V96>0)) goto l41;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V81; pile[WZ4]=jvj+62; 
(*f[192])( );     /*QUADRI4(100,41,130,V81,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=jvj+63; 
(*f[255])( );     /*COPEXP0(jvj+62,jvj+63)*/
x[jvj+84]=x[jvj+78] ;z[jvj+84]=z[jvj+78];
l35:if((x[jvj+84]>0)) goto l36;
l19:x[jvj+83]=t[x[jvj+83]];
goto l17;
l18:x[jvj+28]=s[x[jvj+83]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+83];
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=48)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+28; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(107,jvj+28,jvj+26)*/
x[jvj+27]=0 ;z[jvj+27]=0;
x[jvj+82]=x[jvj+12] ;z[jvj+82]=z[jvj+12];
goto l15;
l20:pile[v[22]]=R; pile[WZ1]=jvj+34; pile[WZ2]=P; pile[WZ3]=jvj+36; 
(*f[3735])( );     /*FERMATBIS0(R,jvj+34,P,jvj+36)*/
if((x[jvj+36]==135)) goto l24;
l23:x[jvj+33]=t[x[jvj+33]];
goto l21;
l22:x[jvj+37]=s[x[jvj+33]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+33];
pile[v[22]]=111; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+37,jvj+38)*/
pile[v[22]]=101; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+38,jvj+39)*/
if((x[jvj+39]!=48)) goto l23;
pile[v[22]]=107; pile[WZ1]=jvj+37; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(107,jvj+37,jvj+34)*/
if((P!=2)) goto l20;
pile[v[22]]=R; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[3734])( );     /*EVALPAIR0(R,jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l24;
goto l23;
l24:pile[v[22]]=jvj+40; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+37)*/
goto l23;
l27:x[jvj+45]=t[x[jvj+45]];
goto l26;
l29:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l36:x[jvj+64]=s[x[jvj+84]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+84];
pile[v[22]]=jvj+64; pile[WZ1]=jvj+62; pile[WZ2]=jvj+65; 
(*f[760])( );     /*MEMEX0(jvj+64,jvj+62,jvj+65)*/
if((x[jvj+65]==135)) goto l37;
x[jvj+84]=t[x[jvj+84]];
goto l35;
l37:x[jvj+75]=0 ;z[jvj+75]=0;
x[jvj+85]=x[jvj+78] ;z[jvj+85]=z[jvj+78];
l38:if((x[jvj+85]>0)) goto l39;
x[jvj+66]=x[jvj+75] ;z[jvj+66]=z[jvj+75];
pile[v[22]]=jvj+66; pile[WZ1]=jvj+67; 
(*f[299])( );     /*COPEL0(jvj+66,jvj+67)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+68)*/
pile[WZ3]=485; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+67; pile[WZ2]=107; pile[WZ3]=jvj+71; 
(*f[301])( );     /*TRI11(jvj+70,jvj+67,107,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+71,22,100,jvj+72)*/
pile[v[22]]=jvj+68; pile[WZ1]=111; pile[WZ2]=jvj+73; 
(*f[54])( );     /*TRI1(jvj+68,111,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+63; pile[WZ2]=103; pile[WZ3]=jvj+74; 
(*f[58])( );     /*TRI3(jvj+73,jvj+63,103,jvj+74)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+72; pile[WZ4]=jvj+74; pile[WZ5]=jvj+31; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+72,jvj+74,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=P; pile[WZ2]=jvj+32; 
(*f[3732])( );if(v[102]) goto l19;     /*METEXPO0(jvj+31,P,jvj+32)*/
if((x[jvj+32]==0)) goto l19;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+33,jvj+28)*/
goto l19;
l39:x[jvj+76]=s[x[jvj+85]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+85];
if((x[jvj+76]==x[jvj+64])) goto l40;
pile[v[22]]=jvj+75; pile[WZ1]=jvj+76; 
(*f[68])( );     /*PLUE0(jvj+75,jvj+76)*/
l40:x[jvj+85]=t[x[jvj+85]];
goto l38;
l41:V91=s[V96];
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V91; pile[WZ4]=jvj+77; 
(*f[192])( );     /*QUADRI4(100,41,130,V91,jvj+77)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+77; 
(*f[522])( );     /*PLUB2(jvj+78,jvj+77)*/
V96=t[V96];
goto l34;
l42:V81=0;
goto l33;
l43:V81=V82;
goto l33;
l44:V82=s[V94];
if((V82<0)) goto l43;
V94=t[V94];
goto l32;
}
