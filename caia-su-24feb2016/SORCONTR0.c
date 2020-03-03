#include "dx.h"
void SORCONTR0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V50=0,V49=0,V2=0,V1=0,V55=0,V4=0,V52=0,V53=0,V54=0,V3=0,V60=0,V57=0,V58=0,V59=0,V5=0,V65=0,V62=0,V63=0,V64=0,V7=0,V70=0,V67=0,V68=0,V69=0,V9=0,E=0,V72=0,V73=0,V74=0,V11=0,F=0,V77=0,V78=0,V79=0,V13=0,V85=0,V82=0,V83=0,V84=0,V15=0,V32=0,V87=0,V88=0,V89=0,V17=0,V94=0,V91=0,V92=0,V93=0,V19=0,J=0,V96=0,V97=0,V98=0,V21=0,V38=0,V107=0,V40=0,V104=0,V105=0,V39=0,V114=0,V118=0,V111=0,V112=0,V113=0,V115=0,V116=0,V117=0,V43=0,V108=0,V109=0,V36=0,V101=0,V102=0;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=18;
x[jvj+1]=10854;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==868&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; v[22]+=1; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
V50=x[R];
pile[v[22]]=20; pile[WZ1]=V50; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V50,0,V49)*/
V49=pile[WZ3]; 
pile[v[22]]=V49; 
(*f[40])( );     /*SLG0(V49)*/
pile[v[22]]=1231; pile[WZ1]=R; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1231,R,jvj+12)*/
l22:if((x[jvj+12]>0)) goto l23;
pile[v[22]]=1281; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[33])( );     /*FNDE0(1281,R,jvj+16)*/
l24:if((x[jvj+16]>0)) goto l25;
pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(870,R,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=868; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(868,R,jvj+18)*/
pile[v[22]]=135; pile[WZ1]=0; 
(*f[42])( );     /*SRA1(135,0,jvj+18,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V36; pile[WZ2]=V101; 
(*f[39])( );     /*SDX0(41,V36,V101,V102)*/
V102=pile[WZ3]; 
pile[v[22]]=V102; pile[WZ1]=(-8887); 
(*f[37])( );     /*SRA0(V102,(-8887),V2)*/
V2=pile[WZ2]; 
V1=incon;
if((V36>1)) goto l1;
V1=V2;
l28:pile[v[22]]=V1; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V1,59,V4)*/
V4=pile[WZ2]; 
V3=incon;
pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(869,R,jvj+2)*/
V55=x[jvj+2];
pile[v[22]]=135; pile[WZ1]=V4; pile[WZ2]=869; 
(*f[42])( );     /*SRA1(135,V4,869,V52)*/
V52=pile[WZ3]; 
pile[v[22]]=V52; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V52,58,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V55; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(20,V55,V53,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V54,59,V3)*/
V3=pile[WZ2]; 
l3:V5=incon;
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(1142,R,jvj+3)*/
V60=x[jvj+3];
pile[v[22]]=135; pile[WZ1]=V3; pile[WZ2]=1142; 
(*f[42])( );     /*SRA1(135,V3,1142,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=V57; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V57,58,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V60; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(20,V60,V58,V59)*/
V59=pile[WZ3]; 
pile[v[22]]=V59; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V59,59,V5)*/
V5=pile[WZ2]; 
l5:V7=incon;
pile[v[22]]=872; pile[WZ1]=R; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l6;     /*FNDO0(872,R,jvj+4)*/
V65=x[jvj+4];
pile[v[22]]=135; pile[WZ1]=V5; pile[WZ2]=872; 
(*f[42])( );     /*SRA1(135,V5,872,V62)*/
V62=pile[WZ3]; 
pile[v[22]]=V62; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V62,58,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V65; pile[WZ2]=V63; 
(*f[39])( );     /*SDX0(20,V65,V63,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V64,59,V7)*/
V7=pile[WZ2]; 
l7:V9=incon;
pile[v[22]]=1023; pile[WZ1]=R; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(1023,R,jvj+5)*/
V70=x[jvj+5];
pile[v[22]]=135; pile[WZ1]=V7; pile[WZ2]=1023; 
(*f[42])( );     /*SRA1(135,V7,1023,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V67,58,V68)*/
V68=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V70; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(20,V70,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V69,59,V9)*/
V9=pile[WZ2]; 
l9:V11=incon;
pile[v[22]]=1274; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(1274,R,E)*/
E=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V9; pile[WZ2]=1274; 
(*f[42])( );     /*SRA1(135,V9,1274,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V72,58,V73)*/
V73=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=E; pile[WZ2]=V73; 
(*f[39])( );     /*SDX0(41,E,V73,V74)*/
V74=pile[WZ3]; 
pile[v[22]]=V74; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V74,59,V11)*/
V11=pile[WZ2]; 
l11:V13=incon;
pile[v[22]]=1181; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1181,R,F)*/
F=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V11; pile[WZ2]=1181; 
(*f[42])( );     /*SRA1(135,V11,1181,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V77,58,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=F; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(41,F,V78,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V79,59,V13)*/
V13=pile[WZ2]; 
l13:V15=incon;
pile[v[22]]=1191; pile[WZ1]=R; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(1191,R,jvj+6)*/
V85=x[jvj+6];
pile[v[22]]=135; pile[WZ1]=V13; pile[WZ2]=1191; 
(*f[42])( );     /*SRA1(135,V13,1191,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V82,58,V83)*/
V83=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V85; pile[WZ2]=V83; 
(*f[39])( );     /*SDX0(20,V85,V83,V84)*/
V84=pile[WZ3]; 
pile[v[22]]=V84; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V84,59,V15)*/
V15=pile[WZ2]; 
l15:V17=incon;
pile[v[22]]=1228; pile[WZ1]=R; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(1228,R,jvj+7)*/
pile[v[22]]=436; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l16;     /*FNDO0(436,jvj+7,jvj+8)*/
pile[v[22]]=140; pile[WZ1]=jvj+8; 
(*f[44])( );if(v[102]) goto l16;     /*FNDC1(140,jvj+8,V32)*/
V32=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V15; pile[WZ2]=1228; 
(*f[42])( );     /*SRA1(135,V15,1228,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V87,58,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=V88; pile[WZ1]=V32; 
(*f[37])( );     /*SRA0(V88,V32,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=V89; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V89,59,V17)*/
V17=pile[WZ2]; 
l17:V19=incon;
pile[v[22]]=1292; pile[WZ1]=R; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(1292,R,jvj+9)*/
V94=x[jvj+9];
pile[v[22]]=135; pile[WZ1]=V17; pile[WZ2]=1292; 
(*f[42])( );     /*SRA1(135,V17,1292,V91)*/
V91=pile[WZ3]; 
pile[v[22]]=V91; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V91,58,V92)*/
V92=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V94; pile[WZ2]=V92; 
(*f[39])( );     /*SDX0(20,V94,V92,V93)*/
V93=pile[WZ3]; 
pile[v[22]]=V93; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V93,59,V19)*/
V19=pile[WZ2]; 
l19:V21=incon;
pile[v[22]]=1293; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1293,R,J)*/
J=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V19; pile[WZ2]=1293; 
(*f[42])( );     /*SRA1(135,V19,1293,V96)*/
V96=pile[WZ3]; 
pile[v[22]]=V96; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V96,58,V97)*/
V97=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=J; pile[WZ2]=V97; 
(*f[39])( );     /*SDX0(41,J,V97,V98)*/
V98=pile[WZ3]; 
pile[v[22]]=V98; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V98,59,V21)*/
V21=pile[WZ2]; 
l29:pile[v[22]]=V21; 
(*f[40])( );     /*SLG0(V21)*/
l30:x[jvj+1]=incon; v[0]=jvj; v[22]-=1; return;
l1:pile[v[22]]=V2; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V2,83,V1)*/
V1=pile[WZ2]; 
goto l28;
l2:V3=V4;
goto l3;
l4:V5=V3;
goto l5;
l6:V7=V5;
goto l7;
l8:V9=V7;
goto l9;
l10:V11=V9;
goto l11;
l12:V13=V11;
goto l13;
l14:V15=V13;
goto l15;
l16:V17=V15;
goto l17;
l18:V19=V17;
goto l19;
l20:V21=V19;
goto l29;
l21:V39=V40;
l27:pile[v[22]]=V39; 
(*f[40])( );     /*SLG0(V39)*/
l26:x[jvj+16]=t[x[jvj+16]];
goto l24;
l23:x[jvj+13]=s[x[jvj+12]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+12];
pile[v[22]]=1261; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[33])( );     /*FNDE0(1261,jvj+13,jvj+14)*/
pile[v[22]]=1260; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(1260,jvj+13,jvj+15)*/
V114=x[jvj+15];
V118=x[jvj+14];
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1231; 
(*f[42])( );     /*SRA1(135,0,1231,V111)*/
V111=pile[WZ3]; 
pile[v[22]]=V111; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V111,58,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V114; pile[WZ2]=V112; 
(*f[39])( );     /*SDX0(23,V114,V112,V113)*/
V113=pile[WZ3]; 
pile[v[22]]=V113; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V113,61,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=V115; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V115,62,V116)*/
V116=pile[WZ2]; 
pile[v[22]]=23; pile[WZ1]=V118; pile[WZ2]=V116; 
(*f[39])( );     /*SDX0(23,V118,V116,V117)*/
V117=pile[WZ3]; 
pile[v[22]]=V117; 
(*f[40])( );     /*SLG0(V117)*/
x[jvj+12]=t[x[jvj+12]];
goto l22;
l25:x[jvj+10]=s[x[jvj+16]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+16];
pile[v[22]]=870; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(870,jvj+10,V43)*/
V43=pile[WZ2]; 
pile[v[22]]=1191; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1191,jvj+10,jvj+17)*/
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=1281; 
(*f[42])( );     /*SRA1(135,0,1281,V108)*/
V108=pile[WZ3]; 
pile[WZ1]=V108; pile[WZ2]=jvj+17; 
(*f[42])( );     /*SRA1(135,V108,jvj+17,V109)*/
V109=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V43; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(41,V43,V109,V40)*/
V40=pile[WZ3]; 
V39=incon;
pile[v[22]]=497; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(497,jvj+10,jvj+11)*/
V38=x[jvj+11];
V107=V38;
pile[v[22]]=135; pile[WZ1]=V40; pile[WZ2]=497; 
(*f[42])( );     /*SRA1(135,V40,497,V104)*/
V104=pile[WZ3]; 
pile[v[22]]=V104; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V104,58,V105)*/
V105=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V107; pile[WZ2]=V105; 
(*f[39])( );     /*SDX0(20,V107,V105,V39)*/
V39=pile[WZ3]; 
goto l27;
}
