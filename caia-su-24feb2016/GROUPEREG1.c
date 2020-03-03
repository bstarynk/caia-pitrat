#include "dx.h"
void GROUPEREG1(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V8=0,V5=0,V7=0,V15=0,V17=0,V16=0,V58=0,V57=0,V3=0,V63=0,V65=0,V62=0,V64=0,V56=0,V55=0,V51=0,V47=0,V46=0,V42=0,V83=0,V82=0,V2=0,V100=0,V80=0,V101=0,V81=0,V90=0,V106=0,V105=0,V103=0,V104=0,V89=0,V102=0,V91=0,V95=0,V96=0,V93=0,V99=0,V92=0,V86=0,V110=0,V109=0,V1=0,V107=0,V108=0,V117=0,V133=0,V132=0,V130=0,V131=0,V129=0,V118=0,V122=0,V123=0,V120=0,V126=0,V119=0;
int E,F,EE,H,ED;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=54;
x[jvj+1]=11413;z[jvj+1]=(-100);
x[jvj+2]=1;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==4108&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
E=pile[v[22]]; F=pile[v[22]+1]; EE=pile[v[22]+2]; H=pile[v[22]+3]; ED=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
l2:x[jvj+44]=x[E] ;z[jvj+44]=z[E];
l1:if((x[jvj+44]<=0)) goto l13;
x[jvj+3]=s[x[jvj+44]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+44];
for(a=x[F];a>0;a=t[a]) if(s[a]==x[jvj+3]) goto l3;
x[jvj+4]=x[jvj+3] ;z[jvj+4]=z[jvj+3];
pile[v[22]]=F; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(F,jvj+3)*/
pile[v[22]]=870; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(870,jvj+4,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l12;     /*FNDC0(1101,jvj+4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(1261,jvj+4,jvj+5)*/
pile[v[22]]=1260; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(1260,jvj+4,jvj+6)*/
pile[v[22]]=1363; pile[WZ2]=jvj+7; 
(*f[33])( );     /*FNDE0(1363,jvj+4,jvj+7)*/
x[jvj+45]=x[EE] ;z[jvj+45]=z[EE];
l4:if((x[jvj+45]<=0)) goto l12;
x[jvj+8]=s[x[jvj+45]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+45];
pile[v[22]]=447; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(447,jvj+8,jvj+9)*/
x[jvj+10]=x[jvj+9] ;z[jvj+10]=z[jvj+9];
pile[v[22]]=870; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(870,jvj+10,V5)*/
V5=pile[WZ2]; 
if((V5!=V6)) goto l5;
pile[v[22]]=1101; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(1101,jvj+10,V7)*/
V7=pile[WZ2]; 
if((V7!=V8)) goto l5;
pile[v[22]]=510; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(510,jvj+8,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=1261; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1261,jvj+10,jvj+11)*/
V2=incon;
for(i=x[jvj+11],V83=0;i>0;i=t[i],V83++)  ;
for(i=x[jvj+5],V82=0;i>0;i=t[i],V82++)  ;
if((V83==V82)) goto l34;
V2=134;
l34:x[jvj+37]=0 ;z[jvj+37]=0;
V100=x[jvj+11];
l35:if((V100>0)) goto l54;
V80=x[jvj+37];
if(V2==incon) goto l53;
l36:x[jvj+34]=0 ;z[jvj+34]=0;
V101=x[jvj+5];
l37:if((V101>0)) goto l45;
V81=x[jvj+34];
if(V2==incon) goto l44;
l6:if((V2==135)) goto l7;
l5:x[jvj+45]=t[x[jvj+45]];
goto l4;
l3:x[jvj+44]=t[x[jvj+44]];
goto l1;
l7:pile[v[22]]=1260; pile[WZ1]=jvj+10; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1260,jvj+10,jvj+12)*/
V1=incon;
for(i=x[jvj+12],V110=0;i>0;i=t[i],V110++)  ;
for(i=x[jvj+6],V109=0;i>0;i=t[i],V109++)  ;
if((V110==V109)) goto l56;
V1=134;
l56:x[jvj+42]=0 ;z[jvj+42]=0;
x[jvj+52]=x[jvj+12] ;z[jvj+52]=z[jvj+12];
l57:if((x[jvj+52]>0)) goto l76;
V107=x[jvj+42];
if(V1==incon) goto l75;
l58:x[jvj+38]=0 ;z[jvj+38]=0;
x[jvj+51]=x[jvj+6] ;z[jvj+51]=z[jvj+6];
l59:if((x[jvj+51]>0)) goto l67;
V108=x[jvj+38];
if(V1==incon) goto l66;
l8:if((V1==135)) goto l9;
goto l5;
l9:pile[v[22]]=1363; pile[WZ1]=jvj+10; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1363,jvj+10,jvj+13)*/
V3=incon;
x[jvj+33]=0 ;z[jvj+33]=0;
x[jvj+16]=d[125];z[jvj+16]=0;
x[jvj+50]=x[ED] ;z[jvj+50]=z[ED];
l14:if((x[jvj+50]>0)) goto l30;
x[jvj+53]=x[jvj+33] ;z[jvj+53]=z[jvj+33];
x[jvj+28]=0 ;z[jvj+28]=0;
x[jvj+17]=d[125];z[jvj+17]=0;
x[jvj+49]=x[ED] ;z[jvj+49]=z[ED];
l15:if((x[jvj+49]>0)) goto l26;
x[jvj+54]=x[jvj+28] ;z[jvj+54]=z[jvj+28];
for(i=x[jvj+53],V58=0;i>0;i=t[i],V58++)  ;
for(i=x[jvj+54],V57=0;i>0;i=t[i],V57++)  ;
if((V58==V57)) goto l16;
V3=134;
l16:x[jvj+47]=x[jvj+53] ;z[jvj+47]=z[jvj+53];
l17:if((x[jvj+47]>0)) goto l22;
if(V3==incon) goto l21;
l10:if((V3==135)) goto l11;
goto l5;
l11:pile[v[22]]=jvj+4; pile[WZ1]=510; pile[WZ2]=V15; 
(*f[43])( );     /*CHGC2(jvj+4,510,V15)*/
goto l2;
l12:pile[v[22]]=510; pile[WZ1]=H; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(510,H,V17)*/
V17=pile[WZ2]; 
V16=V17+1;
x[jvj+14]=d[77];z[jvj+14]=0;
pile[v[22]]=447; pile[WZ1]=jvj+4; pile[WZ2]=510; pile[WZ3]=V16; pile[WZ4]=jvj+15; 
(*f[192])( );     /*QUADRI4(447,jvj+4,510,V16,jvj+15)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=EE; 
(*f[196])( );     /*PLUF0(jvj+14,jvj+15,EE)*/
pile[v[22]]=jvj+4; pile[WZ1]=510; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(jvj+4,510,V16)*/
pile[v[22]]=H; 
(*f[43])( );     /*CHGC2(H,510,V16)*/
goto l2;
l13:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=5; return;
l18:x[jvj+46]=t[x[jvj+46]];
l19:if((x[jvj+46]>0)) goto l20;
V3=135;
goto l10;
l20:x[jvj+18]=s[x[jvj+46]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+46];
pile[v[22]]=447; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(447,jvj+18,jvj+19)*/
if((x[jvj+19]!=67)) goto l18;
V3=134;
goto l10;
l21:x[jvj+46]=x[jvj+54] ;z[jvj+46]=z[jvj+54];
goto l19;
l22:x[jvj+20]=s[x[jvj+47]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+47];
pile[v[22]]=447; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l25;     /*FNDO0(447,jvj+20,jvj+21)*/
if((x[jvj+21]!=67)) goto l25;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(510,jvj+20,V63)*/
V63=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(515,jvj+20,V65)*/
V65=pile[WZ2]; 
x[jvj+48]=x[jvj+54] ;z[jvj+48]=z[jvj+54];
l23:if((x[jvj+48]<=0)) goto l25;
x[jvj+22]=s[x[jvj+48]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+48];
pile[v[22]]=510; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(510,jvj+22,V62)*/
V62=pile[WZ2]; 
if((V63!=V62)) goto l24;
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(515,jvj+22,V64)*/
V64=pile[WZ2]; 
if((V65!=V64)) goto l24;
pile[v[22]]=447; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l24;     /*FNDO0(447,jvj+22,jvj+23)*/
if((x[jvj+23]!=67)) goto l24;
pile[v[22]]=jvj+22; pile[WZ1]=447; pile[WZ2]=68; 
(*f[35])( );     /*CHGC1(jvj+22,447,68)*/
pile[v[22]]=jvj+20; 
(*f[35])( );     /*CHGC1(jvj+20,447,68)*/
l24:x[jvj+48]=t[x[jvj+48]];
goto l23;
l25:x[jvj+47]=t[x[jvj+47]];
goto l17;
l26:x[jvj+24]=s[x[jvj+49]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+49];
pile[v[22]]=510; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(510,jvj+24,V56)*/
V56=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+25; 
(*f[46])( );     /*TRI0(0,117,jvj+25)*/
for(a=x[jvj+7];a>0;a=t[a]) if(s[a]==x[jvj+24]) goto l29;
l27:pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(117,jvj+25,V55)*/
V55=pile[WZ2]; 
V51=V55;
if((V51<=0)) goto l28;
pile[v[22]]=V51; pile[WZ1]=515; pile[WZ2]=jvj+26; 
(*f[46])( );     /*TRI0(V51,515,jvj+26)*/
pile[v[22]]=447; pile[WZ1]=67; pile[WZ2]=510; pile[WZ3]=V56; pile[WZ4]=jvj+26; pile[WZ5]=jvj+27; 
(*f[47])( );     /*QUADRI0(447,67,510,V56,jvj+26,jvj+27)*/
pile[v[22]]=jvj+17; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[196])( );     /*PLUF0(jvj+17,jvj+27,jvj+28)*/
l28:x[jvj+49]=t[x[jvj+49]];
goto l15;
l29:pile[v[22]]=jvj+25; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+25,117,1)*/
goto l27;
l30:x[jvj+29]=s[x[jvj+50]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+50];
pile[v[22]]=510; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(510,jvj+29,V47)*/
V47=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(0,117,jvj+30)*/
for(a=x[jvj+13];a>0;a=t[a]) if(s[a]==x[jvj+29]) goto l33;
l31:pile[v[22]]=117; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(117,jvj+30,V46)*/
V46=pile[WZ2]; 
V42=V46;
if((V42<=0)) goto l32;
pile[v[22]]=V42; pile[WZ1]=515; pile[WZ2]=jvj+31; 
(*f[46])( );     /*TRI0(V42,515,jvj+31)*/
pile[v[22]]=447; pile[WZ1]=67; pile[WZ2]=510; pile[WZ3]=V47; pile[WZ4]=jvj+31; pile[WZ5]=jvj+32; 
(*f[47])( );     /*QUADRI0(447,67,510,V47,jvj+31,jvj+32)*/
pile[v[22]]=jvj+16; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[196])( );     /*PLUF0(jvj+16,jvj+32,jvj+33)*/
l32:x[jvj+50]=t[x[jvj+50]];
goto l14;
l33:pile[v[22]]=jvj+30; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+30,117,1)*/
goto l31;
l38:V2=134;
goto l6;
l42:V105=s[V106];
for(a=V81;a>0;a=t[a]) if(s[a]==V105) goto l43;
l40:V90=134;
l39:if((V90==134)) goto l38;
V2=135;
goto l6;
l43:V106=t[V106];
l41:if((V106>0)) goto l42;
V90=135;
goto l39;
l44:for(i=V80,V104=0;i>0;i=t[i],V104++)  ;
for(i=V81,V103=0;i>0;i=t[i],V103++)  ;
if((V104!=V103)) goto l40;
V106=V80;
goto l41;
l45:V89=s[V101];
if((V89==999999)) goto l46;
pile[v[22]]=jvj+34; pile[WZ1]=V89; 
(*f[207])( );     /*PLUE2(jvj+34,V89)*/
l46:V101=t[V101];
goto l37;
l47:V102=t[V102];
l48:if((V102<=0)) goto l36;
V91=s[V102];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+35; 
(*f[46])( );     /*TRI0(0,117,jvj+35)*/
V95=V91;
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==V95) goto l52;
l49:pile[v[22]]=117; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(117,jvj+35,V96)*/
V96=pile[WZ2]; 
V93=V96;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+36; 
(*f[46])( );     /*TRI0(0,117,jvj+36)*/
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==V91) goto l51;
l50:pile[v[22]]=117; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(117,jvj+36,V99)*/
V99=pile[WZ2]; 
V92=V99;
if((V93==V92)) goto l47;
V2=134;
goto l36;
l51:pile[v[22]]=jvj+36; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+36,117,1)*/
goto l50;
l52:pile[v[22]]=jvj+35; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+35,117,1)*/
goto l49;
l53:V102=V80;
goto l48;
l54:V86=s[V100];
if((V86==999999)) goto l55;
pile[v[22]]=jvj+37; pile[WZ1]=V86; 
(*f[207])( );     /*PLUE2(jvj+37,V86)*/
l55:V100=t[V100];
goto l35;
l60:V1=134;
goto l8;
l64:V132=s[V133];
for(a=V108;a>0;a=t[a]) if(s[a]==V132) goto l65;
l62:V117=134;
l61:if((V117==134)) goto l60;
V1=135;
goto l8;
l65:V133=t[V133];
l63:if((V133>0)) goto l64;
V117=135;
goto l61;
l66:for(i=V107,V131=0;i>0;i=t[i],V131++)  ;
for(i=V108,V130=0;i>0;i=t[i],V130++)  ;
if((V131!=V130)) goto l62;
V133=V107;
goto l63;
l67:x[jvj+39]=s[x[jvj+51]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+51];
if((x[jvj+39]==250)) goto l68;
pile[v[22]]=jvj+38; pile[WZ1]=jvj+39; 
(*f[68])( );     /*PLUE0(jvj+38,jvj+39)*/
l68:x[jvj+51]=t[x[jvj+51]];
goto l59;
l69:V129=t[V129];
l70:if((V129<=0)) goto l58;
V118=s[V129];
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+40; 
(*f[46])( );     /*TRI0(0,117,jvj+40)*/
V122=V118;
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==V122) goto l74;
l71:pile[v[22]]=117; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(117,jvj+40,V123)*/
V123=pile[WZ2]; 
V120=V123;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+41; 
(*f[46])( );     /*TRI0(0,117,jvj+41)*/
for(a=x[jvj+6];a>0;a=t[a]) if(s[a]==V118) goto l73;
l72:pile[v[22]]=117; pile[WZ1]=jvj+41; 
(*f[26])( );if(v[102]) goto l69;     /*FNDC0(117,jvj+41,V126)*/
V126=pile[WZ2]; 
V119=V126;
if((V120==V119)) goto l69;
V1=134;
goto l58;
l73:pile[v[22]]=jvj+41; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+41,117,1)*/
goto l72;
l74:pile[v[22]]=jvj+40; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+40,117,1)*/
goto l71;
l75:V129=V107;
goto l70;
l76:x[jvj+43]=s[x[jvj+52]] ;z[jvj+43]=(x[jvj+43]<=sepcte) ? x[jvj+43] : z[jvj+52];
if((x[jvj+43]==250)) goto l77;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+43)*/
l77:x[jvj+52]=t[x[jvj+52]];
goto l57;
}
