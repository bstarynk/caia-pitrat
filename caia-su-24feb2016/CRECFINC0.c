#include "dx.h"
void CRECFINC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V9=0,V11=0,V6=0,V5=0,V4=0,V43=0,V42=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0;
int B,C;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=36;
x[jvj+1]=11173;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1252&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; C=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=876; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(876,B,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(117,B,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=977; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(977,B,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(936,B,V6)*/
V6=pile[WZ2]; 
x[jvj+5]=vo[12];z[jvj+5]=vz[12];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; 
(*f[378])( );     /*CPI0(jvj+5,jvj+3)*/
V48=x[jvj+3];
pile[v[22]]=jvj+3; pile[WZ1]=0; pile[WZ2]=V48; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+3,0,V48,117,V49,V50)*/
V49=pile[WZ4]; V50=pile[WZ5]; 
pile[WZ1]=V50; pile[WZ2]=V49; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+3,V50,V49,978,V51,V52)*/
V51=pile[WZ4]; V52=pile[WZ5]; 
pile[WZ1]=V52; pile[WZ2]=V51; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+3,V52,V51,999,V53,V54)*/
V53=pile[WZ4]; V54=pile[WZ5]; 
pile[WZ1]=V54; pile[WZ2]=V53; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+3,V54,V53,1002,V55,V56)*/
V55=pile[WZ4]; V56=pile[WZ5]; 
pile[WZ1]=V56; pile[WZ2]=V55; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+3,V56,V55,1025,V57,V58)*/
V57=pile[WZ4]; V58=pile[WZ5]; 
pile[WZ1]=V58; pile[WZ2]=V57; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+3,V58,V57,1042,V59,V60)*/
V59=pile[WZ4]; V60=pile[WZ5]; 
pile[WZ1]=V60; pile[WZ2]=V59; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+3,V60,V59,1080,V61,V62)*/
V61=pile[WZ4]; V62=pile[WZ5]; 
pile[WZ1]=V62; pile[WZ2]=V61; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+3,V62,V61,1104,V63,V64)*/
V63=pile[WZ4]; V64=pile[WZ5]; 
pile[WZ1]=V64; pile[WZ2]=V63; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+3,V64,V63,1121,V65,V66)*/
V65=pile[WZ4]; V66=pile[WZ5]; 
V5=V6+1;
V4=10*V5;
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+3,jvj+33)*/
pile[v[22]]=983; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(983,jvj+33,jvj+34)*/
pile[v[22]]=878; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(878,jvj+34,jvj+35)*/
l3:if((x[jvj+35]<=0)) goto l1;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=163; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+36,V43)*/
V43=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(163,jvj+3,V42)*/
V42=pile[WZ2]; 
if((V43==V42)) goto l4;
x[jvj+35]=t[x[jvj+35]];
goto l3;
l4:x[jvj+2]=x[jvj+36] ;z[jvj+2]=z[jvj+36];
pile[v[22]]=493; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(493,jvj+2,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+12; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+12)*/
pile[WZ3]=935; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(100,20,101,935,jvj+19)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+17; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+17)*/
pile[v[22]]=jvj+17; pile[WZ1]=103; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(jvj+17,103,jvj+18)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+19; pile[WZ4]=jvj+18; pile[WZ5]=jvj+16; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+19,jvj+18,jvj+16)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=547; pile[WZ4]=jvj+14; 
(*f[181])( );     /*QUADRI2(100,20,101,547,jvj+14)*/
pile[v[22]]=jvj+12; pile[WZ1]=111; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(jvj+12,111,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+14; pile[WZ2]=103; pile[WZ3]=jvj+15; 
(*f[58])( );     /*TRI3(jvj+13,jvj+14,103,jvj+15)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+16; pile[WZ4]=jvj+15; pile[WZ5]=jvj+11; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+16,jvj+15,jvj+11)*/
pile[v[22]]=25; pile[WZ1]=145; pile[WZ2]=jvj+8; 
(*f[54])( );     /*TRI1(25,145,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=493; pile[WZ2]=122; pile[WZ3]=jvj+9; 
(*f[58])( );     /*TRI3(jvj+8,493,122,jvj+9)*/
pile[v[22]]=jvj+9; pile[WZ1]=V7; pile[WZ2]=117; pile[WZ3]=jvj+10; 
(*f[189])( );     /*TRI4(jvj+9,V7,117,jvj+10)*/
pile[v[22]]=jvj+11; pile[WZ1]=(-20); pile[WZ2]=jvj+10; pile[WZ3]=107; pile[WZ4]=jvj+4; 
(*f[298])( );     /*TRIENS1(jvj+11,(-20),jvj+10,107,jvj+4)*/
pile[v[22]]=jvj+3; pile[WZ1]=1080; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(jvj+3,1080,jvj+4)*/
l1:pile[v[22]]=jvj+3; pile[WZ1]=936; pile[WZ2]=V4; 
(*f[43])( );     /*CHGC2(jvj+3,936,V4)*/
pile[WZ1]=1056; pile[WZ2]=1060; 
(*f[36])( );     /*PLUSC0(jvj+3,1056,1060)*/
pile[v[22]]=29; pile[WZ1]=145; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(29,145,jvj+20)*/
pile[v[22]]=117; pile[WZ1]=V8; pile[WZ2]=122; pile[WZ3]=876; pile[WZ4]=jvj+20; pile[WZ5]=jvj+6; 
(*f[725])( );     /*QUADRI14(117,V8,122,876,jvj+20,jvj+6)*/
pile[v[22]]=jvj+3; pile[WZ1]=735; pile[WZ2]=jvj+6; 
(*f[35])( );     /*CHGC1(jvj+3,735,jvj+6)*/
pile[WZ1]=860; pile[WZ2]=1102; 
(*f[35])( );     /*CHGC1(jvj+3,860,1102)*/
pile[WZ1]=1114; pile[WZ2]=V9; 
(*f[43])( );     /*CHGC2(jvj+3,1114,V9)*/
pile[WZ1]=945; pile[WZ2]=V8; 
(*f[43])( );     /*CHGC2(jvj+3,945,V8)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+25)*/
pile[WZ3]=935; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,935,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-591); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,(-591),jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=103; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+32,jvj+31,jvj+29)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=547; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,547,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+24; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+28,jvj+24)*/
pile[v[22]]=29; pile[WZ1]=145; pile[WZ2]=jvj+21; 
(*f[54])( );     /*TRI1(29,145,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=977; pile[WZ2]=122; pile[WZ3]=jvj+22; 
(*f[58])( );     /*TRI3(jvj+21,977,122,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=V11; pile[WZ2]=117; pile[WZ3]=jvj+23; 
(*f[189])( );     /*TRI4(jvj+22,V11,117,jvj+23)*/
pile[v[22]]=jvj+24; pile[WZ1]=(-20); pile[WZ2]=jvj+23; pile[WZ3]=107; pile[WZ4]=jvj+7; 
(*f[298])( );     /*TRIENS1(jvj+24,(-20),jvj+23,107,jvj+7)*/
pile[v[22]]=jvj+3; pile[WZ1]=1042; pile[WZ2]=jvj+7; 
(*f[36])( );     /*PLUSC0(jvj+3,1042,jvj+7)*/
pile[WZ1]=1102; pile[WZ2]=C; 
(*f[43])( );     /*CHGC2(jvj+3,1102,C)*/
pile[WZ1]=1161; pile[WZ2]=978; 
(*f[35])( );     /*CHGC1(jvj+3,1161,978)*/
(*f[554])( );     /*AJEXP1(jvj+3)*/
l2:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
}
