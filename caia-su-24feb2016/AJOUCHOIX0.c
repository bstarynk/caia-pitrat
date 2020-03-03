#include "dx.h"
void AJOUCHOIX0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int GG=0,V2=0,V118=0,V119=0,V1=0,V124=0,V122=0,V123=0,K=0,V72=0,D=0,V73=0,V39=0,V22=0,V47=0,V50=0,V130=0,V126=0,V127=0,V129=0,V46=0,V40=0,V61=0,V54=0,V66=0,V58=0,NK=0,V13=0,NN=0,V14=0,V9=0,V31=0,V77=0,V79=0,V108=0,V106=0,V105=0;
int M;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=126;
x[jvj+1]=10533;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1317&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+3]=incon;
if((v[228]!=0)) goto l3;
V124=x[M];
pile[v[22]]=0; pile[WZ1]=2; 
(*f[178])( );     /*SPLO0(0,2,V122)*/
V122=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=10533; pile[WZ2]=V122; 
(*f[39])( );     /*SDX0(20,10533,V122,V2)*/
V2=pile[WZ3]; 
V1=incon;
pile[v[22]]=929; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(929,M,GG)*/
GG=pile[WZ2]; 
pile[v[22]]=V2; pile[WZ1]=91; 
(*f[38])( );     /*SPC0(V2,91,V118)*/
V118=pile[WZ2]; 
pile[v[22]]=V118; pile[WZ1]=GG; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V118,GG,41,V119)*/
V119=pile[WZ3]; 
pile[v[22]]=V119; pile[WZ1]=93; 
(*f[38])( );     /*SPC0(V119,93,V1)*/
V1=pile[WZ2]; 
l2:pile[v[22]]=20; pile[WZ1]=V124; pile[WZ2]=V1; 
(*f[39])( );     /*SDX0(20,V124,V1,V123)*/
V123=pile[WZ3]; 
pile[v[22]]=V123; 
(*f[40])( );     /*SLG0(V123)*/
l3:x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=865; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(865,jvj+2,jvj+3)*/
pile[v[22]]=866; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l57;     /*FNDC0(866,jvj+3,K)*/
K=pile[WZ2]; 
pile[v[22]]=277; pile[WZ1]=M; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(277,M,jvj+7)*/
if((x[jvj+7]!=480)) goto l25;
pile[v[22]]=498; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(498,M,jvj+8)*/
pile[v[22]]=1096; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(1096,jvj+8,D)*/
D=pile[WZ2]; 
V73=K+1;
pile[v[22]]=489; pile[WZ1]=M; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(489,M,jvj+4)*/
pile[v[22]]=365; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(365,M,jvj+5)*/
l4:if((x[jvj+5]<=0)) goto l37;
x[jvj+6]=s[x[jvj+5]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+5];
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l5;
pile[v[22]]=130; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+6,V72)*/
V72=pile[WZ2]; 
if((V72!=D)) goto l5;
pile[v[22]]=178; pile[WZ1]=867; pile[WZ2]=jvj+107; 
(*f[54])( );     /*TRI1(178,867,jvj+107)*/
pile[v[22]]=jvj+107; pile[WZ1]=V73; pile[WZ2]=866; pile[WZ3]=jvj+108; 
(*f[189])( );     /*TRI4(jvj+107,V73,866,jvj+108)*/
pile[v[22]]=jvj+108; pile[WZ1]=jvj+3; pile[WZ2]=498; pile[WZ3]=jvj+109; 
(*f[58])( );     /*TRI3(jvj+108,jvj+3,498,jvj+109)*/
pile[v[22]]=jvj+109; pile[WZ1]=M; pile[WZ2]=287; pile[WZ3]=jvj+110; 
(*f[58])( );     /*TRI3(jvj+109,M,287,jvj+110)*/
pile[v[22]]=80; pile[WZ1]=jvj+6; pile[WZ2]=117; pile[WZ3]=1; pile[WZ4]=jvj+110; pile[WZ5]=jvj+9; 
(*f[47])( );     /*QUADRI0(80,jvj+6,117,1,jvj+110,jvj+9)*/
pile[v[22]]=jvj+3; pile[WZ1]=226; pile[WZ2]=jvj+9; 
(*f[36])( );     /*PLUSC0(jvj+3,226,jvj+9)*/
pile[v[22]]=jvj+2; pile[WZ1]=977; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+2,977,1)*/
l37:pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,M,jvj+48)*/
pile[v[22]]=101; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+48,jvj+49)*/
if((x[jvj+49]!=55)) goto l57;
x[jvj+10]=incon;
if((v[244]<=0)) goto l6;
pile[v[22]]=M; pile[WZ1]=jvj+10; 
(*f[965])( );if(v[102]) goto l6;     /*NORM0(M,jvj+10)*/
l38:pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(111,jvj+10,jvj+50)*/
pile[v[22]]=101; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+50,jvj+51)*/
if((x[jvj+51]!=55)) goto l57;
pile[v[22]]=107; pile[WZ1]=jvj+10; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(107,jvj+10,jvj+52)*/
for(i=x[jvj+52],V31=0;i>0;i=t[i],V31++)  ;
l39:if((x[jvj+52]<=0)) goto l57;
x[jvj+22]=s[x[jvj+52]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+52];
pile[v[22]]=1338; pile[WZ1]=M; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(1338,M,jvj+21)*/
x[jvj+13]=vo[16];z[jvj+13]=vz[16];
x[jvj+16]=x[jvj+21] ;z[jvj+16]=z[jvj+21];
pile[v[22]]=509; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(509,jvj+13,jvj+14)*/
x[jvj+121]=x[jvj+14] ;z[jvj+121]=z[jvj+14];
l12:if((x[jvj+121]>0)) goto l13;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+19; 
(*f[887])( );     /*VARND0(jvj+16,jvj+19)*/
x[jvj+122]=x[jvj+19] ;z[jvj+122]=z[jvj+19];
l18:if((x[jvj+122]>0)) goto l19;
V46=g[556];
if((V46<=0)) goto l20;
V47=vg[556];
if((V47!=0)) goto l14;
if((V46<3)) goto l16;
l14:pile[v[22]]=556; pile[WZ1]=10533; pile[WZ2]=0; pile[WZ3]=(-706); pile[WZ4]=jvj+16; pile[WZ5]=jvj+18; 
(*f[232])( );     /*INTERP3(556,10533,0,(-706),jvj+16,jvj+18)*/
if((x[jvj+18]==135)) goto l15;
l20:pile[v[22]]=jvj+13; pile[WZ1]=509; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+13,509,jvj+16)*/
l11:V22=1;
l10:if((V22>V31)) goto l40;
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+11)*/
x[jvj+120]=x[jvj+11] ;z[jvj+120]=z[jvj+11];
l7:if((x[jvj+120]>0)) goto l8;
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[255])( );     /*COPEXP0(jvj+22,jvj+23)*/
V40=K+1;
x[jvj+24]=vo[14];z[jvj+24]=vz[14];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+92; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=111; pile[WZ2]=jvj+93; 
(*f[54])( );     /*TRI1(jvj+92,111,jvj+93)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-20); pile[WZ3]=107; pile[WZ4]=jvj+94; 
(*f[298])( );     /*TRIENS1(jvj+23,(-20),jvj+93,107,jvj+94)*/
pile[v[22]]=jvj+94; pile[WZ1]=22; pile[WZ2]=100; pile[WZ3]=jvj+95; 
(*f[58])( );     /*TRI3(jvj+94,22,100,jvj+95)*/
pile[v[22]]=178; pile[WZ1]=867; pile[WZ2]=jvj+96; 
(*f[54])( );     /*TRI1(178,867,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=V40; pile[WZ2]=866; pile[WZ3]=jvj+97; 
(*f[189])( );     /*TRI4(jvj+96,V40,866,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=M; pile[WZ2]=698; pile[WZ3]=jvj+98; 
(*f[58])( );     /*TRI3(jvj+97,M,698,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=jvj+22; pile[WZ2]=613; pile[WZ3]=jvj+99; 
(*f[58])( );     /*TRI3(jvj+98,jvj+22,613,jvj+99)*/
pile[v[22]]=jvj+99; pile[WZ1]=jvj+95; pile[WZ2]=576; pile[WZ3]=jvj+100; 
(*f[58])( );     /*TRI3(jvj+99,jvj+95,576,jvj+100)*/
pile[v[22]]=117; pile[WZ1]=V22; pile[WZ2]=498; pile[WZ3]=jvj+3; pile[WZ4]=jvj+100; pile[WZ5]=jvj+25; 
(*f[725])( );     /*QUADRI14(117,V22,498,jvj+3,jvj+100,jvj+25)*/
pile[v[22]]=jvj+3; pile[WZ1]=226; pile[WZ2]=jvj+25; 
(*f[36])( );     /*PLUSC0(jvj+3,226,jvj+25)*/
pile[v[22]]=jvj+24; pile[WZ1]=977; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+24,977,1)*/
l40:x[jvj+52]=t[x[jvj+52]];
goto l39;
l1:V1=V2;
goto l2;
l5:x[jvj+5]=t[x[jvj+5]];
goto l4;
l6:pile[v[22]]=M; pile[WZ1]=jvj+10; 
(*f[799])( );if(v[102]) goto l57;     /*NORME0(M,jvj+10)*/
goto l38;
l8:x[jvj+12]=s[x[jvj+120]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+120];
pile[v[22]]=117; pile[WZ1]=jvj+12; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(117,jvj+12,V39)*/
V39=pile[WZ2]; 
if((V39!=V22)) goto l9;
V22++;
goto l10;
l9:x[jvj+120]=t[x[jvj+120]];
goto l7;
l13:x[jvj+15]=s[x[jvj+121]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+121];
pile[v[22]]=jvj+15; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[760])( );     /*MEMEX0(jvj+15,jvj+16,jvj+17)*/
if((x[jvj+17]==135)) goto l11;
x[jvj+121]=t[x[jvj+121]];
goto l12;
l15:if((V46<4)) goto l16;
goto l20;
l16:pile[v[22]]=929; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(929,jvj+16,V50)*/
V50=pile[WZ2]; 
V130=x[jvj+16];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1338; 
(*f[42])( );     /*SRA1(135,0,1338,V126)*/
V126=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V50; pile[WZ2]=V126; 
(*f[39])( );     /*SDX0(41,V50,V126,V127)*/
V127=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V130; pile[WZ2]=V127; 
(*f[39])( );     /*SDX0(20,V130,V127,V129)*/
V129=pile[WZ3]; 
pile[v[22]]=V129; 
(*f[40])( );     /*SLG0(V129)*/
l17:if((V46!=2)) goto l20;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l20;
l19:x[jvj+20]=s[x[jvj+122]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+122];
pile[v[22]]=jvj+20; pile[WZ1]=509; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(jvj+20,509,jvj+16)*/
x[jvj+122]=t[x[jvj+122]];
goto l18;
l22:x[jvj+26]=t[x[jvj+26]];
l21:if((x[jvj+26]<=0)) goto l34;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=868; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(868,jvj+27,jvj+28)*/
if(x[jvj+28]!=25&&x[jvj+28]!=27&&x[jvj+28]!=28&&x[jvj+28]!=29&&x[jvj+28]!=30) goto l22;
pile[v[22]]=870; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(870,jvj+27,V61)*/
V61=pile[WZ2]; 
if((V61<2)) goto l22;
pile[v[22]]=M; 
(*f[1564])( );if(v[102]) goto l34;     /*MEDIUM0(M,NK)*/
NK=pile[WZ1]; 
pile[WZ1]=jvj+29; 
(*f[1290])( );if(v[102]) goto l37;     /*DEPEXP0(M,jvj+29)*/
pile[v[22]]=jvj+29; pile[WZ1]=jvj+30; 
(*f[255])( );     /*COPEXP0(jvj+29,jvj+30)*/
V66=K+1;
x[jvj+31]=vo[14];z[jvj+31]=vz[14];
x[jvj+32]=d[104];z[jvj+32]=0;
l24:if((x[jvj+32]<=0)) goto l37;
x[jvj+115]=s[x[jvj+32]] ;z[jvj+115]=(x[jvj+115]<=sepcte) ? x[jvj+115] : z[jvj+32];
V54=incon;
if((x[jvj+115]==30)) goto l23;
V54=2;
l62:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=jvj+115; pile[WZ4]=jvj+111; 
(*f[181])( );     /*QUADRI2(100,20,101,jvj+115,jvj+111)*/
pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=NK; pile[WZ4]=jvj+113; 
(*f[192])( );     /*QUADRI4(100,41,130,NK,jvj+113)*/
pile[v[22]]=jvj+111; pile[WZ1]=111; pile[WZ2]=jvj+112; 
(*f[54])( );     /*TRI1(jvj+111,111,jvj+112)*/
pile[v[22]]=jvj+112; pile[WZ1]=jvj+113; pile[WZ2]=103; pile[WZ3]=jvj+114; 
(*f[58])( );     /*TRI3(jvj+112,jvj+113,103,jvj+114)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+30; pile[WZ4]=jvj+114; pile[WZ5]=jvj+103; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+30,jvj+114,jvj+103)*/
pile[v[22]]=178; pile[WZ1]=867; pile[WZ2]=jvj+101; 
(*f[54])( );     /*TRI1(178,867,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=V66; pile[WZ2]=866; pile[WZ3]=jvj+102; 
(*f[189])( );     /*TRI4(jvj+101,V66,866,jvj+102)*/
pile[v[22]]=jvj+102; pile[WZ1]=jvj+103; pile[WZ2]=576; pile[WZ3]=jvj+104; 
(*f[58])( );     /*TRI3(jvj+102,jvj+103,576,jvj+104)*/
pile[v[22]]=117; pile[WZ1]=V54; pile[WZ2]=498; pile[WZ3]=jvj+3; pile[WZ4]=jvj+104; pile[WZ5]=jvj+33; 
(*f[725])( );     /*QUADRI14(117,V54,498,jvj+3,jvj+104,jvj+33)*/
pile[v[22]]=jvj+3; pile[WZ1]=226; pile[WZ2]=jvj+33; 
(*f[36])( );     /*PLUSC0(jvj+3,226,jvj+33)*/
pile[v[22]]=jvj+31; pile[WZ1]=977; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+31,977,1)*/
x[jvj+32]=t[x[jvj+32]];
goto l24;
l23:V54=1;
goto l62;
l25:pile[v[22]]=277; pile[WZ1]=M; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(277,M,jvj+34)*/
if((x[jvj+34]!=480)) goto l34;
x[jvj+35]=vo[16];z[jvj+35]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+35; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(498,jvj+35,jvj+36)*/
pile[v[22]]=1182; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(1182,jvj+36,jvj+37)*/
if((x[jvj+37]!=68)) goto l34;
pile[v[22]]=365; pile[WZ1]=M; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(365,M,jvj+38)*/
for(i=x[jvj+38],V58=0;i>0;i=t[i],V58++)  ;
if((V58<5)) goto l34;
pile[v[22]]=509; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(509,M,jvj+26)*/
goto l21;
l27:x[jvj+40]=s[x[jvj+123]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+123];
pile[v[22]]=117; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(117,jvj+40,V13)*/
V13=pile[WZ2]; 
if((V13!=NN)) goto l28;
NN++;
l29:if((NN>V9)) goto l36;
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+39)*/
x[jvj+123]=x[jvj+39] ;z[jvj+123]=z[jvj+39];
l26:if((x[jvj+123]>0)) goto l27;
V14=K+1;
pile[v[22]]=178; pile[WZ1]=867; pile[WZ2]=jvj+105; 
(*f[54])( );     /*TRI1(178,867,jvj+105)*/
pile[v[22]]=jvj+105; pile[WZ1]=V14; pile[WZ2]=866; pile[WZ3]=jvj+106; 
(*f[189])( );     /*TRI4(jvj+105,V14,866,jvj+106)*/
pile[v[22]]=117; pile[WZ1]=NN; pile[WZ2]=498; pile[WZ3]=jvj+3; pile[WZ4]=jvj+106; pile[WZ5]=jvj+42; 
(*f[725])( );     /*QUADRI14(117,NN,498,jvj+3,jvj+106,jvj+42)*/
x[jvj+41]=vo[14];z[jvj+41]=vz[14];
pile[v[22]]=jvj+3; pile[WZ1]=226; pile[WZ2]=jvj+42; 
(*f[36])( );     /*PLUSC0(jvj+3,226,jvj+42)*/
pile[v[22]]=jvj+42; pile[WZ1]=287; pile[WZ2]=jvj+43; 
(*f[35])( );     /*CHGC1(jvj+42,287,jvj+43)*/
pile[WZ1]=80; pile[WZ2]=jvj+44; 
(*f[35])( );     /*CHGC1(jvj+42,80,jvj+44)*/
pile[v[22]]=jvj+41; pile[WZ1]=977; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+41,977,1)*/
l36:x[jvj+47]=t[x[jvj+47]];
l35:if((x[jvj+47]<=0)) goto l37;
x[jvj+124]=s[x[jvj+47]] ;z[jvj+124]=(x[jvj+124]<=sepcte) ? x[jvj+124] : z[jvj+47];
for(a=x[jvj+46];a>0;a=t[a]) if(s[a]==x[jvj+124]) goto l36;
x[jvj+43]=incon;
if((x[jvj+45]==480)) goto l31;
x[jvj+43]=x[jvj+124] ;z[jvj+43]=z[jvj+124];
l32:x[jvj+44]=incon;
if((x[jvj+45]==481)) goto l33;
x[jvj+44]=x[jvj+124] ;z[jvj+44]=z[jvj+124];
l30:NN=1;
goto l29;
l28:x[jvj+123]=t[x[jvj+123]];
goto l26;
l31:x[jvj+43]=x[M] ;z[jvj+43]=z[M];
goto l32;
l33:x[jvj+44]=x[M] ;z[jvj+44]=z[M];
goto l30;
l34:pile[v[22]]=277; pile[WZ1]=M; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(277,M,jvj+45)*/
pile[v[22]]=489; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(489,M,jvj+46)*/
pile[v[22]]=365; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(365,M,jvj+47)*/
for(i=x[jvj+47],V9=0;i>0;i=t[i],V9++)  ;
goto l35;
l42:x[jvj+54]=s[x[jvj+53]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+53];
pile[v[22]]=613; pile[WZ1]=jvj+54; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(613,jvj+54,jvj+55)*/
pile[v[22]]=jvj+55; pile[WZ1]=jvj+56; 
(*f[987])( );if(v[102]) goto l43;     /*NEGEXP0(jvj+55,jvj+56)*/
x[jvj+125]=t[x[jvj+53]];
l44:if((x[jvj+125]<=0)) goto l43;
x[jvj+57]=s[x[jvj+125]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+125];
pile[v[22]]=576; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(576,jvj+57,jvj+58)*/
pile[v[22]]=613; pile[WZ2]=jvj+59; 
(*f[32])( );if(v[102]) goto l45;     /*FNDO0(613,jvj+57,jvj+59)*/
pile[v[22]]=jvj+59; pile[WZ1]=jvj+55; pile[WZ2]=jvj+60; 
(*f[1565])( );     /*INCOMPATIBLE0(jvj+59,jvj+55,jvj+60)*/
if((x[jvj+60]==134)) goto l46;
l45:x[jvj+125]=t[x[jvj+125]];
goto l44;
l43:x[jvj+53]=t[x[jvj+53]];
l41:if((x[jvj+53]>0)) goto l42;
pile[v[22]]=1189; pile[WZ1]=jvj+88; 
(*f[71])( );     /*ENLV0(1189,jvj+88)*/
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+64; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+64)*/
l48:if((x[jvj+64]<=0)) goto l60;
x[jvj+57]=s[x[jvj+64]] ;z[jvj+57]=(x[jvj+57]<=sepcte) ? x[jvj+57] : z[jvj+64];
pile[v[22]]=576; pile[WZ1]=jvj+57; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(576,jvj+57,jvj+65)*/
x[jvj+61]=x[jvj+65] ;z[jvj+61]=z[jvj+65];
x[jvj+66]=incon;
if((v[244]<=0)) goto l47;
pile[v[22]]=jvj+61; pile[WZ1]=jvj+62; 
(*f[965])( );if(v[102]) goto l47;     /*NORM0(jvj+61,jvj+62)*/
x[jvj+66]=x[jvj+62] ;z[jvj+66]=z[jvj+62];
l50:pile[v[22]]=jvj+57; pile[WZ1]=576; pile[WZ2]=jvj+66; 
(*f[35])( );     /*CHGC1(jvj+57,576,jvj+66)*/
l49:x[jvj+64]=t[x[jvj+64]];
goto l48;
l46:pile[v[22]]=jvj+58; pile[WZ1]=107; pile[WZ2]=jvj+56; 
(*f[36])( );     /*PLUSC0(jvj+58,107,jvj+56)*/
goto l45;
l47:pile[v[22]]=jvj+61; pile[WZ1]=jvj+63; 
(*f[799])( );if(v[102]) goto l49;     /*NORME0(jvj+61,jvj+63)*/
x[jvj+66]=x[jvj+63] ;z[jvj+66]=z[jvj+63];
goto l50;
l52:x[jvj+68]=s[x[jvj+67]] ;z[jvj+68]=(x[jvj+68]<=sepcte) ? x[jvj+68] : z[jvj+67];
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=48; pile[WZ4]=jvj+116; 
(*f[181])( );     /*QUADRI2(100,20,101,48,jvj+116)*/
pile[WZ1]=22; pile[WZ2]=111; pile[WZ3]=jvj+116; pile[WZ4]=jvj+69; 
(*f[181])( );     /*QUADRI2(100,22,111,jvj+116,jvj+69)*/
pile[v[22]]=jvj+68; pile[WZ1]=576; pile[WZ2]=jvj+69; 
(*f[35])( );     /*CHGC1(jvj+68,576,jvj+69)*/
x[jvj+67]=t[x[jvj+67]];
l51:if((x[jvj+67]>0)) goto l52;
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+70; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+70)*/
l53:if((x[jvj+70]<=0)) goto l61;
x[jvj+71]=s[x[jvj+70]] ;z[jvj+71]=(x[jvj+71]<=sepcte) ? x[jvj+71] : z[jvj+70];
pile[v[22]]=287; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(287,jvj+71,jvj+72)*/
pile[v[22]]=80; pile[WZ2]=jvj+73; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(80,jvj+71,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; 
(*f[1291])( );if(v[102]) goto l54;     /*CONVEXP0(jvj+73,jvj+74)*/
pile[v[22]]=jvj+74; pile[WZ1]=jvj+75; 
(*f[255])( );     /*COPEXP0(jvj+74,jvj+75)*/
x[jvj+126]=t[x[jvj+70]];
l55:if((x[jvj+126]<=0)) goto l54;
x[jvj+76]=s[x[jvj+126]] ;z[jvj+76]=(x[jvj+76]<=sepcte) ? x[jvj+76] : z[jvj+126];
pile[v[22]]=576; pile[WZ1]=jvj+76; pile[WZ2]=jvj+77; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(576,jvj+76,jvj+77)*/
pile[v[22]]=287; pile[WZ2]=jvj+78; 
(*f[32])( );if(v[102]) goto l56;     /*FNDO0(287,jvj+76,jvj+78)*/
pile[v[22]]=jvj+78; pile[WZ1]=jvj+79; 
(*f[1290])( );if(v[102]) goto l56;     /*DEPEXP0(jvj+78,jvj+79)*/
pile[v[22]]=jvj+79; pile[WZ1]=jvj+80; 
(*f[255])( );     /*COPEXP0(jvj+79,jvj+80)*/
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=26; pile[WZ4]=jvj+117; 
(*f[181])( );     /*QUADRI2(100,20,101,26,jvj+117)*/
pile[v[22]]=jvj+117; pile[WZ1]=111; pile[WZ2]=jvj+118; 
(*f[54])( );     /*TRI1(jvj+117,111,jvj+118)*/
pile[v[22]]=jvj+118; pile[WZ1]=jvj+75; pile[WZ2]=103; pile[WZ3]=jvj+119; 
(*f[58])( );     /*TRI3(jvj+118,jvj+75,103,jvj+119)*/
pile[v[22]]=100; pile[WZ1]=22; pile[WZ2]=102; pile[WZ3]=jvj+80; pile[WZ4]=jvj+119; pile[WZ5]=jvj+81; 
(*f[269])( );     /*QUADRI6(100,22,102,jvj+80,jvj+119,jvj+81)*/
pile[v[22]]=jvj+77; pile[WZ1]=107; pile[WZ2]=jvj+81; 
(*f[36])( );     /*PLUSC0(jvj+77,107,jvj+81)*/
pile[v[22]]=80; pile[WZ1]=jvj+73; pile[WZ2]=287; pile[WZ3]=jvj+72; pile[WZ4]=jvj+82; 
(*f[181])( );     /*QUADRI2(80,jvj+73,287,jvj+72,jvj+82)*/
pile[v[22]]=jvj+76; pile[WZ1]=1267; pile[WZ2]=jvj+82; 
(*f[36])( );     /*PLUSC0(jvj+76,1267,jvj+82)*/
l56:x[jvj+126]=t[x[jvj+126]];
goto l55;
l54:x[jvj+70]=t[x[jvj+70]];
goto l53;
l57:x[jvj+83]=vo[14];z[jvj+83]=vz[14];
pile[v[22]]=977; pile[WZ1]=jvj+83; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(977,jvj+83,V77)*/
V77=pile[WZ2]; 
x[jvj+84]=vo[12];z[jvj+84]=vz[12];
pile[WZ1]=jvj+84; 
(*f[26])( );if(v[102]) goto l58;     /*FNDC0(977,jvj+84,V79)*/
V79=pile[WZ2]; 
if((V77<V79)) goto l58;
pile[v[22]]=158; pile[WZ1]=977; pile[WZ2]=970; pile[WZ3]=10533; pile[WZ4]=jvj+85; 
(*f[181])( );     /*QUADRI2(158,977,970,10533,jvj+85)*/
pile[v[22]]=jvj+85; 
(*f[605])( );     /*MONITEUR0(jvj+85)*/
l58:if(x[jvj+3]!=incon) goto l59;
l61:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l59:pile[v[22]]=111; pile[WZ1]=M; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(111,M,jvj+86)*/
pile[v[22]]=101; pile[WZ1]=jvj+86; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(101,jvj+86,jvj+87)*/
if((x[jvj+87]!=55)) goto l60;
x[jvj+88]=vo[16];z[jvj+88]=vz[16];
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+53)*/
goto l41;
l60:pile[v[22]]=277; pile[WZ1]=M; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(277,M,jvj+89)*/
if((x[jvj+89]!=480)) goto l61;
pile[v[22]]=489; pile[WZ2]=jvj+90; 
(*f[33])( );     /*FNDE0(489,M,jvj+90)*/
for(i=x[jvj+90],V108=0;i>0;i=t[i],V108++)  ;
pile[v[22]]=498; pile[WZ2]=jvj+91; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(498,M,jvj+91)*/
pile[v[22]]=473; pile[WZ1]=jvj+91; 
(*f[26])( );if(v[102]) goto l61;     /*FNDC0(473,jvj+91,V106)*/
V106=pile[WZ2]; 
V105=V106-V108;
if((V105<2)) goto l61;
pile[v[22]]=226; pile[WZ1]=jvj+3; pile[WZ2]=jvj+67; 
(*f[33])( );     /*FNDE0(226,jvj+3,jvj+67)*/
goto l51;
}
