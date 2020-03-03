#include "dx.h"
void CREXPLORE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V14=0,V16=0,V17=0,V19=0,V20=0,V11=0,V10=0,V9=0,V6=0,R=0,V69=0,V68=0,V74=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V84=0,V85=0,V86=0,V87=0,V88=0,V89=0,V90=0,V91=0,V92=0;
int B,PP;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=56;
x[jvj+1]=10801;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1522&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; PP=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+13]=vo[14];z[jvj+13]=vz[14];
pile[v[22]]=1107; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1107,jvj+13,jvj+14)*/
l6:x[jvj+6]=x[jvj+14] ;z[jvj+6]=z[jvj+14];
pile[v[22]]=1110; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1110,jvj+6,V6)*/
V6=pile[WZ2]; 
if((V6<2)) goto l7;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(204,jvj+6,V14)*/
V14=pile[WZ2]; 
pile[v[22]]=876; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(876,B,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,B,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=1076; pile[WZ1]=PP; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1076,PP,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=977; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(977,B,V20)*/
V20=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(936,B,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=698; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(698,jvj+6,jvj+7)*/
x[jvj+27]=incon;
pile[v[22]]=550; pile[WZ1]=876; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(550,876,jvj+2)*/
if((x[jvj+2]!=52)) goto l1;
x[jvj+27]=29 ;z[jvj+27]=29;
l1:if(x[jvj+27]==incon) goto l2;
l3:if(x[jvj+27]!=incon) goto l4;
l7:pile[v[22]]=120; pile[WZ1]=jvj+6; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(120,jvj+6,jvj+14)*/
goto l6;
l2:x[jvj+27]=27 ;z[jvj+27]=27;
goto l3;
l4:x[jvj+8]=vo[12];z[jvj+8]=vz[12];
pile[v[22]]=jvj+8; pile[WZ1]=jvj+4; 
(*f[378])( );     /*CPI0(jvj+8,jvj+4)*/
V74=x[jvj+4];
pile[v[22]]=jvj+4; pile[WZ1]=0; pile[WZ2]=V74; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+4,0,V74,117,V75,V76)*/
V75=pile[WZ4]; V76=pile[WZ5]; 
pile[WZ1]=V76; pile[WZ2]=V75; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+4,V76,V75,978,V77,V78)*/
V77=pile[WZ4]; V78=pile[WZ5]; 
pile[WZ1]=V78; pile[WZ2]=V77; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+4,V78,V77,999,V79,V80)*/
V79=pile[WZ4]; V80=pile[WZ5]; 
pile[WZ1]=V80; pile[WZ2]=V79; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+4,V80,V79,1002,V81,V82)*/
V81=pile[WZ4]; V82=pile[WZ5]; 
pile[WZ1]=V82; pile[WZ2]=V81; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+4,V82,V81,1025,V83,V84)*/
V83=pile[WZ4]; V84=pile[WZ5]; 
pile[WZ1]=V84; pile[WZ2]=V83; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+4,V84,V83,1042,V85,V86)*/
V85=pile[WZ4]; V86=pile[WZ5]; 
pile[WZ1]=V86; pile[WZ2]=V85; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+4,V86,V85,1080,V87,V88)*/
V87=pile[WZ4]; V88=pile[WZ5]; 
pile[WZ1]=V88; pile[WZ2]=V87; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+4,V88,V87,1104,V89,V90)*/
V89=pile[WZ4]; V90=pile[WZ5]; 
pile[WZ1]=V90; pile[WZ2]=V89; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+4,V90,V89,1121,V91,V92)*/
V91=pile[WZ4]; V92=pile[WZ5]; 
V10=V11+1;
V9=4*V10;
pile[v[22]]=109; pile[WZ1]=jvj+4; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+4,jvj+53)*/
pile[v[22]]=983; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(983,jvj+53,jvj+54)*/
pile[v[22]]=878; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[33])( );     /*FNDE0(878,jvj+54,jvj+55)*/
l9:if((x[jvj+55]<=0)) goto l5;
x[jvj+56]=s[x[jvj+55]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+55];
pile[v[22]]=163; pile[WZ1]=jvj+56; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+56,V69)*/
V69=pile[WZ2]; 
pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+4,V68)*/
V68=pile[WZ2]; 
if((V69==V68)) goto l10;
x[jvj+55]=t[x[jvj+55]];
goto l9;
l8:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l10:x[jvj+3]=x[jvj+56] ;z[jvj+3]=z[jvj+56];
pile[v[22]]=493; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(493,jvj+3,V12)*/
V12=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+19)*/
pile[WZ3]=935; pile[WZ4]=jvj+26; 
(*f[181])( );     /*QUADRI2(100,20,101,935,jvj+26)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+24; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=103; pile[WZ2]=jvj+25; 
(*f[54])( );     /*TRI1(jvj+24,103,jvj+25)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+26; pile[WZ4]=jvj+25; pile[WZ5]=jvj+23; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+26,jvj+25,jvj+23)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=547; pile[WZ4]=jvj+21; 
(*f[181])( );     /*QUADRI2(100,20,101,547,jvj+21)*/
pile[v[22]]=jvj+19; pile[WZ1]=111; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(jvj+19,111,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=103; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+20,jvj+21,103,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+23; pile[WZ4]=jvj+22; pile[WZ5]=jvj+18; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+23,jvj+22,jvj+18)*/
pile[v[22]]=25; pile[WZ1]=145; pile[WZ2]=jvj+15; 
(*f[54])( );     /*TRI1(25,145,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=493; pile[WZ2]=122; pile[WZ3]=jvj+16; 
(*f[58])( );     /*TRI3(jvj+15,493,122,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=V12; pile[WZ2]=117; pile[WZ3]=jvj+17; 
(*f[189])( );     /*TRI4(jvj+16,V12,117,jvj+17)*/
pile[v[22]]=jvj+18; pile[WZ1]=(-20); pile[WZ2]=jvj+17; pile[WZ3]=107; pile[WZ4]=jvj+5; 
(*f[298])( );     /*TRIENS1(jvj+18,(-20),jvj+17,107,jvj+5)*/
pile[v[22]]=jvj+4; pile[WZ1]=1080; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(jvj+4,1080,jvj+5)*/
l5:pile[v[22]]=jvj+4; pile[WZ1]=936; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+4,936,V9)*/
pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+4,1056,1060)*/
pile[WZ1]=1110; pile[WZ2]=V6; 
(*f[43])( );     /*CHGC2(jvj+4,1110,V6)*/
pile[WZ1]=204; pile[WZ2]=V14; 
(*f[43])( );     /*CHGC2(jvj+4,204,V14)*/
pile[v[22]]=698; pile[WZ1]=jvj+7; pile[WZ2]=1110; pile[WZ3]=1; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(698,jvj+7,1110,1,jvj+9)*/
pile[v[22]]=jvj+4; pile[WZ1]=1025; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+4,1025,jvj+9)*/
pile[v[22]]=jvj+27; pile[WZ1]=145; pile[WZ2]=jvj+28; 
(*f[54])( );     /*TRI1(jvj+27,145,jvj+28)*/
pile[v[22]]=117; pile[WZ1]=V16; pile[WZ2]=122; pile[WZ3]=876; pile[WZ4]=jvj+28; pile[WZ5]=jvj+10; 
(*f[725])( );     /*QUADRI14(117,V16,122,876,jvj+28,jvj+10)*/
pile[v[22]]=jvj+4; pile[WZ1]=735; pile[WZ2]=jvj+10; 
(*f[35])( );     /*CHGC1(jvj+4,735,jvj+10)*/
pile[WZ1]=860; pile[WZ2]=1085; 
(*f[35])( );     /*CHGC1(jvj+4,860,1085)*/
pile[WZ1]=1114; pile[WZ2]=V17; 
(*f[43])( );     /*CHGC2(jvj+4,1114,V17)*/
pile[WZ1]=945; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(jvj+4,945,V16)*/
pile[WZ1]=1121; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+4,1121,1)*/
pile[WZ1]=1076; pile[WZ2]=V19; 
(*f[43])( );     /*CHGC2(jvj+4,1076,V19)*/
pile[WZ1]=1161; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+4,1161,978)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+33; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+33)*/
pile[WZ3]=935; pile[WZ4]=jvj+40; 
(*f[181])( );     /*QUADRI2(100,20,101,935,jvj+40)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+38; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+38)*/
pile[v[22]]=jvj+38; pile[WZ1]=103; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,103,jvj+39)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+40; pile[WZ4]=jvj+39; pile[WZ5]=jvj+37; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+40,jvj+39,jvj+37)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=547; pile[WZ4]=jvj+35; 
(*f[181])( );     /*QUADRI2(100,20,101,547,jvj+35)*/
pile[v[22]]=jvj+33; pile[WZ1]=111; pile[WZ2]=jvj+34; 
(*f[54])( );     /*TRI1(jvj+33,111,jvj+34)*/
pile[v[22]]=jvj+34; pile[WZ1]=jvj+35; pile[WZ2]=103; pile[WZ3]=jvj+36; 
(*f[58])( );     /*TRI3(jvj+34,jvj+35,103,jvj+36)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+37; pile[WZ4]=jvj+36; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+37,jvj+36,jvj+32)*/
pile[v[22]]=29; pile[WZ1]=145; pile[WZ2]=jvj+29; 
(*f[54])( );     /*TRI1(29,145,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=977; pile[WZ2]=122; pile[WZ3]=jvj+30; 
(*f[58])( );     /*TRI3(jvj+29,977,122,jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=V20; pile[WZ2]=117; pile[WZ3]=jvj+31; 
(*f[189])( );     /*TRI4(jvj+30,V20,117,jvj+31)*/
pile[v[22]]=jvj+32; pile[WZ1]=(-20); pile[WZ2]=jvj+31; pile[WZ3]=107; pile[WZ4]=jvj+11; 
(*f[298])( );     /*TRIENS1(jvj+32,(-20),jvj+31,107,jvj+11)*/
pile[v[22]]=jvj+4; pile[WZ1]=1042; pile[WZ2]=jvj+11; 
(*f[36])( );     /*PLUSC0(jvj+4,1042,jvj+11)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+45; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+45)*/
pile[WZ3]=935; pile[WZ4]=jvj+52; 
(*f[181])( );     /*QUADRI2(100,20,101,935,jvj+52)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+50; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=103; pile[WZ2]=jvj+51; 
(*f[54])( );     /*TRI1(jvj+50,103,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+52; pile[WZ4]=jvj+51; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+52,jvj+51,jvj+49)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=547; pile[WZ4]=jvj+47; 
(*f[181])( );     /*QUADRI2(100,20,101,547,jvj+47)*/
pile[v[22]]=jvj+45; pile[WZ1]=111; pile[WZ2]=jvj+46; 
(*f[54])( );     /*TRI1(jvj+45,111,jvj+46)*/
pile[v[22]]=jvj+46; pile[WZ1]=jvj+47; pile[WZ2]=103; pile[WZ3]=jvj+48; 
(*f[58])( );     /*TRI3(jvj+46,jvj+47,103,jvj+48)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+49; pile[WZ4]=jvj+48; pile[WZ5]=jvj+44; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+49,jvj+48,jvj+44)*/
pile[v[22]]=29; pile[WZ1]=145; pile[WZ2]=jvj+41; 
(*f[54])( );     /*TRI1(29,145,jvj+41)*/
pile[v[22]]=jvj+41; pile[WZ1]=876; pile[WZ2]=122; pile[WZ3]=jvj+42; 
(*f[58])( );     /*TRI3(jvj+41,876,122,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=V16; pile[WZ2]=117; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,V16,117,jvj+43)*/
pile[v[22]]=jvj+44; pile[WZ1]=(-20); pile[WZ2]=jvj+43; pile[WZ3]=107; pile[WZ4]=jvj+12; 
(*f[298])( );     /*TRIENS1(jvj+44,(-20),jvj+43,107,jvj+12)*/
pile[v[22]]=jvj+4; pile[WZ1]=1042; pile[WZ2]=jvj+12; 
(*f[36])( );     /*PLUSC0(jvj+4,1042,jvj+12)*/
pile[WZ1]=876; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(jvj+4,876,V16)*/
(*f[1262])( );if(v[102]) goto l7;     /*AJEXP2(jvj+4,R)*/
R=pile[WZ1]; 
pile[v[22]]=R; pile[WZ1]=1104; pile[WZ2]=PP; 
(*f[235])( );     /*PLUSC2(R,1104,PP)*/
goto l7;
}
