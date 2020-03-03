#include "dx.h"
void AJEXP0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V20=0,V26=0,V27=0,V=0,V14=0,V13=0,V7=0,V25=0,V22=0,V23=0,V24=0,V19=0,V32=0,V31=0,H=0,V70=0,V74=0,V76=0,V79=0,V78=0,V55=0,V59=0,V61=0,V64=0,V63=0,V49=0,V47=0,V48=0,V46=0;
int P,B;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=40;
x[jvj+1]=10765;z[jvj+1]=(-100);
x[jvj+2]=0;z[jvj+2]=(-101);
if(v[0]>99700) (*f[6])( );
if(v[90]==432&&v[97]==0) {
(*f[4])( ); x[jvj+2]=incon; x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; B=pile[v[22]+1]; v[22]+=2; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
H=incon;
x[jvj+20]=d[45];z[jvj+20]=0;
l21:if((x[jvj+20]>0)) goto l22;
pile[v[22]]=683; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(683,P,V20)*/
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
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(860,P,jvj+4)*/
if((x[jvj+4]!=530)) goto l18;
x[jvj+5]=incon;
if((V20==1)) goto l3;
if((V20==2)) goto l4;
if((V20!=3)) goto l18;
x[jvj+5]=603 ;z[jvj+5]=603;
l2:pile[v[22]]=1002; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(1002,P,jvj+3)*/
l18:pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(109,P,jvj+16)*/
pile[v[22]]=983; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(983,jvj+16,jvj+17)*/
pile[v[22]]=878; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(878,jvj+17,jvj+18)*/
l19:if((x[jvj+18]<=0)) goto l8;
x[jvj+19]=s[x[jvj+18]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+18];
pile[v[22]]=163; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,jvj+19,V32)*/
V32=pile[WZ2]; 
pile[WZ1]=P; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(163,P,V31)*/
V31=pile[WZ2]; 
if((V32==V31)) goto l20;
x[jvj+18]=t[x[jvj+18]];
goto l19;
l1:pile[v[22]]=936; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(936,P,V4)*/
V4=pile[WZ2]; 
pile[v[22]]=1268; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1268,936,V5)*/
V5=pile[WZ2]; 
if(V4>((V5*11)/10)+2) goto l18;
l6:pile[v[22]]=P; pile[WZ1]=1002; pile[WZ2]=jvj+5; 
(*f[35])( );     /*CHGC1(P,1002,jvj+5)*/
goto l18;
l3:x[jvj+5]=607 ;z[jvj+5]=607;
goto l2;
l4:x[jvj+5]=602 ;z[jvj+5]=602;
goto l2;
l7:V13=V14;
l16:pile[v[22]]=V13; 
(*f[40])( );     /*SLG0(V13)*/
l17:x[jvj+1]=incon; x[jvj+2]=incon; v[0]=jvj; v[22]-=2; return;
l10:x[jvj+13]=x[jvj+8] ;z[jvj+13]=z[jvj+8];
pile[v[22]]=P; pile[WZ1]=970; pile[WZ2]=jvj+13; 
(*f[35])( );     /*CHGC1(P,970,jvj+13)*/
if(H!=incon) goto l11;
l15:pile[v[22]]=109; pile[WZ1]=P; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(109,P,jvj+15)*/
V25=x[jvj+15];
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
goto l16;
l11:pile[v[22]]=860; pile[WZ1]=P; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(860,P,jvj+10)*/
x[jvj+11]=vo[12];z[jvj+11]=vz[12];
pile[v[22]]=1056; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[33])( );     /*FNDE0(1056,jvj+11,jvj+12)*/
for(a=x[jvj+12];a>0;a=t[a]) if(s[a]==x[jvj+10]) goto l17;
l12:pile[v[22]]=P; pile[WZ1]=B; pile[WZ2]=jvj+13; pile[WZ3]=jvj+14; 
(*f[791])( );if(v[102]) goto l17;     /*DEJAFAIT0(P,B,jvj+13,jvj+14)*/
if((x[jvj+14]==67)) goto l13;
goto l17;
l13:pile[v[22]]=P; pile[WZ1]=B; pile[WZ2]=jvj+13; 
(*f[792])( );     /*CLASSE0(P,B,jvj+13)*/
pile[WZ1]=924; 
(*f[793])( );if(v[102]) goto l17;     /*AJNUM1(P,924,V7)*/
V7=pile[WZ2]; 
pile[WZ1]=jvj+13; 
(*f[525])( );     /*SOREXP0(P,jvj+13)*/
V19=vv[21];
if((V19<=0)) goto l17;
pile[v[22]]=43; pile[WZ1]=32; 
(*f[139])( );     /*EDITE1(43,32)*/
goto l17;
l14:if(H==incon) goto l15;
goto l17;
l20:H=x[jvj+19];
l8:pile[v[22]]=860; pile[WZ1]=P; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(860,P,jvj+6)*/
x[jvj+7]=d[24];z[jvj+7]=0;
l9:if((x[jvj+7]<=0)) goto l14;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=1246; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(1246,jvj+8,jvj+9)*/
for(a=x[jvj+9];a>0;a=t[a]) if(s[a]==x[jvj+6]) goto l10;
x[jvj+7]=t[x[jvj+7]];
goto l9;
l22:x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=jvj+21; pile[WZ1]=P; pile[WZ2]=jvj+22; 
(*f[33])( );     /*FNDE0(jvj+21,P,jvj+22)*/
x[jvj+39]=x[jvj+22] ;z[jvj+39]=z[jvj+22];
l23:if((x[jvj+39]>0)) goto l24;
x[jvj+20]=t[x[jvj+20]];
goto l21;
l24:x[jvj+23]=s[x[jvj+39]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+39];
pile[v[22]]=122; pile[WZ1]=jvj+23; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(122,jvj+23,jvj+24)*/
x[jvj+40]=t[x[jvj+39]];
l25:if((x[jvj+40]<=0)) goto l71;
x[jvj+25]=s[x[jvj+40]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+40];
pile[v[22]]=122; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l38;     /*FNDO0(122,jvj+25,jvj+26)*/
if((x[jvj+24]!=x[jvj+26])) goto l38;
V70=x[jvj+28]=V74=x[jvj+30]=V46=V78=V79=x[jvj+32]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+23; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(145,jvj+23,jvj+27)*/
pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(145,jvj+25,jvj+28)*/
V70=x[jvj+27];
l26:pile[v[22]]=218; pile[WZ1]=jvj+23; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(218,jvj+23,jvj+29)*/
pile[WZ1]=jvj+25; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(218,jvj+25,jvj+30)*/
V74=x[jvj+29];
l27:if(V70!=incon) goto l70;
l28:pile[v[22]]=122; pile[WZ1]=jvj+23; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(122,jvj+23,jvj+31)*/
pile[v[22]]=550; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(550,jvj+31,jvj+32)*/
l29:pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,jvj+23,V76)*/
V76=pile[WZ2]; 
pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(117,jvj+25,V79)*/
V79=pile[WZ2]; 
V78=V76;
l30:if(V46==incon) goto l62;
l31:if((V46==68)) goto l40;
if((V46!=67)) goto l38;
V55=x[jvj+34]=V59=x[jvj+36]=V48=V63=V64=x[jvj+38]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+25; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(145,jvj+25,jvj+33)*/
pile[WZ1]=jvj+23; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(145,jvj+23,jvj+34)*/
V55=x[jvj+33];
l32:pile[v[22]]=218; pile[WZ1]=jvj+25; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(218,jvj+25,jvj+35)*/
pile[WZ1]=jvj+23; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(218,jvj+23,jvj+36)*/
V59=x[jvj+35];
l33:if(V55!=incon) goto l55;
l34:pile[v[22]]=122; pile[WZ1]=jvj+25; pile[WZ2]=jvj+37; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(122,jvj+25,jvj+37)*/
pile[v[22]]=550; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l35;     /*FNDO0(550,jvj+37,jvj+38)*/
l35:pile[v[22]]=117; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(117,jvj+25,V61)*/
V61=pile[WZ2]; 
pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l36;     /*FNDC0(117,jvj+23,V64)*/
V64=pile[WZ2]; 
V63=V61;
l36:if(V48==incon) goto l47;
l37:if((V48==68)) goto l39;
l38:x[jvj+40]=t[x[jvj+40]];
goto l25;
l39:V49=x[jvj+23];
pile[v[22]]=jvj+21; pile[WZ1]=P; pile[WZ2]=V49; 
(*f[134])( );     /*OTA0(jvj+21,P,V49)*/
goto l38;
l40:V47=x[jvj+25];
pile[v[22]]=jvj+21; pile[WZ1]=P; pile[WZ2]=V47; 
(*f[134])( );     /*OTA0(jvj+21,P,V47)*/
goto l38;
l41:V48=68;
goto l37;
l43:if(V64!=incon) goto l44;
l42:V48=67;
goto l37;
l44:if((V55!=x[jvj+34])) goto l42;
if((V63==V64)) goto l41;
if(x[jvj+38]!=incon) goto l50;
goto l42;
l45:if(V63!=incon) goto l43;
goto l42;
l46:if(x[jvj+34]!=incon) goto l45;
goto l42;
l47:if(V55!=incon) goto l46;
goto l42;
l48:if(V55==29||V55==30||V55==996) goto l41;
goto l42;
l49:if((V63<V64)) goto l48;
if(V55==27||V55==28||V55==995) goto l41;
if((V63<=V64)) goto l48;
goto l42;
l50:if((x[jvj+38]==36)) goto l49;
if((x[jvj+38]!=52)) goto l42;
if((V63>V64)) goto l51;
if(V55==27||V55==28||V55==995) goto l41;
if((V63>=V64)) goto l51;
goto l42;
l51:if(V55==29||V55==30||V55==996) goto l41;
goto l42;
l52:if((V55!=x[jvj+34])) goto l34;
if((V59!=x[jvj+36])) goto l34;
V48=68;
goto l34;
l53:if(x[jvj+36]!=incon) goto l52;
goto l34;
l54:if(V59!=incon) goto l53;
goto l34;
l55:if(x[jvj+34]!=incon) goto l54;
goto l34;
l56:V46=68;
goto l31;
l58:if(V79!=incon) goto l59;
l57:V46=67;
goto l31;
l59:if((V70!=x[jvj+28])) goto l57;
if((V78==V79)) goto l56;
if(x[jvj+32]!=incon) goto l65;
goto l57;
l60:if(V78!=incon) goto l58;
goto l57;
l61:if(x[jvj+28]!=incon) goto l60;
goto l57;
l62:if(V70!=incon) goto l61;
goto l57;
l63:if(V70==29||V70==30||V70==996) goto l56;
goto l57;
l64:if((V78<V79)) goto l63;
if(V70==27||V70==28||V70==995) goto l56;
if((V78<=V79)) goto l63;
goto l57;
l65:if((x[jvj+32]==36)) goto l64;
if((x[jvj+32]!=52)) goto l57;
if((V78>V79)) goto l66;
if(V70==27||V70==28||V70==995) goto l56;
if((V78>=V79)) goto l66;
goto l57;
l66:if(V70==29||V70==30||V70==996) goto l56;
goto l57;
l67:if((V70!=x[jvj+28])) goto l28;
if((V74!=x[jvj+30])) goto l28;
V46=68;
goto l28;
l68:if(x[jvj+30]!=incon) goto l67;
goto l28;
l69:if(V74!=incon) goto l68;
goto l28;
l70:if(x[jvj+28]!=incon) goto l69;
goto l28;
l71:x[jvj+39]=t[x[jvj+39]];
goto l23;
}
