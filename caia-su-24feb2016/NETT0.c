#include "dx.h"
void NETT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V89=0,V83=0,V84=0,V85=0,V86=0,V81=0,V58=0,V59=0,V60=0,V61=0,V62=0,V63=0,V64=0,V65=0,V66=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V73=0,V74=0,V75=0,V76=0,V77=0,V78=0,V79=0,V93=0,V97=0,V106=0,V99=0,V100=0,V101=0,V102=0,V103=0,V104=0,V57=0,V1=0,V2=0,V3=0,V4=0,V5=0,V6=0,V7=0,V8=0,V9=0,V10=0,V11=0,V12=0,V13=0,V14=0,V15=0,V16=0,V17=0,V18=0,V19=0,V20=0,V21=0,V22=0,V23=0,V24=0,V25=0,V26=0,V27=0,V28=0,V29=0,V30=0,V31=0,V32=0,V33=0,V34=0,V35=0,V36=0,V37=0,V38=0,V39=0,V40=0,V41=0,V42=0,V43=0,V44=0,V45=0,V46=0,V47=0,V48=0,V49=0,V50=0,V51=0,V52=0,V53=0,V54=0,V55=0,V56=0;
int TL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=17;
x[jvj+1]=10486;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==316&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
TL=pile[v[22]]; v[22]+=1; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=302; pile[WZ1]=TL; pile[WZ2]=jvj+8; 
(*f[33])( );     /*FNDE0(302,TL,jvj+8)*/
l6:if((x[jvj+8]>0)) goto l7;
pile[v[22]]=222; pile[WZ1]=TL; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(222,TL,jvj+11)*/
pile[v[22]]=223; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(223,TL,jvj+12)*/
pile[v[22]]=283; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(283,TL,jvj+13)*/
l9:if((x[jvj+13]>0)) goto l10;
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(283,TL,jvj+15)*/
l12:if((x[jvj+15]>0)) goto l13;
V57=x[TL];
pile[v[22]]=TL; pile[WZ1]=0; pile[WZ2]=V57; pile[WZ3]=117; 
(*f[285])( );     /*ENLY0(TL,0,V57,117,V1,V2)*/
V1=pile[WZ4]; V2=pile[WZ5]; 
pile[WZ1]=V2; pile[WZ2]=V1; pile[WZ3]=120; 
(*f[285])( );     /*ENLY0(TL,V2,V1,120,V3,V4)*/
V3=pile[WZ4]; V4=pile[WZ5]; 
pile[WZ1]=V4; pile[WZ2]=V3; pile[WZ3]=173; 
(*f[285])( );     /*ENLY0(TL,V4,V3,173,V5,V6)*/
V5=pile[WZ4]; V6=pile[WZ5]; 
pile[WZ1]=V6; pile[WZ2]=V5; pile[WZ3]=191; 
(*f[285])( );     /*ENLY0(TL,V6,V5,191,V7,V8)*/
V7=pile[WZ4]; V8=pile[WZ5]; 
pile[WZ1]=V8; pile[WZ2]=V7; pile[WZ3]=214; 
(*f[285])( );     /*ENLY0(TL,V8,V7,214,V9,V10)*/
V9=pile[WZ4]; V10=pile[WZ5]; 
pile[WZ1]=V10; pile[WZ2]=V9; pile[WZ3]=216; 
(*f[285])( );     /*ENLY0(TL,V10,V9,216,V11,V12)*/
V11=pile[WZ4]; V12=pile[WZ5]; 
pile[WZ1]=V12; pile[WZ2]=V11; pile[WZ3]=220; 
(*f[285])( );     /*ENLY0(TL,V12,V11,220,V13,V14)*/
V13=pile[WZ4]; V14=pile[WZ5]; 
pile[WZ1]=V14; pile[WZ2]=V13; pile[WZ3]=238; 
(*f[285])( );     /*ENLY0(TL,V14,V13,238,V15,V16)*/
V15=pile[WZ4]; V16=pile[WZ5]; 
pile[WZ1]=V16; pile[WZ2]=V15; pile[WZ3]=251; 
(*f[285])( );     /*ENLY0(TL,V16,V15,251,V17,V18)*/
V17=pile[WZ4]; V18=pile[WZ5]; 
pile[WZ1]=V18; pile[WZ2]=V17; pile[WZ3]=263; 
(*f[285])( );     /*ENLY0(TL,V18,V17,263,V19,V20)*/
V19=pile[WZ4]; V20=pile[WZ5]; 
pile[WZ1]=V20; pile[WZ2]=V19; pile[WZ3]=273; 
(*f[285])( );     /*ENLY0(TL,V20,V19,273,V21,V22)*/
V21=pile[WZ4]; V22=pile[WZ5]; 
pile[WZ1]=V22; pile[WZ2]=V21; pile[WZ3]=287; 
(*f[285])( );     /*ENLY0(TL,V22,V21,287,V23,V24)*/
V23=pile[WZ4]; V24=pile[WZ5]; 
pile[WZ1]=V24; pile[WZ2]=V23; pile[WZ3]=291; 
(*f[285])( );     /*ENLY0(TL,V24,V23,291,V25,V26)*/
V25=pile[WZ4]; V26=pile[WZ5]; 
pile[WZ1]=V26; pile[WZ2]=V25; pile[WZ3]=292; 
(*f[285])( );     /*ENLY0(TL,V26,V25,292,V27,V28)*/
V27=pile[WZ4]; V28=pile[WZ5]; 
pile[WZ1]=V28; pile[WZ2]=V27; pile[WZ3]=299; 
(*f[285])( );     /*ENLY0(TL,V28,V27,299,V29,V30)*/
V29=pile[WZ4]; V30=pile[WZ5]; 
pile[WZ1]=V30; pile[WZ2]=V29; pile[WZ3]=322; 
(*f[285])( );     /*ENLY0(TL,V30,V29,322,V31,V32)*/
V31=pile[WZ4]; V32=pile[WZ5]; 
pile[WZ1]=V32; pile[WZ2]=V31; pile[WZ3]=323; 
(*f[285])( );     /*ENLY0(TL,V32,V31,323,V33,V34)*/
V33=pile[WZ4]; V34=pile[WZ5]; 
pile[WZ1]=V34; pile[WZ2]=V33; pile[WZ3]=330; 
(*f[285])( );     /*ENLY0(TL,V34,V33,330,V35,V36)*/
V35=pile[WZ4]; V36=pile[WZ5]; 
pile[WZ1]=V36; pile[WZ2]=V35; pile[WZ3]=333; 
(*f[285])( );     /*ENLY0(TL,V36,V35,333,V37,V38)*/
V37=pile[WZ4]; V38=pile[WZ5]; 
pile[WZ1]=V38; pile[WZ2]=V37; pile[WZ3]=357; 
(*f[285])( );     /*ENLY0(TL,V38,V37,357,V39,V40)*/
V39=pile[WZ4]; V40=pile[WZ5]; 
pile[WZ1]=V40; pile[WZ2]=V39; pile[WZ3]=360; 
(*f[285])( );     /*ENLY0(TL,V40,V39,360,V41,V42)*/
V41=pile[WZ4]; V42=pile[WZ5]; 
pile[WZ1]=V42; pile[WZ2]=V41; pile[WZ3]=440; 
(*f[285])( );     /*ENLY0(TL,V42,V41,440,V43,V44)*/
V43=pile[WZ4]; V44=pile[WZ5]; 
pile[WZ1]=V44; pile[WZ2]=V43; pile[WZ3]=474; 
(*f[285])( );     /*ENLY0(TL,V44,V43,474,V45,V46)*/
V45=pile[WZ4]; V46=pile[WZ5]; 
pile[WZ1]=V46; pile[WZ2]=V45; pile[WZ3]=510; 
(*f[285])( );     /*ENLY0(TL,V46,V45,510,V47,V48)*/
V47=pile[WZ4]; V48=pile[WZ5]; 
pile[WZ1]=V48; pile[WZ2]=V47; pile[WZ3]=535; 
(*f[285])( );     /*ENLY0(TL,V48,V47,535,V49,V50)*/
V49=pile[WZ4]; V50=pile[WZ5]; 
pile[WZ1]=V50; pile[WZ2]=V49; pile[WZ3]=724; 
(*f[285])( );     /*ENLY0(TL,V50,V49,724,V51,V52)*/
V51=pile[WZ4]; V52=pile[WZ5]; 
pile[WZ1]=V52; pile[WZ2]=V51; pile[WZ3]=748; 
(*f[285])( );     /*ENLY0(TL,V52,V51,748,V53,V54)*/
V53=pile[WZ4]; V54=pile[WZ5]; 
pile[WZ1]=V54; pile[WZ2]=V53; pile[WZ3]=870; 
(*f[285])( );     /*ENLY0(TL,V54,V53,870,V55,V56)*/
V55=pile[WZ4]; V56=pile[WZ5]; 
pile[v[22]]=302; pile[WZ1]=TL; 
(*f[71])( );     /*ENLV0(302,TL)*/
l14:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l2:x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(jvj+3,jvj+4,jvj+5)*/
x[jvj+17]=x[jvj+5] ;z[jvj+17]=z[jvj+5];
l3:if((x[jvj+17]>0)) goto l4;
x[jvj+2]=t[x[jvj+2]];
l1:if((x[jvj+2]>0)) goto l2;
pile[v[22]]=120; pile[WZ1]=jvj+4; 
(*f[71])( );     /*ENLV0(120,jvj+4)*/
l8:V81=x[jvj+9];
pile[v[22]]=jvj+9; pile[WZ1]=0; pile[WZ2]=V81; pile[WZ3]=134; 
(*f[285])( );     /*ENLY0(jvj+9,0,V81,134,V58,V59)*/
V58=pile[WZ4]; V59=pile[WZ5]; 
pile[WZ1]=V59; pile[WZ2]=V58; pile[WZ3]=191; 
(*f[285])( );     /*ENLY0(jvj+9,V59,V58,191,V60,V61)*/
V60=pile[WZ4]; V61=pile[WZ5]; 
pile[WZ1]=V61; pile[WZ2]=V60; pile[WZ3]=193; 
(*f[285])( );     /*ENLY0(jvj+9,V61,V60,193,V62,V63)*/
V62=pile[WZ4]; V63=pile[WZ5]; 
pile[WZ1]=V63; pile[WZ2]=V62; pile[WZ3]=220; 
(*f[285])( );     /*ENLY0(jvj+9,V63,V62,220,V64,V65)*/
V64=pile[WZ4]; V65=pile[WZ5]; 
pile[WZ1]=V65; pile[WZ2]=V64; pile[WZ3]=248; 
(*f[285])( );     /*ENLY0(jvj+9,V65,V64,248,V66,V67)*/
V66=pile[WZ4]; V67=pile[WZ5]; 
pile[WZ1]=V67; pile[WZ2]=V66; pile[WZ3]=356; 
(*f[285])( );     /*ENLY0(jvj+9,V67,V66,356,V68,V69)*/
V68=pile[WZ4]; V69=pile[WZ5]; 
pile[WZ1]=V69; pile[WZ2]=V68; pile[WZ3]=360; 
(*f[285])( );     /*ENLY0(jvj+9,V69,V68,360,V70,V71)*/
V70=pile[WZ4]; V71=pile[WZ5]; 
pile[WZ1]=V71; pile[WZ2]=V70; pile[WZ3]=437; 
(*f[285])( );     /*ENLY0(jvj+9,V71,V70,437,V72,V73)*/
V72=pile[WZ4]; V73=pile[WZ5]; 
pile[WZ1]=V73; pile[WZ2]=V72; pile[WZ3]=528; 
(*f[285])( );     /*ENLY0(jvj+9,V73,V72,528,V74,V75)*/
V74=pile[WZ4]; V75=pile[WZ5]; 
pile[WZ1]=V75; pile[WZ2]=V74; pile[WZ3]=642; 
(*f[285])( );     /*ENLY0(jvj+9,V75,V74,642,V76,V77)*/
V76=pile[WZ4]; V77=pile[WZ5]; 
pile[WZ1]=V77; pile[WZ2]=V76; pile[WZ3]=1157; 
(*f[285])( );     /*ENLY0(jvj+9,V77,V76,1157,V78,V79)*/
V78=pile[WZ4]; V79=pile[WZ5]; 
x[jvj+8]=t[x[jvj+8]];
goto l6;
l4:x[jvj+6]=s[x[jvj+17]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+17];
pile[v[22]]=102; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(102,jvj+6,jvj+7)*/
pile[v[22]]=122; pile[WZ1]=jvj+7; 
(*f[71])( );     /*ENLV0(122,jvj+7)*/
l5:x[jvj+17]=t[x[jvj+17]];
goto l3;
l7:x[jvj+9]=s[x[jvj+8]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+8];
pile[v[22]]=102; pile[WZ1]=jvj+9; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(102,jvj+9,jvj+4)*/
V89=x[jvj+4];
pile[v[22]]=jvj+4; pile[WZ1]=0; pile[WZ2]=V89; pile[WZ3]=123; 
(*f[285])( );     /*ENLY0(jvj+4,0,V89,123,V83,V84)*/
V83=pile[WZ4]; V84=pile[WZ5]; 
pile[WZ1]=V84; pile[WZ2]=V83; pile[WZ3]=253; 
(*f[285])( );     /*ENLY0(jvj+4,V84,V83,253,V85,V86)*/
V85=pile[WZ4]; V86=pile[WZ5]; 
pile[v[22]]=100; pile[WZ1]=jvj+4; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(100,jvj+4,jvj+10)*/
if((x[jvj+10]!=39)) goto l8;
x[jvj+2]=d[34];z[jvj+2]=0;
goto l1;
l10:x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=140; pile[WZ1]=jvj+14; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+14,V93)*/
V93=pile[WZ2]; 
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V93) goto l11;
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V93) goto l11;
V97=x[jvj+14];
pile[v[22]]=283; pile[WZ1]=TL; pile[WZ2]=V97; 
(*f[134])( );     /*OTA0(283,TL,V97)*/
l11:x[jvj+13]=t[x[jvj+13]];
goto l9;
l13:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
V106=x[jvj+16];
pile[v[22]]=jvj+16; pile[WZ1]=0; pile[WZ2]=V106; pile[WZ3]=305; 
(*f[285])( );     /*ENLY0(jvj+16,0,V106,305,V99,V100)*/
V99=pile[WZ4]; V100=pile[WZ5]; 
pile[WZ1]=V100; pile[WZ2]=V99; pile[WZ3]=375; 
(*f[285])( );     /*ENLY0(jvj+16,V100,V99,375,V101,V102)*/
V101=pile[WZ4]; V102=pile[WZ5]; 
pile[WZ1]=V102; pile[WZ2]=V101; pile[WZ3]=376; 
(*f[285])( );     /*ENLY0(jvj+16,V102,V101,376,V103,V104)*/
V103=pile[WZ4]; V104=pile[WZ5]; 
x[jvj+15]=t[x[jvj+15]];
goto l12;
}
