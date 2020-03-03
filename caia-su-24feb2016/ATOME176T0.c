#include "dx.h"
void ATOME176T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V42=0,V43=0,V41=0,V47=0,V48=0,V46=0,VA=0,VB=0,V61=0,V62=0,V59=0,V60=0,V63=0,V64=0,V75=0,V18=0,V76=0,V21=0,V81=0,V51=0,V53=0,V40=0,V45=0,V44=0;
int R,RR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=87;
x[jvj+1]=20176;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3652&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; RR=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,R,jvj+35)*/
pile[v[22]]=101; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+35,jvj+36)*/
if((x[jvj+36]!=25)) goto l38;
pile[v[22]]=111; pile[WZ1]=RR; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(111,RR,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=25)) goto l38;
pile[v[22]]=1358; pile[WZ1]=R; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(1358,R,jvj+39)*/
if((x[jvj+39]!=68)) goto l38;
pile[WZ1]=RR; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(1358,RR,jvj+40)*/
if((x[jvj+40]!=68)) goto l38;
pile[v[22]]=1006; pile[WZ1]=R; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1006,R,jvj+41)*/
pile[WZ1]=RR; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(1006,RR,jvj+42)*/
x[jvj+43]=vo[14];z[jvj+43]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(642,jvj+43,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=929; pile[WZ1]=RR; 
(*f[1975])( );if(v[102]) goto l38;     /*FNDCND0(929,RR,V51)*/
V51=pile[WZ2]; 
for(a=x[jvj+41];a>0;a=t[a]) if(s[a]==V51) goto l38;
pile[WZ1]=R; 
(*f[1975])( );if(v[102]) goto l38;     /*FNDCND0(929,R,V53)*/
V53=pile[WZ2]; 
for(a=x[jvj+42];a>0;a=t[a]) if(s[a]==V53) goto l38;
pile[v[22]]=102; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(102,R,jvj+44)*/
pile[v[22]]=103; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(103,R,jvj+45)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(111,jvj+44,jvj+66)*/
pile[v[22]]=101; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l39;     /*FNDO0(101,jvj+66,jvj+67)*/
if((x[jvj+67]!=485)) goto l39;
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+68; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+68)*/
l40:pile[v[22]]=111; pile[WZ1]=jvj+45; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(111,jvj+45,jvj+69)*/
pile[v[22]]=101; pile[WZ1]=jvj+69; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(101,jvj+69,jvj+70)*/
if((x[jvj+70]!=485)) goto l41;
pile[v[22]]=107; pile[WZ1]=jvj+45; pile[WZ2]=jvj+71; 
(*f[33])( );     /*FNDE0(107,jvj+45,jvj+71)*/
l10:pile[v[22]]=1370; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1370,R,V61)*/
V61=pile[WZ2]; 
pile[WZ1]=RR; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(1370,RR,V62)*/
V62=pile[WZ2]; 
if((V61>V62)) goto l11;
pile[v[22]]=R; pile[WZ1]=jvj+11; 
(*f[887])( );     /*VARND0(R,jvj+11)*/
for(i=x[jvj+11],V59=0;i>0;i=t[i],V59++)  ;
pile[v[22]]=RR; pile[WZ1]=jvj+12; 
(*f[887])( );     /*VARND0(RR,jvj+12)*/
for(i=x[jvj+12],V60=0;i>0;i=t[i],V60++)  ;
if((V59==V60)) goto l1;
l11:pile[v[22]]=R; pile[WZ1]=jvj+13; 
(*f[887])( );     /*VARND0(R,jvj+13)*/
for(i=x[jvj+13],V63=0;i>0;i=t[i],V63++)  ;
pile[v[22]]=RR; pile[WZ1]=jvj+14; 
(*f[887])( );     /*VARND0(RR,jvj+14)*/
for(i=x[jvj+14],V64=0;i>0;i=t[i],V64++)  ;
if((V63<V64)) goto l1;
l38:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l1:pile[v[22]]=R; pile[WZ1]=jvj+3; 
(*f[887])( );     /*VARND0(R,jvj+3)*/
pile[v[22]]=RR; pile[WZ1]=jvj+4; 
(*f[887])( );     /*VARND0(RR,jvj+4)*/
l2:if((x[jvj+4]>0)) goto l3;
pile[v[22]]=RR; pile[WZ1]=jvj+7; 
(*f[887])( );     /*VARND0(RR,jvj+7)*/
pile[v[22]]=R; pile[WZ1]=jvj+8; 
(*f[887])( );     /*VARND0(R,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
x[jvj+25]=0 ;z[jvj+25]=0;
x[jvj+84]=x[jvj+68] ;z[jvj+84]=z[jvj+68];
l24:if((x[jvj+84]>0)) goto l25;
x[jvj+31]=0 ;z[jvj+31]=0;
x[jvj+86]=x[jvj+71] ;z[jvj+86]=z[jvj+71];
l29:if((x[jvj+86]>0)) goto l30;
pile[v[22]]=1294; pile[WZ1]=R; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(1294,R,jvj+46)*/
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==1327) goto l34;
goto l38;
l3:VA=s[x[jvj+4]];
x[jvj+78]=x[jvj+3] ;z[jvj+78]=z[jvj+3];
l4:if((x[jvj+78]>0)) goto l5;
x[jvj+4]=t[x[jvj+4]];
goto l2;
l5:x[jvj+5]=s[x[jvj+78]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+78];
pile[v[22]]=1366; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1366,jvj+5,jvj+6)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==VA) goto l38;
x[jvj+78]=t[x[jvj+78]];
goto l4;
l7:VB=s[x[jvj+8]];
x[jvj+79]=x[jvj+7] ;z[jvj+79]=z[jvj+7];
l8:if((x[jvj+79]>0)) goto l9;
x[jvj+8]=t[x[jvj+8]];
goto l6;
l9:x[jvj+9]=s[x[jvj+79]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+79];
pile[v[22]]=1366; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[33])( );     /*FNDE0(1366,jvj+9,jvj+10)*/
for(a=x[jvj+10];a>0;a=t[a]) if(s[a]==VB) goto l38;
x[jvj+79]=t[x[jvj+79]];
goto l8;
l13:x[jvj+15]=s[x[jvj+80]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+80];
x[jvj+81]=x[jvj+87] ;z[jvj+81]=z[jvj+87];
l14:if((x[jvj+81]>0)) goto l15;
x[jvj+80]=t[x[jvj+80]];
l12:if((x[jvj+80]>0)) goto l13;
pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+18,V75)*/
V75=pile[WZ2]; 
V18=V75;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+22; 
(*f[46])( );     /*TRI0(0,117,jvj+22)*/
x[jvj+82]=x[jvj+71] ;z[jvj+82]=z[jvj+71];
l18:if((x[jvj+82]>0)) goto l19;
pile[v[22]]=117; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+22,V76)*/
V76=pile[WZ2]; 
V21=V76;
V40=V18+V21;
if((V40<=0)) goto l35;
V45=2*V40;
V44=V45+1;
for(i=x[jvj+68],V42=0;i>0;i=t[i],V42++)  ;
for(i=x[jvj+71],V43=0;i>0;i=t[i],V43++)  ;
V41=V42+V43;
if((V41<=V44)) goto l26;
for(i=x[jvj+85],V47=0;i>0;i=t[i],V47++)  ;
for(i=x[jvj+87],V48=0;i>0;i=t[i],V48++)  ;
V46=V47+V48;
if((V46<=V44)) goto l26;
l35:x[jvj+47]=t[x[jvj+47]];
l33:if((x[jvj+47]<=0)) goto l38;
x[jvj+48]=s[x[jvj+47]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+47];
pile[v[22]]=268; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(268,jvj+48,jvj+49)*/
pile[v[22]]=jvj+48; pile[WZ1]=RR; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+48,RR,jvj+50)*/
pile[v[22]]=jvj+49; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(jvj+49,RR,jvj+51)*/
pile[v[22]]=111; pile[WZ1]=jvj+50; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(111,jvj+50,jvj+72)*/
pile[v[22]]=101; pile[WZ1]=jvj+72; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l42;     /*FNDO0(101,jvj+72,jvj+73)*/
if((x[jvj+73]!=485)) goto l42;
pile[v[22]]=107; pile[WZ1]=jvj+50; pile[WZ2]=jvj+74; 
(*f[33])( );     /*FNDE0(107,jvj+50,jvj+74)*/
l36:x[jvj+85]=x[jvj+74] ;z[jvj+85]=z[jvj+74];
pile[v[22]]=111; pile[WZ1]=jvj+51; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(111,jvj+51,jvj+75)*/
pile[v[22]]=101; pile[WZ1]=jvj+75; pile[WZ2]=jvj+76; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(101,jvj+75,jvj+76)*/
if((x[jvj+76]!=485)) goto l43;
pile[v[22]]=107; pile[WZ1]=jvj+51; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(107,jvj+51,jvj+77)*/
l37:x[jvj+87]=x[jvj+77] ;z[jvj+87]=z[jvj+77];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+18; 
(*f[46])( );     /*TRI0(0,117,jvj+18)*/
x[jvj+80]=x[jvj+68] ;z[jvj+80]=z[jvj+68];
goto l12;
l15:x[jvj+16]=s[x[jvj+81]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+81];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l17;
l16:x[jvj+81]=t[x[jvj+81]];
goto l14;
l17:pile[v[22]]=jvj+18; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+18,117,1)*/
goto l16;
l19:x[jvj+19]=s[x[jvj+82]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+82];
x[jvj+83]=x[jvj+85] ;z[jvj+83]=z[jvj+85];
l20:if((x[jvj+83]>0)) goto l21;
x[jvj+82]=t[x[jvj+82]];
goto l18;
l21:x[jvj+20]=s[x[jvj+83]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+83];
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[760])( );     /*MEMEX0(jvj+19,jvj+20,jvj+21)*/
if((x[jvj+21]==135)) goto l23;
l22:x[jvj+83]=t[x[jvj+83]];
goto l20;
l23:pile[v[22]]=jvj+22; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+22,117,1)*/
goto l22;
l25:x[jvj+23]=s[x[jvj+84]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+84];
pile[v[22]]=jvj+23; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+23,jvj+24)*/
pile[v[22]]=jvj+25; 
(*f[68])( );     /*PLUE0(jvj+25,jvj+24)*/
x[jvj+84]=t[x[jvj+84]];
goto l24;
l26:x[jvj+28]=0 ;z[jvj+28]=0;
l27:if((x[jvj+85]>0)) goto l28;
x[jvj+34]=0 ;z[jvj+34]=0;
l31:if((x[jvj+87]>0)) goto l32;
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+57; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+57)*/
pile[WZ1]=RR; pile[WZ3]=(-631); pile[WZ4]=jvj+58; 
(*f[270])( );     /*QUADRI7(101,RR,110,(-631),jvj+58)*/
pile[v[22]]=V81; pile[WZ1]=858; pile[WZ2]=jvj+54; 
(*f[46])( );     /*TRI0(V81,858,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+55; 
(*f[189])( );     /*TRI4(jvj+54,v[13],642,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=3652; pile[WZ2]=246; pile[WZ3]=jvj+56; 
(*f[189])( );     /*TRI4(jvj+55,3652,246,jvj+56)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20176; pile[WZ4]=jvj+56; pile[WZ5]=jvj+52; 
(*f[269])( );     /*QUADRI6(158,1,218,20176,jvj+56,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=159; pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+52,159,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+59)*/
pile[WZ3]=485; pile[WZ4]=jvj+64; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+64)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+64; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+64,jvj+63)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+63; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+25,jvj+63,107)*/
pile[v[22]]=jvj+28; 
(*f[1118])( );     /*AJE3(jvj+28,jvj+63,107)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+65)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+65; pile[WZ4]=jvj+61; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+65,jvj+61)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+61; pile[WZ2]=107; 
(*f[1118])( );     /*AJE3(jvj+31,jvj+61,107)*/
pile[v[22]]=jvj+34; 
(*f[1118])( );     /*AJE3(jvj+34,jvj+61,107)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; pile[WZ2]=103; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+60,jvj+61,103,jvj+62)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+63; pile[WZ4]=jvj+62; pile[WZ5]=jvj+53; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+63,jvj+62,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=jvj+52; 
(*f[1296])( );     /*NOUVCONTR0(jvj+53,jvj+52)*/
goto l35;
l28:x[jvj+26]=s[x[jvj+85]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+85];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[255])( );     /*COPEXP0(jvj+26,jvj+27)*/
pile[v[22]]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+27)*/
x[jvj+85]=t[x[jvj+85]];
goto l27;
l30:x[jvj+29]=s[x[jvj+86]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+86];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
pile[v[22]]=jvj+31; 
(*f[68])( );     /*PLUE0(jvj+31,jvj+30)*/
x[jvj+86]=t[x[jvj+86]];
goto l29;
l32:x[jvj+32]=s[x[jvj+87]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+87];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+33; 
(*f[255])( );     /*COPEXP0(jvj+32,jvj+33)*/
pile[v[22]]=jvj+34; 
(*f[68])( );     /*PLUE0(jvj+34,jvj+33)*/
x[jvj+87]=t[x[jvj+87]];
goto l31;
l34:x[jvj+47]=d[20];z[jvj+47]=0;
goto l33;
l39:pile[v[22]]=20; pile[WZ1]=jvj+44; pile[WZ2]=jvj+68; 
(*f[409])( );     /*TRI14(20,jvj+44,jvj+68)*/
goto l40;
l41:pile[v[22]]=20; pile[WZ1]=jvj+45; pile[WZ2]=jvj+71; 
(*f[409])( );     /*TRI14(20,jvj+45,jvj+71)*/
goto l10;
l42:pile[v[22]]=20; pile[WZ1]=jvj+50; pile[WZ2]=jvj+74; 
(*f[409])( );     /*TRI14(20,jvj+50,jvj+74)*/
goto l36;
l43:pile[v[22]]=20; pile[WZ1]=jvj+51; pile[WZ2]=jvj+77; 
(*f[409])( );     /*TRI14(20,jvj+51,jvj+77)*/
goto l37;
}
