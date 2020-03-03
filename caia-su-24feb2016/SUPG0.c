#include "dx.h"
void SUPG0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int X=0,V3=0,V23=0,I=0,V11=0,V104=0,V117=0,V112=0,V106=0,V105=0,V131=0,V142=0,V137=0,V133=0,V132=0,K=0,V27=0,V125=0,XX=0,YY=0,V149=0,V17=0,V15=0,V97=0,V95=0,S=0,V50=0,V56=0,V170=0,V85=0,V86=0,V87=0,V83=0,RA=0,L=0,V172=0,V42=0,V36=0,V38=0,RS=0,V43=0,RB=0,V68=0,V69=0,V67=0,V66=0,V64=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=107;
x[jvj+1]=10933;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3108&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[R]=RB=RA=x[jvj+107]=x[jvj+36]=x[jvj+75]=incon;
pile[v[22]]=A; pile[WZ1]=jvj+2; 
(*f[887])( );     /*VARND0(A,jvj+2)*/
for(i=x[jvj+2],V3=0;i>0;i=t[i],V3++)  ;
if((V3!=1)) goto l14;
if((x[jvj+2]<=0)) goto l14;
X=s[x[jvj+2]];
if((X!=x[B])) goto l14;
pile[WZ1]=R; 
(*f[255])( );     /*COPEXP0(A,R)*/
l21:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(111,A,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=485)) goto l63;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,A,jvj+36)*/
for(i=x[jvj+36],V97=0;i>0;i=t[i],V97++)  ;
x[jvj+47]=0 ;z[jvj+47]=0;
x[jvj+98]=x[jvj+36] ;z[jvj+98]=z[jvj+36];
l30:if((x[jvj+98]>0)) goto l31;
pile[v[22]]=jvj+47; pile[WZ1]=jvj+48; 
(*f[299])( );     /*COPEL0(jvj+47,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+48; pile[WZ2]=107; pile[WZ3]=jvj+88; 
(*f[301])( );     /*TRI11(jvj+87,jvj+48,107,jvj+88)*/
pile[v[22]]=jvj+88; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+49; 
(*f[58])( );     /*TRI3(jvj+88,22,100,jvj+49)*/
pile[v[22]]=107; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(107,jvj+49,jvj+50)*/
for(i=x[jvj+50],V95=0;i>0;i=t[i],V95++)  ;
if((V95!=V97)) goto l33;
x[jvj+107]=x[jvj+49] ;z[jvj+107]=z[jvj+49];
l33:x[jvj+51]=vo[16];z[jvj+51]=vz[16];
pile[v[22]]=242; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(242,jvj+51,jvj+52)*/
x[jvj+40]=0 ;z[jvj+40]=0;
x[jvj+95]=x[jvj+36] ;z[jvj+95]=z[jvj+36];
l22:if((x[jvj+95]>0)) goto l23;
x[jvj+75]=x[jvj+40] ;z[jvj+75]=z[jvj+40];
x[jvj+43]=0 ;z[jvj+43]=0;
x[jvj+96]=x[jvj+75] ;z[jvj+96]=z[jvj+75];
l26:if((x[jvj+96]>0)) goto l27;
x[jvj+65]=x[jvj+43] ;z[jvj+65]=z[jvj+43];
S=x[jvj+52];
pile[v[22]]=18; pile[WZ1]=0; pile[WZ2]=117; pile[WZ3]=0; pile[WZ4]=jvj+64; 
(*f[391])( );     /*QUADRI10(18,0,117,0,jvj+64)*/
x[jvj+103]=x[jvj+75] ;z[jvj+103]=z[jvj+75];
l44:if((x[jvj+103]>0)) goto l45;
for(i=x[jvj+75],V86=0;i>0;i=t[i],V86++)  ;
pile[v[22]]=18; pile[WZ1]=jvj+64; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(18,jvj+64,V87)*/
V87=pile[WZ2]; 
if((V86!=V87)) goto l47;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(117,jvj+64,V83)*/
V83=pile[WZ2]; 
RA=V83;
l47:if((S==923)) goto l41;
if((S!=688)) goto l63;
x[jvj+99]=x[jvj+65] ;z[jvj+99]=z[jvj+65];
l34:if((x[jvj+99]<=0)) goto l63;
x[jvj+53]=s[x[jvj+99]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+99];
pile[v[22]]=498; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(498,jvj+53,jvj+54)*/
pile[v[22]]=688; pile[WZ1]=jvj+54; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(688,jvj+54,V50)*/
V50=pile[WZ2]; 
if((V50!=1)) goto l35;
x[jvj+100]=t[x[jvj+99]];
l36:if((x[jvj+100]<=0)) goto l35;
x[jvj+55]=s[x[jvj+100]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+100];
pile[v[22]]=498; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(498,jvj+55,jvj+56)*/
if((x[jvj+54]!=x[jvj+56])) goto l37;
x[jvj+60]=0 ;z[jvj+60]=0;
pile[WZ1]=jvj+53; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(498,jvj+53,jvj+57)*/
x[jvj+101]=x[jvj+65] ;z[jvj+101]=z[jvj+65];
l38:if((x[jvj+101]<=0)) goto l49;
x[jvj+58]=s[x[jvj+101]] ;z[jvj+58]=(x[jvj+58]<=sepcte) ? x[jvj+58] : z[jvj+101];
pile[v[22]]=498; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(498,jvj+58,jvj+59)*/
if((x[jvj+59]!=x[jvj+57])) goto l39;
pile[v[22]]=jvj+60; 
(*f[68])( );     /*PLUE0(jvj+60,jvj+58)*/
l39:x[jvj+101]=t[x[jvj+101]];
goto l38;
l2:x[jvj+3]=s[x[jvj+94]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+94];
pile[v[22]]=130; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(130,jvj+3,V23)*/
V23=pile[WZ2]; 
I=V23;
if((I<0)) goto l4;
l3:x[jvj+94]=t[x[jvj+94]];
l1:if((x[jvj+94]>0)) goto l2;
V11=250;
l4:x[jvj+6]=0 ;z[jvj+6]=0;
l5:if((x[jvj+30]>0)) goto l6;
pile[v[22]]=jvj+6; pile[WZ1]=jvj+31; 
(*f[299])( );     /*COPEL0(jvj+6,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+83; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+83)*/
pile[v[22]]=jvj+83; pile[WZ1]=111; pile[WZ2]=jvj+84; 
(*f[54])( );     /*TRI1(jvj+83,111,jvj+84)*/
pile[v[22]]=jvj+84; pile[WZ1]=jvj+31; pile[WZ2]=107; pile[WZ3]=jvj+85; 
(*f[301])( );     /*TRI11(jvj+84,jvj+31,107,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+32; 
(*f[58])( );     /*TRI3(jvj+85,22,100,jvj+32)*/
pile[v[22]]=107; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,jvj+32,jvj+33)*/
for(i=x[jvj+33],V15=0;i>0;i=t[i],V15++)  ;
if((V15!=V17)) goto l21;
x[R]=x[jvj+32] ;z[R]=z[jvj+32];
goto l21;
l6:x[jvj+4]=s[x[jvj+30]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+30];
pile[v[22]]=B; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[3108])( );if(v[102]) goto l7;     /*SUPG0(B,jvj+4,jvj+5)*/
pile[v[22]]=jvj+6; pile[WZ1]=jvj+5; 
(*f[68])( );     /*PLUE0(jvj+6,jvj+5)*/
l7:x[jvj+30]=t[x[jvj+30]];
goto l5;
l9:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=130; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+9,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=V117; pile[WZ1]=V112; 
(*f[201])( );if(v[102]) goto l10;     /*FCOEFF0(V117,V112,V106)*/
V106=pile[WZ2]; 
V105=V106;
if(V105>V104) V104=V105;
l10:x[jvj+8]=t[x[jvj+8]];
l8:if((x[jvj+8]>0)) goto l9;
if((V104==(-999999))) goto l21;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V104; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V104,R)*/
goto l21;
l12:x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=130; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+12,V142)*/
V142=pile[WZ2]; 
pile[v[22]]=V142; pile[WZ1]=V137; 
(*f[201])( );if(v[102]) goto l13;     /*FCOEFF0(V142,V137,V133)*/
V133=pile[WZ2]; 
V132=V133;
if(V132>V131) V131=V132;
l13:x[jvj+11]=t[x[jvj+11]];
l11:if((x[jvj+11]>0)) goto l12;
if((V131==(-999999))) goto l18;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V131; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V131,R)*/
goto l21;
l14:pile[v[22]]=130; pile[WZ1]=A; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(130,A,K)*/
K=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=K; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,K,R)*/
goto l21;
l15:pile[v[22]]=100; pile[WZ1]=A; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,A,jvj+13)*/
if((x[jvj+13]==484)) goto l16;
if((x[jvj+13]==22)) goto l17;
if((x[jvj+13]!=531)) goto l18;
pile[v[22]]=111; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,A,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+18,V137)*/
V137=pile[WZ2]; 
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,A,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,jvj+19,jvj+20)*/
if((x[jvj+20]!=484)) goto l18;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(jvj+19,jvj+10)*/
V131=(-999999);
pile[v[22]]=365; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(365,jvj+10,jvj+11)*/
goto l11;
l16:pile[v[22]]=A; pile[WZ1]=jvj+14; 
(*f[200])( );if(v[102]) goto l18;     /*NDD0(A,jvj+14)*/
pile[v[22]]=164; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(164,jvj+14,V27)*/
V27=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V27; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V27,R)*/
goto l21;
l17:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(111,A,jvj+15)*/
pile[v[22]]=101; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(101,jvj+15,jvj+16)*/
if(x[jvj+16]!=1214&&x[jvj+16]!=1215&&x[jvj+16]!=1273) goto l18;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,A,jvj+17)*/
for(i=x[jvj+17],V125=0;i>0;i=t[i],V125++)  ;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V125; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V125,R)*/
goto l21;
l18:pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(111,A,jvj+21)*/
pile[v[22]]=101; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(101,jvj+21,jvj+22)*/
if((x[jvj+22]==542)) goto l19;
if((x[jvj+22]==596)) goto l20;
if((x[jvj+22]!=486)) goto l21;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(107,A,jvj+30)*/
for(i=x[jvj+30],V17=0;i>0;i=t[i],V17++)  ;
V11=incon;
x[jvj+94]=x[jvj+30] ;z[jvj+94]=z[jvj+30];
goto l1;
l19:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,A,jvj+23)*/
pile[v[22]]=163; pile[WZ1]=jvj+23; 
(*f[44])( );if(v[102]) goto l21;     /*FNDC1(163,jvj+23,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,A,jvj+24)*/
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=484)) goto l21;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+7; 
(*f[200])( );if(v[102]) goto l21;     /*NDD0(jvj+24,jvj+7)*/
V104=(-999999);
pile[v[22]]=365; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(365,jvj+7,jvj+8)*/
goto l8;
l20:pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(102,A,jvj+26)*/
pile[v[22]]=B; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[3108])( );if(v[102]) goto l21;     /*SUPG0(B,jvj+26,jvj+27)*/
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+27,XX)*/
XX=pile[WZ2]; 
if((XX<=0)) goto l21;
pile[v[22]]=103; pile[WZ1]=A; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(103,A,jvj+28)*/
pile[v[22]]=B; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[3108])( );if(v[102]) goto l21;     /*SUPG0(B,jvj+28,jvj+29)*/
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(130,jvj+29,YY)*/
YY=pile[WZ2]; 
if((YY<0)) goto l21;
pile[v[22]]=YY; pile[WZ1]=XX; 
(*f[1006])( );if(v[102]) goto l21;     /*POWER0(YY,XX,V149)*/
V149=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V149; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V149,R)*/
goto l21;
l23:x[jvj+37]=s[x[jvj+95]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+95];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+38; 
(*f[1205])( );     /*LINELEM0(jvj+37,jvj+38)*/
if((x[jvj+38]==135)) goto l25;
l24:x[jvj+95]=t[x[jvj+95]];
goto l22;
l25:pile[v[22]]=jvj+37; pile[WZ1]=jvj+39; 
(*f[887])( );     /*VARND0(jvj+37,jvj+39)*/
for(a=x[jvj+39];a>0;a=t[a]) if(s[a]==x[B]) goto l24;
pile[v[22]]=jvj+40; pile[WZ1]=jvj+37; 
(*f[68])( );     /*PLUE0(jvj+40,jvj+37)*/
goto l24;
l27:x[jvj+41]=s[x[jvj+96]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+96];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+42; 
(*f[887])( );     /*VARND0(jvj+41,jvj+42)*/
x[jvj+97]=x[jvj+42] ;z[jvj+97]=z[jvj+42];
l28:if((x[jvj+97]>0)) goto l29;
x[jvj+96]=t[x[jvj+96]];
goto l26;
l29:x[jvj+44]=s[x[jvj+97]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+97];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[68])( );     /*PLUE0(jvj+43,jvj+44)*/
x[jvj+97]=t[x[jvj+97]];
goto l28;
l31:x[jvj+45]=s[x[jvj+98]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+98];
pile[v[22]]=B; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[3108])( );if(v[102]) goto l32;     /*SUPG0(B,jvj+45,jvj+46)*/
pile[v[22]]=jvj+47; pile[WZ1]=jvj+46; 
(*f[68])( );     /*PLUE0(jvj+47,jvj+46)*/
l32:x[jvj+98]=t[x[jvj+98]];
goto l30;
l35:x[jvj+99]=t[x[jvj+99]];
goto l34;
l37:x[jvj+100]=t[x[jvj+100]];
goto l36;
l41:x[jvj+102]=x[jvj+65] ;z[jvj+102]=z[jvj+65];
l40:if((x[jvj+102]<=0)) goto l63;
x[jvj+61]=s[x[jvj+102]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+102];
pile[v[22]]=921; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[33])( );     /*FNDE0(921,jvj+61,jvj+62)*/
V170=t[x[jvj+102]];
l42:if((V170>0)) goto l43;
x[jvj+102]=t[x[jvj+102]];
goto l40;
l43:V56=s[V170];
for(a=x[jvj+62];a>0;a=t[a]) if(s[a]==V56) goto l48;
V170=t[V170];
goto l42;
l45:x[jvj+63]=s[x[jvj+103]] ;z[jvj+63]=(x[jvj+63]<=sepcte) ? x[jvj+63] : z[jvj+103];
pile[v[22]]=jvj+63; 
(*f[1160])( );if(v[102]) goto l46;     /*SUP0(jvj+63,V85)*/
V85=pile[WZ1]; 
pile[v[22]]=jvj+64; pile[WZ1]=117; pile[WZ2]=V85; 
(*f[186])( );     /*BTC0(jvj+64,117,V85)*/
pile[WZ1]=18; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+64,18,1)*/
l46:x[jvj+103]=t[x[jvj+103]];
goto l44;
l48:pile[v[22]]=jvj+65; pile[WZ1]=jvj+61; pile[WZ2]=jvj+66; 
(*f[3992])( );     /*CONSTREX0(jvj+65,jvj+61,jvj+66)*/
l50:x[jvj+69]=0 ;z[jvj+69]=0;
x[jvj+104]=x[jvj+75] ;z[jvj+104]=z[jvj+75];
l53:if((x[jvj+104]>0)) goto l54;
for(i=x[jvj+66],V38=0;i>0;i=t[i],V38++)  ;
pile[v[22]]=jvj+66; pile[WZ1]=V38; pile[WZ2]=164; pile[WZ3]=jvj+74; 
(*f[3989])( );if(v[102]) goto l63;     /*SETVAL0(jvj+66,V38,164,jvj+74)*/
pile[v[22]]=jvj+75; pile[WZ1]=jvj+66; pile[WZ2]=V38; pile[WZ3]=jvj+76; 
(*f[3990])( );     /*ENSCOEFF0(jvj+75,jvj+66,V38,jvj+76)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+76; 
(*f[3991])( );if(v[102]) goto l63;     /*PRODBAGS0(jvj+74,jvj+76,RS)*/
RS=pile[WZ2]; 
x[jvj+72]=0 ;z[jvj+72]=0;
x[jvj+105]=x[jvj+69] ;z[jvj+105]=z[jvj+69];
l56:if((x[jvj+105]>0)) goto l57;
V36=incon;
V42=0;
if((x[jvj+69]==V42)) goto l58;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=111; pile[WZ2]=jvj+92; 
(*f[54])( );     /*TRI1(jvj+91,111,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=jvj+72; pile[WZ2]=107; pile[WZ3]=jvj+93; 
(*f[301])( );     /*TRI11(jvj+92,jvj+72,107,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+93,22,100,jvj+73)*/
pile[v[22]]=jvj+73; 
(*f[1160])( );if(v[102]) goto l63;     /*SUP0(jvj+73,V36)*/
V36=pile[WZ1]; 
l59:V43=V36+RS;
RB=V43;
l63:if(x[R]==incon) goto l64;
l74:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l49:x[jvj+66]=x[jvj+60] ;z[jvj+66]=z[jvj+60];
goto l50;
l52:L=s[V172];
for(a=x[jvj+68];a>0;a=t[a]) if(s[a]==L) goto l55;
V172=t[V172];
l51:if((V172>0)) goto l52;
pile[v[22]]=jvj+69; pile[WZ1]=jvj+67; 
(*f[68])( );     /*PLUE0(jvj+69,jvj+67)*/
l55:x[jvj+104]=t[x[jvj+104]];
goto l53;
l54:x[jvj+67]=s[x[jvj+104]] ;z[jvj+67]=(x[jvj+67]<=sepcte) ? x[jvj+67] : z[jvj+104];
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; 
(*f[887])( );     /*VARND0(jvj+67,jvj+68)*/
V172=x[jvj+66];
goto l51;
l57:x[jvj+70]=s[x[jvj+105]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+105];
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; 
(*f[255])( );     /*COPEXP0(jvj+70,jvj+71)*/
pile[v[22]]=jvj+72; 
(*f[68])( );     /*PLUE0(jvj+72,jvj+71)*/
x[jvj+105]=t[x[jvj+105]];
goto l56;
l58:V36=0;
goto l59;
l61:x[jvj+77]=s[x[jvj+106]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+106];
for(a=x[jvj+75];a>0;a=t[a]) if(s[a]==x[jvj+77]) goto l62;
pile[v[22]]=B; pile[WZ1]=jvj+77; pile[WZ2]=jvj+78; 
(*f[3108])( );if(v[102]) goto l62;     /*SUPG0(B,jvj+77,jvj+78)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+78; 
(*f[68])( );     /*PLUE0(jvj+79,jvj+78)*/
l62:x[jvj+106]=t[x[jvj+106]];
l60:if((x[jvj+106]>0)) goto l61;
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[299])( );     /*COPEL0(jvj+79,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+89; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+89)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=RB; pile[WZ4]=jvj+90; 
(*f[192])( );     /*QUADRI4(100,41,130,RB,jvj+90)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+89; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+89,jvj+81)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+81; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+80,jvj+81,107)*/
pile[v[22]]=jvj+81; pile[WZ1]=107; pile[WZ2]=jvj+90; 
(*f[36])( );     /*PLUSC0(jvj+81,107,jvj+90)*/
pile[v[22]]=107; pile[WZ1]=jvj+81; pile[WZ2]=jvj+82; 
(*f[33])( );     /*FNDE0(107,jvj+81,jvj+82)*/
for(i=x[jvj+82],V64=0;i>0;i=t[i],V64++)  ;
if((V64!=V66)) goto l72;
x[R]=x[jvj+81] ;z[R]=z[jvj+81];
goto l74;
l64:if(RB!=incon) goto l65;
l72:if(x[jvj+107]!=incon) goto l68;
l73:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l65:if(RA!=incon) goto l66;
goto l72;
l66:if(x[jvj+107]!=incon) goto l67;
l69:if(x[jvj+36]!=incon) goto l70;
goto l72;
l67:if((RA<=RB)) goto l68;
goto l69;
l68:x[R]=x[jvj+107] ;z[R]=z[jvj+107];
goto l74;
l70:if(x[jvj+75]!=incon) goto l71;
goto l72;
l71:if((RA<=RB)) goto l72;
for(i=x[jvj+36],V68=0;i>0;i=t[i],V68++)  ;
for(i=x[jvj+75],V69=0;i>0;i=t[i],V69++)  ;
V67=V68-V69;
V66=V67+1;
x[jvj+79]=0 ;z[jvj+79]=0;
x[jvj+106]=x[jvj+36] ;z[jvj+106]=z[jvj+36];
goto l60;
}
