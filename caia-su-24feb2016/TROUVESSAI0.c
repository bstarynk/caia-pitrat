#include "dx.h"
void TROUVESSAI0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V9=0,V15=0,V3=0,V4=0,V5=0,V6=0,V46=0,V20=0,V44=0,V35=0,V34=0,V27=0,V40=0,V32=0,V36=0,V39=0,R=0,V62=0,V61=0,V67=0,V89=0,V74=0,V75=0,V76=0,V82=0,V83=0,V81=0,V86=0,V91=0,V113=0,V98=0,V99=0,V100=0,V106=0,V107=0,V105=0,V110=0,V115=0,V137=0,V122=0,V123=0,V124=0,V130=0,V131=0,V129=0,V134=0;
int NM,E;
int N,K;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=59;
x[jvj+1]=10892;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==950&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NM=pile[v[22]]; E=pile[v[22]+1]; N=pile[v[22]+2]; K=pile[v[22]+3]; v[22]+=4; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=x[N]=x[K]=x[jvj+18]=incon;
x[jvj+6]=vo[20];z[jvj+6]=vz[20];
pile[v[22]]=1026; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1026,jvj+6,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=860; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l10;     /*FNDO0(860,jvj+6,jvj+7)*/
x[jvj+54]=incon;
if(x[jvj+7]==924||x[jvj+7]==978) goto l4;
x[jvj+54]=x[jvj+7] ;z[jvj+54]=z[jvj+7];
l2:x[jvj+2]=x[jvj+7] ;z[jvj+2]=z[jvj+7];
l1:pile[v[22]]=120; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(120,jvj+2,jvj+3)*/
pile[v[22]]=698; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(698,jvj+3,jvj+4)*/
pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(117,jvj+4,V11)*/
V11=pile[WZ2]; 
if((V11!=V9)) goto l3;
x[jvj+5]=incon;
if(x[jvj+7]!=924&&x[jvj+7]!=978) goto l5;
pile[v[22]]=698; pile[WZ1]=jvj+3; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(698,jvj+3,jvj+5)*/
l5:if(x[jvj+5]==incon) goto l6;
l7:if(x[jvj+5]!=incon) goto l8;
l9:if(x[jvj+8]==incon) goto l10;
l16:if(x[N]==incon) goto l17;
l36:if(x[jvj+8]!=incon) goto l37;
l41:if(x[N]==incon) goto l42;
l51:if(x[N]==incon) goto l52;
l57:if(x[N]!=incon) goto l58;
l56:x[N]=x[K]=incon;
l55:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=1;return;
l3:x[jvj+2]=x[jvj+3] ;z[jvj+2]=z[jvj+3];
goto l1;
l4:x[jvj+54]=983 ;z[jvj+54]=983;
goto l2;
l6:x[jvj+5]=x[jvj+3] ;z[jvj+5]=z[jvj+3];
goto l7;
l8:V15=x[jvj+6];
x[N]=x[jvj+54] ;z[N]=z[jvj+54];
x[K]=x[jvj+5] ;z[K]=z[jvj+5];
pile[v[22]]=jvj+6; pile[WZ1]=0; pile[WZ2]=V15; pile[WZ3]=860; 
(*f[285])( );     /*ENLY0(jvj+6,0,V15,860,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=1026; 
(*f[285])( );     /*ENLY0(jvj+6,V4,V3,1026,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
goto l9;
l10:pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l16;     /*FNDC0(993,994,V46)*/
V46=pile[WZ2]; 
if((V46>=5)) goto l11;
x[jvj+8]=924 ;z[jvj+8]=924;
l11:if(x[jvj+8]==incon) goto l12;
goto l16;
l12:if((V46!=5)) goto l16;
pile[v[22]]=905; pile[WZ1]=994; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(905,994,V20)*/
V20=pile[WZ2]; 
if((V20!=(-5963))) goto l13;
pile[v[22]]=E; pile[WZ1]=jvj+8; 
(*f[1260])( );if(v[102]) goto l13;     /*ARBITRAGE0(E,jvj+8)*/
l13:if(x[jvj+8]==incon) goto l14;
goto l16;
l14:if((V20!=(-9009))) goto l16;
x[jvj+8]=924 ;z[jvj+8]=924;
goto l16;
l17:if(x[K]==incon) goto l18;
goto l36;
l18:if(x[jvj+8]!=incon) goto l19;
goto l36;
l19:if((x[jvj+8]!=1055)) goto l20;
x[jvj+57]=1055 ;z[jvj+57]=1055;
V67=1055;
V89=V67;
x[jvj+30]=x[jvj+57] ;z[jvj+30]=z[jvj+57];
l62:pile[v[22]]=120; pile[WZ1]=jvj+30; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(120,jvj+30,jvj+31)*/
pile[v[22]]=698; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(698,jvj+31,jvj+32)*/
pile[v[22]]=1104; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1104,jvj+32,jvj+33)*/
if((x[jvj+33]!=0)) goto l65;
x[jvj+35]=incon;
pile[v[22]]=970; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(970,jvj+32,jvj+34)*/
if((x[jvj+34]!=1055)) goto l67;
pile[v[22]]=1078; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l67;     /*FNDO0(1078,jvj+32,jvj+35)*/
l63:pile[v[22]]=936; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(936,jvj+35,V74)*/
V74=pile[WZ2]; 
if((V74<NM)) goto l64;
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l64;     /*FNDC0(1268,936,V75)*/
V75=pile[WZ2]; 
if(V74>((V75*11)/10)+2) goto l66;
l64:x[K]=x[jvj+32] ;z[K]=z[jvj+32];
x[N]=1055 ;z[N]=1055;
l20:if(x[N]==incon) goto l21;
goto l36;
l21:if(x[K]==incon) goto l22;
goto l36;
l22:if((x[jvj+8]!=1097)) goto l23;
pile[v[22]]=K; 
(*f[1263])( );if(v[102]) goto l23;     /*PREMNOUVPB0(K)*/
x[N]=1097 ;z[N]=1097;
l23:if(x[K]==incon) goto l24;
goto l36;
l24:if(x[N]==incon) goto l25;
goto l36;
l25:if((x[jvj+8]!=978)) goto l26;
x[jvj+58]=978 ;z[jvj+58]=978;
V91=978;
V113=V91;
x[jvj+38]=x[jvj+58] ;z[jvj+38]=z[jvj+58];
l70:pile[v[22]]=120; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(120,jvj+38,jvj+39)*/
pile[v[22]]=698; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(698,jvj+39,jvj+40)*/
pile[v[22]]=1104; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(1104,jvj+40,jvj+41)*/
if((x[jvj+41]!=0)) goto l73;
x[jvj+43]=incon;
pile[v[22]]=970; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(970,jvj+40,jvj+42)*/
if((x[jvj+42]!=1055)) goto l75;
pile[v[22]]=1078; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(1078,jvj+40,jvj+43)*/
l71:pile[v[22]]=936; pile[WZ1]=jvj+43; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(936,jvj+43,V98)*/
V98=pile[WZ2]; 
if((V98<NM)) goto l72;
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(1268,936,V99)*/
V99=pile[WZ2]; 
if(V98>((V99*11)/10)+2) goto l74;
l72:x[K]=x[jvj+40] ;z[K]=z[jvj+40];
x[N]=978 ;z[N]=978;
l26:if(x[N]==incon) goto l27;
goto l36;
l27:if(x[K]==incon) goto l28;
goto l36;
l28:if((x[jvj+8]!=1136)) goto l29;
pile[v[22]]=1136; pile[WZ1]=924; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1136,924,jvj+12)*/
if((x[jvj+12]<=0)) goto l29;
x[jvj+55]=s[x[jvj+12]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+12];
x[N]=1136 ;z[N]=1136;
x[K]=x[jvj+55] ;z[K]=z[jvj+55];
l29:if(x[N]==incon) goto l30;
goto l36;
l30:if(x[K]==incon) goto l31;
goto l36;
l31:if((x[jvj+8]!=1243)) goto l32;
pile[v[22]]=1051; pile[WZ1]=1243; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1051,1243,jvj+13)*/
if((x[jvj+13]<=0)) goto l32;
x[jvj+56]=s[x[jvj+13]] ;z[jvj+56]=(x[jvj+56]<=sepcte) ? x[jvj+56] : z[jvj+13];
V44=x[jvj+56];
x[N]=1243 ;z[N]=1243;
x[K]=x[jvj+56] ;z[K]=z[jvj+56];
pile[WZ2]=V44; 
(*f[134])( );     /*OTA0(1051,1243,V44)*/
l32:if(x[N]==incon) goto l33;
goto l36;
l33:if(x[K]==incon) goto l34;
goto l36;
l34:if((x[jvj+8]!=966)) goto l36;
pile[v[22]]=1109; pile[WZ1]=924; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1109,924,jvj+9)*/
l15:if((x[jvj+9]<=0)) goto l36;
x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=1104; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1104,jvj+10,jvj+11)*/
if((x[jvj+11]==0)) goto l35;
x[jvj+9]=t[x[jvj+9]];
goto l15;
l35:x[N]=966 ;z[N]=966;
x[K]=x[jvj+10] ;z[K]=z[jvj+10];
goto l36;
l37:if((x[jvj+8]!=924)) goto l41;
x[jvj+59]=924 ;z[jvj+59]=924;
V115=924;
V137=V115;
x[jvj+46]=x[jvj+59] ;z[jvj+46]=z[jvj+59];
l78:pile[v[22]]=120; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l84;     /*FNDO0(120,jvj+46,jvj+47)*/
pile[v[22]]=698; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l81;     /*FNDO0(698,jvj+47,jvj+48)*/
pile[v[22]]=1104; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[33])( );     /*FNDE0(1104,jvj+48,jvj+49)*/
if((x[jvj+49]!=0)) goto l81;
x[jvj+51]=incon;
pile[v[22]]=970; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(970,jvj+48,jvj+50)*/
if((x[jvj+50]!=1055)) goto l83;
pile[v[22]]=1078; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l83;     /*FNDO0(1078,jvj+48,jvj+51)*/
l79:pile[v[22]]=936; pile[WZ1]=jvj+51; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(936,jvj+51,V122)*/
V122=pile[WZ2]; 
if((V122<NM)) goto l80;
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(1268,936,V123)*/
V123=pile[WZ2]; 
if(V122>((V123*11)/10)+2) goto l82;
l80:x[jvj+18]=x[jvj+48] ;z[jvj+18]=z[jvj+48];
goto l41;
l38:pile[v[22]]=905; pile[WZ1]=26098; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(905,26098,V35)*/
V35=pile[WZ2]; 
pile[v[22]]=159; pile[WZ1]=683; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(159,683,jvj+14)*/
l39:if((x[jvj+14]<=0)) goto l47;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=905; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l40;     /*FNDC1(905,jvj+15,V34)*/
V34=pile[WZ2]; 
if((V34!=V35)) goto l40;
pile[v[22]]=1096; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(1096,jvj+15,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=924; pile[WZ1]=1161; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(924,1161,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=(-1); pile[WZ2]=1121; pile[WZ3]=jvj+24; 
(*f[189])( );     /*TRI4(jvj+23,(-1),1121,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=1178; pile[WZ2]=860; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,1178,860,jvj+25)*/
pile[v[22]]=109; pile[WZ1]=jvj+21; pile[WZ2]=683; pile[WZ3]=V39; pile[WZ4]=jvj+25; pile[WZ5]=jvj+19; 
(*f[47])( );     /*QUADRI0(109,jvj+21,683,V39,jvj+25,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=1200; 
(*f[1261])( );     /*NOUVSAUVE1(jvj+19,1200)*/
x[N]=844 ;z[N]=844;
x[K]=x[jvj+19] ;z[K]=z[jvj+19];
pile[v[22]]=163; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(163,jvj+18,V40)*/
V40=pile[WZ2]; 
pile[v[22]]=jvj+19; pile[WZ1]=163; pile[WZ2]=V40; 
(*f[177])( );     /*CHGC4(jvj+19,163,V40)*/
l46:pile[v[22]]=jvj+16; pile[WZ1]=844; pile[WZ2]=67; 
(*f[35])( );     /*CHGC1(jvj+16,844,67)*/
pile[v[22]]=jvj+19; 
(*f[1262])( );if(v[102]) goto l47;     /*AJEXP2(jvj+19,R)*/
R=pile[WZ1]; 
pile[v[22]]=R; pile[WZ1]=1104; pile[WZ2]=jvj+18; 
(*f[235])( );     /*PLUSC2(R,1104,jvj+18)*/
l47:if(x[K]==incon) goto l48;
goto l51;
l40:x[jvj+14]=t[x[jvj+14]];
goto l39;
l42:if(x[K]==incon) goto l43;
goto l47;
l43:if(x[jvj+18]!=incon) goto l44;
goto l47;
l44:V32=vv[3];
if((V32!=0)) goto l47;
pile[v[22]]=860; pile[WZ1]=jvj+18; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(860,jvj+18,jvj+20)*/
if((x[jvj+20]!=530)) goto l47;
pile[v[22]]=961; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(961,jvj+18,V27)*/
V27=pile[WZ2]; 
goto l47;
l45:pile[v[22]]=109; pile[WZ1]=jvj+18; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(109,jvj+18,jvj+21)*/
if((x[jvj+21]==26098)) goto l47;
pile[v[22]]=905; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l47;     /*FNDC1(905,jvj+21,V36)*/
V36=pile[WZ2]; 
if((V36!=(-5963))) goto l47;
pile[v[22]]=896; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(896,jvj+21,jvj+22)*/
if((x[jvj+22]!=0)) goto l47;
pile[v[22]]=109; pile[WZ1]=jvj+18; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(109,jvj+18,jvj+26)*/
pile[v[22]]=983; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l47;     /*FNDO0(983,jvj+26,jvj+27)*/
pile[v[22]]=878; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(878,jvj+27,jvj+28)*/
l60:if((x[jvj+28]<=0)) goto l47;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=163; pile[WZ1]=jvj+29; 
(*f[44])( );if(v[102]) goto l61;     /*FNDC1(163,jvj+29,V62)*/
V62=pile[WZ2]; 
pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l61;     /*FNDC1(163,jvj+18,V61)*/
V61=pile[WZ2]; 
if((V62==V61)) goto l61;
x[jvj+28]=t[x[jvj+28]];
goto l60;
l48:if(x[N]==incon) goto l49;
goto l51;
l49:if(x[jvj+18]!=incon) goto l50;
goto l51;
l50:x[K]=x[jvj+18] ;z[K]=z[jvj+18];
x[N]=983 ;z[N]=983;
goto l51;
l52:if(x[K]==incon) goto l53;
goto l57;
l53:if(x[jvj+8]!=incon) goto l54;
goto l57;
l54:if(x[jvj+8]!=924&&x[jvj+8]!=1055&&x[jvj+8]!=978&&x[jvj+8]!=1097) goto l57;
for(a=x[E];a>0;a=t[a]) if(s[a]==x[jvj+8]) goto l57;
pile[v[22]]=E; pile[WZ1]=jvj+8; 
(*f[68])( );     /*PLUE0(E,jvj+8)*/
pile[v[22]]=NM; pile[WZ1]=E; pile[WZ2]=N; pile[WZ3]=K; 
(*f[950])( );if(v[102]) goto l57;     /*TROUVESSAI0(NM,E,N,K)*/
goto l57;
l58:if(x[K]!=incon) goto l59;
goto l56;
l59:x[jvj+1]=incon; v[0]=jvj; v[22]-=4; v[102]=0;return;
l61:x[jvj+16]=x[jvj+29] ;z[jvj+16]=z[jvj+29];
pile[v[22]]=844; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(844,jvj+16,jvj+17)*/
goto l47;
l66:pile[v[22]]=905; pile[WZ1]=994; 
(*f[44])( );if(v[102]) goto l65;     /*FNDC1(905,994,V76)*/
V76=pile[WZ2]; 
if((V76==(-9009))) goto l64;
l65:x[jvj+30]=x[jvj+31] ;z[jvj+30]=z[jvj+31];
V89=V89;
goto l62;
l67:x[jvj+35]=x[jvj+32] ;z[jvj+35]=z[jvj+32];
goto l63;
l68:if((V89!=924)) goto l20;
if((v[93]!=0)) goto l20;
V82=vv[12];
V83=vv[10];
if((V82<V83)) goto l20;
pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(993,994,V81)*/
V81=pile[WZ2]; 
if((V81!=5)) goto l20;
x[jvj+36]=vo[11];z[jvj+36]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(1455,jvj+36,jvj+37)*/
if((x[jvj+37]==68)) goto l20;
l69:V86=V82+100;
(*f[1264])( );     /*TRAVAILLE0()*/
vv[10]=V86;
x[jvj+30]=924 ;z[jvj+30]=924;
V89=924;
goto l62;
l74:pile[v[22]]=905; pile[WZ1]=994; 
(*f[44])( );if(v[102]) goto l73;     /*FNDC1(905,994,V100)*/
V100=pile[WZ2]; 
if((V100==(-9009))) goto l72;
l73:x[jvj+38]=x[jvj+39] ;z[jvj+38]=z[jvj+39];
V113=V113;
goto l70;
l75:x[jvj+43]=x[jvj+40] ;z[jvj+43]=z[jvj+40];
goto l71;
l76:if((V113!=924)) goto l26;
if((v[93]!=0)) goto l26;
V106=vv[12];
V107=vv[10];
if((V106<V107)) goto l26;
pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(993,994,V105)*/
V105=pile[WZ2]; 
if((V105!=5)) goto l26;
x[jvj+44]=vo[11];z[jvj+44]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+44; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(1455,jvj+44,jvj+45)*/
if((x[jvj+45]==68)) goto l26;
l77:V110=V106+100;
(*f[1264])( );     /*TRAVAILLE0()*/
vv[10]=V110;
x[jvj+38]=924 ;z[jvj+38]=924;
V113=924;
goto l70;
l82:pile[v[22]]=905; pile[WZ1]=994; 
(*f[44])( );if(v[102]) goto l81;     /*FNDC1(905,994,V124)*/
V124=pile[WZ2]; 
if((V124==(-9009))) goto l80;
l81:x[jvj+46]=x[jvj+47] ;z[jvj+46]=z[jvj+47];
V137=V137;
goto l78;
l83:x[jvj+51]=x[jvj+48] ;z[jvj+51]=z[jvj+48];
goto l79;
l84:if((V137!=924)) goto l41;
if((v[93]!=0)) goto l41;
V130=vv[12];
V131=vv[10];
if((V130<V131)) goto l41;
pile[v[22]]=993; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(993,994,V129)*/
V129=pile[WZ2]; 
if((V129!=5)) goto l41;
x[jvj+52]=vo[11];z[jvj+52]=vz[11];
pile[v[22]]=1455; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(1455,jvj+52,jvj+53)*/
if((x[jvj+53]==68)) goto l41;
l85:V134=V130+100;
(*f[1264])( );     /*TRAVAILLE0()*/
vv[10]=V134;
x[jvj+46]=924 ;z[jvj+46]=924;
V137=924;
goto l78;
}
