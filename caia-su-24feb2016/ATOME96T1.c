#include "dx.h"
void ATOME96T1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V53=0,V94=0,V65=0,V96=0,V56=0,V79=0,V98=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=132;
x[jvj+1]=20096;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3338&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,R,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=25)) goto l12;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,R,V53)*/
V53=pile[WZ2]; 
if((V53!=2)) goto l12;
x[jvj+9]=vo[14];z[jvj+9]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(642,jvj+9,V94)*/
V94=pile[WZ2]; 
x[jvj+10]=d[20];z[jvj+10]=0;
l5:if((x[jvj+10]<=0)) goto l12;
x[jvj+11]=s[x[jvj+10]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+10];
pile[v[22]]=jvj+11; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+11,R,jvj+12)*/
pile[v[22]]=111; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(111,jvj+12,jvj+13)*/
pile[v[22]]=101; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(101,jvj+13,jvj+14)*/
if((x[jvj+14]!=1273)) goto l6;
pile[v[22]]=268; pile[WZ1]=jvj+11; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(268,jvj+11,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(jvj+15,R,jvj+16)*/
pile[v[22]]=130; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(130,jvj+16,V65)*/
V65=pile[WZ2]; 
if((V65!=1)) goto l6;
pile[v[22]]=102; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(102,jvj+12,jvj+17)*/
pile[v[22]]=100; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(100,jvj+17,jvj+18)*/
if((x[jvj+19]=w[x[jvj+18]][3])==incon) goto l6;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+19; pile[WZ3]=jvj+20; 
(*f[45])( );if(v[102]) goto l6;     /*FNDZ0(jvj+17,jvj+19,V96,jvj+20)*/
V96=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+12; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(107,jvj+12,jvj+21)*/
x[jvj+130]=x[jvj+21] ;z[jvj+130]=z[jvj+21];
l1:if((x[jvj+130]<=0)) goto l6;
x[jvj+3]=s[x[jvj+130]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+130];
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+3,jvj+4)*/
if((x[jvj+4]!=484)) goto l2;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+22; 
(*f[200])( );if(v[102]) goto l6;     /*NDD0(jvj+3,jvj+22)*/
pile[v[22]]=509; pile[WZ2]=jvj+23; 
(*f[1969])( );     /*FNDEND0(509,jvj+22,jvj+23)*/
x[jvj+131]=x[jvj+21] ;z[jvj+131]=z[jvj+21];
l3:if((x[jvj+131]<=0)) goto l6;
x[jvj+5]=s[x[jvj+131]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+131];
if((x[jvj+5]==x[jvj+3])) goto l4;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=484)) goto l4;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+24; 
(*f[255])( );     /*COPEXP0(jvj+3,jvj+24)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+25; 
(*f[255])( );     /*COPEXP0(jvj+17,jvj+25)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+26; 
(*f[255])( );     /*COPEXP0(jvj+5,jvj+26)*/
x[jvj+65]=x[jvj+24] ;z[jvj+65]=z[jvj+24];
x[jvj+85]=x[jvj+24] ;z[jvj+85]=z[jvj+24];
x[jvj+98]=x[jvj+24] ;z[jvj+98]=z[jvj+24];
x[jvj+116]=x[jvj+24] ;z[jvj+116]=z[jvj+24];
x[jvj+129]=x[jvj+24] ;z[jvj+129]=z[jvj+24];
x[jvj+71]=x[jvj+25] ;z[jvj+71]=z[jvj+25];
x[jvj+83]=x[jvj+25] ;z[jvj+83]=z[jvj+25];
x[jvj+101]=x[jvj+25] ;z[jvj+101]=z[jvj+25];
x[jvj+109]=x[jvj+25] ;z[jvj+109]=z[jvj+25];
x[jvj+127]=x[jvj+25] ;z[jvj+127]=z[jvj+25];
x[jvj+77]=x[jvj+26] ;z[jvj+77]=z[jvj+26];
x[jvj+90]=x[jvj+26] ;z[jvj+90]=z[jvj+26];
x[jvj+103]=x[jvj+26] ;z[jvj+103]=z[jvj+26];
x[jvj+111]=x[jvj+26] ;z[jvj+111]=z[jvj+26];
x[jvj+124]=x[jvj+26] ;z[jvj+124]=z[jvj+26];
x[jvj+27]=d[20];z[jvj+27]=0;
l7:if((x[jvj+27]<=0)) goto l6;
x[jvj+28]=s[x[jvj+27]] ;z[jvj+28]=(x[jvj+28]<=sepcte) ? x[jvj+28] : z[jvj+27];
pile[v[22]]=268; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(268,jvj+28,jvj+29)*/
x[jvj+132]=x[jvj+23] ;z[jvj+132]=z[jvj+23];
l9:if((x[jvj+132]<=0)) goto l8;
x[jvj+30]=s[x[jvj+132]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+132];
if((x[jvj+30]==x[R])) goto l10;
pile[v[22]]=111; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+30,jvj+31)*/
pile[v[22]]=101; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+31,jvj+32)*/
if((x[jvj+32]!=25)) goto l10;
pile[v[22]]=870; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(870,jvj+30,V56)*/
V56=pile[WZ2]; 
if((V56!=2)) goto l10;
pile[v[22]]=jvj+28; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+28,jvj+30,jvj+33)*/
pile[v[22]]=111; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(111,jvj+33,jvj+34)*/
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=1273)) goto l10;
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(jvj+29,jvj+30,jvj+36)*/
pile[v[22]]=130; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(130,jvj+36,V79)*/
V79=pile[WZ2]; 
if((V79!=1)) goto l10;
pile[v[22]]=102; pile[WZ1]=jvj+33; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(102,jvj+33,jvj+37)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+19; pile[WZ3]=jvj+38; 
(*f[45])( );if(v[102]) goto l10;     /*FNDZ0(jvj+37,jvj+19,V98,jvj+38)*/
V98=pile[WZ2]; 
if((V96==V98)) goto l10;
pile[v[22]]=107; pile[WZ1]=jvj+33; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,jvj+33,jvj+39)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[1081])( );     /*IDENSEXP0(jvj+21,jvj+39,jvj+40)*/
if((x[jvj+40]==135)) goto l11;
l10:x[jvj+132]=t[x[jvj+132]];
goto l9;
l2:x[jvj+130]=t[x[jvj+130]];
goto l1;
l4:x[jvj+131]=t[x[jvj+131]];
goto l3;
l6:x[jvj+10]=t[x[jvj+10]];
goto l5;
l8:x[jvj+27]=t[x[jvj+27]];
goto l7;
l11:pile[v[22]]=jvj+37; pile[WZ1]=jvj+41; 
(*f[255])( );     /*COPEXP0(jvj+37,jvj+41)*/
x[jvj+75]=x[jvj+41] ;z[jvj+75]=z[jvj+41];
x[jvj+88]=x[jvj+41] ;z[jvj+88]=z[jvj+41];
x[jvj+96]=x[jvj+41] ;z[jvj+96]=z[jvj+41];
x[jvj+114]=x[jvj+41] ;z[jvj+114]=z[jvj+41];
x[jvj+122]=x[jvj+41] ;z[jvj+122]=z[jvj+41];
pile[v[22]]=101; pile[WZ1]=jvj+30; pile[WZ2]=110; pile[WZ3]=(-657); pile[WZ4]=jvj+47; 
(*f[270])( );     /*QUADRI7(101,jvj+30,110,(-657),jvj+47)*/
pile[WZ1]=R; pile[WZ3]=(-601); pile[WZ4]=jvj+48; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+48)*/
pile[v[22]]=V94; pile[WZ1]=858; pile[WZ2]=jvj+44; 
(*f[46])( );     /*TRI0(V94,858,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,v[13],642,jvj+45)*/
pile[v[22]]=jvj+45; pile[WZ1]=3338; pile[WZ2]=246; pile[WZ3]=jvj+46; 
(*f[189])( );     /*TRI4(jvj+45,3338,246,jvj+46)*/
pile[v[22]]=158; pile[WZ1]=1; pile[WZ2]=218; pile[WZ3]=20096; pile[WZ4]=jvj+46; pile[WZ5]=jvj+42; 
(*f[269])( );     /*QUADRI6(158,1,218,20096,jvj+46,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=159; pile[WZ2]=jvj+47; 
(*f[36])( );     /*PLUSC0(jvj+42,159,jvj+47)*/
pile[WZ2]=jvj+48; 
(*f[36])( );     /*PLUSC0(jvj+42,159,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+49)*/
pile[WZ3]=55; pile[WZ4]=jvj+56; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+56)*/
pile[WZ3]=25; pile[WZ4]=jvj+59; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=111; pile[WZ2]=jvj+60; 
(*f[54])( );     /*TRI1(jvj+59,111,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=jvj+25; pile[WZ2]=103; pile[WZ3]=jvj+61; 
(*f[58])( );     /*TRI3(jvj+60,jvj+25,103,jvj+61)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+61; pile[WZ5]=jvj+57; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+61,jvj+57)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+62; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+62)*/
pile[v[22]]=jvj+62; pile[WZ1]=111; pile[WZ2]=jvj+63; 
(*f[54])( );     /*TRI1(jvj+62,111,jvj+63)*/
pile[v[22]]=jvj+63; pile[WZ1]=jvj+41; pile[WZ2]=103; pile[WZ3]=jvj+64; 
(*f[58])( );     /*TRI3(jvj+63,jvj+41,103,jvj+64)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+65; pile[WZ4]=jvj+64; pile[WZ5]=jvj+58; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+65,jvj+64,jvj+58)*/
pile[WZ2]=111; pile[WZ3]=jvj+56; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+56,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=107; pile[WZ2]=jvj+57; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+57)*/
pile[WZ2]=jvj+58; 
(*f[36])( );     /*PLUSC0(jvj+50,107,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+66; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+66)*/
pile[WZ3]=25; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=111; pile[WZ2]=jvj+70; 
(*f[54])( );     /*TRI1(jvj+69,111,jvj+70)*/
pile[v[22]]=jvj+70; pile[WZ1]=jvj+71; pile[WZ2]=103; pile[WZ3]=jvj+72; 
(*f[58])( );     /*TRI3(jvj+70,jvj+71,103,jvj+72)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+72; pile[WZ5]=jvj+67; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+26,jvj+72,jvj+67)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=111; pile[WZ2]=jvj+74; 
(*f[54])( );     /*TRI1(jvj+73,111,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; pile[WZ2]=103; pile[WZ3]=jvj+76; 
(*f[58])( );     /*TRI3(jvj+74,jvj+75,103,jvj+76)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+77; pile[WZ4]=jvj+76; pile[WZ5]=jvj+68; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+77,jvj+76,jvj+68)*/
pile[WZ2]=111; pile[WZ3]=jvj+66; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+66,jvj+51)*/
pile[v[22]]=jvj+51; pile[WZ1]=107; pile[WZ2]=jvj+67; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+67)*/
pile[WZ2]=jvj+68; 
(*f[36])( );     /*PLUSC0(jvj+51,107,jvj+68)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+78; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+78)*/
pile[WZ3]=26; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=111; pile[WZ2]=jvj+82; 
(*f[54])( );     /*TRI1(jvj+81,111,jvj+82)*/
pile[v[22]]=jvj+82; pile[WZ1]=jvj+83; pile[WZ2]=103; pile[WZ3]=jvj+84; 
(*f[58])( );     /*TRI3(jvj+82,jvj+83,103,jvj+84)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+85; pile[WZ4]=jvj+84; pile[WZ5]=jvj+79; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+85,jvj+84,jvj+79)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+86; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+86)*/
pile[v[22]]=jvj+86; pile[WZ1]=111; pile[WZ2]=jvj+87; 
(*f[54])( );     /*TRI1(jvj+86,111,jvj+87)*/
pile[v[22]]=jvj+87; pile[WZ1]=jvj+88; pile[WZ2]=103; pile[WZ3]=jvj+89; 
(*f[58])( );     /*TRI3(jvj+87,jvj+88,103,jvj+89)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+90; pile[WZ4]=jvj+89; pile[WZ5]=jvj+80; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+90,jvj+89,jvj+80)*/
pile[WZ2]=111; pile[WZ3]=jvj+78; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+78,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=107; pile[WZ2]=jvj+79; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+79)*/
pile[WZ2]=jvj+80; 
(*f[36])( );     /*PLUSC0(jvj+52,107,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+91; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+91)*/
pile[WZ3]=26; pile[WZ4]=jvj+94; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=111; pile[WZ2]=jvj+95; 
(*f[54])( );     /*TRI1(jvj+94,111,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=jvj+96; pile[WZ2]=103; pile[WZ3]=jvj+97; 
(*f[58])( );     /*TRI3(jvj+95,jvj+96,103,jvj+97)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+98; pile[WZ4]=jvj+97; pile[WZ5]=jvj+92; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+98,jvj+97,jvj+92)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+99; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=111; pile[WZ2]=jvj+100; 
(*f[54])( );     /*TRI1(jvj+99,111,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=jvj+101; pile[WZ2]=103; pile[WZ3]=jvj+102; 
(*f[58])( );     /*TRI3(jvj+100,jvj+101,103,jvj+102)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+103; pile[WZ4]=jvj+102; pile[WZ5]=jvj+93; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+103,jvj+102,jvj+93)*/
pile[WZ2]=111; pile[WZ3]=jvj+91; pile[WZ4]=jvj+53; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+91,jvj+53)*/
pile[v[22]]=jvj+53; pile[WZ1]=107; pile[WZ2]=jvj+92; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+92)*/
pile[WZ2]=jvj+93; 
(*f[36])( );     /*PLUSC0(jvj+53,107,jvj+93)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+104; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+104)*/
pile[WZ3]=26; pile[WZ4]=jvj+107; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=111; pile[WZ2]=jvj+108; 
(*f[54])( );     /*TRI1(jvj+107,111,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+109; pile[WZ2]=103; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+108,jvj+109,103,jvj+110)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+111; pile[WZ4]=jvj+110; pile[WZ5]=jvj+105; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+111,jvj+110,jvj+105)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+112; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=111; pile[WZ2]=jvj+113; 
(*f[54])( );     /*TRI1(jvj+112,111,jvj+113)*/
pile[v[22]]=jvj+113; pile[WZ1]=jvj+114; pile[WZ2]=103; pile[WZ3]=jvj+115; 
(*f[58])( );     /*TRI3(jvj+113,jvj+114,103,jvj+115)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+116; pile[WZ4]=jvj+115; pile[WZ5]=jvj+106; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+116,jvj+115,jvj+106)*/
pile[WZ2]=111; pile[WZ3]=jvj+104; pile[WZ4]=jvj+54; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+104,jvj+54)*/
pile[v[22]]=jvj+54; pile[WZ1]=107; pile[WZ2]=jvj+105; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+105)*/
pile[WZ2]=jvj+106; 
(*f[36])( );     /*PLUSC0(jvj+54,107,jvj+106)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+117)*/
pile[WZ3]=26; pile[WZ4]=jvj+120; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+120)*/
pile[v[22]]=jvj+120; pile[WZ1]=111; pile[WZ2]=jvj+121; 
(*f[54])( );     /*TRI1(jvj+120,111,jvj+121)*/
pile[v[22]]=jvj+121; pile[WZ1]=jvj+122; pile[WZ2]=103; pile[WZ3]=jvj+123; 
(*f[58])( );     /*TRI3(jvj+121,jvj+122,103,jvj+123)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+124; pile[WZ4]=jvj+123; pile[WZ5]=jvj+118; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+124,jvj+123,jvj+118)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+125; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+125)*/
pile[v[22]]=jvj+125; pile[WZ1]=111; pile[WZ2]=jvj+126; 
(*f[54])( );     /*TRI1(jvj+125,111,jvj+126)*/
pile[v[22]]=jvj+126; pile[WZ1]=jvj+127; pile[WZ2]=103; pile[WZ3]=jvj+128; 
(*f[58])( );     /*TRI3(jvj+126,jvj+127,103,jvj+128)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+129; pile[WZ4]=jvj+128; pile[WZ5]=jvj+119; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+129,jvj+128,jvj+119)*/
pile[WZ2]=111; pile[WZ3]=jvj+117; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+117,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=107; pile[WZ2]=jvj+118; 
(*f[36])( );     /*PLUSC0(jvj+55,107,jvj+118)*/
pile[WZ2]=jvj+119; 
(*f[36])( );     /*PLUSC0(jvj+55,107,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+49; pile[WZ4]=jvj+43; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+49,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=107; pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+50)*/
pile[WZ2]=jvj+51; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+51)*/
pile[WZ2]=jvj+52; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+52)*/
pile[WZ2]=jvj+53; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+53)*/
pile[WZ2]=jvj+54; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+54)*/
pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+43,107,jvj+55)*/
pile[WZ1]=jvj+42; 
(*f[1296])( );     /*NOUVCONTR0(jvj+43,jvj+42)*/
goto l10;
l12:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
}
