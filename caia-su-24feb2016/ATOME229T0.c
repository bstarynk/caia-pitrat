#include "dx.h"
void ATOME229T0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int I=0,EA=0,V21=0,V18=0,V22=0,V9=0,V10=0,V12=0,V13=0,V11=0,A=0,C=0,B=0,D=0,V81=0,V87=0,V91=0,V83=0,V127=0,V125=0,V115=0,V100=0,V114=0,V116=0,V132=0,V133=0,V136=0,V138=0,V105=0,V110=0,V103=0,V108=0,V121=0,V122=0,V170=0,V168=0,V158=0,V143=0,EB=0,V157=0,V159=0,V175=0,V176=0,V179=0,V181=0,V148=0,V153=0,V146=0,V151=0,V164=0,V165=0;
int R;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=104;
x[jvj+1]=20229;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==3688&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(111,R,jvj+12)*/
pile[v[22]]=101; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(101,jvj+12,jvj+13)*/
if((x[jvj+13]!=25)) goto l7;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(870,R,V9)*/
V9=pile[WZ2]; 
if((V9!=2)) goto l7;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(1101,R,V10)*/
V10=pile[WZ2]; 
if((V10!=2)) goto l7;
pile[v[22]]=1358; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1358,R,jvj+14)*/
if((x[jvj+14]!=68)) goto l7;
pile[v[22]]=102; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(102,R,jvj+15)*/
pile[v[22]]=103; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(103,R,jvj+16)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; pile[WZ3]=jvj+18; 
(*f[3689])( );     /*DECOMPOSITION0(jvj+15,jvj+16,jvj+17,jvj+18)*/
if((x[jvj+18]==135)) goto l9;
l7:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=1; return;
l3:I=s[EA];
V21=V11/I;
for(a=EB;a>0;a=t[a]) if(s[a]==V21) goto l8;
l4:EA=t[EA];
l2:if((EA>0)) goto l3;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+9; 
(*f[299])( );     /*COPEL0(jvj+3,jvj+9)*/
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+63; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+63)*/
pile[v[22]]=V22; pile[WZ1]=858; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(V22,858,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+60; 
(*f[189])( );     /*TRI4(jvj+59,v[13],642,jvj+60)*/
pile[v[22]]=jvj+60; pile[WZ1]=3688; pile[WZ2]=246; pile[WZ3]=jvj+61; 
(*f[189])( );     /*TRI4(jvj+60,3688,246,jvj+61)*/
pile[v[22]]=jvj+61; pile[WZ1]=20229; pile[WZ2]=218; pile[WZ3]=jvj+62; 
(*f[58])( );     /*TRI3(jvj+61,20229,218,jvj+62)*/
pile[v[22]]=jvj+63; pile[WZ1]=(-20); pile[WZ2]=jvj+62; pile[WZ3]=159; pile[WZ4]=jvj+64; 
(*f[298])( );     /*TRIENS1(jvj+63,(-20),jvj+62,159,jvj+64)*/
pile[v[22]]=jvj+64; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+10; 
(*f[58])( );     /*TRI3(jvj+64,1,158,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+65; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+65)*/
pile[v[22]]=jvj+65; pile[WZ1]=111; pile[WZ2]=jvj+66; 
(*f[54])( );     /*TRI1(jvj+65,111,jvj+66)*/
pile[v[22]]=jvj+66; pile[WZ1]=jvj+9; pile[WZ2]=107; pile[WZ3]=jvj+67; 
(*f[301])( );     /*TRI11(jvj+66,jvj+9,107,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+11; 
(*f[58])( );     /*TRI3(jvj+67,22,100,jvj+11)*/
pile[v[22]]=jvj+11; pile[WZ1]=jvj+10; 
(*f[1296])( );     /*NOUVCONTR0(jvj+11,jvj+10)*/
goto l7;
l5:x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+5,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=101; pile[WZ1]=R; pile[WZ2]=110; pile[WZ3]=(-601); pile[WZ4]=jvj+46; 
(*f[270])( );     /*QUADRI7(101,R,110,(-601),jvj+46)*/
pile[v[22]]=V18; pile[WZ1]=858; pile[WZ2]=jvj+42; 
(*f[46])( );     /*TRI0(V18,858,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=v[13]; pile[WZ2]=642; pile[WZ3]=jvj+43; 
(*f[189])( );     /*TRI4(jvj+42,v[13],642,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=3688; pile[WZ2]=246; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,3688,246,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=20229; pile[WZ2]=218; pile[WZ3]=jvj+45; 
(*f[58])( );     /*TRI3(jvj+44,20229,218,jvj+45)*/
pile[v[22]]=jvj+46; pile[WZ1]=(-20); pile[WZ2]=jvj+45; pile[WZ3]=159; pile[WZ4]=jvj+47; 
(*f[298])( );     /*TRIENS1(jvj+46,(-20),jvj+45,159,jvj+47)*/
pile[v[22]]=jvj+47; pile[WZ1]=1; pile[WZ2]=158; pile[WZ3]=jvj+6; 
(*f[58])( );     /*TRI3(jvj+47,1,158,jvj+6)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=55; pile[WZ4]=jvj+48; 
(*f[181])( );     /*QUADRI2(100,20,101,55,jvj+48)*/
pile[WZ3]=25; pile[WZ4]=jvj+51; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+51)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+53; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+53)*/
pile[v[22]]=jvj+51; pile[WZ1]=111; pile[WZ2]=jvj+52; 
(*f[54])( );     /*TRI1(jvj+51,111,jvj+52)*/
pile[v[22]]=jvj+52; pile[WZ1]=jvj+53; pile[WZ2]=103; pile[WZ3]=jvj+54; 
(*f[58])( );     /*TRI3(jvj+52,jvj+53,103,jvj+54)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+54; pile[WZ5]=jvj+49; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+54,jvj+49)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+55; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+55)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=jvj+57; 
(*f[192])( );     /*QUADRI4(100,41,130,0,jvj+57)*/
pile[v[22]]=jvj+55; pile[WZ1]=111; pile[WZ2]=jvj+56; 
(*f[54])( );     /*TRI1(jvj+55,111,jvj+56)*/
pile[v[22]]=jvj+56; pile[WZ1]=jvj+57; pile[WZ2]=103; pile[WZ3]=jvj+58; 
(*f[58])( );     /*TRI3(jvj+56,jvj+57,103,jvj+58)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+58; pile[WZ5]=jvj+50; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+58,jvj+50)*/
pile[WZ2]=111; pile[WZ3]=jvj+48; pile[WZ4]=jvj+7; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+48,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=107; pile[WZ2]=jvj+49; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+49)*/
pile[WZ2]=jvj+50; 
(*f[36])( );     /*PLUSC0(jvj+7,107,jvj+50)*/
pile[WZ1]=jvj+6; 
(*f[1296])( );     /*NOUVCONTR0(jvj+7,jvj+6)*/
goto l7;
l6:V12=B*C;
V13=A*D;
V11=V12-V13;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+20; 
(*f[255])( );     /*COPEXP0(jvj+19,jvj+20)*/
pile[v[22]]=jvj+21; pile[WZ1]=jvj+22; 
(*f[255])( );     /*COPEXP0(jvj+21,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+23; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+23)*/
pile[WZ3]=486; pile[WZ4]=jvj+68; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+68)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=A; pile[WZ4]=jvj+69; 
(*f[192])( );     /*QUADRI4(100,41,130,A,jvj+69)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+68; pile[WZ4]=jvj+25; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+68,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=107; pile[WZ2]=jvj+69; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+69)*/
pile[WZ2]=jvj+20; 
(*f[36])( );     /*PLUSC0(jvj+25,107,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=C; pile[WZ4]=jvj+26; 
(*f[192])( );     /*QUADRI4(100,41,130,C,jvj+26)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+23; pile[WZ4]=jvj+24; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+23,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=107; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+25)*/
pile[WZ2]=jvj+26; 
(*f[36])( );     /*PLUSC0(jvj+24,107,jvj+26)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=485; pile[WZ4]=jvj+27; 
(*f[181])( );     /*QUADRI2(100,20,101,485,jvj+27)*/
pile[WZ3]=486; pile[WZ4]=jvj+70; 
(*f[181])( );     /*QUADRI2(100,20,101,486,jvj+70)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=A; pile[WZ4]=jvj+71; 
(*f[192])( );     /*QUADRI4(100,41,130,A,jvj+71)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+70; pile[WZ4]=jvj+29; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+70,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=107; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+71)*/
pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(jvj+29,107,jvj+22)*/
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=B; pile[WZ4]=jvj+30; 
(*f[192])( );     /*QUADRI4(100,41,130,B,jvj+30)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+27; pile[WZ4]=jvj+28; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+27,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=107; pile[WZ2]=jvj+29; 
(*f[36])( );     /*PLUSC0(jvj+28,107,jvj+29)*/
pile[WZ2]=jvj+30; 
(*f[36])( );     /*PLUSC0(jvj+28,107,jvj+30)*/
if((V11==0)) goto l5;
x[jvj+8]=vo[14];z[jvj+8]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(642,jvj+8,V22)*/
V22=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=jvj+24; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(100,jvj+24,jvj+83)*/
if((x[jvj+83]!=484)) goto l43;
x[jvj+87]=0 ;z[jvj+87]=0;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+84; 
(*f[200])( );if(v[102]) goto l33;     /*NDD0(jvj+24,jvj+84)*/
V127=abs(V11);
V125=V127;
pile[v[22]]=V125; pile[WZ1]=jvj+85; 
(*f[991])( );if(v[102]) goto l33;     /*ENSFACT0(V125,jvj+85)*/
pile[v[22]]=jvj+85; pile[WZ1]=V125; 
(*f[207])( );     /*PLUE2(jvj+85,V125)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+85,1)*/
x[jvj+91]=0 ;z[jvj+91]=0;
l29:if((x[jvj+85]>0)) goto l44;
V115=x[jvj+91];
l30:if((V115<=0)) goto l33;
V100=s[V115];
pile[v[22]]=V100; pile[WZ1]=jvj+84; pile[WZ2]=jvj+86; 
(*f[3591])( );     /*VALCOR0(V100,jvj+84,jvj+86)*/
if((x[jvj+86]==135)) goto l32;
l31:V115=t[V115];
goto l30;
l8:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+31; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+31)*/
pile[WZ3]=25; pile[WZ4]=jvj+34; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+34)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=I; pile[WZ4]=jvj+36; 
(*f[192])( );     /*QUADRI4(100,41,130,I,jvj+36)*/
pile[v[22]]=jvj+34; pile[WZ1]=111; pile[WZ2]=jvj+35; 
(*f[54])( );     /*TRI1(jvj+34,111,jvj+35)*/
pile[v[22]]=jvj+35; pile[WZ1]=jvj+36; pile[WZ2]=103; pile[WZ3]=jvj+37; 
(*f[58])( );     /*TRI3(jvj+35,jvj+36,103,jvj+37)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+24; pile[WZ4]=jvj+37; pile[WZ5]=jvj+32; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+24,jvj+37,jvj+32)*/
pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=25; pile[WZ4]=jvj+38; 
(*f[181])( );     /*QUADRI2(100,20,101,25,jvj+38)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V21; pile[WZ4]=jvj+40; 
(*f[192])( );     /*QUADRI4(100,41,130,V21,jvj+40)*/
pile[v[22]]=jvj+38; pile[WZ1]=111; pile[WZ2]=jvj+39; 
(*f[54])( );     /*TRI1(jvj+38,111,jvj+39)*/
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=103; pile[WZ3]=jvj+41; 
(*f[58])( );     /*TRI3(jvj+39,jvj+40,103,jvj+41)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+28; pile[WZ4]=jvj+41; pile[WZ5]=jvj+33; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+28,jvj+41,jvj+33)*/
pile[WZ2]=111; pile[WZ3]=jvj+31; pile[WZ4]=jvj+4; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+31,jvj+4)*/
pile[v[22]]=jvj+4; pile[WZ1]=107; pile[WZ2]=jvj+32; 
(*f[36])( );     /*PLUSC0(jvj+4,107,jvj+32)*/
pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+4,107,jvj+33)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; 
(*f[68])( );     /*PLUE0(jvj+3,jvj+4)*/
goto l4;
l9:x[jvj+21]=A=x[jvj+19]=incon;
x[jvj+104]=x[jvj+17] ;z[jvj+104]=z[jvj+17];
l10:if((x[jvj+104]>0)) goto l28;
D=0;
l11:x[jvj+101]=x[jvj+17] ;z[jvj+101]=z[jvj+17];
l12:if((x[jvj+101]<=0)) goto l26;
x[jvj+72]=s[x[jvj+101]] ;z[jvj+72]=(x[jvj+72]<=sepcte) ? x[jvj+72] : z[jvj+101];
pile[v[22]]=609; pile[WZ1]=jvj+72; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(609,jvj+72,V81)*/
V81=pile[WZ2]; 
pile[v[22]]=459; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(459,jvj+72,jvj+73)*/
pile[v[22]]=475; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(475,jvj+72,jvj+74)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; pile[WZ2]=jvj+75; 
(*f[760])( );     /*MEMEX0(jvj+73,jvj+74,jvj+75)*/
if((x[jvj+75]==134)) goto l14;
l13:x[jvj+101]=t[x[jvj+101]];
goto l12;
l14:A=V81;
x[jvj+19]=x[jvj+73] ;z[jvj+19]=z[jvj+73];
x[jvj+21]=x[jvj+74] ;z[jvj+21]=z[jvj+74];
pile[v[22]]=jvj+72; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+72,191,68)*/
x[jvj+102]=x[jvj+17] ;z[jvj+102]=z[jvj+17];
l15:if((x[jvj+102]<=0)) goto l26;
x[jvj+76]=s[x[jvj+102]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+102];
pile[v[22]]=515; pile[WZ1]=jvj+76; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(515,jvj+76,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(447,jvj+76,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+19; pile[WZ2]=jvj+78; 
(*f[760])( );     /*MEMEX0(jvj+77,jvj+19,jvj+78)*/
if((x[jvj+78]==135)) goto l17;
l16:x[jvj+102]=t[x[jvj+102]];
goto l15;
l17:B=V87;
pile[v[22]]=jvj+76; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+76,191,68)*/
l18:x[jvj+103]=x[jvj+17] ;z[jvj+103]=z[jvj+17];
l19:if((x[jvj+103]<=0)) goto l25;
x[jvj+79]=s[x[jvj+103]] ;z[jvj+79]=(x[jvj+79]<=sepcte) ? x[jvj+79] : z[jvj+103];
pile[v[22]]=515; pile[WZ1]=jvj+79; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(515,jvj+79,V91)*/
V91=pile[WZ2]; 
pile[v[22]]=447; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(447,jvj+79,jvj+80)*/
pile[v[22]]=jvj+80; pile[WZ1]=jvj+21; pile[WZ2]=jvj+81; 
(*f[760])( );     /*MEMEX0(jvj+80,jvj+21,jvj+81)*/
if((x[jvj+81]==135)) goto l21;
l20:x[jvj+103]=t[x[jvj+103]];
goto l19;
l21:C=V91;
pile[v[22]]=jvj+79; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+79,191,68)*/
l22:if(A!=incon) goto l23;
goto l7;
l23:if(x[jvj+19]!=incon) goto l24;
goto l7;
l24:if(x[jvj+21]!=incon) goto l6;
goto l7;
l26:B=0;
if(x[jvj+21]!=incon) goto l18;
l25:C=0;
goto l22;
l27:x[jvj+104]=t[x[jvj+104]];
goto l10;
l28:x[jvj+82]=s[x[jvj+104]] ;z[jvj+82]=(x[jvj+82]<=sepcte) ? x[jvj+82] : z[jvj+104];
pile[v[22]]=510; pile[WZ1]=jvj+82; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(510,jvj+82,V83)*/
V83=pile[WZ2]; 
D=V83;
pile[v[22]]=jvj+82; pile[WZ1]=191; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+82,191,68)*/
goto l11;
l32:pile[v[22]]=jvj+87; pile[WZ1]=V100; 
(*f[207])( );     /*PLUE2(jvj+87,V100)*/
goto l31;
l33:EA=x[jvj+87];
l45:pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+92; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(100,jvj+28,jvj+92)*/
if((x[jvj+92]!=484)) goto l60;
x[jvj+96]=0 ;z[jvj+96]=0;
pile[v[22]]=jvj+28; pile[WZ1]=jvj+93; 
(*f[200])( );if(v[102]) goto l50;     /*NDD0(jvj+28,jvj+93)*/
V170=abs(V11);
V168=V170;
pile[v[22]]=V168; pile[WZ1]=jvj+94; 
(*f[991])( );if(v[102]) goto l50;     /*ENSFACT0(V168,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=V168; 
(*f[207])( );     /*PLUE2(jvj+94,V168)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+94,1)*/
x[jvj+100]=0 ;z[jvj+100]=0;
l46:if((x[jvj+94]>0)) goto l61;
V158=x[jvj+100];
l47:if((V158<=0)) goto l50;
V143=s[V158];
pile[v[22]]=V143; pile[WZ1]=jvj+93; pile[WZ2]=jvj+95; 
(*f[3591])( );     /*VALCOR0(V143,jvj+93,jvj+95)*/
if((x[jvj+95]==135)) goto l49;
l48:V158=t[V158];
goto l47;
l34:EA=x[jvj+88];
goto l45;
l38:V132=s[x[jvj+90]];
V133=(-V132);
pile[v[22]]=jvj+89; pile[WZ1]=V133; 
(*f[207])( );     /*PLUE2(jvj+89,V133)*/
pile[WZ1]=V132; 
(*f[207])( );     /*PLUE2(jvj+89,V132)*/
x[jvj+90]=t[x[jvj+90]];
l37:if((x[jvj+90]>0)) goto l38;
V116=x[jvj+89];
l35:if((V116<=0)) goto l34;
V114=s[V116];
if((V114<V105)) goto l36;
if((V114>V103)) goto l36;
pile[v[22]]=jvj+88; pile[WZ1]=V114; 
(*f[207])( );     /*PLUE2(jvj+88,V114)*/
l36:V116=t[V116];
goto l35;
l40:V105=(-99999999);
l39:x[jvj+88]=0 ;z[jvj+88]=0;
V138=abs(V11);
V136=V138;
pile[v[22]]=V136; pile[WZ1]=jvj+90; 
(*f[991])( );if(v[102]) goto l34;     /*ENSFACT0(V136,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=V136; 
(*f[207])( );     /*PLUE2(jvj+90,V136)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+90,1)*/
x[jvj+89]=0 ;z[jvj+89]=0;
goto l37;
l42:V103=99999999;
l41:V105=incon;
pile[v[22]]=jvj+24; 
(*f[1161])( );if(v[102]) goto l40;     /*INF0(jvj+24,V110)*/
V110=pile[WZ1]; 
V105=V110;
goto l39;
l43:V103=incon;
pile[v[22]]=jvj+24; 
(*f[1160])( );if(v[102]) goto l42;     /*SUP0(jvj+24,V108)*/
V108=pile[WZ1]; 
V103=V108;
goto l41;
l44:V121=s[x[jvj+85]];
V122=(-V121);
pile[v[22]]=jvj+91; pile[WZ1]=V122; 
(*f[207])( );     /*PLUE2(jvj+91,V122)*/
pile[WZ1]=V121; 
(*f[207])( );     /*PLUE2(jvj+91,V121)*/
x[jvj+85]=t[x[jvj+85]];
goto l29;
l49:pile[v[22]]=jvj+96; pile[WZ1]=V143; 
(*f[207])( );     /*PLUE2(jvj+96,V143)*/
goto l48;
l50:EB=x[jvj+96];
l1:x[jvj+3]=0 ;z[jvj+3]=0;
goto l2;
l51:EB=x[jvj+97];
goto l1;
l55:V175=s[x[jvj+99]];
V176=(-V175);
pile[v[22]]=jvj+98; pile[WZ1]=V176; 
(*f[207])( );     /*PLUE2(jvj+98,V176)*/
pile[WZ1]=V175; 
(*f[207])( );     /*PLUE2(jvj+98,V175)*/
x[jvj+99]=t[x[jvj+99]];
l54:if((x[jvj+99]>0)) goto l55;
V159=x[jvj+98];
l52:if((V159<=0)) goto l51;
V157=s[V159];
if((V157<V148)) goto l53;
if((V157>V146)) goto l53;
pile[v[22]]=jvj+97; pile[WZ1]=V157; 
(*f[207])( );     /*PLUE2(jvj+97,V157)*/
l53:V159=t[V159];
goto l52;
l57:V148=(-99999999);
l56:x[jvj+97]=0 ;z[jvj+97]=0;
V181=abs(V11);
V179=V181;
pile[v[22]]=V179; pile[WZ1]=jvj+99; 
(*f[991])( );if(v[102]) goto l51;     /*ENSFACT0(V179,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=V179; 
(*f[207])( );     /*PLUE2(jvj+99,V179)*/
pile[WZ1]=1; 
(*f[207])( );     /*PLUE2(jvj+99,1)*/
x[jvj+98]=0 ;z[jvj+98]=0;
goto l54;
l59:V146=99999999;
l58:V148=incon;
pile[v[22]]=jvj+28; 
(*f[1161])( );if(v[102]) goto l57;     /*INF0(jvj+28,V153)*/
V153=pile[WZ1]; 
V148=V153;
goto l56;
l60:V146=incon;
pile[v[22]]=jvj+28; 
(*f[1160])( );if(v[102]) goto l59;     /*SUP0(jvj+28,V151)*/
V151=pile[WZ1]; 
V146=V151;
goto l58;
l61:V164=s[x[jvj+94]];
V165=(-V164);
pile[v[22]]=jvj+100; pile[WZ1]=V165; 
(*f[207])( );     /*PLUE2(jvj+100,V165)*/
pile[WZ1]=V164; 
(*f[207])( );     /*PLUE2(jvj+100,V164)*/
x[jvj+94]=t[x[jvj+94]];
goto l46;
}
