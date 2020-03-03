#include "dx.h"
void ATOME595T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V81=0,V28=0,V89=0,V29=0,V90=0,V85=0,V53=0;
int NNNQ;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=84;
x[jvj+1]=20595;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==3908&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NNNQ=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=NNNQ; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(111,NNNQ,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=25)) goto l29;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(642,jvj+9,V85)*/
V85=pile[WZ2]; 
x[jvj+16]=d[20];z[jvj+16]=0;
l12:if((x[jvj+16]<=0)) goto l29;
x[jvj+17]=s[x[jvj+16]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+16];
pile[v[22]]=jvj+17; pile[WZ1]=NNNQ; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+17,NNNQ,jvj+18)*/
pile[v[22]]=111; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(111,jvj+18,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=1273)) goto l13;
pile[v[22]]=268; pile[WZ1]=jvj+17; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(268,jvj+17,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=NNNQ; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(jvj+21,NNNQ,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=jvj+22; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+22,jvj+23)*/
if((x[jvj+23]!=41)) goto l13;
pile[v[22]]=102; pile[WZ1]=jvj+18; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+18,jvj+24)*/
x[jvj+25]=x[jvj+24] ;z[jvj+25]=z[jvj+24];
pile[v[22]]=100; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(100,jvj+25,jvj+26)*/
if((x[jvj+26]!=41)) goto l13;
pile[v[22]]=107; pile[WZ1]=jvj+18; pile[WZ2]=jvj+27; 
(*f[33])( );     /*FNDE0(107,jvj+18,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=jvj+28; 
(*f[255])( );     /*COPEXP0(jvj+25,jvj+28)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+29; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+29)*/
x[jvj+30]=d[20];z[jvj+30]=0;
l14:if((x[jvj+30]<=0)) goto l13;
x[jvj+31]=s[x[jvj+30]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+30];
pile[v[22]]=268; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(268,jvj+31,jvj+32)*/
x[jvj+82]=x[jvj+27] ;z[jvj+82]=z[jvj+27];
l16:if((x[jvj+82]<=0)) goto l15;
x[jvj+77]=s[x[jvj+82]] ;z[jvj+77]=(x[jvj+77]<=sepcte) ? x[jvj+77] : z[jvj+82];
x[jvj+50]=x[jvj+77] ;z[jvj+50]=z[jvj+77];
x[jvj+33]=x[jvj+50] ;z[jvj+33]=z[jvj+50];
pile[v[22]]=100; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(100,jvj+33,jvj+34)*/
if((x[jvj+34]!=484)) goto l17;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+35; 
(*f[200])( );if(v[102]) goto l17;     /*NDD0(jvj+33,jvj+35)*/
pile[v[22]]=509; pile[WZ2]=jvj+36; 
(*f[1969])( );     /*FNDEND0(509,jvj+35,jvj+36)*/
x[jvj+78]=x[jvj+36] ;z[jvj+78]=z[jvj+36];
l18:if((x[jvj+78]<=0)) goto l17;
x[jvj+11]=s[x[jvj+78]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+78];
pile[v[22]]=111; pile[WZ1]=jvj+11; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+11,jvj+37)*/
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=25)) goto l19;
pile[v[22]]=jvj+31; pile[WZ1]=jvj+11; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+31,jvj+11,jvj+39)*/
pile[v[22]]=111; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(111,jvj+39,jvj+40)*/
pile[v[22]]=101; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(101,jvj+40,jvj+41)*/
if((x[jvj+41]!=1273)) goto l19;
pile[v[22]]=107; pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,jvj+39,jvj+42)*/
for(i=x[jvj+42],V53=0;i>0;i=t[i],V53++)  ;
if((V53!=2)) goto l19;
pile[v[22]]=jvj+32; pile[WZ1]=jvj+11; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(jvj+32,jvj+11,jvj+43)*/
pile[v[22]]=100; pile[WZ1]=jvj+43; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(100,jvj+43,jvj+44)*/
if((x[jvj+44]!=41)) goto l19;
x[jvj+10]=0 ;z[jvj+10]=0;
pile[v[22]]=929; pile[WZ1]=jvj+9; 
(*f[1975])( );if(v[102]) goto l7;     /*FNDCND0(929,jvj+9,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=V81; 
(*f[207])( );     /*PLUE2(jvj+10,V81)*/
l7:pile[v[22]]=1006; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1006,jvj+11,jvj+12)*/
V89=x[jvj+12];
l8:if((V89>0)) goto l9;
pile[v[22]]=1006; pile[WZ1]=NNNQ; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1006,NNNQ,jvj+13)*/
V90=x[jvj+13];
l10:if((V90>0)) goto l11;
pile[v[22]]=jvj+43; pile[WZ1]=jvj+45; 
(*f[255])( );     /*COPEXP0(jvj+43,jvj+45)*/
pile[v[22]]=102; pile[WZ1]=jvj+39; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(102,jvj+39,jvj+46)*/
pile[v[22]]=jvj+24; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[760])( );     /*MEMEX0(jvj+24,jvj+46,jvj+47)*/
if((x[jvj+47]==135)) goto l20;
l19:x[jvj+78]=t[x[jvj+78]];
goto l18;
l2:x[jvj+2]=s[x[jvj+76]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+76];
if((x[jvj+2]==x[jvj+77])) goto l3;
if((x[jvj+2]==x[jvj+79])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==649)) goto l3;
l4:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+2)*/
l3:x[jvj+76]=t[x[jvj+76]];
l1:if((x[jvj+76]>0)) goto l2;
x[jvj+8]=0 ;z[jvj+8]=0;
l5:if((x[jvj+5]>0)) goto l6;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+58)*/
pile[WZ3]=1273; pile[WZ4]=jvj+63; 
(*f[181])( );     /*QUADRI2(100,20,101,1273,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=111; pile[WZ2]=jvj+64; 
(*f[54])( );     /*TRI1(jvj+63,111,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=jvj+8; pile[WZ2]=107; pile[WZ3]=jvj+65; 
(*f[301])( );     /*TRI11(jvj+64,jvj+8,107,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+65; pile[WZ5]=jvj+62; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+65,jvj+62)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=64; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,64,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=111; pile[WZ2]=jvj+67; 
(*f[54])( );     /*TRI1(jvj+66,111,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=jvj+68; pile[WZ2]=103; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+67,jvj+68,103,jvj+69)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+69; pile[WZ5]=jvj+60; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+69,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+62; pile[WZ4]=jvj+61; pile[WZ5]=jvj+56; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+62,jvj+61,jvj+56)*/
x[jvj+84]=x[jvj+42] ;z[jvj+84]=z[jvj+42];
l23:if((x[jvj+84]<=0)) goto l22;
x[jvj+80]=s[x[jvj+84]] ;z[jvj+80]=(x[jvj+80]<=sepcte) ? x[jvj+80] : z[jvj+84];
x[jvj+51]=x[jvj+80] ;z[jvj+51]=z[jvj+80];
pile[v[22]]=jvj+50; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[760])( );     /*MEMEX0(jvj+50,jvj+51,jvj+52)*/
if((x[jvj+52]==135)) goto l26;
l24:x[jvj+84]=t[x[jvj+84]];
goto l23;
l6:x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; 
(*f[255])( );     /*COPEXP0(jvj+6,jvj+7)*/
pile[v[22]]=jvj+8; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+7)*/
x[jvj+5]=t[x[jvj+5]];
goto l5;
l9:V28=s[V89];
pile[v[22]]=jvj+10; pile[WZ1]=V28; 
(*f[207])( );     /*PLUE2(jvj+10,V28)*/
V89=t[V89];
goto l8;
l11:V29=s[V90];
pile[v[22]]=jvj+10; pile[WZ1]=V29; 
(*f[207])( );     /*PLUE2(jvj+10,V29)*/
V90=t[V90];
goto l10;
l13:x[jvj+16]=t[x[jvj+16]];
goto l12;
l15:x[jvj+30]=t[x[jvj+30]];
goto l14;
l17:x[jvj+82]=t[x[jvj+82]];
goto l16;
l20:x[jvj+68]=x[jvj+45] ;z[jvj+68]=z[jvj+45];
x[jvj+83]=x[jvj+27] ;z[jvj+83]=z[jvj+27];
l21:if((x[jvj+83]<=0)) goto l19;
x[jvj+79]=s[x[jvj+83]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+83];
if((x[jvj+77]==x[jvj+79])) goto l22;
x[jvj+53]=x[jvj+79] ;z[jvj+53]=z[jvj+79];
x[jvj+48]=x[jvj+53] ;z[jvj+48]=z[jvj+53];
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]!=484)) goto l22;
x[jvj+5]=0 ;z[jvj+5]=0;
x[jvj+76]=x[jvj+27] ;z[jvj+76]=z[jvj+27];
goto l1;
l22:x[jvj+83]=t[x[jvj+83]];
goto l21;
l26:x[jvj+81]=x[jvj+42] ;z[jvj+81]=z[jvj+42];
l25:if((x[jvj+81]<=0)) goto l24;
x[jvj+54]=s[x[jvj+81]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+81];
if((x[jvj+80]==x[jvj+54])) goto l27;
pile[v[22]]=jvj+53; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[760])( );     /*MEMEX0(jvj+53,jvj+54,jvj+55)*/
if((x[jvj+55]==135)) goto l28;
l27:x[jvj+81]=t[x[jvj+81]];
goto l25;
l28:pile[v[22]]=jvj+56; pile[WZ1]=1006; pile[WZ2]=jvj+10; 
(*f[34])( );     /*CHGC0(jvj+56,1006,jvj+10)*/
pile[v[22]]=101; pile[WZ1]=NNNQ; pile[WZ2]=110; pile[WZ3]=(-11768); pile[WZ4]=jvj+74; 
(*f[270])( );     /*QUADRI7(101,NNNQ,110,(-11768),jvj+74)*/
pile[v[22]]=V85; pile[WZ1]=858; pile[WZ2]=jvj+70; 
(*f[46])( );     /*TRI0(V85,858,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+71; 
(*f[189])( );     /*TRI4(jvj+70,v[13],642,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=3908; pile[WZ2]=246; pile[WZ3]=jvj+72; 
(*f[189])( );     /*TRI4(jvj+71,3908,246,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=20595; pile[WZ2]=218; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+72,20595,218,jvj+73)*/
pile[v[22]]=jvj+74; pile[WZ1]=(-20); pile[WZ2]=jvj+73; pile[WZ3]=159; pile[WZ4]=jvj+75; 
(*f[298])( );     /*TRIENS1(jvj+74,(-20),jvj+73,159,jvj+75)*/
pile[v[22]]=jvj+75; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+57; 
(*f[58])( );     /*TRI3(jvj+75,1,158,jvj+57)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; 
(*f[1296])( );     /*NOUVCONTR0(jvj+56,jvj+57)*/
goto l27;
l29:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
}
