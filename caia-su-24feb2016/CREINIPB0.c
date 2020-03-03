#include "dx.h"
void CREINIPB0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V11=0,V23=0,V25=0,W=0,V26=0,V2=0,V3=0,V28=0,V29=0,V18=0,V=0,V47=0,V64=0,V65=0,V93=0,V112=0,V113=0,V70=0,D2=0,DN=0,V142=0,V157=0,V158=0,V160=0,V128=0,V118=0,V189=0,V204=0,V205=0,V207=0,V175=0,V165=0,V55=0,V61=0,V32=0,V31=0,V35=0,D1=0,V36=0,DM=0,V51=0,V50=0,V99=0,V68=0,VV=0,V76=0,V78=0,V83=0,V82=0,V71=0,V75=0,V77=0,V72=0,V81=0,V80=0,V148=0,V154=0,V116=0,V119=0,V126=0,V127=0,V120=0,V132=0,V131=0,V163=0,V166=0,V173=0,V174=0,V167=0,V179=0,V178=0;
int AL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=118;
x[jvj+1]=10193;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==972&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
AL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+59]=V128=x[jvj+75]=V175=incon;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(448,AL,jvj+16)*/
l10:if((x[jvj+16]>0)) goto l11;
pile[v[22]]=448; pile[WZ1]=AL; pile[WZ2]=jvj+77; 
(*f[33])( );     /*FNDE0(448,AL,jvj+77)*/
l46:if((x[jvj+77]>0)) goto l47;
l52:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+108]=t[x[jvj+108]];
l1:if((x[jvj+108]<=0)) goto l12;
x[jvj+5]=s[x[jvj+108]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+108];
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(100,jvj+5,jvj+6)*/
if((x[jvj+6]!=284)) goto l2;
pile[v[22]]=111; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(111,jvj+5,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+7,V11)*/
V11=pile[WZ2]; 
if((V!=V11)) goto l2;
pile[v[22]]=100; pile[WZ1]=jvj+5; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+5,jvj+21)*/
if((x[jvj+21]!=284)) goto l12;
pile[v[22]]=102; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(102,jvj+8,jvj+9)*/
l12:x[jvj+16]=t[x[jvj+16]];
goto l10;
l4:x[jvj+109]=t[x[jvj+109]];
l3:if((x[jvj+109]<=0)) goto l5;
x[jvj+12]=s[x[jvj+109]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+109];
pile[v[22]]=140; pile[WZ1]=jvj+12; 
(*f[44])( );if(v[102]) goto l4;     /*FNDC1(140,jvj+12,V23)*/
V23=pile[WZ2]; 
if((V23!=W)) goto l4;
pile[v[22]]=130; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(130,jvj+12,V26)*/
V26=pile[WZ2]; 
V2=V26;
l6:pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(128,AL,jvj+14)*/
x[jvj+110]=x[jvj+14] ;z[jvj+110]=z[jvj+14];
l7:if((x[jvj+110]>0)) goto l8;
pile[v[22]]=(-200); pile[WZ1]=416; pile[WZ2]=jvj+106; 
(*f[46])( );     /*TRI0((-200),416,jvj+106)*/
pile[v[22]]=jvj+106; pile[WZ1]=41; pile[WZ2]=158; pile[WZ3]=jvj+107; 
(*f[58])( );     /*TRI3(jvj+106,41,158,jvj+107)*/
pile[v[22]]=130; pile[WZ1]=V2; pile[WZ2]=140; pile[WZ3]=V; pile[WZ4]=jvj+107; pile[WZ5]=jvj+22; 
(*f[197])( );     /*QUADRI5(130,V2,140,V,jvj+107,jvj+22)*/
pile[v[22]]=AL; pile[WZ1]=128; pile[WZ2]=jvj+22; 
(*f[36])( );     /*PLUSC0(AL,128,jvj+22)*/
goto l12;
l5:pile[v[22]]=0; pile[WZ1]=jvj+5; 
(*f[1012])( );if(v[102]) goto l12;     /*EXECUTION0(0,jvj+5,V3)*/
V3=pile[WZ2]; 
V2=V3;
goto l6;
l8:x[jvj+15]=s[x[jvj+110]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+110];
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l9;     /*FNDC1(140,jvj+15,V28)*/
V28=pile[WZ2]; 
if((V28!=V)) goto l9;
V29=x[jvj+15];
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=V29; 
(*f[134])( );     /*OTA0(128,AL,V29)*/
l9:x[jvj+110]=t[x[jvj+110]];
goto l7;
l11:x[jvj+8]=s[x[jvj+16]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+16];
pile[v[22]]=100; pile[WZ1]=jvj+8; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(100,jvj+8,jvj+17)*/
if((x[jvj+17]!=448)) goto l12;
pile[v[22]]=436; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(436,jvj+8,jvj+18)*/
pile[v[22]]=140; pile[WZ1]=jvj+18; 
(*f[44])( );if(v[102]) goto l12;     /*FNDC1(140,jvj+18,V18)*/
V18=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+8; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+8,jvj+19)*/
pile[v[22]]=101; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+19,jvj+20)*/
if((x[jvj+20]!=451)) goto l12;
V=V18;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(498,jvj+2,jvj+3)*/
pile[v[22]]=284; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(284,jvj+3,jvj+4)*/
x[jvj+108]=x[jvj+4] ;z[jvj+108]=z[jvj+4];
goto l1;
l13:pile[v[22]]=102; pile[WZ1]=jvj+5; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(102,jvj+5,jvj+13)*/
V2=incon;
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+13,V25)*/
V25=pile[WZ2]; 
W=V25;
x[jvj+10]=vo[16];z[jvj+10]=vz[16];
pile[v[22]]=128; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(128,jvj+10,jvj+11)*/
x[jvj+109]=x[jvj+11] ;z[jvj+109]=z[jvj+11];
goto l3;
l15:x[jvj+111]=t[x[jvj+111]];
l14:if((x[jvj+111]<=0)) goto l50;
x[jvj+26]=s[x[jvj+111]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+111];
pile[v[22]]=100; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+26,jvj+27)*/
if((x[jvj+27]!=284)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+26,jvj+28)*/
pile[v[22]]=100; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(100,jvj+28,jvj+29)*/
if((x[jvj+29]!=531)) goto l15;
pile[v[22]]=111; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(111,jvj+28,jvj+30)*/
pile[v[22]]=140; pile[WZ1]=jvj+30; 
(*f[44])( );if(v[102]) goto l15;     /*FNDC1(140,jvj+30,V47)*/
V47=pile[WZ2]; 
if((V32!=V47)) goto l15;
V31=V55;
pile[v[22]]=V31; pile[WZ1]=AL; 
(*f[458])( );if(v[102]) goto l50;     /*ELTMIN0(V31,AL,V35)*/
V35=pile[WZ2]; 
D1=V35;
pile[v[22]]=AL; pile[WZ1]=V31; 
(*f[1342])( );if(v[102]) goto l50;     /*ELTMAX0(AL,V31,V36)*/
V36=pile[WZ2]; 
DM=V36;
V51=DM-D1;
V50=V51+1;
pile[v[22]]=D1; pile[WZ1]=951; pile[WZ2]=jvj+90; 
(*f[46])( );     /*TRI0(D1,951,jvj+90)*/
pile[v[22]]=jvj+90; pile[WZ1]=V50; pile[WZ2]=667; pile[WZ3]=jvj+91; 
(*f[189])( );     /*TRI4(jvj+90,V50,667,jvj+91)*/
pile[v[22]]=jvj+91; pile[WZ2]=510; pile[WZ3]=jvj+92; 
(*f[189])( );     /*TRI4(jvj+91,V50,510,jvj+92)*/
pile[v[22]]=jvj+92; pile[WZ1]=0; pile[WZ2]=416; pile[WZ3]=jvj+93; 
(*f[189])( );     /*TRI4(jvj+92,0,416,jvj+93)*/
pile[v[22]]=jvj+93; pile[WZ1]=531; pile[WZ2]=158; pile[WZ3]=jvj+94; 
(*f[58])( );     /*TRI3(jvj+93,531,158,jvj+94)*/
pile[v[22]]=117; pile[WZ1]=D1; pile[WZ2]=140; pile[WZ3]=V32; pile[WZ4]=jvj+94; pile[WZ5]=jvj+84; 
(*f[197])( );     /*QUADRI5(117,D1,140,V32,jvj+94,jvj+84)*/
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(128,AL,jvj+31)*/
x[jvj+112]=x[jvj+31] ;z[jvj+112]=z[jvj+31];
l16:if((x[jvj+112]>0)) goto l17;
pile[v[22]]=D1; pile[WZ1]=jvj+84; pile[WZ2]=101; pile[WZ3]=jvj+26; pile[WZ4]=DM; pile[WZ5]=41; pile[v[22]+6]=(-1); 
(*f[1343])( );     /*CRELIS0(D1,jvj+84,101,jvj+26,DM,41,(-1))*/
pile[v[22]]=AL; pile[WZ1]=128; pile[WZ2]=jvj+84; 
(*f[36])( );     /*PLUSC0(AL,128,jvj+84)*/
l50:pile[v[22]]=102; pile[WZ1]=jvj+78; pile[WZ2]=jvj+86; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(102,jvj+78,jvj+86)*/
pile[v[22]]=140; pile[WZ1]=jvj+86; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+86,V148)*/
V148=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+78; pile[WZ2]=jvj+87; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(436,jvj+78,jvj+87)*/
pile[v[22]]=140; pile[WZ1]=jvj+87; 
(*f[44])( );if(v[102]) goto l48;     /*FNDC1(140,jvj+87,V154)*/
V154=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+88; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(111,jvj+78,jvj+88)*/
pile[v[22]]=101; pile[WZ1]=jvj+88; pile[WZ2]=jvj+89; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(101,jvj+88,jvj+89)*/
if((x[jvj+89]==979)) goto l51;
if((x[jvj+89]!=1027)) goto l48;
V163=V154;
x[jvj+61]=vo[16];z[jvj+61]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+61; pile[WZ2]=jvj+62; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(498,jvj+61,jvj+62)*/
pile[v[22]]=284; pile[WZ1]=jvj+62; pile[WZ2]=jvj+63; 
(*f[33])( );     /*FNDE0(284,jvj+62,jvj+63)*/
x[jvj+117]=x[jvj+63] ;z[jvj+117]=z[jvj+63];
l35:if((x[jvj+117]<=0)) goto l48;
x[jvj+64]=s[x[jvj+117]] ;z[jvj+64]=(x[jvj+64]<=sepcte) ? x[jvj+64] : z[jvj+117];
pile[v[22]]=100; pile[WZ1]=jvj+64; pile[WZ2]=jvj+65; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+64,jvj+65)*/
if((x[jvj+65]!=284)) goto l36;
pile[v[22]]=111; pile[WZ2]=jvj+66; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+64,jvj+66)*/
pile[v[22]]=100; pile[WZ1]=jvj+66; pile[WZ2]=jvj+67; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+66,jvj+67)*/
if((x[jvj+67]!=1027)) goto l36;
pile[v[22]]=111; pile[WZ2]=jvj+68; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,jvj+66,jvj+68)*/
pile[v[22]]=140; pile[WZ1]=jvj+68; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(140,jvj+68,V189)*/
V189=pile[WZ2]; 
if((V163!=V189)) goto l36;
V166=V148;
pile[v[22]]=V166; pile[WZ1]=AL; 
(*f[458])( );if(v[102]) goto l48;     /*ELTMIN0(V166,AL,V173)*/
V173=pile[WZ2]; 
V165=V173;
pile[v[22]]=AL; pile[WZ1]=V166; 
(*f[1342])( );if(v[102]) goto l48;     /*ELTMAX0(AL,V166,V174)*/
V174=pile[WZ2]; 
V167=V174;
V179=V167-V165;
V178=V179+1;
pile[v[22]]=V165; pile[WZ1]=951; pile[WZ2]=jvj+103; 
(*f[46])( );     /*TRI0(V165,951,jvj+103)*/
pile[v[22]]=jvj+103; pile[WZ1]=V178; pile[WZ2]=510; pile[WZ3]=jvj+104; 
(*f[189])( );     /*TRI4(jvj+103,V178,510,jvj+104)*/
pile[v[22]]=jvj+104; pile[WZ1]=0; pile[WZ2]=416; pile[WZ3]=jvj+105; 
(*f[189])( );     /*TRI4(jvj+104,0,416,jvj+105)*/
pile[v[22]]=140; pile[WZ1]=V163; pile[WZ2]=158; pile[WZ3]=1027; pile[WZ4]=jvj+105; pile[WZ5]=jvj+76; 
(*f[48])( );     /*QUADRI1(140,V163,158,1027,jvj+105,jvj+76)*/
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=jvj+69; 
(*f[33])( );     /*FNDE0(128,AL,jvj+69)*/
x[jvj+118]=x[jvj+69] ;z[jvj+118]=z[jvj+69];
l37:if((x[jvj+118]<=0)) goto l44;
x[jvj+70]=s[x[jvj+118]] ;z[jvj+70]=(x[jvj+70]<=sepcte) ? x[jvj+70] : z[jvj+118];
pile[v[22]]=140; pile[WZ1]=jvj+70; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(140,jvj+70,V204)*/
V204=pile[WZ2]; 
if((V204!=V163)) goto l38;
V205=x[jvj+70];
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=V205; 
(*f[134])( );     /*OTA0(128,AL,V205)*/
l38:x[jvj+118]=t[x[jvj+118]];
goto l37;
l17:x[jvj+32]=s[x[jvj+112]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+112];
pile[v[22]]=140; pile[WZ1]=jvj+32; 
(*f[44])( );if(v[102]) goto l18;     /*FNDC1(140,jvj+32,V64)*/
V64=pile[WZ2]; 
if((V64!=V32)) goto l18;
V65=x[jvj+32];
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=V65; 
(*f[134])( );     /*OTA0(128,AL,V65)*/
l18:x[jvj+112]=t[x[jvj+112]];
goto l16;
l20:x[jvj+113]=t[x[jvj+113]];
l19:if((x[jvj+113]<=0)) goto l50;
x[jvj+36]=s[x[jvj+113]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+113];
pile[v[22]]=100; pile[WZ1]=jvj+36; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+36,jvj+37)*/
if((x[jvj+37]!=284)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+36,jvj+38)*/
pile[v[22]]=100; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(100,jvj+38,jvj+39)*/
if((x[jvj+39]!=453)) goto l20;
pile[v[22]]=111; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(111,jvj+38,jvj+40)*/
pile[v[22]]=140; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+40,V93)*/
V93=pile[WZ2]; 
if((V68!=V93)) goto l20;
VV=V55;
pile[v[22]]=VV; pile[WZ1]=AL; 
(*f[458])( );if(v[102]) goto l50;     /*ELTMIN0(VV,AL,V76)*/
V76=pile[WZ2]; 
D2=V76;
pile[v[22]]=AL; pile[WZ1]=VV; 
(*f[1342])( );if(v[102]) goto l50;     /*ELTMAX0(AL,VV,V78)*/
V78=pile[WZ2]; 
DN=V78;
V83=DN-D2;
V82=V83+1;
V71=V99;
pile[v[22]]=V71; pile[WZ1]=AL; 
(*f[458])( );if(v[102]) goto l50;     /*ELTMIN0(V71,AL,V75)*/
V75=pile[WZ2]; 
V70=V75;
pile[v[22]]=AL; pile[WZ1]=V71; 
(*f[1342])( );if(v[102]) goto l50;     /*ELTMAX0(AL,V71,V77)*/
V77=pile[WZ2]; 
V72=V77;
V81=V72-V70;
V80=V81+1;
pile[v[22]]=D2; pile[WZ1]=952; pile[WZ2]=jvj+95; 
(*f[46])( );     /*TRI0(D2,952,jvj+95)*/
pile[v[22]]=jvj+95; pile[WZ1]=V70; pile[WZ2]=951; pile[WZ3]=jvj+96; 
(*f[189])( );     /*TRI4(jvj+95,V70,951,jvj+96)*/
pile[v[22]]=jvj+96; pile[WZ1]=V82; pile[WZ2]=515; pile[WZ3]=jvj+97; 
(*f[189])( );     /*TRI4(jvj+96,V82,515,jvj+97)*/
pile[v[22]]=jvj+97; pile[WZ1]=V80; pile[WZ2]=510; pile[WZ3]=jvj+98; 
(*f[189])( );     /*TRI4(jvj+97,V80,510,jvj+98)*/
pile[v[22]]=jvj+98; pile[WZ1]=0; pile[WZ2]=416; pile[WZ3]=jvj+99; 
(*f[189])( );     /*TRI4(jvj+98,0,416,jvj+99)*/
pile[v[22]]=140; pile[WZ1]=V68; pile[WZ2]=158; pile[WZ3]=453; pile[WZ4]=jvj+99; pile[WZ5]=jvj+44; 
(*f[48])( );     /*QUADRI1(140,V68,158,453,jvj+99,jvj+44)*/
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(128,AL,jvj+41)*/
x[jvj+114]=x[jvj+41] ;z[jvj+114]=z[jvj+41];
l21:if((x[jvj+114]<=0)) goto l23;
x[jvj+42]=s[x[jvj+114]] ;z[jvj+42]=(x[jvj+42]<=sepcte) ? x[jvj+42] : z[jvj+114];
pile[v[22]]=140; pile[WZ1]=jvj+42; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+42,V112)*/
V112=pile[WZ2]; 
if((V112!=V68)) goto l22;
V113=x[jvj+42];
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=V113; 
(*f[134])( );     /*OTA0(128,AL,V113)*/
l22:x[jvj+114]=t[x[jvj+114]];
goto l21;
l25:x[jvj+115]=t[x[jvj+115]];
l24:if((x[jvj+115]<=0)) goto l48;
x[jvj+48]=s[x[jvj+115]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+115];
pile[v[22]]=100; pile[WZ1]=jvj+48; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+48,jvj+49)*/
if((x[jvj+49]!=284)) goto l25;
pile[v[22]]=111; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+48,jvj+50)*/
pile[v[22]]=100; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+50,jvj+51)*/
if((x[jvj+51]!=979)) goto l25;
pile[v[22]]=111; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(111,jvj+50,jvj+52)*/
pile[v[22]]=140; pile[WZ1]=jvj+52; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(140,jvj+52,V142)*/
V142=pile[WZ2]; 
if((V116!=V142)) goto l25;
V119=V148;
pile[v[22]]=V119; pile[WZ1]=AL; 
(*f[458])( );if(v[102]) goto l48;     /*ELTMIN0(V119,AL,V126)*/
V126=pile[WZ2]; 
V118=V126;
pile[v[22]]=AL; pile[WZ1]=V119; 
(*f[1342])( );if(v[102]) goto l48;     /*ELTMAX0(AL,V119,V127)*/
V127=pile[WZ2]; 
V120=V127;
V132=V120-V118;
V131=V132+1;
pile[v[22]]=V118; pile[WZ1]=951; pile[WZ2]=jvj+100; 
(*f[46])( );     /*TRI0(V118,951,jvj+100)*/
pile[v[22]]=jvj+100; pile[WZ1]=V131; pile[WZ2]=510; pile[WZ3]=jvj+101; 
(*f[189])( );     /*TRI4(jvj+100,V131,510,jvj+101)*/
pile[v[22]]=jvj+101; pile[WZ1]=0; pile[WZ2]=416; pile[WZ3]=jvj+102; 
(*f[189])( );     /*TRI4(jvj+101,0,416,jvj+102)*/
pile[v[22]]=140; pile[WZ1]=V116; pile[WZ2]=158; pile[WZ3]=979; pile[WZ4]=jvj+102; pile[WZ5]=jvj+60; 
(*f[48])( );     /*QUADRI1(140,V116,158,979,jvj+102,jvj+60)*/
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(128,AL,jvj+53)*/
x[jvj+116]=x[jvj+53] ;z[jvj+116]=z[jvj+53];
l26:if((x[jvj+116]<=0)) goto l33;
x[jvj+54]=s[x[jvj+116]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+116];
pile[v[22]]=140; pile[WZ1]=jvj+54; 
(*f[44])( );if(v[102]) goto l27;     /*FNDC1(140,jvj+54,V157)*/
V157=pile[WZ2]; 
if((V157!=V116)) goto l27;
V158=x[jvj+54];
pile[v[22]]=128; pile[WZ1]=AL; pile[WZ2]=V158; 
(*f[134])( );     /*OTA0(128,AL,V158)*/
l27:x[jvj+116]=t[x[jvj+116]];
goto l26;
l29:if(x[jvj+59]!=incon) goto l30;
l31:if(V128!=incon) goto l32;
l34:V118++;
l33:if((V118<=V120)) goto l54;
pile[v[22]]=AL; pile[WZ1]=128; pile[WZ2]=jvj+60; 
(*f[36])( );     /*PLUSC0(AL,128,jvj+60)*/
l48:x[jvj+77]=t[x[jvj+77]];
goto l46;
l30:pile[v[22]]=117; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(117,jvj+59,V160)*/
V160=pile[WZ2]; 
V128=V160;
goto l31;
l32:pile[v[22]]=jvj+55; pile[WZ1]=667; pile[WZ2]=V128; 
(*f[43])( );     /*CHGC2(jvj+55,667,V128)*/
goto l34;
l36:x[jvj+117]=t[x[jvj+117]];
goto l35;
l40:if(x[jvj+75]!=incon) goto l41;
l42:if(V175!=incon) goto l43;
l45:V165++;
l44:if((V165<=V167)) goto l55;
pile[v[22]]=AL; pile[WZ1]=128; pile[WZ2]=jvj+76; 
(*f[36])( );     /*PLUSC0(AL,128,jvj+76)*/
goto l48;
l41:pile[v[22]]=117; pile[WZ1]=jvj+75; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(117,jvj+75,V207)*/
V207=pile[WZ2]; 
V175=V207;
goto l42;
l43:pile[v[22]]=jvj+71; pile[WZ1]=667; pile[WZ2]=V175; 
(*f[43])( );     /*CHGC2(jvj+71,667,V175)*/
goto l45;
l47:x[jvj+78]=s[x[jvj+77]] ;z[jvj+78]=(x[jvj+78]<=sepcte) ? x[jvj+78] : z[jvj+77];
pile[v[22]]=100; pile[WZ1]=jvj+78; pile[WZ2]=jvj+79; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(100,jvj+78,jvj+79)*/
if((x[jvj+79]!=448)) goto l48;
pile[v[22]]=103; pile[WZ2]=jvj+80; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(103,jvj+78,jvj+80)*/
pile[v[22]]=140; pile[WZ1]=jvj+80; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+80,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=436; pile[WZ1]=jvj+78; pile[WZ2]=jvj+81; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(436,jvj+78,jvj+81)*/
pile[v[22]]=140; pile[WZ1]=jvj+81; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+81,V61)*/
V61=pile[WZ2]; 
pile[v[22]]=111; pile[WZ1]=jvj+78; pile[WZ2]=jvj+82; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+78,jvj+82)*/
pile[v[22]]=101; pile[WZ1]=jvj+82; pile[WZ2]=jvj+83; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+82,jvj+83)*/
if((x[jvj+83]==531)) goto l49;
if((x[jvj+83]!=453)) goto l50;
pile[v[22]]=102; pile[WZ1]=jvj+78; pile[WZ2]=jvj+85; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(102,jvj+78,jvj+85)*/
pile[v[22]]=140; pile[WZ1]=jvj+85; 
(*f[44])( );if(v[102]) goto l50;     /*FNDC1(140,jvj+85,V99)*/
V99=pile[WZ2]; 
V68=V61;
x[jvj+33]=vo[16];z[jvj+33]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(498,jvj+33,jvj+34)*/
pile[v[22]]=284; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(284,jvj+34,jvj+35)*/
x[jvj+113]=x[jvj+35] ;z[jvj+113]=z[jvj+35];
goto l19;
l49:V32=V61;
x[jvj+23]=vo[16];z[jvj+23]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(498,jvj+23,jvj+24)*/
pile[v[22]]=284; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(284,jvj+24,jvj+25)*/
x[jvj+111]=x[jvj+25] ;z[jvj+111]=z[jvj+25];
goto l14;
l51:V116=V154;
x[jvj+45]=vo[16];z[jvj+45]=vz[16];
pile[v[22]]=498; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l48;     /*FNDO0(498,jvj+45,jvj+46)*/
pile[v[22]]=284; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(284,jvj+46,jvj+47)*/
x[jvj+115]=x[jvj+47] ;z[jvj+115]=z[jvj+47];
goto l24;
l53:pile[v[22]]=V70; pile[WZ1]=117; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(V70,117,jvj+43)*/
pile[v[22]]=D2; pile[WZ1]=jvj+43; pile[WZ2]=355; pile[WZ3]=jvj+36; pile[WZ4]=DN; pile[WZ5]=89; pile[v[22]+6]=V70; 
(*f[1343])( );     /*CRELIS0(D2,jvj+43,355,jvj+36,DN,89,V70)*/
pile[v[22]]=jvj+44; pile[WZ1]=128; pile[WZ2]=jvj+43; 
(*f[36])( );     /*PLUSC0(jvj+44,128,jvj+43)*/
V70++;
l23:if((V70<=V72)) goto l53;
pile[v[22]]=AL; pile[WZ1]=128; pile[WZ2]=jvj+44; 
(*f[36])( );     /*PLUSC0(AL,128,jvj+44)*/
goto l50;
l54:pile[v[22]]=V118; pile[WZ1]=117; pile[WZ2]=jvj+55; 
(*f[46])( );     /*TRI0(V118,117,jvj+55)*/
pile[v[22]]=1; pile[WZ1]=jvj+55; pile[WZ2]=355; pile[WZ3]=jvj+48; pile[WZ4]=(-1); pile[WZ5]=41; pile[v[22]+6]=V118; 
(*f[1343])( );     /*CRELIS0(1,jvj+55,355,jvj+48,(-1),41,V118)*/
pile[v[22]]=jvj+60; pile[WZ1]=128; pile[WZ2]=jvj+55; 
(*f[36])( );     /*PLUSC0(jvj+60,128,jvj+55)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+59; 
(*f[46])( );     /*TRI0(0,117,jvj+59)*/
pile[v[22]]=355; pile[WZ1]=jvj+55; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(355,jvj+55,jvj+56)*/
x[jvj+58]=x[jvj+56] ;z[jvj+58]=z[jvj+56];
l28:x[jvj+57]=x[jvj+58] ;z[jvj+57]=z[jvj+58];
pile[v[22]]=jvj+59; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+59,117,1)*/
pile[v[22]]=120; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(120,jvj+57,jvj+58)*/
goto l28;
l55:pile[v[22]]=V165; pile[WZ1]=117; pile[WZ2]=jvj+71; 
(*f[46])( );     /*TRI0(V165,117,jvj+71)*/
pile[v[22]]=1; pile[WZ1]=jvj+71; pile[WZ2]=355; pile[WZ3]=jvj+64; pile[WZ4]=(-1); pile[WZ5]=89; pile[v[22]+6]=V165; 
(*f[1343])( );     /*CRELIS0(1,jvj+71,355,jvj+64,(-1),89,V165)*/
pile[v[22]]=jvj+76; pile[WZ1]=128; pile[WZ2]=jvj+71; 
(*f[36])( );     /*PLUSC0(jvj+76,128,jvj+71)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+75; 
(*f[46])( );     /*TRI0(0,117,jvj+75)*/
pile[v[22]]=355; pile[WZ1]=jvj+71; pile[WZ2]=jvj+72; 
(*f[32])( );if(v[102]) goto l41;     /*FNDO0(355,jvj+71,jvj+72)*/
x[jvj+74]=x[jvj+72] ;z[jvj+74]=z[jvj+72];
l39:x[jvj+73]=x[jvj+74] ;z[jvj+73]=z[jvj+74];
pile[v[22]]=jvj+75; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+75,117,1)*/
pile[v[22]]=120; pile[WZ1]=jvj+73; pile[WZ2]=jvj+74; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(120,jvj+73,jvj+74)*/
goto l39;
}
