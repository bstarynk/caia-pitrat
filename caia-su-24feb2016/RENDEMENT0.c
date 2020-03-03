#include "dx.h"
void RENDEMENT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V7=0,V8=0,V11=0,V10=0,V1=0,V2=0,V3=0,V4=0,V24=0,V26=0,V13=0,V27=0,V=0,V15=0,V14=0,V34=0,W=0,V28=0,V30=0,V38=0,V42=0,V49=0,V37=0,V18=0,V39=0,V41=0,V20=0,V43=0,V45=0,V46=0,V48=0,V50=0,Z=0,V21=0,V23=0,V22=0,V35=0;
int UR;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=30;
x[jvj+1]=11267;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==876&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
UR=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((UR!=43)) goto l14;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(0,117,jvj+6)*/
pile[v[22]]=1298; pile[WZ1]=0; pile[WZ2]=1298; pile[WZ3]=159; 
(*f[285])( );     /*ENLY0(1298,0,1298,159,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=763; 
(*f[285])( );     /*ENLY0(1298,V2,V1,763,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[v[22]]=jvj+10; 
(*f[138])( );if(v[102]) goto l14;     /*EXPPB0(jvj+10)*/
l4:if((x[jvj+10]<=0)) goto l14;
x[jvj+3]=s[x[jvj+10]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+10];
pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(109,jvj+3,jvj+7)*/
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
pile[v[22]]=878; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(878,jvj+8,jvj+9)*/
x[jvj+30]=x[jvj+9] ;z[jvj+30]=z[jvj+9];
l6:if((x[jvj+30]<=0)) goto l5;
x[jvj+2]=s[x[jvj+30]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+30];
pile[v[22]]=1277; pile[WZ1]=jvj+2; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1277,jvj+2,jvj+4)*/
if((x[jvj+4]==68)) goto l7;
l1:pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+2,V7)*/
V7=pile[WZ2]; 
pile[WZ1]=jvj+3; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(163,jvj+3,V8)*/
V8=pile[WZ2]; 
if((V7!=V8)) goto l7;
l2:pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(117,jvj+6,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=1060; pile[WZ1]=(-20); pile[WZ2]=1056; pile[WZ3]=jvj+23; 
(*f[180])( );     /*TRIENS0(1060,(-20),1056,jvj+23)*/
pile[v[22]]=jvj+23; pile[WZ1]=67; pile[WZ2]=978; pile[WZ3]=jvj+24; 
(*f[58])( );     /*TRI3(jvj+23,67,978,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ2]=948; pile[WZ3]=jvj+25; 
(*f[58])( );     /*TRI3(jvj+24,67,948,jvj+25)*/
pile[v[22]]=jvj+25; pile[WZ1]=120; pile[WZ2]=936; pile[WZ3]=jvj+26; 
(*f[189])( );     /*TRI4(jvj+25,120,936,jvj+26)*/
pile[v[22]]=jvj+26; pile[WZ1]=530; pile[WZ2]=860; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+26,530,860,jvj+27)*/
pile[v[22]]=jvj+27; pile[WZ1]=1; pile[WZ2]=683; pile[WZ3]=jvj+28; 
(*f[189])( );     /*TRI4(jvj+27,1,683,jvj+28)*/
pile[v[22]]=jvj+28; pile[WZ1]=50; pile[WZ2]=493; pile[WZ3]=jvj+29; 
(*f[189])( );     /*TRI4(jvj+28,50,493,jvj+29)*/
pile[v[22]]=109; pile[WZ1]=jvj+8; pile[WZ2]=117; pile[WZ3]=V10; pile[WZ4]=jvj+29; pile[WZ5]=jvj+5; 
(*f[47])( );     /*QUADRI0(109,jvj+8,117,V10,jvj+29,jvj+5)*/
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l3;     /*FNDC1(163,jvj+2,V11)*/
V11=pile[WZ2]; 
pile[v[22]]=jvj+5; pile[WZ1]=163; pile[WZ2]=V11; 
(*f[177])( );     /*CHGC4(jvj+5,163,V11)*/
l3:pile[v[22]]=1298; pile[WZ1]=763; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(1298,763,jvj+5)*/
l8:pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=2; 
(*f[186])( );     /*BTC0(jvj+6,117,2)*/
l7:x[jvj+30]=t[x[jvj+30]];
goto l6;
l5:x[jvj+10]=t[x[jvj+10]];
goto l4;
l9:V13=67;
l13:Z=V13;
if((Z==68)) goto l11;
if((Z!=67)) goto l18;
pile[v[22]]=927; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(927,jvj+11,V28)*/
V28=pile[WZ2]; 
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1005,jvj+11,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=935; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(935,jvj+11,jvj+17)*/
V38=x[jvj+16];
V42=x[jvj+18];
V49=x[jvj+17];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=876; 
(*f[42])( );     /*SRA1(135,0,876,V37)*/
V37=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V38; pile[WZ2]=V37; 
(*f[39])( );     /*SDX0(20,V38,V37,V15)*/
V15=pile[WZ3]; 
V14=incon;
pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l10;     /*FNDC1(163,jvj+13,V27)*/
V27=pile[WZ2]; 
V=V27;
pile[v[22]]=V15; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V15,V,V14)*/
V14=pile[WZ2]; 
l12:pile[v[22]]=41; pile[WZ1]=V18; pile[WZ2]=V14; 
(*f[39])( );     /*SDX0(41,V18,V14,V39)*/
V39=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V42; pile[WZ2]=V39; 
(*f[39])( );     /*SDX0(20,V42,V39,V41)*/
V41=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V20; pile[WZ2]=V41; 
(*f[39])( );     /*SDX0(41,V20,V41,V43)*/
V43=pile[WZ3]; 
pile[v[22]]=V43; pile[WZ1]=35; 
(*f[38])( );     /*SPC0(V43,35,V45)*/
V45=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V30; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(41,V30,V45,V46)*/
V46=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V49; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(20,V49,V46,V48)*/
V48=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V28; pile[WZ2]=V48; 
(*f[39])( );     /*SDX0(41,V28,V48,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; 
(*f[40])( );     /*SLG0(V50)*/
l18:pile[v[22]]=763; pile[WZ1]=1298; pile[WZ2]=V35; 
(*f[134])( );     /*OTA0(763,1298,V35)*/
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l17:x[jvj+21]=t[x[jvj+21]];
l15:if((x[jvj+21]>0)) goto l16;
l19:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l10:V14=V15;
goto l12;
l11:pile[v[22]]=163; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,jvj+13,V34)*/
V34=pile[WZ2]; 
W=V34;
pile[v[22]]=jvj+14; pile[WZ1]=163; pile[WZ2]=W; 
(*f[177])( );     /*CHGC4(jvj+14,163,W)*/
pile[v[22]]=jvj+11; 
(*f[177])( );     /*CHGC4(jvj+11,163,W)*/
l20:pile[v[22]]=447; pile[WZ1]=jvj+14; pile[WZ2]=459; pile[WZ3]=jvj+11; pile[WZ4]=jvj+15; 
(*f[181])( );     /*QUADRI2(447,jvj+14,459,jvj+11,jvj+15)*/
pile[v[22]]=1298; pile[WZ1]=159; pile[WZ2]=jvj+15; 
(*f[36])( );     /*PLUSC0(1298,159,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=109; pile[WZ2]=jvj+16; 
(*f[35])( );     /*CHGC1(jvj+14,109,jvj+16)*/
pile[v[22]]=jvj+11; 
(*f[35])( );     /*CHGC1(jvj+11,109,jvj+16)*/
goto l18;
l14:pile[v[22]]=763; pile[WZ1]=1298; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(763,1298,jvj+21)*/
goto l15;
l16:x[jvj+13]=s[x[jvj+21]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+21];
pile[v[22]]=109; pile[WZ1]=jvj+13; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,jvj+13,jvj+22)*/
V35=x[jvj+13];
x[jvj+16]=x[jvj+22] ;z[jvj+16]=z[jvj+22];
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+13; pile[WZ4]=jvj+20; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+13,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+14; 
(*f[971])( );if(v[102]) goto l18;     /*MONITEUR1(jvj+20,jvj+14)*/
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(1005,jvj+14,V18)*/
V18=pile[WZ2]; 
if((V18!=1000)) goto l18;
pile[v[22]]=935; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(935,jvj+14,jvj+18)*/
if((x[jvj+18]!=547)) goto l18;
pile[v[22]]=927; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(927,jvj+14,V20)*/
V20=pile[WZ2]; 
if((V20>=600000)) goto l18;
pile[v[22]]=967; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(967,jvj+14,V21)*/
V21=pile[WZ2]; 
if((V21<5)) goto l18;
pile[v[22]]=117; pile[WZ1]=jvj+13; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(117,jvj+13,V23)*/
V23=pile[WZ2]; 
V22=V23+1;
pile[v[22]]=jvj+13; pile[WZ1]=683; pile[WZ2]=3; 
(*f[43])( );     /*CHGC2(jvj+13,683,3)*/
pile[WZ1]=936; pile[WZ2]=600; 
(*f[43])( );     /*CHGC2(jvj+13,936,600)*/
pile[WZ1]=117; pile[WZ2]=V22; 
(*f[43])( );     /*CHGC2(jvj+13,117,V22)*/
pile[v[22]]=158; pile[WZ1]=287; pile[WZ2]=218; pile[WZ3]=jvj+13; pile[WZ4]=jvj+19; 
(*f[181])( );     /*QUADRI2(158,287,218,jvj+13,jvj+19)*/
pile[v[22]]=jvj+19; pile[WZ1]=jvj+11; 
(*f[971])( );if(v[102]) goto l18;     /*MONITEUR1(jvj+19,jvj+11)*/
V13=incon;
pile[v[22]]=1005; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(1005,jvj+11,V24)*/
V24=pile[WZ2]; 
if((V24!=1000)) goto l9;
pile[v[22]]=935; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+11,jvj+12)*/
if((x[jvj+12]!=547)) goto l9;
pile[v[22]]=927; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(927,jvj+11,V26)*/
V26=pile[WZ2]; 
if((V26>=600000)) goto l9;
V13=68;
goto l13;
}
