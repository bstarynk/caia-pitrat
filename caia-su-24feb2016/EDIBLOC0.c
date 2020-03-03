#include "dx.h"
void EDIBLOC0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V4=0,V17=0,V18=0,V19=0,KR=0,UR=0,F=0,V10=0,V12=0,X=0,V149=0,V148=0,V150=0,V22=0,V44=0,V160=0,V161=0,V162=0,V163=0,V61=0,V64=0,V63=0,V164=0,V165=0,V169=0,V166=0,V167=0,V168=0,V92=0,V176=0,V177=0,V178=0,V123=0,V=0,V115=0,V114=0,V124=0,A=0,V180=0,V116=0,V125=0,B=0,V183=0,V118=0,V127=0,V128=0,V122=0,V186=0,V129=0,V130=0,V187=0,V188=0,V190=0,V191=0,V131=0,V140=0,V145=0,V193=0,V110=0,ND=0,V111=0,V103=0,V102=0,V138=0,K=0,V143=0,KK=0,DX=0,V79=0,DF=0,V171=0,V170=0,V155=0,V154=0,V85=0,V174=0,V87=0,V175=0,V83=0,V172=0,V151=0,V152=0,V153=0,V35=0,V159=0,V158=0,DXX=0,V30=0,V156=0,V23=0,V215=0;
int L;
int M;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=95;
x[jvj+1]=10817;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==129&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; M=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+28]=x[jvj+32]=F=KR=UR=x[jvj+48]=x[M]=incon;
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(109,L,jvj+2)*/
l12:v[122]=1;
if(x[jvj+2]!=incon) goto l13;
l15:V17=bh[v[1]][0];
V18=bh[v[1]][1];
V19=bh[v[1]][2];
KR=V17;
UR=V18;
F=V19;
if(x[jvj+2]!=incon) goto l59;
l64:if((KR!=68)) goto l65;
if((UR==58)) goto l65;
pile[v[22]]=L; pile[WZ1]=1; pile[WZ2]=jvj+48; 
(*f[367])( );if(v[102]) goto l65;     /*DESCEND0(L,1,jvj+48)*/
l70:if(x[jvj+2]!=incon) goto l71;
l113:if((KR!=34)) goto l114;
pile[v[22]]=1; 
(*f[23])( );     /*EDITE0(1)*/
l114:if(KR!=88&&KR!=35&&KR!=43) goto l115;
pile[v[22]]=0; 
(*f[23])( );     /*EDITE0(0)*/
l115:if(UR!=incon) goto l116;
l129:if(x[jvj+48]!=incon) goto l130;
l133:if(KR==65||KR==66||KR==68||KR==69||KR==80||KR==83||KR==76||KR==81||KR==82||KR==88||KR==35||KR==46||KR==84||KR==43||KR==67||KR==73||KR==78||KR==36||KR==85||KR==75||KR==89||KR==70||KR==34||KR==86||KR==33||KR==72||KR==79||KR==124||KR==77||KR==63||KR==87||KR==90||KR==71||KR==74||KR==61||KR==92||KR==109) goto l134;
pile[v[22]]=0; pile[WZ1]=(-5606); 
(*f[37])( );     /*SRA0(0,(-5606),V151)*/
V151=pile[WZ2]; 
pile[v[22]]=V151; pile[WZ1]=KR; 
(*f[249])( );     /*SPC1(V151,KR,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=(-3412); 
(*f[37])( );     /*SRA0(V152,(-3412),V153)*/
V153=pile[WZ2]; 
pile[v[22]]=V153; 
(*f[40])( );     /*SLG0(V153)*/
l134:if((KR!=33)) goto l135;
x[jvj+84]=vo[20];z[jvj+84]=vz[20];
pile[v[22]]=415; pile[WZ1]=jvj+84; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(415,jvj+84,jvj+85)*/
pile[WZ1]=jvj+85; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(415,jvj+85,jvj+86)*/
pile[v[22]]=499; pile[WZ1]=jvj+86; 
(*f[26])( );if(v[102]) goto l135;     /*FNDC0(499,jvj+86,V35)*/
V35=pile[WZ2]; 
if((v[14]<=V35)) goto l135;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l135;     /*FNDO0(274,L,jvj+87)*/
V159=x[jvj+87];
pile[v[22]]=V35; 
(*f[375])( );     /*RESTOR0(V35)*/
pile[v[22]]=jvj+84; pile[WZ1]=415; pile[WZ2]=jvj+86; 
(*f[35])( );     /*CHGC1(jvj+84,415,jvj+86)*/
pile[v[22]]=20; pile[WZ1]=V159; pile[WZ2]=257; pile[WZ3]=0; 
(*f[390])( );     /*SDX3(20,V159,257,0,V158)*/
V158=pile[WZ4]; 
pile[v[22]]=V158; 
(*f[40])( );     /*SLG0(V158)*/
l135:if((KR!=90)) goto l136;
pile[v[22]]=1; 
(*f[112])( );     /*EAM0(1)*/
l136:if((KR!=86)) goto l139;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l139;     /*FNDO0(274,L,jvj+88)*/
x[jvj+89]=vo[20];z[jvj+89]=vz[20];
pile[v[22]]=jvj+89; pile[WZ1]=274; 
(*f[35])( );     /*CHGC1(jvj+89,274,jvj+88)*/
pile[v[22]]=1; pile[WZ1]=jvj+90; 
(*f[79])( );if(v[102]) goto l139;     /*LEXP0(1,jvj+90,DXX)*/
DXX=pile[WZ2]; 
pile[v[22]]=10169; pile[WZ1]=109; pile[WZ2]=jvj+91; 
(*f[54])( );     /*TRI1(10169,109,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ1]=jvj+90; pile[WZ3]=jvj+92; 
(*f[110])( );if(v[102]) goto l139;     /*EVL2(jvj+91,jvj+90,V30,jvj+92)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+92; pile[WZ1]=V30; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(jvj+92,V30,0,V156)*/
V156=pile[WZ3]; 
pile[v[22]]=V156; 
(*f[40])( );     /*SLG0(V156)*/
l139:if(x[M]==incon) goto l140;
l145:if(x[M]==incon) goto l146;
l148:if(x[M]!=incon) goto l149;
l147:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l9:if(V2==incon) goto l15;
if((V2!=(-99999998))) goto l10;
goto l15;
l11:x[jvj+4]=1732 ;z[jvj+4]=1732;
l14:x[jvj+3]=vo[20];z[jvj+3]=vz[20];
pile[v[22]]=V2; 
(*f[346])( );     /*LK1(V2)*/
pile[v[22]]=jvj+3; pile[WZ1]=1733; pile[WZ2]=jvj+4; 
(*f[35])( );     /*CHGC1(jvj+3,1733,jvj+4)*/
goto l15;
l13:V4=x[jvj+2];
V2=incon;
if((V4>sepbase)) goto l1;
V2=64;
l1:if((V4<=sepbase)) goto l2;
if((V4>sepnouv)) goto l2;
V2=36;
l2:if((V4<=sepfacts)) goto l3;
if((V4>sephist)) goto l3;
V2=126;
l3:if((V4<=sepcod)) goto l4;
if((V4>seppb)) goto l4;
V2=38;
l4:if((V4<=seppb)) goto l5;
if((V4>sepexp)) goto l5;
V2=(-80);
l5:if((V4<=sepexp)) goto l6;
if((V4>sepsimp)) goto l6;
V2=124;
l6:if((V4<=sephist)) goto l7;
if((V4>sepcod)) goto l7;
V2=(-75);
l7:if((V4<=sepsimp)) goto l8;
if((V4>sepcte)) goto l8;
V2=59;
l8:if((V4<=sepnouv)) goto l9;
if((V4>sepfacts)) goto l9;
V2=35;
l10:x[jvj+4]=incon;
if((V2==35)) goto l11;
x[jvj+4]=129 ;z[jvj+4]=129;
goto l14;
l16:x[jvj+5]=x[jvj+2] ;z[jvj+5]=z[jvj+2];
l17:V10=x[jvj+5];
if((V10<=sepbase)) goto l18;
pile[v[22]]=UR; pile[WZ1]=jvj+5; 
(*f[115])( );     /*SORBL0(UR,jvj+5)*/
l18:if((V12=w[x[jvj+5]][1])==incon) goto l20;
if((V12!=23)) goto l20;
if((V10>=sepbase)) goto l20;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(274,L,jvj+6)*/
pile[v[22]]=jvj+5; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(jvj+5,jvj+6,jvj+7)*/
if((x[jvj+8]=w[x[jvj+5]][2])==incon) goto l20;
l19:if((x[jvj+7]<=0)) goto l20;
X=s[x[jvj+7]];
V149=X;
pile[v[22]]=jvj+8; pile[WZ1]=V149; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(jvj+8,V149,0,V148)*/
V148=pile[WZ3]; 
pile[v[22]]=V148; 
(*f[40])( );     /*SLG0(V148)*/
x[jvj+7]=t[x[jvj+7]];
goto l19;
l20:if((x[jvj+5]!=120)) goto l114;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(274,L,jvj+9)*/
l21:pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l88;     /*FNDO0(120,jvj+9,jvj+10)*/
pile[v[22]]=jvj+10; pile[WZ1]=jvj+11; 
(*f[255])( );     /*COPEXP0(jvj+10,jvj+11)*/
pile[v[22]]=0; 
(*f[344])( );if(v[102]) goto l22;     /*XX1(0,jvj+11,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=V150; 
(*f[40])( );     /*SLG0(V150)*/
l22:x[jvj+9]=x[jvj+10] ;z[jvj+9]=z[jvj+10];
goto l21;
l24:pile[v[22]]=1; 
(*f[135])( );     /*LND3(1,V22)*/
V22=pile[WZ1]; 
l67:pile[v[22]]=V22; pile[WZ1]=L; pile[WZ2]=KR; pile[WZ3]=jvj+48; 
(*f[368])( );if(v[102]) goto l68;     /*REMONTE0(V22,L,KR,jvj+48)*/
goto l70;
l25:V22=1;
goto l67;
l27:x[jvj+14]=vo[40];z[jvj+14]=vz[40];
x[jvj+13]=x[jvj+14] ;z[jvj+13]=z[jvj+14];
l110:if(x[jvj+13]!=incon) goto l28;
l111:if((KR!=70)) goto l112;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l112;     /*FNDO0(274,L,jvj+66)*/
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=274; pile[WZ3]=jvj+66; pile[WZ4]=jvj+67; 
(*f[181])( );     /*QUADRI2(109,jvj+2,274,jvj+66,jvj+67)*/
pile[v[22]]=jvj+67; pile[WZ1]=1; 
(*f[111])( );     /*EAF0(jvj+67,1)*/
l112:if(KR!=incon) goto l113;
goto l139;
l28:if((x[jvj+13]!=250)) goto l29;
pile[v[22]]=0; pile[WZ1]=(-5683); 
(*f[37])( );     /*SRA0(0,(-5683),V160)*/
V160=pile[WZ2]; 
pile[v[22]]=V160; pile[WZ1]=(-5685); 
(*f[37])( );     /*SRA0(V160,(-5685),V161)*/
V161=pile[WZ2]; 
pile[v[22]]=V161; 
(*f[40])( );     /*SLG0(V161)*/
l29:x[jvj+15]=vo[40];z[jvj+15]=vz[40];
if((x[jvj+2]!=x[jvj+15])) goto l30;
pile[v[22]]=0; pile[WZ1]=(-5687); 
(*f[37])( );     /*SRA0(0,(-5687),V162)*/
V162=pile[WZ2]; 
pile[v[22]]=V162; pile[WZ1]=(-5598); 
(*f[37])( );     /*SRA0(V162,(-5598),V163)*/
V163=pile[WZ2]; 
pile[v[22]]=V163; 
(*f[40])( );     /*SLG0(V163)*/
l30:if((x[jvj+13]==250)) goto l111;
if((x[jvj+15]==x[jvj+2])) goto l111;
vo[40]=x[jvj+13];vz[40]=0;
pile[v[22]]=109; pile[WZ1]=jvj+13; pile[WZ2]=274; pile[WZ3]=jvj+13; pile[WZ4]=jvj+16; 
(*f[181])( );     /*QUADRI2(109,jvj+13,274,jvj+13,jvj+16)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+17; 
(*f[129])( );if(v[102]) goto l111;     /*EDIBLOC0(jvj+16,jvj+17)*/
goto l111;
l31:pile[v[22]]=0; pile[WZ1]=(-5697); 
(*f[37])( );     /*SRA0(0,(-5697),V164)*/
V164=pile[WZ2]; 
pile[v[22]]=V164; pile[WZ1]=(-5698); 
(*f[37])( );     /*SRA0(V164,(-5698),V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V165; 
(*f[40])( );     /*SLG0(V165)*/
l32:pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+24; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+24)*/
if((x[jvj+24]!=0)) goto l83;
pile[v[22]]=345; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(345,jvj+2,jvj+21)*/
pile[v[22]]=365; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(365,jvj+21,jvj+22)*/
if((x[jvj+22]!=0)) goto l83;
l33:V169=x[jvj+2];
pile[v[22]]=jvj+2; pile[WZ1]=68; 
(*f[377])( );     /*NVR0(jvj+2,68)*/
V61=x[jvj+2];
if((V61<=sepfacts)) goto l34;
if((V61>sephist)) goto l34;
V64=sephist-sepnouv;
V63=V61+V64;
x[jvj+23]=V63 ;z[jvj+23]=(V63<=sepcte) ? V63 : 0;
pile[v[22]]=jvj+23; 
(*f[377])( );     /*NVR0(jvj+23,68)*/
l34:pile[v[22]]=0; pile[WZ1]=(-5698); 
(*f[37])( );     /*SRA0(0,(-5698),V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V166,(-1318),V167)*/
V167=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V169; pile[WZ2]=V167; 
(*f[39])( );     /*SDX0(20,V169,V167,V168)*/
V168=pile[WZ3]; 
pile[v[22]]=V168; 
(*f[40])( );     /*SLG0(V168)*/
l83:if(KR!=80&&KR!=81&&KR!=82) goto l84;
if(UR==66||UR==43) goto l84;
pile[v[22]]=KR; pile[WZ1]=UR; pile[WZ2]=jvj+2; pile[WZ3]=0; 
(*f[370])( );     /*EDICOMP1(KR,UR,jvj+2,0)*/
l84:if((UR!=66)) goto l85;
if(KR!=81&&KR!=82) goto l85;
pile[v[22]]=jvj+2; pile[WZ1]=KR; pile[WZ2]=F; 
(*f[380])( );     /*COMPLETE0(jvj+2,KR,F)*/
l85:if((KR!=76)) goto l88;
if((UR!=87)) goto l86;
pile[v[22]]=983; pile[WZ1]=jvj+2; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l86;     /*FNDO0(983,jvj+2,jvj+56)*/
pile[v[22]]=4; 
(*f[135])( );     /*LND3(4,V103)*/
V103=pile[WZ1]; 
pile[v[22]]=jvj+57; 
(*f[138])( );if(v[102]) goto l86;     /*EXPPB0(jvj+57)*/
pile[v[22]]=jvj+56; pile[WZ1]=F; pile[WZ2]=jvj+57; pile[WZ3]=68; pile[WZ4]=V103; 
(*f[148])( );     /*ANAREG0(jvj+56,F,jvj+57,68,V103)*/
l86:if(UR!=85&&UR!=86) goto l87;
pile[v[22]]=4; 
(*f[135])( );     /*LND3(4,V102)*/
V102=pile[WZ1]; 
pile[v[22]]=F; pile[WZ1]=jvj+2; pile[WZ2]=UR; pile[WZ3]=V102; 
(*f[382])( );     /*ETUTILISE0(F,jvj+2,UR,V102)*/
l87:if(UR==85||UR==86||UR==87) goto l114;
x[jvj+5]=incon;
if((F==32)) goto l16;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+5; 
(*f[78])( );if(v[102]) goto l16;     /*SMA0(1,36,67,jvj+5)*/
goto l17;
l35:pile[v[22]]=184; pile[WZ1]=jvj+2; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(184,jvj+2,jvj+25)*/
l36:if((x[jvj+25]<=0)) goto l98;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=jvj+26; pile[WZ1]=jvj+27; 
(*f[378])( );     /*CPI0(jvj+26,jvj+27)*/
pile[v[22]]=jvj+28; 
(*f[68])( );     /*PLUE0(jvj+28,jvj+27)*/
x[jvj+25]=t[x[jvj+25]];
goto l36;
l37:pile[v[22]]=303; pile[WZ1]=jvj+2; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(303,jvj+2,jvj+29)*/
l38:if((x[jvj+29]<=0)) goto l101;
x[jvj+30]=s[x[jvj+29]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+29];
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; 
(*f[378])( );     /*CPI0(jvj+30,jvj+31)*/
pile[v[22]]=jvj+32; 
(*f[68])( );     /*PLUE0(jvj+32,jvj+31)*/
x[jvj+29]=t[x[jvj+29]];
goto l38;
l41:x[jvj+33]=250 ;z[jvj+33]=250;
l89:if(x[jvj+33]!=incon) goto l42;
l90:if((KR!=74)) goto l97;
if((UR!=66)) goto l92;
pile[v[22]]=2; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+58; 
(*f[78])( );if(v[102]) goto l92;     /*SMA0(2,36,67,jvj+58)*/
pile[v[22]]=184; pile[WZ1]=jvj+58; pile[WZ2]=jvj+59; 
(*f[33])( );     /*FNDE0(184,jvj+58,jvj+59)*/
l91:if((x[jvj+59]<=0)) goto l92;
x[jvj+60]=s[x[jvj+59]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+59];
pile[v[22]]=jvj+60; pile[WZ1]=jvj+61; 
(*f[255])( );     /*COPEXP0(jvj+60,jvj+61)*/
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+61; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+61)*/
x[jvj+59]=t[x[jvj+59]];
goto l91;
l42:if((x[jvj+33]==250)) goto l43;
s[x[jvj+33]]=68;
l43:if((x[jvj+33]!=250)) goto l90;
pile[v[22]]=20; pile[WZ1]=10817; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10817,0,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=V176; pile[WZ1]=(-5812); 
(*f[37])( );     /*SRA0(V176,(-5812),V177)*/
V177=pile[WZ2]; 
pile[v[22]]=V177; pile[WZ1]=(-5814); 
(*f[37])( );     /*SRA0(V177,(-5814),V178)*/
V178=pile[WZ2]; 
pile[v[22]]=V178; 
(*f[40])( );     /*SLG0(V178)*/
goto l90;
l44:V114=V115;
l45:V116=incon;
pile[v[22]]=737; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l46;     /*FNDC0(737,jvj+34,V124)*/
V124=pile[WZ2]; 
A=V124;
pile[v[22]]=135; pile[WZ1]=V114; pile[WZ2]=737; 
(*f[42])( );     /*SRA1(135,V114,737,V180)*/
V180=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V180; 
(*f[39])( );     /*SDX0(41,A,V180,V116)*/
V116=pile[WZ3]; 
l47:V118=incon;
pile[v[22]]=846; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(846,jvj+34,V125)*/
V125=pile[WZ2]; 
B=V125;
pile[v[22]]=135; pile[WZ1]=V116; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V116,846,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=B; pile[WZ2]=V183; 
(*f[39])( );     /*SDX0(41,B,V183,V118)*/
V118=pile[WZ3]; 
l53:pile[v[22]]=V118; 
(*f[40])( );     /*SLG0(V118)*/
l51:x[jvj+37]=t[x[jvj+37]];
l50:if((x[jvj+37]<=0)) goto l54;
x[jvj+34]=s[x[jvj+37]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+37];
pile[v[22]]=683; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l51;     /*FNDC0(683,jvj+34,V122)*/
V122=pile[WZ2]; 
if((V122!=V111)) goto l51;
pile[v[22]]=109; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l51;     /*FNDO0(109,jvj+34,jvj+38)*/
V186=x[jvj+38];
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l49;     /*FNDC0(737,jvj+34,V127)*/
V127=pile[WZ2]; 
pile[v[22]]=jvj+35; pile[WZ1]=737; pile[WZ2]=V127; 
(*f[186])( );     /*BTC0(jvj+35,737,V127)*/
l49:pile[v[22]]=846; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l52;     /*FNDC0(846,jvj+34,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=jvj+35; pile[WZ1]=846; pile[WZ2]=V128; 
(*f[186])( );     /*BTC0(jvj+35,846,V128)*/
l52:pile[v[22]]=20; pile[WZ1]=V186; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V186,0,V115)*/
V115=pile[WZ3]; 
V114=incon;
pile[v[22]]=163; pile[WZ1]=jvj+34; 
(*f[44])( );if(v[102]) goto l44;     /*FNDC1(163,jvj+34,V123)*/
V123=pile[WZ2]; 
V=V123;
pile[v[22]]=V115; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V115,V,V114)*/
V114=pile[WZ2]; 
goto l45;
l46:V116=V114;
goto l47;
l48:V118=V116;
goto l53;
l54:pile[v[22]]=846; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l83;     /*FNDC0(846,jvj+35,V129)*/
V129=pile[WZ2]; 
pile[v[22]]=737; 
(*f[26])( );if(v[102]) goto l83;     /*FNDC0(737,jvj+35,V130)*/
V130=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=737; 
(*f[42])( );     /*SRA1(135,0,737,V187)*/
V187=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V130; pile[WZ2]=V187; 
(*f[39])( );     /*SDX0(41,V130,V187,V188)*/
V188=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V188; pile[WZ2]=846; 
(*f[42])( );     /*SRA1(135,V188,846,V190)*/
V190=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V129; pile[WZ2]=V190; 
(*f[39])( );     /*SDX0(41,V129,V190,V191)*/
V191=pile[WZ3]; 
pile[v[22]]=V191; 
(*f[40])( );     /*SLG0(V191)*/
goto l83;
l56:V131=0;
l119:if(V131!=incon) goto l120;
l121:if((KR!=89)) goto l122;
pile[v[22]]=L; pile[WZ1]=F; pile[WZ2]=UR; 
(*f[374])( );     /*EASOR1(L,F,UR)*/
l122:if((KR!=124)) goto l124;
if((F!=32)) goto l123;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+69; 
(*f[32])( );if(v[102]) goto l123;     /*FNDO0(274,L,jvj+69)*/
pile[v[22]]=jvj+69; pile[WZ1]=UR; 
(*f[376])( );     /*STRT0(jvj+69,UR)*/
l123:if((UR==45)) goto l124;
if((F==32)) goto l124;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+70; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(274,L,jvj+70)*/
pile[v[22]]=1; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+71; 
(*f[78])( );if(v[102]) goto l124;     /*SMA0(1,64,67,jvj+71)*/
pile[v[22]]=jvj+70; pile[WZ1]=UR; pile[WZ2]=jvj+71; 
(*f[384])( );     /*STRT1(jvj+70,UR,jvj+71)*/
l124:if((KR!=84)) goto l125;
if((UR!=32)) goto l125;
if((F==32)) goto l125;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+72; 
(*f[78])( );if(v[102]) goto l125;     /*SMA0(1,36,67,jvj+72)*/
pile[v[22]]=109; pile[WZ1]=jvj+72; pile[WZ2]=274; pile[WZ4]=jvj+73; 
(*f[181])( );     /*QUADRI2(109,jvj+72,274,jvj+72,jvj+73)*/
pile[v[22]]=jvj+73; pile[WZ1]=jvj+74; 
(*f[129])( );if(v[102]) goto l125;     /*EDIBLOC0(jvj+73,jvj+74)*/
l125:if(x[jvj+48]!=incon) goto l126;
l127:if((KR!=84)) goto l129;
if((UR!=48)) goto l128;
pile[v[22]]=jvj+76; 
(*f[128])( );if(v[102]) goto l128;     /*CODN0(jvj+76)*/
pile[v[22]]=109; pile[WZ1]=jvj+76; pile[WZ2]=274; pile[WZ3]=jvj+76; pile[WZ4]=jvj+77; 
(*f[181])( );     /*QUADRI2(109,jvj+76,274,jvj+76,jvj+77)*/
pile[v[22]]=jvj+77; pile[WZ1]=jvj+78; 
(*f[129])( );if(v[102]) goto l128;     /*EDIBLOC0(jvj+77,jvj+78)*/
l128:if((UR!=76)) goto l129;
x[jvj+79]=vo[20];z[jvj+79]=vz[20];
pile[v[22]]=1123; pile[WZ1]=jvj+79; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l129;     /*FNDO0(1123,jvj+79,jvj+80)*/
pile[v[22]]=109; pile[WZ1]=jvj+80; pile[WZ2]=274; pile[WZ3]=jvj+80; pile[WZ4]=jvj+81; 
(*f[181])( );     /*QUADRI2(109,jvj+80,274,jvj+80,jvj+81)*/
pile[v[22]]=jvj+81; pile[WZ1]=jvj+82; 
(*f[129])( );if(v[102]) goto l129;     /*EDIBLOC0(jvj+81,jvj+82)*/
goto l129;
l58:x[jvj+42]=s[x[jvj+94]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+94];
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[255])( );     /*COPEXP0(jvj+42,jvj+43)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+39; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+2,jvj+39,jvj+43)*/
x[jvj+94]=t[x[jvj+94]];
l57:if((x[jvj+94]>0)) goto l58;
x[jvj+95]=t[x[jvj+95]];
l93:if((x[jvj+95]<=0)) goto l94;
x[jvj+39]=s[x[jvj+95]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+95];
pile[v[22]]=jvj+39; pile[WZ1]=jvj+2; 
(*f[71])( );     /*ENLV0(jvj+39,jvj+2)*/
pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(jvj+39,jvj+40,jvj+41)*/
x[jvj+94]=x[jvj+41] ;z[jvj+94]=z[jvj+41];
goto l57;
l59:if((KR==83)) goto l60;
if((KR==73)) goto l150;
if((KR==84)) goto l62;
if((KR!=75)) goto l64;
pile[v[22]]=L; pile[WZ1]=jvj+2; pile[WZ2]=jvj+48; 
(*f[373])( );     /*EAG0(L,jvj+2,jvj+48)*/
goto l83;
l60:x[jvj+46]=vo[40];z[jvj+46]=vz[40];
if((x[jvj+46]==x[jvj+2])) goto l65;
V44=s[x[jvj+2]];
if((V44!=68)) goto l61;
pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(100,jvj+2,jvj+12)*/
if((x[jvj+12]!=854)) goto l61;
(*f[149])( );     /*REGCONTR0()*/
l61:vo[40]=250;vz[40]=0;
x[M]=x[L] ;z[M]=z[L];
v[122]=0;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l65:if(KR!=67&&KR!=78) goto l66;
if((UR==58)) goto l66;
pile[v[22]]=L; pile[WZ1]=KR; pile[WZ2]=jvj+48; 
(*f[369])( );     /*CHANGE0(L,KR,jvj+48)*/
goto l70;
l62:if(UR==32||UR==88||UR==43||UR==45||UR==76) goto l63;
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=274; pile[WZ3]=jvj+2; pile[WZ4]=jvj+49; 
(*f[181])( );     /*QUADRI2(109,jvj+2,274,jvj+2,jvj+49)*/
pile[v[22]]=jvj+49; pile[WZ1]=1; pile[WZ2]=jvj+48; 
(*f[367])( );if(v[102]) goto l63;     /*DESCEND0(jvj+49,1,jvj+48)*/
goto l83;
l63:if((UR!=32)) goto l65;
if((F!=32)) goto l65;
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=274; pile[WZ3]=jvj+2; pile[WZ4]=jvj+50; 
(*f[181])( );     /*QUADRI2(109,jvj+2,274,jvj+2,jvj+50)*/
pile[v[22]]=jvj+50; pile[WZ1]=jvj+48; 
(*f[129])( );if(v[102]) goto l65;     /*EDIBLOC0(jvj+50,jvj+48)*/
goto l83;
l66:if(KR!=85&&KR!=66) goto l68;
V22=incon;
if((KR!=85)) goto l152;
if((UR!=80)) goto l152;
V22=1000;
l152:if((UR<48)) goto l153;
if((UR>57)) goto l153;
V23=135;
l23:if((V23==135)) goto l24;
if(V22==incon) goto l25;
goto l67;
l68:if((KR!=69)) goto l69;
pile[v[22]]=L; pile[WZ1]=jvj+48; 
(*f[372])( );if(v[102]) goto l69;     /*EFFACE0(L,jvj+48)*/
goto l70;
l69:x[jvj+48]=x[L] ;z[jvj+48]=z[L];
goto l70;
l71:if((KR==36)) goto l72;
if((KR==71)) goto l151;
if((KR==61)) goto l73;
if((KR==87)) goto l74;
if((KR==87)) goto l75;
goto l83;
l72:pile[v[22]]=jvj+2; 
(*f[371])( );     /*REORD0(jvj+2)*/
s[x[jvj+2]]=68;
goto l83;
l73:pile[v[22]]=jvj+2; pile[WZ1]=UR; 
(*f[383])( );     /*TESTVAR0(jvj+2,UR)*/
goto l83;
l74:if((UR!=74)) goto l75;
pile[v[22]]=jvj+48; pile[WZ1]=jvj+2; 
(*f[386])( );     /*AJ0(jvj+48,jvj+2)*/
goto l83;
l75:if((UR==88)) goto l76;
if((UR==67)) goto l77;
if((UR==77)) goto l78;
if((UR==68)) goto l80;
if((UR==89)) goto l81;
if((UR==82)) goto l82;
if((UR!=35)) goto l83;
pile[v[22]]=365; pile[WZ1]=jvj+2; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(365,jvj+2,jvj+18)*/
if((x[jvj+18]!=0)) goto l31;
pile[v[22]]=345; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(345,jvj+2,jvj+19)*/
pile[v[22]]=365; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(365,jvj+19,jvj+20)*/
if((x[jvj+20]!=0)) goto l31;
goto l32;
l76:pile[v[22]]=jvj+2; 
(*f[304])( );     /*DETEXPLO0(jvj+2)*/
goto l83;
l77:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,jvj+2,jvj+52)*/
if((x[jvj+52]!=854)) goto l83;
pile[v[22]]=jvj+2; 
(*f[389])( );     /*NUMDCL0(jvj+2)*/
goto l83;
l78:pile[v[22]]=1051; pile[WZ1]=jvj+2; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(1051,jvj+2,jvj+53)*/
l79:if((x[jvj+53]<=0)) goto l83;
x[jvj+54]=s[x[jvj+53]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+53];
pile[v[22]]=jvj+54; 
(*f[385])( );     /*SORANORM0(jvj+54)*/
x[jvj+53]=t[x[jvj+53]];
goto l79;
l80:pile[v[22]]=3; 
(*f[135])( );     /*LND3(3,V110)*/
V110=pile[WZ1]; 
pile[v[22]]=jvj+2; pile[WZ1]=V110; pile[WZ2]=F; 
(*f[387])( );     /*QXX1(jvj+2,V110,F)*/
goto l83;
l81:pile[v[22]]=100; pile[WZ1]=jvj+2; pile[WZ2]=jvj+55; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(100,jvj+2,jvj+55)*/
if((x[jvj+55]!=854)) goto l83;
pile[v[22]]=3; 
(*f[135])( );     /*LND3(3,ND)*/
ND=pile[WZ1]; 
pile[v[22]]=jvj+2; pile[WZ1]=F; pile[WZ2]=ND; 
(*f[154])( );     /*ANATOME0(jvj+2,F,ND)*/
goto l83;
l82:pile[v[22]]=3; 
(*f[135])( );     /*LND3(3,V111)*/
V111=pile[WZ1]; 
pile[v[22]]=737; pile[WZ1]=0; pile[WZ2]=846; pile[WZ3]=0; pile[WZ4]=jvj+35; 
(*f[391])( );     /*QUADRI10(737,0,846,0,jvj+35)*/
pile[v[22]]=983; pile[WZ1]=jvj+2; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l54;     /*FNDO0(983,jvj+2,jvj+36)*/
pile[v[22]]=1001; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(1001,jvj+36,jvj+37)*/
goto l50;
l88:if((KR!=65)) goto l90;
if((UR!=43)) goto l90;
x[jvj+33]=incon;
if((F!=32)) goto l39;
V92=x[jvj+2];
if((V92>=sepcte)) goto l39;
x[jvj+33]=x[jvj+2] ;z[jvj+33]=z[jvj+2];
l39:if((F==32)) goto l40;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+33; 
(*f[78])( );if(v[102]) goto l40;     /*SMA0(1,36,67,jvj+33)*/
l40:if(x[jvj+33]==incon) goto l41;
goto l89;
l92:if((UR!=82)) goto l94;
x[jvj+95]=w[1732][8];
pile[v[22]]=2; pile[WZ1]=35; pile[WZ2]=67; pile[WZ3]=jvj+40; 
(*f[78])( );if(v[102]) goto l94;     /*SMA0(2,35,67,jvj+40)*/
goto l93;
l94:if((UR!=80)) goto l97;
pile[v[22]]=3; 
(*f[126])( );     /*LND2(3,V138,K)*/
V138=pile[WZ1]; K=pile[WZ2]; 
pile[v[22]]=K; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+44; 
(*f[78])( );if(v[102]) goto l97;     /*SMA0(K,64,67,jvj+44)*/
pile[v[22]]=146; pile[WZ1]=jvj+44; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l97;     /*FNDO0(146,jvj+44,jvj+62)*/
if((x[jvj+62]!=129)) goto l97;
V143=V138-1;
KK=1;
l95:if((KK>V143)) goto l97;
pile[v[22]]=jvj+44; pile[WZ1]=jvj+2; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(jvj+44,jvj+2,jvj+45)*/
if((x[jvj+45]<=0)) goto l96;
V140=s[x[jvj+45]];
V145=V140;
V193=V140;
pile[WZ2]=V145; 
(*f[134])( );     /*OTA0(jvj+44,jvj+2,V145)*/
pile[v[22]]=V193; pile[WZ1]=jvj+44; pile[WZ2]=jvj+2; 
(*f[235])( );     /*PLUSC2(V193,jvj+44,jvj+2)*/
l96:KK++;
goto l95;
l97:if((KR!=84)) goto l103;
if((UR!=43)) goto l100;
x[jvj+28]=0 ;z[jvj+28]=0;
if(x[jvj+28]!=incon) goto l35;
l98:if(x[jvj+28]!=incon) goto l99;
l100:if((UR!=45)) goto l103;
x[jvj+32]=0 ;z[jvj+32]=0;
if(x[jvj+32]!=incon) goto l37;
l101:if(x[jvj+32]!=incon) goto l102;
l103:if((KR!=79)) goto l104;
if((UR!=58)) goto l104;
pile[v[22]]=1; pile[WZ1]=jvj+63; 
(*f[79])( );if(v[102]) goto l104;     /*LEXP0(1,jvj+63,DX)*/
DX=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=103; pile[WZ2]=jvj+63; 
(*f[35])( );     /*CHGC1(jvj+2,103,jvj+63)*/
l104:if((KR!=68)) goto l105;
if((UR!=58)) goto l105;
pile[v[22]]=1; pile[WZ1]=jvj+64; 
(*f[79])( );if(v[102]) goto l105;     /*LEXP0(1,jvj+64,V79)*/
V79=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=102; pile[WZ2]=jvj+64; 
(*f[35])( );     /*CHGC1(jvj+2,102,jvj+64)*/
l105:if((KR!=80)) goto l106;
if((UR!=43)) goto l106;
pile[v[22]]=1; pile[WZ1]=jvj+65; 
(*f[358])( );if(v[102]) goto l106;     /*LREG0(1,jvj+65,DF)*/
DF=pile[WZ2]; 
pile[v[22]]=jvj+2; pile[WZ1]=184; pile[WZ2]=jvj+65; 
(*f[36])( );     /*PLUSC0(jvj+2,184,jvj+65)*/
(*f[365])( );     /*STK0(jvj+2)*/
l106:if((KR!=92)) goto l107;
V215=s[x[jvj+2]];
if((V215!=66)) goto l154;
pile[v[22]]=jvj+2; 
(*f[59])( );     /*LECT0(jvj+2)*/
l154:s[x[jvj+2]]=68;
pile[v[22]]=jvj+2; 
(*f[365])( );     /*STK0(jvj+2)*/
l107:if((KR!=63)) goto l108;
V171=x[jvj+2];
pile[v[22]]=20; pile[WZ1]=V171; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V171,0,V170)*/
V170=pile[WZ3]; 
pile[v[22]]=V170; 
(*f[40])( );     /*SLG0(V170)*/
l108:if(F!=incon) goto l109;
goto l111;
l99:pile[v[22]]=jvj+2; pile[WZ1]=303; pile[WZ2]=jvj+28; 
(*f[34])( );     /*CHGC0(jvj+2,303,jvj+28)*/
goto l100;
l102:pile[v[22]]=jvj+2; 
(*f[365])( );     /*STK0(jvj+2)*/
pile[WZ1]=184; pile[WZ2]=jvj+32; 
(*f[34])( );     /*CHGC0(jvj+2,184,jvj+32)*/
goto l103;
l109:if((KR!=72)) goto l111;
x[jvj+13]=incon;
if((F==32)) goto l26;
pile[v[22]]=1; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+13; 
(*f[78])( );if(v[102]) goto l26;     /*SMA0(1,36,67,jvj+13)*/
l26:if(x[jvj+13]==incon) goto l27;
goto l110;
l116:if(F!=incon) goto l117;
goto l125;
l117:if((KR!=80)) goto l118;
if((UR!=66)) goto l118;
pile[v[22]]=2; pile[WZ1]=64; pile[WZ2]=67; pile[WZ3]=jvj+68; 
(*f[78])( );if(v[102]) goto l118;     /*SMA0(2,64,67,jvj+68)*/
pile[v[22]]=KR; pile[WZ1]=jvj+68; pile[WZ2]=UR; pile[WZ3]=F; 
(*f[379])( );     /*EDIPB1(KR,jvj+68,UR,F)*/
l118:if(KR!=77&&KR!=109) goto l121;
if(UR!=74&&UR!=106) goto l121;
V131=incon;
if((F!=61)) goto l55;
V131=1;
l55:if(V131==incon) goto l56;
goto l119;
l120:v[62]=V131;
goto l121;
l126:if(KR!=85&&KR!=66&&KR!=68&&KR!=69&&KR!=78&&KR!=67&&KR!=75&&KR!=84) goto l127;
if((UR==58)) goto l127;
pile[v[22]]=274; pile[WZ1]=jvj+48; pile[WZ2]=jvj+75; 
(*f[32])( );if(v[102]) goto l127;     /*FNDO0(274,jvj+48,jvj+75)*/
V155=x[jvj+75];
pile[v[22]]=20; pile[WZ1]=V155; pile[WZ2]=257; pile[WZ3]=0; 
(*f[390])( );     /*SDX3(20,V155,257,0,V154)*/
V154=pile[WZ4]; 
pile[v[22]]=V154; 
(*f[40])( );     /*SLG0(V154)*/
goto l127;
l130:if(KR!=85&&KR!=66&&KR!=68) goto l133;
pile[v[22]]=158; pile[WZ1]=jvj+48; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l133;     /*FNDO0(158,jvj+48,jvj+83)*/
if((x[jvj+83]!=89)) goto l131;
pile[v[22]]=162; 
(*f[219])( );if(v[102]) goto l131;     /*FNDC2(162,jvj+48,V85)*/
V85=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V85; 
(*f[38])( );     /*SPC0(0,V85,V174)*/
V174=pile[WZ2]; 
pile[v[22]]=V174; 
(*f[40])( );     /*SLG0(V174)*/
l131:if((x[jvj+83]!=96)) goto l132;
pile[v[22]]=163; pile[WZ1]=jvj+48; 
(*f[44])( );if(v[102]) goto l132;     /*FNDC1(163,jvj+48,V87)*/
V87=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=V87; 
(*f[37])( );     /*SRA0(0,V87,V175)*/
V175=pile[WZ2]; 
pile[v[22]]=V175; 
(*f[40])( );     /*SLG0(V175)*/
l132:if((x[jvj+83]!=41)) goto l133;
pile[v[22]]=130; pile[WZ1]=jvj+48; 
(*f[26])( );if(v[102]) goto l133;     /*FNDC0(130,jvj+48,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V83; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V83,0,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=V172; 
(*f[40])( );     /*SLG0(V172)*/
goto l133;
l137:if((KR!=75)) goto l138;
x[jvj+93]=vo[40];z[jvj+93]=vz[40];
if((x[jvj+93]==x[jvj+2])) goto l145;
l138:if((KR!=87)) goto l144;
if((UR==35)) goto l145;
l144:if(KR==83||KR==46) goto l145;
pile[v[22]]=jvj+48; pile[WZ1]=M; 
(*f[129])( );if(v[102]) goto l145;     /*EDIBLOC0(jvj+48,M)*/
goto l145;
l140:if(x[jvj+2]!=incon) goto l141;
goto l145;
l141:if(KR!=incon) goto l142;
goto l145;
l142:if(UR!=incon) goto l143;
goto l145;
l143:if(x[jvj+48]!=incon) goto l137;
goto l145;
l146:v[122]=0;
goto l148;
l149:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l150:pile[v[22]]=42; pile[WZ1]=100; pile[WZ2]=jvj+47; 
(*f[54])( );     /*TRI1(42,100,jvj+47)*/
pile[v[22]]=jvj+2; pile[WZ1]=jvj+47; pile[WZ2]=107; pile[WZ3]=jvj+48; 
(*f[366])( );if(v[102]) goto l65;     /*EDIPROD0(jvj+2,jvj+47,107,jvj+48)*/
goto l83;
l151:pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=683; pile[WZ3]=(-1); pile[WZ4]=jvj+51; 
(*f[192])( );     /*QUADRI4(109,jvj+2,683,(-1),jvj+51)*/
pile[v[22]]=jvj+51; 
(*f[381])( );     /*LISTESAT0(jvj+51)*/
goto l83;
l153:V23=134;
goto l23;
}
