#include "dx.h"
void AJEXP2(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V20=0,V26=0,V27=0,V=0,V14=0,V13=0,V25=0,V22=0,V23=0,V24=0,V19=0,V32=0,V31=0,H=0,V70=0,V74=0,V76=0,V79=0,V78=0,V55=0,V59=0,V61=0,V64=0,V63=0,V49=0,V47=0,V48=0,V46=0;
int P;
int R;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=41;
x[jvj+1]=10765;z[jvj+1]=(-100);
x[jvj+2]=2;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==1262&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
H=x[jvj+14]=R=incon;
x[jvj+21]=d[45];z[jvj+21]=0;
l26:if((x[jvj+21]>0)) goto l27;
pile[v[22]]=683; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(683,P,V20)*/
V20=pile[WZ2]; 
if((V20!=4)) goto l5;
pile[v[22]]=20; pile[WZ1]=10765; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10765,0,V26)*/
V26=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V26; pile[WZ2]=683; 
(*f[42])( );     /*SRA1(135,V26,683,V27)*/
V27=pile[WZ3]; 
pile[v[22]]=V27; 
(*f[40])( );     /*SLG0(V27)*/
pile[v[22]]=10765; pile[WZ1]=v[0]; 
(*f[16])( );     /*DERNIERBLOC0(10765,v[0])*/
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
l5:pile[v[22]]=860; pile[WZ1]=P; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(860,P,jvj+4)*/
if((x[jvj+4]!=530)) goto l23;
x[jvj+5]=incon;
if((V20==1)) goto l3;
if((V20==2)) goto l4;
if((V20!=3)) goto l23;
x[jvj+5]=603 ;z[jvj+5]=603;
l2:pile[v[22]]=1002; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1002,P,jvj+3)*/
l23:pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,P,jvj+17)*/
pile[v[22]]=983; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+17,jvj+18)*/
pile[v[22]]=878; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(878,jvj+18,jvj+19)*/
l24:if((x[jvj+19]<=0)) goto l8;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
pile[v[22]]=163; pile[WZ1]=jvj+20; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+20,V32)*/
V32=pile[WZ2]; 
pile[WZ1]=P; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,P,V31)*/
V31=pile[WZ2]; 
if((V32==V31)) goto l25;
x[jvj+19]=t[x[jvj+19]];
goto l24;
l1:pile[v[22]]=936; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(936,P,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1268,936,V5)*/
V5=pile[WZ2]; 
if(V4>((V5*11)/10)+2) goto l23;
l6:pile[v[22]]=P; pile[WZ1]=1002; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(P,1002,jvj+5)*/
goto l23;
l3:x[jvj+5]=607 ;z[jvj+5]=607;
goto l2;
l4:x[jvj+5]=602 ;z[jvj+5]=602;
goto l2;
l7:V13=V14;
l18:pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l19:if(R!=incon) goto l20;
l21:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l10:x[jvj+14]=x[jvj+8] ;z[jvj+14]=z[jvj+8];
l12:if(H!=incon) goto l13;
if(x[jvj+14]!=incon) goto l16;
l17:pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l19;     /*FNDO0(109,P,jvj+16)*/
V25=x[jvj+16];
pile[v[22]]=20; pile[WZ1]=10765; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,10765,0,V22)*/
V22=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V22; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,V22,126,V23)*/
V23=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V23; pile[WZ2]=300; 
(*f[42])( );     /*SRA1(135,V23,300,V24)*/
V24=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V25; pile[WZ2]=V24; 
(*f[39])( );     /*SDX0(20,V25,V24,V14)*/
V14=pile[WZ3]; 
V13=incon;
pile[v[22]]=163; pile[WZ1]=P; 
(*f[44])( );if(v[102]) goto l7;     /*FNDC1(163,P,V)*/
V=pile[WZ2]; 
pile[v[22]]=V14; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V14,V,V13)*/
V13=pile[WZ2]; 
goto l18;
l11:pile[v[22]]=860; pile[WZ1]=P; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(860,P,jvj+10)*/
x[jvj+11]=vo[12];z[jvj+11]=vz[12];
pile[v[22]]=1056; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1056,jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l16;
l14:pile[v[22]]=P; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; pile[WZ3]=jvj+15; 
(*f[791])( );if(v[102]) goto l16;     /*DEJAFAIT0(P,jvj+13,jvj+14,jvj+15)*/
if((x[jvj+15]==67)) goto l15;
l16:pile[v[22]]=P; pile[WZ1]=970; pile[WZ2]=jvj+14; 
(*f[35])( );     /*CHGC1(P,970,jvj+14)*/
if(H==incon) goto l17;
goto l19;
l13:if(x[jvj+14]!=incon) goto l11;
goto l21;
l15:pile[v[22]]=P; pile[WZ1]=jvj+13; pile[WZ2]=jvj+14; 
(*f[792])( );     /*CLASSE0(P,jvj+13,jvj+14)*/
pile[WZ1]=924; 
(*f[793])( );if(v[102]) goto l16;     /*AJNUM1(P,924,R)*/
R=pile[WZ2]; 
pile[WZ1]=jvj+14; 
(*f[525])( );     /*SOREXP0(P,jvj+14)*/
goto l16;
l20:V19=vv[21];
if((V19<=0)) goto l22;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
l22:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; pile[v[22]+1]=R; v[102]=0;return;
l25:H=x[jvj+20];
l8:x[jvj+13]=250 ;z[jvj+13]=250;
pile[v[22]]=860; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(860,P,jvj+6)*/
x[jvj+7]=d[24];z[jvj+7]=0;
l9:if((x[jvj+7]<=0)) goto l12;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=1246; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1246,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l10;
x[jvj+7]=t[x[jvj+7]];
goto l9;
l27:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=jvj+22; pile[WZ1]=P; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(jvj+22,P,jvj+23)*/
x[jvj+40]=x[jvj+23] ;z[jvj+40]=z[jvj+23];
l28:if((x[jvj+40]>0)) goto l29;
x[jvj+21]=t[x[jvj+21]];
goto l26;
l29:x[jvj+24]=s[x[jvj+40]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+40];
pile[v[22]]=122; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(122,jvj+24,jvj+25)*/
x[jvj+41]=t[x[jvj+40]];
l30:if((x[jvj+41]<=0)) goto l76;
x[jvj+26]=s[x[jvj+41]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+41];
pile[v[22]]=122; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l43;     /*FNDO0(122,jvj+26,jvj+27)*/
if((x[jvj+25]!=x[jvj+27])) goto l43;
V70=x[jvj+29]=V74=x[jvj+31]=V46=V78=V79=x[jvj+33]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+24; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(145,jvj+24,jvj+28)*/
pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(145,jvj+26,jvj+29)*/
V70=x[jvj+28];
l31:pile[v[22]]=218; pile[WZ1]=jvj+24; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(218,jvj+24,jvj+30)*/
pile[WZ1]=jvj+26; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(218,jvj+26,jvj+31)*/
V74=x[jvj+30];
l32:if(V70!=incon) goto l75;
l33:pile[v[22]]=122; pile[WZ1]=jvj+24; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(122,jvj+24,jvj+32)*/
pile[v[22]]=550; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l34;     /*FNDO0(550,jvj+32,jvj+33)*/
l34:pile[v[22]]=117; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+24,V76)*/
V76=pile[WZ2]; 
pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l35;     /*FNDC0(117,jvj+26,V79)*/
V79=pile[WZ2]; 
V78=V76;
l35:if(V46==incon) goto l67;
l36:if((V46==68)) goto l45;
if((V46!=67)) goto l43;
V55=x[jvj+35]=V59=x[jvj+37]=V48=V63=V64=x[jvj+39]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+26; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(145,jvj+26,jvj+34)*/
pile[WZ1]=jvj+24; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l37;     /*FNDO0(145,jvj+24,jvj+35)*/
V55=x[jvj+34];
l37:pile[v[22]]=218; pile[WZ1]=jvj+26; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(218,jvj+26,jvj+36)*/
pile[WZ1]=jvj+24; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(218,jvj+24,jvj+37)*/
V59=x[jvj+36];
l38:if(V55!=incon) goto l60;
l39:pile[v[22]]=122; pile[WZ1]=jvj+26; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(122,jvj+26,jvj+38)*/
pile[v[22]]=550; pile[WZ1]=jvj+38; pile[WZ2]=jvj+39; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(550,jvj+38,jvj+39)*/
l40:pile[v[22]]=117; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(117,jvj+26,V61)*/
V61=pile[WZ2]; 
pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(117,jvj+24,V64)*/
V64=pile[WZ2]; 
V63=V61;
l41:if(V48==incon) goto l52;
l42:if((V48==68)) goto l44;
l43:x[jvj+41]=t[x[jvj+41]];
goto l30;
l44:V49=x[jvj+24];
pile[v[22]]=jvj+22; pile[WZ1]=P; pile[WZ2]=V49; 
(*f[134])( );     /*OTA0(jvj+22,P,V49)*/
goto l43;
l45:V47=x[jvj+26];
pile[v[22]]=jvj+22; pile[WZ1]=P; pile[WZ2]=V47; 
(*f[134])( );     /*OTA0(jvj+22,P,V47)*/
goto l43;
l46:V48=68;
goto l42;
l48:if(V64!=incon) goto l49;
l47:V48=67;
goto l42;
l49:if((V55!=x[jvj+35])) goto l47;
if((V63==V64)) goto l46;
if(x[jvj+39]!=incon) goto l55;
goto l47;
l50:if(V63!=incon) goto l48;
goto l47;
l51:if(x[jvj+35]!=incon) goto l50;
goto l47;
l52:if(V55!=incon) goto l51;
goto l47;
l53:if(V55==29||V55==30||V55==996) goto l46;
goto l47;
l54:if((V63<V64)) goto l53;
if(V55==27||V55==28||V55==995) goto l46;
if((V63<=V64)) goto l53;
goto l47;
l55:if((x[jvj+39]==36)) goto l54;
if((x[jvj+39]!=52)) goto l47;
if((V63>V64)) goto l56;
if(V55==27||V55==28||V55==995) goto l46;
if((V63>=V64)) goto l56;
goto l47;
l56:if(V55==29||V55==30||V55==996) goto l46;
goto l47;
l57:if((V55!=x[jvj+35])) goto l39;
if((V59!=x[jvj+37])) goto l39;
V48=68;
goto l39;
l58:if(x[jvj+37]!=incon) goto l57;
goto l39;
l59:if(V59!=incon) goto l58;
goto l39;
l60:if(x[jvj+35]!=incon) goto l59;
goto l39;
l61:V46=68;
goto l36;
l63:if(V79!=incon) goto l64;
l62:V46=67;
goto l36;
l64:if((V70!=x[jvj+29])) goto l62;
if((V78==V79)) goto l61;
if(x[jvj+33]!=incon) goto l70;
goto l62;
l65:if(V78!=incon) goto l63;
goto l62;
l66:if(x[jvj+29]!=incon) goto l65;
goto l62;
l67:if(V70!=incon) goto l66;
goto l62;
l68:if(V70==29||V70==30||V70==996) goto l61;
goto l62;
l69:if((V78<V79)) goto l68;
if(V70==27||V70==28||V70==995) goto l61;
if((V78<=V79)) goto l68;
goto l62;
l70:if((x[jvj+33]==36)) goto l69;
if((x[jvj+33]!=52)) goto l62;
if((V78>V79)) goto l71;
if(V70==27||V70==28||V70==995) goto l61;
if((V78>=V79)) goto l71;
goto l62;
l71:if(V70==29||V70==30||V70==996) goto l61;
goto l62;
l72:if((V70!=x[jvj+29])) goto l33;
if((V74!=x[jvj+31])) goto l33;
V46=68;
goto l33;
l73:if(x[jvj+31]!=incon) goto l72;
goto l33;
l74:if(V74!=incon) goto l73;
goto l33;
l75:if(x[jvj+29]!=incon) goto l74;
goto l33;
l76:x[jvj+40]=t[x[jvj+40]];
goto l28;
}
