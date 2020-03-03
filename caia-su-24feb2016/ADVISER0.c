#include "dx.h"
void ADVISER0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int NN=0,V2=0,A=0,M=0,J=0,H=0,V31=0,V32=0,V33=0,V35=0,V37=0,V38=0,V40=0,V41=0,V30=0,V29=0,V4=0,V6=0,V5=0,V27=0,NRR=0,NX=0,V9=0,V8=0,V7=0,V43=0,V44=0,V46=0,V16=0,V15=0,V18=0,V20=0,V22=0,V13=0,V10=0,V69=0,V68=0;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=39;
x[jvj+1]=11217;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==880&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
S=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+4]=incon;
if((x[S]!=68)) goto l1;
pile[v[22]]=405; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(405,994,NN)*/
NN=pile[WZ2]; 
V2=NN+1;
pile[v[22]]=994; pile[WZ1]=405; pile[WZ2]=V2; 
(*f[43])( );     /*CHGC2(994,405,V2)*/
l1:pile[v[22]]=1070; pile[WZ1]=994; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(1070,994,jvj+2)*/
(*f[184])( );     /*DATE1(A,M,J,H)*/
A=pile[v[22]]; M=pile[WZ1]; J=pile[WZ2]; H=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=938; 
(*f[42])( );     /*SRA1(135,0,938,V31)*/
V31=pile[WZ3]; 
pile[v[22]]=V31; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V31,58,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=V32; pile[WZ1]=H; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V32,H,41,V33)*/
V33=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=J; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,J,V33,V35)*/
V35=pile[WZ3]; 
pile[v[22]]=V35; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V35,45,V37)*/
V37=pile[WZ2]; 
pile[v[22]]=V37; pile[WZ1]=M; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V37,M,41,V38)*/
V38=pile[WZ3]; 
pile[v[22]]=V38; pile[WZ1]=45; 
(*f[38])( );     /*SPC0(V38,45,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=V40; pile[WZ1]=A; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V40,A,41,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=V41; 
(*f[40])( );     /*SLG0(V41)*/
pile[v[22]]=J; pile[WZ1]=943; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(J,943,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=M; pile[WZ2]=942; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,M,942,jvj+24)*/
pile[v[22]]=938; pile[WZ1]=H; pile[WZ2]=941; pile[WZ3]=A; pile[WZ4]=jvj+24; pile[WZ5]=jvj+3; 
(*f[190])( );     /*QUADRI3(938,H,941,A,jvj+24,jvj+3)*/
pile[v[22]]=994; pile[WZ1]=1070; pile[WZ2]=jvj+3; 
(*f[35])( );     /*CHGC1(994,1070,jvj+3)*/
l2:if((x[S]!=68)) goto l3;
(*f[1191])( );     /*COMPLETER0()*/
pile[v[22]]=69; pile[WZ1]=32; pile[WZ2]=(-89); 
(*f[408])( );     /*EDITOUTPB1(69,32,(-89))*/
l3:if(x[jvj+2]!=incon) goto l4;
l5:pile[v[22]]=905; pile[WZ1]=994; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(905,994,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=301; pile[WZ1]=V4; pile[WZ2]=jvj+4; 
(*f[553])( );if(v[102]) goto l17;     /*EXPPB3(301,V4,jvj+4)*/
V6=0;
pile[v[22]]=V6; 
(*f[656])( );     /*SPLN2(V6,V5)*/
V5=pile[WZ1]; 
pile[v[22]]=V5; 
(*f[288])( );     /*SPLN0(V5)*/
pile[v[22]]=jvj+4; 
(*f[1192])( );     /*EXAPBA1(jvj+4)*/
pile[v[22]]=V6; 
(*f[656])( );     /*SPLN2(V6,V27)*/
V27=pile[WZ1]; 
pile[v[22]]=V27; 
(*f[288])( );     /*SPLN0(V27)*/
pile[v[22]]=jvj+4; 
(*f[519])( );     /*EXAPBR0(jvj+4)*/
NRR=1;
l13:NX=1;
l15:if((NRR==NX)) goto l14;
pile[v[22]]=jvj+4; pile[WZ1]=NRR; pile[WZ2]=NX; 
(*f[502])( );     /*EXAPBM0(jvj+4,NRR,NX)*/
l14:NX++;
if((NX<=3)) goto l15;
NRR++;
if((NRR<=3)) goto l13;
x[jvj+13]=d[62];z[jvj+13]=0;
l16:if((x[jvj+13]<=0)) goto l17;
x[jvj+19]=s[x[jvj+13]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+13];
pile[v[22]]=jvj+19; pile[WZ1]=158; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(jvj+19,158,jvj+12)*/
x[jvj+37]=x[jvj+4] ;z[jvj+37]=z[jvj+4];
l6:if((x[jvj+37]>0)) goto l7;
pile[v[22]]=jvj+12; 
(*f[1198])( );     /*SORTIR0(jvj+12)*/
x[jvj+13]=t[x[jvj+13]];
goto l16;
l4:V30=0;
pile[v[22]]=V30; 
(*f[656])( );     /*SPLN2(V30,V29)*/
V29=pile[WZ1]; 
pile[v[22]]=V29; 
(*f[288])( );     /*SPLN0(V29)*/
pile[v[22]]=jvj+2; 
(*f[1199])( );     /*PROGRESSION0(jvj+2)*/
goto l5;
l7:x[jvj+11]=s[x[jvj+37]] ;z[jvj+11]=(x[jvj+11]<=sepcte) ? x[jvj+11] : z[jvj+37];
pile[v[22]]=109; pile[WZ1]=jvj+11; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,jvj+11,jvj+33)*/
pile[v[22]]=983; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+33,jvj+34)*/
pile[v[22]]=878; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(878,jvj+34,jvj+35)*/
l22:if((x[jvj+35]<=0)) goto l8;
x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=163; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(163,jvj+36,V69)*/
V69=pile[WZ2]; 
pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(163,jvj+11,V68)*/
V68=pile[WZ2]; 
if((V69==V68)) goto l23;
x[jvj+35]=t[x[jvj+35]];
goto l22;
l8:x[jvj+37]=t[x[jvj+37]];
goto l6;
l11:x[jvj+9]=s[x[jvj+39]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+39];
pile[v[22]]=860; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(860,jvj+9,jvj+10)*/
if((x[jvj+10]!=x[jvj+19])) goto l12;
pile[v[22]]=jvj+11; pile[WZ2]=jvj+12; pile[WZ3]=jvj+7; 
(*f[1197])( );     /*STOCKE0(jvj+11,jvj+9,jvj+12,jvj+7)*/
l12:x[jvj+39]=t[x[jvj+39]];
l10:if((x[jvj+39]>0)) goto l11;
x[jvj+5]=t[x[jvj+5]];
l9:if((x[jvj+5]<=0)) goto l8;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(jvj+6,jvj+7,jvj+8)*/
x[jvj+39]=x[jvj+8] ;z[jvj+39]=z[jvj+8];
goto l10;
l17:pile[v[22]]=937; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(937,994,V9)*/
V9=pile[WZ2]; 
V8=0;
pile[v[22]]=V8; 
(*f[656])( );     /*SPLN2(V8,V7)*/
V7=pile[WZ1]; 
pile[v[22]]=V7; 
(*f[288])( );     /*SPLN0(V7)*/
pile[v[22]]=75; pile[WZ1]=78; pile[WZ2]=(-89); 
(*f[408])( );     /*EDITOUTPB1(75,78,(-89))*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=954; 
(*f[42])( );     /*SRA1(135,0,954,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V9; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(41,V9,V43,V44)*/
V44=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V44; pile[WZ2]=937; 
(*f[42])( );     /*SRA1(135,V44,937,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=V46; 
(*f[40])( );     /*SLG0(V46)*/
l21:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+25)*/
pile[WZ3]=683; pile[WZ4]=jvj+32; 
(*f[181])( );     /*QUADRI2(100,20,101,683,jvj+32)*/
pile[WZ1]=21; pile[WZ2]=140; pile[WZ3]=(-7886); pile[WZ4]=jvj+30; 
(*f[270])( );     /*QUADRI7(100,21,140,(-7886),jvj+30)*/
pile[v[22]]=jvj+30; pile[WZ1]=103; pile[WZ2]=jvj+31; 
(*f[54])( );     /*TRI1(jvj+30,103,jvj+31)*/
pile[v[22]]=100; pile[WZ1]=43; pile[WZ2]=102; pile[WZ3]=jvj+32; pile[WZ4]=jvj+31; pile[WZ5]=jvj+29; 
(*f[269])( );     /*QUADRI6(100,43,102,jvj+32,jvj+31,jvj+29)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=3; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,3,jvj+27)*/
pile[v[22]]=jvj+25; pile[WZ1]=111; pile[WZ2]=jvj+26; 
(*f[54])( );     /*TRI1(jvj+25,111,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; pile[WZ2]=103; pile[WZ3]=jvj+28; 
(*f[58])( );     /*TRI3(jvj+26,jvj+27,103,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+29; pile[WZ4]=jvj+28; pile[WZ5]=jvj+14; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+29,jvj+28,jvj+14)*/
pile[v[22]]=20; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[409])( );     /*TRI14(20,jvj+14,jvj+15)*/
if(x[jvj+4]!=incon) goto l18;
l20:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l18:V16=0;
pile[v[22]]=V16; 
(*f[656])( );     /*SPLN2(V16,V15)*/
V15=pile[WZ1]; 
pile[v[22]]=V15; 
(*f[288])( );     /*SPLN0(V15)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+15; pile[WZ2]=996; 
(*f[1193])( );     /*EXAPBH1(jvj+4,jvj+15,996)*/
pile[WZ2]=1012; pile[WZ3]=67; 
(*f[1194])( );     /*EXAPBH2(jvj+4,jvj+15,1012,67)*/
pile[WZ2]=995; 
(*f[1194])( );     /*EXAPBH2(jvj+4,jvj+15,995,67)*/
pile[v[22]]=V16; 
(*f[656])( );     /*SPLN2(V16,V18)*/
V18=pile[WZ1]; 
pile[v[22]]=V18; 
(*f[288])( );     /*SPLN0(V18)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+15; pile[WZ2]=67; 
(*f[1195])( );     /*EXAPBK1(jvj+4,jvj+15,67)*/
pile[v[22]]=V16; 
(*f[656])( );     /*SPLN2(V16,V20)*/
V20=pile[WZ1]; 
pile[v[22]]=V20; 
(*f[288])( );     /*SPLN0(V20)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+15; pile[WZ2]=78; 
(*f[499])( );     /*EXAPBI0(jvj+4,jvj+15,78)*/
pile[WZ2]=77; 
(*f[499])( );     /*EXAPBI0(jvj+4,jvj+15,77)*/
pile[v[22]]=V16; 
(*f[656])( );     /*SPLN2(V16,V22)*/
V22=pile[WZ1]; 
pile[v[22]]=V22; 
(*f[288])( );     /*SPLN0(V22)*/
pile[v[22]]=jvj+4; pile[WZ1]=jvj+15; pile[WZ2]=67; 
(*f[1196])( );     /*EXAPBF1(jvj+4,jvj+15,67)*/
pile[v[22]]=1015; pile[WZ1]=1018; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(1015,1018,jvj+20)*/
pile[v[22]]=218; pile[WZ1]=325; pile[WZ2]=683; pile[WZ3]=3; pile[WZ4]=jvj+20; pile[WZ5]=jvj+17; 
(*f[47])( );     /*QUADRI0(218,325,683,3,jvj+20,jvj+17)*/
pile[v[22]]=V16; 
(*f[656])( );     /*SPLN2(V16,V13)*/
V13=pile[WZ1]; 
pile[v[22]]=V13; 
(*f[288])( );     /*SPLN0(V13)*/
pile[v[22]]=jvj+17; pile[WZ1]=158; pile[WZ2]=490; 
(*f[35])( );     /*CHGC1(jvj+17,158,490)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[501])( );     /*QUESPB0(jvj+17,jvj+4,jvj+15)*/
pile[WZ1]=158; pile[WZ2]=1013; 
(*f[35])( );     /*CHGC1(jvj+17,158,1013)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[501])( );     /*QUESPB0(jvj+17,jvj+4,jvj+15)*/
x[jvj+18]=d[63];z[jvj+18]=0;
l19:if((x[jvj+18]<=0)) goto l20;
x[jvj+21]=s[x[jvj+18]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+18];
pile[v[22]]=jvj+21; pile[WZ1]=1018; pile[WZ2]=jvj+22; 
(*f[54])( );     /*TRI1(jvj+21,1018,jvj+22)*/
pile[v[22]]=218; pile[WZ1]=547; pile[WZ2]=683; pile[WZ3]=3; pile[WZ4]=jvj+22; pile[WZ5]=jvj+16; 
(*f[47])( );     /*QUADRI0(218,547,683,3,jvj+22,jvj+16)*/
pile[v[22]]=V16; 
(*f[656])( );     /*SPLN2(V16,V10)*/
V10=pile[WZ1]; 
pile[v[22]]=V10; 
(*f[288])( );     /*SPLN0(V10)*/
pile[v[22]]=jvj+16; pile[WZ1]=158; pile[WZ2]=490; 
(*f[35])( );     /*CHGC1(jvj+16,158,490)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[501])( );     /*QUESPB0(jvj+16,jvj+4,jvj+15)*/
pile[WZ1]=158; pile[WZ2]=1013; 
(*f[35])( );     /*CHGC1(jvj+16,158,1013)*/
pile[WZ1]=jvj+4; pile[WZ2]=jvj+15; 
(*f[501])( );     /*QUESPB0(jvj+16,jvj+4,jvj+15)*/
x[jvj+18]=t[x[jvj+18]];
goto l19;
l23:x[jvj+38]=x[jvj+36] ;z[jvj+38]=z[jvj+36];
x[jvj+7]=x[jvj+38] ;z[jvj+7]=z[jvj+38];
x[jvj+5]=d[58];z[jvj+5]=0;
goto l9;
}
