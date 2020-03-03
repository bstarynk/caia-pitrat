#include "dx.h"
void ISOLE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V61=0,V68=0;
int B,A;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=83;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; R=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=x[B] ;z[jvj+3]=z[B];
l25:x[R]=x[jvj+66]=incon;
pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(111,jvj+3,jvj+4)*/
pile[v[22]]=101; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(101,jvj+4,jvj+5)*/
if((x[jvj+5]!=25)) goto l14;
x[jvj+6]=d[20];z[jvj+6]=0;
l5:if((x[jvj+6]>0)) goto l6;
x[jvj+14]=d[20];z[jvj+14]=0;
l8:if((x[jvj+14]<=0)) goto l14;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+3; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+15,jvj+3,jvj+16)*/
pile[v[22]]=111; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(111,jvj+16,jvj+17)*/
pile[v[22]]=101; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(101,jvj+17,jvj+18)*/
if((x[jvj+18]!=486)) goto l9;
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+19)*/
for(i=x[jvj+19],V61=0;i>0;i=t[i],V61++)  ;
if((V61!=2)) goto l9;
pile[v[22]]=268; pile[WZ1]=jvj+15; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(268,jvj+15,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+3; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(jvj+20,jvj+3,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[1361])( );     /*VAROBJ0(jvj+21,jvj+22)*/
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==x[A]) goto l9;
pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+23)*/
x[jvj+81]=x[jvj+19] ;z[jvj+81]=z[jvj+19];
l10:if((x[jvj+81]<=0)) goto l9;
x[jvj+24]=s[x[jvj+81]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+81];
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(100,jvj+24,jvj+25)*/
if((x[jvj+25]!=484)) goto l11;
x[jvj+26]=x[jvj+24] ;z[jvj+26]=z[jvj+24];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[200])( );if(v[102]) goto l11;     /*NDD0(jvj+26,jvj+27)*/
if((x[A]!=x[jvj+27])) goto l11;
x[jvj+82]=x[jvj+19] ;z[jvj+82]=z[jvj+19];
l12:if((x[jvj+82]<=0)) goto l11;
x[jvj+28]=s[x[jvj+82]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+82];
if((x[jvj+24]==x[jvj+28])) goto l13;
pile[v[22]]=130; pile[WZ1]=jvj+28; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(130,jvj+28,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=990; pile[WZ4]=jvj+58; 
(*f[181])( );     /*QUADRI2(100,20,101,990,jvj+58)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V68; pile[WZ4]=jvj+60; 
(*f[192])( );     /*QUADRI4(100,41,130,V68,jvj+60)*/
pile[v[22]]=jvj+58; pile[WZ1]=111; pile[WZ2]=jvj+59; 
(*f[54])( );     /*TRI1(jvj+58,111,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+60; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+59,jvj+60,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+61; pile[WZ5]=R; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+61,R)*/
l14:pile[v[22]]=111; pile[WZ1]=jvj+3; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(111,jvj+3,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=25)) goto l23;
x[jvj+31]=d[20];z[jvj+31]=0;
l15:if((x[jvj+31]>0)) goto l16;
x[jvj+42]=d[20];z[jvj+42]=0;
l19:if((x[jvj+42]<=0)) goto l23;
x[jvj+43]=s[x[jvj+42]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+42];
pile[v[22]]=jvj+43; pile[WZ1]=jvj+3; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+43,jvj+3,jvj+44)*/
pile[v[22]]=111; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+44,jvj+45)*/
pile[v[22]]=101; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(101,jvj+45,jvj+46)*/
if((x[jvj+46]!=485)) goto l20;
pile[v[22]]=107; pile[WZ1]=jvj+44; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(107,jvj+44,jvj+47)*/
pile[v[22]]=268; pile[WZ1]=jvj+43; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(268,jvj+43,jvj+48)*/
pile[v[22]]=jvj+48; pile[WZ1]=jvj+3; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(jvj+48,jvj+3,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=jvj+50; 
(*f[1361])( );     /*VAROBJ0(jvj+49,jvj+50)*/
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==x[A]) goto l20;
pile[WZ1]=jvj+51; 
(*f[255])( );     /*COPEXP0(jvj+49,jvj+51)*/
x[jvj+83]=x[jvj+47] ;z[jvj+83]=z[jvj+47];
l21:if((x[jvj+83]<=0)) goto l20;
x[jvj+52]=s[x[jvj+83]] ;z[jvj+52]=(x[jvj+52]<=sepcte) ? x[jvj+52] : z[jvj+83];
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; 
(*f[1361])( );     /*VAROBJ0(jvj+52,jvj+53)*/
for(a=x[jvj+53];a>0;a=t[a]) if(s[a]==x[A]) goto l1;
l22:x[jvj+83]=t[x[jvj+83]];
goto l21;
l1:x[jvj+1]=0 ;z[jvj+1]=0;
x[jvj+80]=x[jvj+47] ;z[jvj+80]=z[jvj+47];
l2:if((x[jvj+80]>0)) goto l3;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+54; 
(*f[299])( );     /*COPEL0(jvj+1,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=52; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+67)*/
pile[WZ3]=485; pile[WZ4]=jvj+76; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+76)*/
pile[v[22]]=jvj+76; pile[WZ1]=111; pile[WZ2]=jvj+77; 
(*f[54])( );     /*TRI1(jvj+76,111,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+54; pile[WZ2]=107; pile[WZ3]=jvj+78; 
(*f[301])( );     /*TRI11(jvj+77,jvj+54,107,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+69; 
(*f[58])( );     /*TRI3(jvj+78,22,100,jvj+69)*/
pile[v[22]]=jvj+67; pile[WZ1]=111; pile[WZ2]=jvj+68; 
(*f[54])( );     /*TRI1(jvj+67,111,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+69; pile[WZ4]=jvj+68; pile[WZ5]=jvj+55; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+69,jvj+68,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[1361])( );     /*VAROBJ0(jvj+55,jvj+56)*/
for(a=x[jvj+56];a>0;a=t[a]) if(s[a]==x[A]) goto l22;
pile[v[22]]=jvj+52; pile[WZ1]=jvj+57; 
(*f[255])( );     /*COPEXP0(jvj+52,jvj+57)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+70)*/
pile[WZ3]=485; pile[WZ4]=jvj+79; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+79)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+79; pile[WZ4]=jvj+72; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+79,jvj+72)*/
pile[v[22]]=jvj+72; pile[WZ1]=107; pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+72,107,jvj+51)*/
pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+72,107,jvj+55)*/
pile[v[22]]=jvj+70; pile[WZ1]=111; pile[WZ2]=jvj+71; 
(*f[54])( );     /*TRI1(jvj+70,111,jvj+71)*/
pile[v[22]]=jvj+71; pile[WZ1]=jvj+72; pile[WZ2]=103; pile[WZ3]=jvj+73; 
(*f[58])( );     /*TRI3(jvj+71,jvj+72,103,jvj+73)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+57; pile[WZ4]=jvj+73; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+57,jvj+73,jvj+66)*/
l23:if(x[R]==incon) goto l24;
v[0]=jvj; v[22]-=3; v[102]=0;return;
l3:x[jvj+2]=s[x[jvj+80]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+80];
if((x[jvj+2]==x[jvj+52])) goto l4;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+1,jvj+2)*/
l4:x[jvj+80]=t[x[jvj+80]];
goto l2;
l6:x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+7,jvj+3,jvj+8)*/
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(100,jvj+8,jvj+9)*/
if((x[jvj+9]!=484)) goto l7;
pile[v[22]]=jvj+8; pile[WZ1]=jvj+10; 
(*f[200])( );if(v[102]) goto l7;     /*NDD0(jvj+8,jvj+10)*/
if((x[A]!=x[jvj+10])) goto l7;
pile[v[22]]=268; pile[WZ1]=jvj+7; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(268,jvj+7,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+3; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(jvj+11,jvj+3,jvj+12)*/
pile[v[22]]=jvj+12; pile[WZ1]=jvj+13; 
(*f[1361])( );     /*VAROBJ0(jvj+12,jvj+13)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[A]) goto l7;
x[R]=x[jvj+12] ;z[R]=z[jvj+12];
goto l14;
l7:x[jvj+6]=t[x[jvj+6]];
goto l5;
l9:x[jvj+14]=t[x[jvj+14]];
goto l8;
l11:x[jvj+81]=t[x[jvj+81]];
goto l10;
l13:x[jvj+82]=t[x[jvj+82]];
goto l12;
l16:x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+3; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+32,jvj+3,jvj+33)*/
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=52)) goto l17;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(102,jvj+33,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; 
(*f[1361])( );     /*VAROBJ0(jvj+36,jvj+37)*/
for(a=x[jvj+37];a>0;a=t[a]) if(s[a]==x[A]) goto l18;
l17:x[jvj+31]=t[x[jvj+31]];
goto l15;
l18:pile[v[22]]=jvj+36; pile[WZ1]=jvj+38; 
(*f[255])( );     /*COPEXP0(jvj+36,jvj+38)*/
pile[v[22]]=268; pile[WZ1]=jvj+32; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(268,jvj+32,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+3; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(jvj+39,jvj+3,jvj+40)*/
pile[v[22]]=jvj+40; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+40,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+62)*/
pile[WZ3]=52; pile[WZ4]=jvj+74; 
(*f[181])( );     /*QUADRI2(100,20,101,52,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=111; pile[WZ2]=jvj+75; 
(*f[54])( );     /*TRI1(jvj+74,111,jvj+75)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+41; pile[WZ4]=jvj+75; pile[WZ5]=jvj+64; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+41,jvj+75,jvj+64)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+64; pile[WZ2]=103; pile[WZ3]=jvj+65; 
(*f[58])( );     /*TRI3(jvj+63,jvj+64,103,jvj+65)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+38; pile[WZ4]=jvj+65; pile[WZ5]=jvj+66; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+38,jvj+65,jvj+66)*/
goto l23;
l20:x[jvj+42]=t[x[jvj+42]];
goto l19;
l24:if(x[jvj+66]!=incon) goto l26;
v[0]=jvj; v[22]-=3; v[102]=1;return;
l26:x[jvj+3]=x[jvj+66] ;z[jvj+3]=z[jvj+66];
goto l25;
}
