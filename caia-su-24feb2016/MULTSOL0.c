#include "dx.h"
void MULTSOL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V23=0,V22=0,NK=0,V7=0,V8=0,V11=0,V17=0,V18=0,V21=0,V5=0,V4=0,V15=0,V14=0,V30=0,V25=0,V26=0,V28=0,V29=0,V41=0,V40=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V66=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V81=0,V82=0,V83=0,V84=0;
int K;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=26;
x[jvj+1]=11069;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==954&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
K=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+11]=NK=x[jvj+2]=x[jvj+5]=x[jvj+9]=incon;
pile[v[22]]=698; pile[WZ1]=K; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(698,K,jvj+2)*/
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(109,jvj+2,jvj+23)*/
pile[v[22]]=983; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(983,jvj+23,jvj+24)*/
pile[v[22]]=878; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[33])( );     /*FNDE0(878,jvj+24,jvj+25)*/
l22:if((x[jvj+25]<=0)) goto l1;
x[jvj+26]=s[x[jvj+25]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+25];
pile[v[22]]=163; pile[WZ1]=jvj+26; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(163,jvj+26,V41)*/
V41=pile[WZ2]; 
pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l23;     /*FNDC1(163,jvj+2,V40)*/
V40=pile[WZ2]; 
if((V41==V40)) goto l23;
x[jvj+25]=t[x[jvj+25]];
goto l22;
l3:if(NK!=incon) goto l4;
l20:pile[v[22]]=K; 
(*f[183])( );     /*ENLEVENATTENTE0(K)*/
l21:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l4:if(x[jvj+2]!=incon) goto l5;
goto l20;
l5:pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(510,jvj+2,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(944,jvj+11,jvj+12)*/
l6:if((x[jvj+12]<=0)) goto l10;
x[jvj+3]=s[x[jvj+12]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+12];
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(117,jvj+3,V4)*/
V4=pile[WZ2]; 
if((V4!=V5)) goto l7;
pile[v[22]]=948; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(948,jvj+3,jvj+4)*/
if((x[jvj+4]!=68)) goto l8;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(493,jvj+3,V7)*/
V7=pile[WZ2]; 
pile[v[22]]=164; pile[WZ1]=529; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(164,529,V8)*/
V8=pile[WZ2]; 
if((V7>V8)) goto l7;
l8:pile[v[22]]=1078; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l7;     /*FNDO0(1078,jvj+3,jvj+13)*/
pile[v[22]]=jvj+13; pile[WZ1]=jvj+5; 
(*f[378])( );     /*CPI0(jvj+13,jvj+5)*/
V46=x[jvj+5];
pile[v[22]]=jvj+5; pile[WZ1]=0; pile[WZ2]=V46; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+5,0,V46,117,V47,V48)*/
V47=pile[WZ4]; V48=pile[WZ5]; 
pile[WZ1]=V48; pile[WZ2]=V47; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+5,V48,V47,978,V49,V50)*/
V49=pile[WZ4]; V50=pile[WZ5]; 
pile[WZ1]=V50; pile[WZ2]=V49; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+5,V50,V49,999,V51,V52)*/
V51=pile[WZ4]; V52=pile[WZ5]; 
pile[WZ1]=V52; pile[WZ2]=V51; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+5,V52,V51,1002,V53,V54)*/
V53=pile[WZ4]; V54=pile[WZ5]; 
pile[WZ1]=V54; pile[WZ2]=V53; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+5,V54,V53,1025,V55,V56)*/
V55=pile[WZ4]; V56=pile[WZ5]; 
pile[WZ1]=V56; pile[WZ2]=V55; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+5,V56,V55,1042,V57,V58)*/
V57=pile[WZ4]; V58=pile[WZ5]; 
pile[WZ1]=V58; pile[WZ2]=V57; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+5,V58,V57,1080,V59,V60)*/
V59=pile[WZ4]; V60=pile[WZ5]; 
pile[WZ1]=V60; pile[WZ2]=V59; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+5,V60,V59,1104,V61,V62)*/
V61=pile[WZ4]; V62=pile[WZ5]; 
pile[WZ1]=V62; pile[WZ2]=V61; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+5,V62,V61,1121,V63,V64)*/
V63=pile[WZ4]; V64=pile[WZ5]; 
pile[v[22]]=948; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(948,jvj+5,jvj+6)*/
if((x[jvj+6]!=68)) goto l9;
pile[v[22]]=164; pile[WZ1]=529; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(164,529,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=1256; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+5,1256,68)*/
pile[WZ1]=529; pile[WZ2]=V11; 
(*f[43])( );     /*CHGC2(jvj+5,529,V11)*/
l9:pile[v[22]]=jvj+5; pile[WZ1]=860; pile[WZ2]=104; 
(*f[35])( );     /*CHGC1(jvj+5,860,104)*/
pile[WZ1]=1257; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+5,1257,68)*/
pile[WZ1]=1254; 
(*f[35])( );     /*CHGC1(jvj+5,1254,68)*/
pile[WZ1]=1121; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+5,1121,1)*/
pile[WZ1]=1115; pile[WZ2]=NK; 
(*f[43])( );     /*CHGC2(jvj+5,1115,NK)*/
pile[WZ1]=1161; pile[WZ2]=1055; 
(*f[35])( );     /*CHGC1(jvj+5,1161,1055)*/
(*f[554])( );     /*AJEXP1(jvj+5)*/
l10:pile[v[22]]=515; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(515,jvj+2,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=jvj+11; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(944,jvj+11,jvj+14)*/
l11:if((x[jvj+14]<=0)) goto l15;
x[jvj+7]=s[x[jvj+14]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+14];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(117,jvj+7,V14)*/
V14=pile[WZ2]; 
if((V14!=V15)) goto l12;
pile[v[22]]=948; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(948,jvj+7,jvj+8)*/
if((x[jvj+8]!=68)) goto l13;
pile[v[22]]=493; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(493,jvj+7,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=164; pile[WZ1]=529; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(164,529,V18)*/
V18=pile[WZ2]; 
if((V17>V18)) goto l12;
l13:pile[v[22]]=1078; pile[WZ1]=jvj+7; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(1078,jvj+7,jvj+15)*/
pile[v[22]]=jvj+15; pile[WZ1]=jvj+9; 
(*f[378])( );     /*CPI0(jvj+15,jvj+9)*/
V66=x[jvj+9];
pile[v[22]]=jvj+9; pile[WZ1]=0; pile[WZ2]=V66; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(jvj+9,0,V66,117,V67,V68)*/
V67=pile[WZ4]; V68=pile[WZ5]; 
pile[WZ1]=V68; pile[WZ2]=V67; pile[WZ3]=978; 
(*f[285])( );     /*ENLY0(jvj+9,V68,V67,978,V69,V70)*/
V69=pile[WZ4]; V70=pile[WZ5]; 
pile[WZ1]=V70; pile[WZ2]=V69; pile[WZ3]=999; 
(*f[285])( );     /*ENLY0(jvj+9,V70,V69,999,V71,V72)*/
V71=pile[WZ4]; V72=pile[WZ5]; 
pile[WZ1]=V72; pile[WZ2]=V71; pile[WZ3]=1002; 
(*f[285])( );     /*ENLY0(jvj+9,V72,V71,1002,V73,V74)*/
V73=pile[WZ4]; V74=pile[WZ5]; 
pile[WZ1]=V74; pile[WZ2]=V73; pile[WZ3]=1025; 
(*f[285])( );     /*ENLY0(jvj+9,V74,V73,1025,V75,V76)*/
V75=pile[WZ4]; V76=pile[WZ5]; 
pile[WZ1]=V76; pile[WZ2]=V75; pile[WZ3]=1042; 
(*f[285])( );     /*ENLY0(jvj+9,V76,V75,1042,V77,V78)*/
V77=pile[WZ4]; V78=pile[WZ5]; 
pile[WZ1]=V78; pile[WZ2]=V77; pile[WZ3]=1080; 
(*f[285])( );     /*ENLY0(jvj+9,V78,V77,1080,V79,V80)*/
V79=pile[WZ4]; V80=pile[WZ5]; 
pile[WZ1]=V80; pile[WZ2]=V79; pile[WZ3]=1104; 
(*f[285])( );     /*ENLY0(jvj+9,V80,V79,1104,V81,V82)*/
V81=pile[WZ4]; V82=pile[WZ5]; 
pile[WZ1]=V82; pile[WZ2]=V81; pile[WZ3]=1121; 
(*f[285])( );     /*ENLY0(jvj+9,V82,V81,1121,V83,V84)*/
V83=pile[WZ4]; V84=pile[WZ5]; 
pile[v[22]]=948; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(948,jvj+9,jvj+10)*/
if((x[jvj+10]!=68)) goto l14;
pile[v[22]]=164; pile[WZ1]=529; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(164,529,V21)*/
V21=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=1256; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+9,1256,68)*/
pile[WZ1]=529; pile[WZ2]=V21; 
(*f[43])( );     /*CHGC2(jvj+9,529,V21)*/
l14:pile[v[22]]=jvj+9; pile[WZ1]=860; pile[WZ2]=104; 
(*f[35])( );     /*CHGC1(jvj+9,860,104)*/
pile[WZ1]=1257; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+9,1257,68)*/
pile[WZ1]=1254; 
(*f[35])( );     /*CHGC1(jvj+9,1254,68)*/
pile[WZ1]=1121; pile[WZ2]=1; 
(*f[43])( );     /*CHGC2(jvj+9,1121,1)*/
pile[WZ1]=1115; pile[WZ2]=NK; 
(*f[43])( );     /*CHGC2(jvj+9,1115,NK)*/
pile[WZ1]=1161; pile[WZ2]=1055; 
(*f[35])( );     /*CHGC1(jvj+9,1161,1055)*/
(*f[554])( );     /*AJEXP1(jvj+9)*/
l15:if(x[jvj+5]==incon) goto l16;
if(x[jvj+9]==incon) goto l18;
pile[v[22]]=117; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+5,V25)*/
V25=pile[WZ2]; 
pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(117,jvj+9,V26)*/
V26=pile[WZ2]; 
pile[v[22]]=109; pile[WZ1]=jvj+2; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(109,jvj+2,jvj+17)*/
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(510,jvj+2,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(515,jvj+2,V29)*/
V29=pile[WZ2]; 
pile[v[22]]=493; pile[WZ1]=860; pile[WZ2]=jvj+18; 
(*f[54])( );     /*TRI1(493,860,jvj+18)*/
pile[v[22]]=jvj+18; pile[WZ1]=V26; pile[WZ2]=610; pile[WZ3]=jvj+19; 
(*f[189])( );     /*TRI4(jvj+18,V26,610,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=V25; pile[WZ2]=609; pile[WZ3]=jvj+20; 
(*f[189])( );     /*TRI4(jvj+19,V25,609,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=V29; pile[WZ2]=515; pile[WZ3]=jvj+21; 
(*f[189])( );     /*TRI4(jvj+20,V29,515,jvj+21)*/
pile[v[22]]=jvj+21; pile[WZ1]=V28; pile[WZ2]=510; pile[WZ3]=jvj+22; 
(*f[189])( );     /*TRI4(jvj+21,V28,510,jvj+22)*/
pile[v[22]]=109; pile[WZ1]=jvj+17; pile[WZ2]=117; pile[WZ3]=NK; pile[WZ4]=jvj+22; pile[WZ5]=jvj+16; 
(*f[47])( );     /*QUADRI0(109,jvj+17,117,NK,jvj+22,jvj+16)*/
pile[v[22]]=V25; pile[WZ1]=1104; pile[WZ2]=jvj+16; 
(*f[235])( );     /*PLUSC2(V25,1104,jvj+16)*/
pile[v[22]]=V26; 
(*f[235])( );     /*PLUSC2(V26,1104,jvj+16)*/
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l19;     /*FNDC1(163,jvj+2,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=jvj+16; pile[WZ1]=163; pile[WZ2]=V30; 
(*f[177])( );     /*CHGC4(jvj+16,163,V30)*/
l19:pile[v[22]]=924; pile[WZ1]=1109; pile[WZ2]=jvj+16; 
(*f[36])( );     /*PLUSC0(924,1109,jvj+16)*/
goto l20;
l7:x[jvj+12]=t[x[jvj+12]];
goto l6;
l12:x[jvj+14]=t[x[jvj+14]];
goto l11;
l16:if(x[jvj+9]!=incon) goto l17;
goto l20;
l17:pile[v[22]]=jvj+9; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+9)*/
goto l20;
l18:pile[v[22]]=jvj+5; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+5)*/
goto l20;
l23:x[jvj+11]=x[jvj+26] ;z[jvj+11]=z[jvj+26];
l1:pile[v[22]]=1076; pile[WZ1]=966; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(1076,966,V23)*/
V23=pile[WZ2]; 
V22=V23+1;
NK=V22;
pile[v[22]]=966; pile[WZ1]=1076; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(966,1076,V22)*/
l2:if(x[jvj+11]!=incon) goto l3;
goto l20;
}
