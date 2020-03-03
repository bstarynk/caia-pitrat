#include "dx.h"
void CARREDE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V102=0,V101=0,V108=0,V107=0,V106=0,V98=0,V96=0,KK=0,K=0,V22=0,V25=0,V14=0,V69=0,V53=0,L=0,V8=0,V99=0,I=0,V86=0;
int N;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=80;
if(v[0]>99700) (*f[6])( );

N=pile[v[22]]; R=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+18]=L=x[jvj+43]=x[R]=incon;
pile[v[22]]=130; pile[WZ1]=N; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(130,N,KK)*/
KK=pile[WZ2]; 
K=KK;
l28:if((K<=0)) goto l29;
pile[v[22]]=K; 
(*f[627])( );if(v[102]) goto l29;     /*RACINEXACTE0(K,L)*/
L=pile[WZ1]; 
l29:if(x[jvj+18]==incon) goto l30;
l31:if(x[jvj+43]==incon) goto l32;
if(x[R]==incon) goto l36;
l59:v[0]=jvj; v[22]-=2; v[102]=0;return;
l2:x[jvj+1]=s[x[jvj+54]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+54];
pile[v[22]]=515; pile[WZ1]=jvj+1; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(515,jvj+1,V102)*/
V102=pile[WZ2]; 
V101=V102%2;
if((V101!=0)) goto l54;
l3:x[jvj+54]=t[x[jvj+54]];
l1:if((x[jvj+54]>0)) goto l2;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(1,117,jvj+3)*/
l4:if((x[jvj+38]>0)) goto l5;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(117,jvj+3,V96)*/
V96=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V96; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,V96,R)*/
goto l59;
l5:x[jvj+2]=s[x[jvj+38]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+38];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(510,jvj+2,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(515,jvj+2,V107)*/
V107=pile[WZ2]; 
V106=V107/2;
pile[v[22]]=V106; pile[WZ1]=V108; 
(*f[1006])( );if(v[102]) goto l6;     /*POWER0(V106,V108,V98)*/
V98=pile[WZ2]; 
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=V98; 
(*f[818])( );     /*MTC0(jvj+3,117,V98)*/
l6:x[jvj+38]=t[x[jvj+38]];
goto l4;
l7:pile[v[22]]=111; pile[WZ1]=N; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,N,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=486)) goto l36;
pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(107,N,jvj+6)*/
for(i=x[jvj+6],V22=0;i>0;i=t[i],V22++)  ;
if((V22==3)) goto l9;
if((V22!=5)) goto l36;
x[jvj+59]=x[jvj+6] ;z[jvj+59]=z[jvj+6];
l16:if((x[jvj+59]<=0)) goto l36;
x[jvj+11]=s[x[jvj+59]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+59];
pile[v[22]]=130; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(130,jvj+11,V69)*/
V69=pile[WZ2]; 
V53=V69;
x[jvj+74]=x[jvj+6] ;z[jvj+74]=z[jvj+6];
l18:if((x[jvj+74]<=0)) goto l17;
x[jvj+60]=s[x[jvj+74]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+74];
if((x[jvj+11]==x[jvj+60])) goto l19;
x[jvj+12]=x[jvj+60] ;z[jvj+12]=z[jvj+60];
x[jvj+64]=x[jvj+12] ;z[jvj+64]=z[jvj+12];
x[jvj+75]=x[jvj+6] ;z[jvj+75]=z[jvj+6];
l20:if((x[jvj+75]<=0)) goto l19;
x[jvj+61]=s[x[jvj+75]] ;z[jvj+61]=(x[jvj+61]<=sepcte) ? x[jvj+61] : z[jvj+75];
if((x[jvj+11]==x[jvj+61])) goto l21;
if((x[jvj+60]==x[jvj+61])) goto l21;
x[jvj+13]=x[jvj+61] ;z[jvj+13]=z[jvj+61];
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[760])( );     /*MEMEX0(jvj+12,jvj+13,jvj+14)*/
if((x[jvj+14]==135)) goto l23;
l21:x[jvj+75]=t[x[jvj+75]];
goto l20;
l9:x[jvj+55]=x[jvj+6] ;z[jvj+55]=z[jvj+6];
l8:if((x[jvj+55]<=0)) goto l36;
x[jvj+7]=s[x[jvj+55]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+55];
pile[v[22]]=130; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+7,V25)*/
V25=pile[WZ2]; 
V14=V25;
x[jvj+73]=x[jvj+6] ;z[jvj+73]=z[jvj+6];
l11:if((x[jvj+73]<=0)) goto l10;
x[jvj+56]=s[x[jvj+73]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+73];
if((x[jvj+7]==x[jvj+56])) goto l12;
x[jvj+8]=x[jvj+56] ;z[jvj+8]=z[jvj+56];
x[jvj+58]=x[jvj+8] ;z[jvj+58]=z[jvj+8];
x[jvj+57]=x[jvj+6] ;z[jvj+57]=z[jvj+6];
l13:if((x[jvj+57]<=0)) goto l12;
x[jvj+9]=s[x[jvj+57]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+57];
if((x[jvj+7]==x[jvj+9])) goto l14;
if((x[jvj+56]==x[jvj+9])) goto l14;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[760])( );     /*MEMEX0(jvj+8,jvj+9,jvj+10)*/
if((x[jvj+10]==135)) goto l15;
l14:x[jvj+57]=t[x[jvj+57]];
goto l13;
l10:x[jvj+55]=t[x[jvj+55]];
goto l8;
l12:x[jvj+73]=t[x[jvj+73]];
goto l11;
l15:K=V14;
x[jvj+18]=x[jvj+58] ;z[jvj+18]=z[jvj+58];
goto l28;
l17:x[jvj+59]=t[x[jvj+59]];
goto l16;
l19:x[jvj+74]=t[x[jvj+74]];
goto l18;
l23:x[jvj+76]=x[jvj+6] ;z[jvj+76]=z[jvj+6];
l22:if((x[jvj+76]<=0)) goto l21;
x[jvj+62]=s[x[jvj+76]] ;z[jvj+62]=(x[jvj+62]<=sepcte) ? x[jvj+62] : z[jvj+76];
if((x[jvj+11]==x[jvj+62])) goto l24;
if((x[jvj+60]==x[jvj+62])) goto l24;
if((x[jvj+61]==x[jvj+62])) goto l24;
x[jvj+15]=x[jvj+62] ;z[jvj+15]=z[jvj+62];
x[jvj+65]=x[jvj+15] ;z[jvj+65]=z[jvj+15];
x[jvj+63]=x[jvj+6] ;z[jvj+63]=z[jvj+6];
l25:if((x[jvj+63]<=0)) goto l24;
x[jvj+16]=s[x[jvj+63]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+63];
if((x[jvj+11]==x[jvj+16])) goto l26;
if((x[jvj+60]==x[jvj+16])) goto l26;
if((x[jvj+61]==x[jvj+16])) goto l26;
if((x[jvj+62]==x[jvj+16])) goto l26;
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l27;
l26:x[jvj+63]=t[x[jvj+63]];
goto l25;
l24:x[jvj+76]=t[x[jvj+76]];
goto l22;
l27:K=V53;
x[jvj+18]=x[jvj+64] ;z[jvj+18]=z[jvj+64];
x[jvj+43]=x[jvj+65] ;z[jvj+43]=z[jvj+65];
goto l28;
l30:if(L!=incon) goto l60;
goto l31;
l32:if(x[R]==incon) goto l33;
goto l59;
l33:if(x[jvj+18]!=incon) goto l34;
l36:pile[v[22]]=111; pile[WZ1]=N; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(111,N,jvj+20)*/
pile[v[22]]=101; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(101,jvj+20,jvj+21)*/
if((x[jvj+21]==486)) goto l37;
if((x[jvj+21]!=596)) goto l54;
pile[v[22]]=102; pile[WZ1]=N; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(102,N,jvj+39)*/
pile[v[22]]=130; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+39,I)*/
I=pile[WZ2]; 
pile[v[22]]=I; 
(*f[627])( );if(v[102]) goto l54;     /*RACINEXACTE0(I,V86)*/
V86=pile[WZ1]; 
pile[v[22]]=103; pile[WZ1]=N; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(103,N,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=596; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,596,jvj+48)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V86; pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(100,41,130,V86,jvj+51)*/
pile[v[22]]=jvj+48; pile[WZ1]=111; pile[WZ2]=jvj+49; 
(*f[54])( );     /*TRI1(jvj+48,111,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+50; 
(*f[58])( );     /*TRI3(jvj+49,jvj+41,103,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+51; pile[WZ4]=jvj+50; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+51,jvj+50,R)*/
goto l59;
l34:if(L!=incon) goto l35;
goto l36;
l35:pile[v[22]]=jvj+18; pile[WZ1]=jvj+19; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+19)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+45)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+46; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+46)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+45; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+45,R)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+46; 
(*f[36])( );     /*PLUSC0(R,107,jvj+46)*/
pile[WZ2]=jvj+19; 
(*f[36])( );     /*PLUSC0(R,107,jvj+19)*/
goto l59;
l37:pile[v[22]]=107; pile[WZ1]=N; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(107,N,jvj+22)*/
for(i=x[jvj+22],V8=0;i>0;i=t[i],V8++)  ;
if((V8==2)) goto l39;
if((V8!=4)) goto l53;
x[jvj+78]=x[jvj+22] ;z[jvj+78]=z[jvj+22];
l44:if((x[jvj+78]<=0)) goto l53;
x[jvj+69]=s[x[jvj+78]] ;z[jvj+69]=(x[jvj+69]<=sepcte) ? x[jvj+69] : z[jvj+78];
x[jvj+28]=x[jvj+69] ;z[jvj+28]=z[jvj+69];
x[jvj+26]=x[jvj+28] ;z[jvj+26]=z[jvj+28];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
x[jvj+79]=x[jvj+22] ;z[jvj+79]=z[jvj+22];
l45:if((x[jvj+79]>0)) goto l46;
x[jvj+78]=t[x[jvj+78]];
goto l44;
l39:x[jvj+77]=x[jvj+22] ;z[jvj+77]=z[jvj+22];
l38:if((x[jvj+77]<=0)) goto l53;
x[jvj+66]=s[x[jvj+77]] ;z[jvj+66]=(x[jvj+66]<=sepcte) ? x[jvj+66] : z[jvj+77];
x[jvj+23]=x[jvj+66] ;z[jvj+23]=z[jvj+66];
x[jvj+68]=x[jvj+23] ;z[jvj+68]=z[jvj+23];
x[jvj+67]=x[jvj+22] ;z[jvj+67]=z[jvj+22];
l40:if((x[jvj+67]>0)) goto l41;
x[jvj+77]=t[x[jvj+77]];
goto l38;
l41:x[jvj+24]=s[x[jvj+67]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+67];
if((x[jvj+66]==x[jvj+24])) goto l42;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[760])( );     /*MEMEX0(jvj+23,jvj+24,jvj+25)*/
if((x[jvj+25]==135)) goto l43;
l42:x[jvj+67]=t[x[jvj+67]];
goto l40;
l43:x[R]=x[jvj+68] ;z[R]=z[jvj+68];
goto l59;
l46:x[jvj+70]=s[x[jvj+79]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+79];
if((x[jvj+69]==x[jvj+70])) goto l47;
x[jvj+29]=x[jvj+70] ;z[jvj+29]=z[jvj+70];
pile[v[22]]=jvj+28; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[760])( );     /*MEMEX0(jvj+28,jvj+29,jvj+30)*/
if((x[jvj+30]==135)) goto l49;
l47:x[jvj+79]=t[x[jvj+79]];
goto l45;
l49:x[jvj+80]=x[jvj+22] ;z[jvj+80]=z[jvj+22];
l48:if((x[jvj+80]<=0)) goto l47;
x[jvj+71]=s[x[jvj+80]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+80];
if((x[jvj+69]==x[jvj+71])) goto l50;
if((x[jvj+70]==x[jvj+71])) goto l50;
x[jvj+33]=x[jvj+71] ;z[jvj+33]=z[jvj+71];
x[jvj+31]=x[jvj+33] ;z[jvj+31]=z[jvj+33];
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[255])( );     /*COPEXP0(jvj+31,jvj+32)*/
x[jvj+72]=x[jvj+22] ;z[jvj+72]=z[jvj+22];
l51:if((x[jvj+72]<=0)) goto l50;
x[jvj+34]=s[x[jvj+72]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+72];
if((x[jvj+69]==x[jvj+34])) goto l52;
if((x[jvj+70]==x[jvj+34])) goto l52;
if((x[jvj+71]==x[jvj+34])) goto l52;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[760])( );     /*MEMEX0(jvj+33,jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l61;
l52:x[jvj+72]=t[x[jvj+72]];
goto l51;
l50:x[jvj+80]=t[x[jvj+80]];
goto l48;
l53:pile[v[22]]=N; pile[WZ1]=jvj+36; 
(*f[887])( );     /*VARND0(N,jvj+36)*/
if((x[jvj+36]!=0)) goto l54;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+37; 
(*f[1680])( );if(v[102]) goto l54;     /*PRDFACT0(jvj+22,jvj+37)*/
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(510,jvj+37,V99)*/
V99=pile[WZ2]; 
if((V99!=1)) goto l54;
pile[v[22]]=1260; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(1260,jvj+37,jvj+38)*/
x[jvj+54]=x[jvj+38] ;z[jvj+54]=z[jvj+38];
goto l1;
l54:if(x[jvj+18]!=incon) goto l55;
l58:v[0]=jvj; v[22]-=2; v[102]=1;return;
l55:if(x[jvj+43]!=incon) goto l56;
goto l58;
l56:if(L!=incon) goto l57;
goto l58;
l57:pile[v[22]]=jvj+18; pile[WZ1]=jvj+42; 
(*f[255])( );     /*COPEXP0(jvj+18,jvj+42)*/
pile[v[22]]=jvj+43; pile[WZ1]=jvj+44; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+44)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+52)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,L,jvj+53)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+52; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+52,R)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(R,107,jvj+53)*/
pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(R,107,jvj+42)*/
pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(R,107,jvj+44)*/
goto l59;
l60:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=L; pile[WZ4]=R; 
(*f[192])( );     /*QUADRI4(100,41,130,L,R)*/
goto l31;
l61:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=486; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+47)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+47; pile[WZ4]=R; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+47,R)*/
pile[v[22]]=R; pile[WZ1]=107; pile[WZ2]=jvj+27; 
(*f[36])( );     /*PLUSC0(R,107,jvj+27)*/
pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(R,107,jvj+32)*/
goto l59;
}
