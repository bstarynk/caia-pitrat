#include "dx.h"
void OBJETROPGROS0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V2=0,V1=0,MM=0,NK=0,M=0,V46=0,V47=0,V49=0,V50=0,V52=0,V53=0,V17=0,V56=0,V6=0,V5=0,V58=0,V7=0,V18=0,V9=0,V19=0,V11=0,V20=0,V13=0,V15=0,V62=0,V24=0,V23=0,V27=0,V26=0,V33=0,V32=0,V39=0,V42=0,V44=0,V35=0,V86=0,V87=0,V88=0,V89=0,V91=0,V92=0,V94=0,V95=0,V65=0,V66=0,V67=0,V69=0,V70=0,V72=0,K=0,V73=0,V28=0,V29=0,V76=0,V77=0,V78=0,V79=0,V81=0,V82=0,V84=0,V105=0;
int N,G,Q;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=24;
x[jvj+1]=11006;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==955&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
N=pile[v[22]]; G=pile[v[22]+1]; Q=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
M=x[jvj+5]=incon;
pile[v[22]]=117; pile[WZ1]=G; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(117,G,MM)*/
MM=pile[WZ2]; 
if((MM>=20)) goto l39;
pile[v[22]]=159; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(159,G,jvj+2)*/
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==x[N]) goto l39;
pile[v[22]]=N; 
(*f[1273])( );     /*STRT3(N,NK)*/
NK=pile[WZ1]; 
if((NK<=500)) goto l39;
x[jvj+3]=x[N] ;z[jvj+3]=z[N];
M=MM;
pile[v[22]]=G; pile[WZ1]=159; pile[WZ2]=N; 
(*f[36])( );     /*PLUSC0(G,159,N)*/
pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(G,117,1)*/
pile[v[22]]=0; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(0,(-9543),V46)*/
V46=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=MM; pile[WZ2]=V46; 
(*f[39])( );     /*SDX0(41,MM,V46,V47)*/
V47=pile[WZ3]; 
pile[v[22]]=V47; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V47,(-1318),V49)*/
V49=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V49; 
(*f[39])( );     /*SDX0(41,Q,V49,V50)*/
V50=pile[WZ3]; 
pile[v[22]]=V50; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V50,58,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=NK; pile[WZ2]=V52; 
(*f[39])( );     /*SDX0(41,NK,V52,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=V53; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V53,(-4670),V2)*/
V2=pile[WZ2]; 
V1=incon;
pile[v[22]]=V2; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V2,83,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=V1; 
(*f[40])( );     /*SLG0(V1)*/
pile[v[22]]=jvj+3; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[1274])( );     /*ATTRIBOBJ0(jvj+3,jvj+4,jvj+5)*/
x[jvj+21]=x[jvj+5] ;z[jvj+21]=z[jvj+5];
l10:if((x[jvj+21]>0)) goto l11;
pile[v[22]]=100; pile[WZ1]=jvj+3; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(100,jvj+3,jvj+11)*/
if((x[jvj+11]!=746)) goto l25;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==1001) goto l40;
l25:x[jvj+23]=x[jvj+4] ;z[jvj+23]=z[jvj+4];
l23:if((x[jvj+23]>0)) goto l24;
x[jvj+16]=120 ;z[jvj+16]=120;
for(a=x[jvj+4];a>0;a=t[a]) if(s[a]==x[jvj+16]) goto l41;
l35:x[jvj+24]=x[jvj+5] ;z[jvj+24]=z[jvj+5];
l34:if((x[jvj+24]<=0)) goto l39;
x[jvj+17]=s[x[jvj+24]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+24];
if((V28=w[x[jvj+17]][1])==incon) goto l36;
if((V28!=23)) goto l36;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+3; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,jvj+3,jvj+18)*/
for(i=x[jvj+18],V29=0;i>0;i=t[i],V29++)  ;
if((V29<=100)) goto l36;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=23; 
(*f[42])( );     /*SRA1(135,0,23,V76)*/
V76=pile[WZ3]; 
pile[WZ1]=V76; pile[WZ2]=jvj+17; 
(*f[42])( );     /*SRA1(135,V76,jvj+17,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V77,(-740),V78)*/
V78=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=M; pile[WZ2]=V78; 
(*f[39])( );     /*SDX0(41,M,V78,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=V79; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V79,(-1318),V81)*/
V81=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V81; 
(*f[39])( );     /*SDX0(41,Q,V81,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=V82; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V82,(-9813),V84)*/
V84=pile[WZ2]; 
pile[v[22]]=V84; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V84,(-4670),V27)*/
V27=pile[WZ2]; 
V26=incon;
134;
pile[v[22]]=V27; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V27,83,V26)*/
V26=pile[WZ2]; 
if(V26==incon) goto l18;
l37:if(V26!=incon) goto l38;
l36:x[jvj+24]=t[x[jvj+24]];
goto l34;
l1:V17=V62;
V56=V17;
pile[v[22]]=20; pile[WZ1]=V56; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(20,V56,V6,V5)*/
V5=pile[WZ3]; 
l2:V7=incon;
if((V15==41)) goto l3;
V7=V5;
l4:V9=incon;
if((V15==89)) goto l5;
V9=V7;
l6:V11=incon;
if((V15==96)) goto l7;
V11=V9;
l8:V13=incon;
if((V15==1317)) goto l9;
V13=V11;
l13:pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l12:x[jvj+21]=t[x[jvj+21]];
goto l10;
l3:V58=V62;
pile[v[22]]=41; pile[WZ1]=V58; pile[WZ2]=V5; 
(*f[39])( );     /*SDX0(41,V58,V5,V7)*/
V7=pile[WZ3]; 
goto l4;
l5:V18=V62;
pile[v[22]]=V7; pile[WZ1]=V18; 
(*f[249])( );     /*SPC1(V7,V18,V9)*/
V9=pile[WZ2]; 
goto l6;
l7:V19=V62;
pile[v[22]]=V9; pile[WZ1]=V19; 
(*f[37])( );     /*SRA0(V9,V19,V11)*/
V11=pile[WZ2]; 
goto l8;
l9:V20=V62;
pile[v[22]]=V11; pile[WZ1]=V20; 
(*f[644])( );     /*SPCMT1(V11,V20,V13)*/
V13=pile[WZ2]; 
goto l13;
l11:x[jvj+6]=s[x[jvj+21]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+21];
if((V15=w[x[jvj+6]][1])==incon) goto l12;
if((V15==23)) goto l12;
pile[v[22]]=jvj+3; pile[WZ1]=jvj+6; pile[WZ3]=jvj+7; 
(*f[45])( );if(v[102]) goto l12;     /*FNDZ0(jvj+3,jvj+6,V62,jvj+7)*/
V62=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+6; 
(*f[42])( );     /*SRA1(135,0,jvj+6,V6)*/
V6=pile[WZ3]; 
V5=incon;
if((V15==20)) goto l1;
V5=V6;
goto l2;
l15:V23=V24;
l30:if(V23!=incon) goto l31;
l32:if(M!=incon) goto l33;
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l17:x[jvj+8]=x[jvj+3] ;z[jvj+8]=z[jvj+3];
l16:pile[v[22]]=120; pile[WZ1]=jvj+8; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(120,jvj+8,jvj+8)*/
pile[v[22]]=jvj+8; pile[WZ1]=G; pile[WZ2]=M; 
(*f[955])( );     /*OBJETROPGROS0(jvj+8,G,M)*/
goto l16;
l18:V26=V27;
goto l37;
l19:pile[v[22]]=V33; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V33,83,V32)*/
V32=pile[WZ2]; 
l28:pile[v[22]]=V32; 
(*f[40])( );     /*SLG0(V32)*/
l26:x[jvj+23]=t[x[jvj+23]];
goto l23;
l21:x[jvj+9]=s[x[jvj+22]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+22];
pile[v[22]]=jvj+9; pile[WZ1]=G; pile[WZ2]=M; 
(*f[955])( );     /*OBJETROPGROS0(jvj+9,G,M)*/
x[jvj+22]=t[x[jvj+22]];
l20:if((x[jvj+22]>0)) goto l21;
pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=23; 
(*f[42])( );     /*SRA1(135,0,23,V86)*/
V86=pile[WZ3]; 
pile[WZ1]=V86; pile[WZ2]=jvj+12; 
(*f[42])( );     /*SRA1(135,V86,jvj+12,V87)*/
V87=pile[WZ3]; 
pile[v[22]]=V87; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V87,(-740),V88)*/
V88=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=M; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(41,M,V88,V89)*/
V89=pile[WZ3]; 
pile[v[22]]=V89; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V89,(-1318),V91)*/
V91=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V91; 
(*f[39])( );     /*SDX0(41,Q,V91,V92)*/
V92=pile[WZ3]; 
pile[v[22]]=V92; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V92,(-9813),V94)*/
V94=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V35; pile[WZ2]=V94; 
(*f[39])( );     /*SDX0(41,V35,V94,V95)*/
V95=pile[WZ3]; 
pile[v[22]]=V95; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V95,(-4670),V33)*/
V33=pile[WZ2]; 
V32=incon;
if((V35>1)) goto l19;
V32=V33;
goto l28;
l24:x[jvj+12]=s[x[jvj+23]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+23];
if((V42=w[x[jvj+12]][1])==incon) goto l26;
if((V42==20)) goto l27;
if((V42!=23)) goto l26;
pile[v[22]]=jvj+12; pile[WZ1]=jvj+3; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(jvj+12,jvj+3,jvj+15)*/
for(i=x[jvj+15],V35=0;i>0;i=t[i],V35++)  ;
x[jvj+22]=x[jvj+15] ;z[jvj+22]=z[jvj+15];
goto l20;
l27:pile[v[22]]=jvj+12; pile[WZ1]=jvj+3; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(jvj+12,jvj+3,jvj+13)*/
x[jvj+14]=x[jvj+13] ;z[jvj+14]=z[jvj+13];
V44=x[jvj+14];
if((V44<=sepcte)) goto l26;
pile[v[22]]=jvj+14; pile[WZ1]=G; pile[WZ2]=M; 
(*f[955])( );     /*OBJETROPGROS0(jvj+14,G,M)*/
goto l26;
l29:pile[v[22]]=135; pile[WZ1]=0; pile[WZ2]=jvj+16; 
(*f[42])( );     /*SRA1(135,0,jvj+16,V65)*/
V65=pile[WZ3]; 
pile[v[22]]=V65; pile[WZ1]=(-740); 
(*f[37])( );     /*SRA0(V65,(-740),V66)*/
V66=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=M; pile[WZ2]=V66; 
(*f[39])( );     /*SDX0(41,M,V66,V67)*/
V67=pile[WZ3]; 
pile[v[22]]=V67; pile[WZ1]=(-1318); 
(*f[37])( );     /*SRA0(V67,(-1318),V69)*/
V69=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=Q; pile[WZ2]=V69; 
(*f[39])( );     /*SDX0(41,Q,V69,V70)*/
V70=pile[WZ3]; 
pile[v[22]]=V70; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V70,58,V72)*/
V72=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=K; pile[WZ2]=V72; 
(*f[39])( );     /*SDX0(41,K,V72,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V73,(-4670),V24)*/
V24=pile[WZ2]; 
V23=incon;
if((K<=1)) goto l14;
pile[v[22]]=V24; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V24,83,V23)*/
V23=pile[WZ2]; 
l14:if(V23==incon) goto l15;
goto l30;
l31:pile[v[22]]=V23; 
(*f[40])( );     /*SLG0(V23)*/
goto l32;
l33:if(x[jvj+5]!=incon) goto l35;
goto l39;
l38:pile[v[22]]=V26; 
(*f[40])( );     /*SLG0(V26)*/
goto l36;
l40:pile[v[22]]=109; pile[WZ1]=jvj+3; pile[WZ2]=447; pile[WZ3]=1136; pile[WZ4]=jvj+10; 
(*f[181])( );     /*QUADRI2(109,jvj+3,447,1136,jvj+10)*/
pile[v[22]]=1136; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(1136,117,1)*/
pile[v[22]]=117; pile[WZ1]=1136; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,1136,V39)*/
V39=pile[WZ2]; 
pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=V39; 
(*f[43])( );     /*CHGC2(jvj+10,117,V39)*/
l22:pile[v[22]]=924; pile[WZ1]=1136; pile[WZ2]=jvj+10; 
(*f[36])( );     /*PLUSC0(924,1136,jvj+10)*/
goto l25;
l41:x[jvj+19]=V105=K=incon;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+19; 
(*f[46])( );     /*TRI0(0,117,jvj+19)*/
x[jvj+20]=x[jvj+3] ;z[jvj+20]=z[jvj+3];
l42:pile[v[22]]=120; pile[WZ1]=jvj+20; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(120,jvj+20,jvj+20)*/
pile[v[22]]=jvj+19; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+19,117,1)*/
goto l42;
l43:if(x[jvj+19]!=incon) goto l47;
l44:if(V105!=incon) goto l46;
l45:if(K!=incon) goto l17;
goto l35;
l46:K=V105;
goto l45;
l47:pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(117,jvj+19,V105)*/
V105=pile[WZ2]; 
goto l44;
}
