#include "dx.h"
void STOPOUENCORE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V1=0,NS=0,SS=0,V7=0,V8=0,V10=0,V12=0,V13=0,V3=0,NA=0,SA=0,V15=0,V19=0,V25=0,V9=0,V11=0,V16=0,V20=0,V22=0,V21=0,V26=0,V27=0,V14=0,V30=0,V52=0,V53=0,V54=0,V55=0,V56=0,V57=0,V58=0,V60=0,V62=0,V64=0,V29=0,V34=0,V44=0,V42=0,V41=0,V36=0,V67=0,V68=0,V69=0,V70=0,V71=0,V72=0,V35=0,V47=0,V81=0,V83=0,V75=0,V76=0,V77=0,V78=0,V79=0,V80=0,V82=0,V84=0,V86=0,V88=0,V90=0,V46=0,V128=0,V132=0,V134=0,V137=0,V136=0,V113=0,V117=0,V119=0,V122=0,V121=0,V107=0,V105=0,V106=0,V104=0,V171=0,V175=0,V177=0,V180=0,V179=0,V156=0,V160=0,V162=0,V165=0,V164=0,V150=0,V148=0,V149=0,V147=0;
int P,AA;
int SM;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=57;
x[jvj+1]=10908;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==947&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; AA=pile[v[22]+1]; SM=pile[v[22]+2]; v[22]+=3; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
SS=NS=SA=NA=incon;
pile[v[22]]=493; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(493,P,V1)*/
V1=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(936,P,NS)*/
NS=pile[WZ2]; 
SS=V1;
l5:x[jvj+2]=vo[14];z[jvj+2]=vz[14];
pile[v[22]]=493; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(493,jvj+2,V3)*/
V3=pile[WZ2]; 
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(936,jvj+2,NA)*/
NA=pile[WZ2]; 
SA=V3;
l9:if(SS!=incon) goto l10;
if(NS!=incon) goto l15;
l41:x[SM]=12 ;z[SM]=12;
l54:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:pile[v[22]]=945; pile[WZ1]=493; 
(*f[26])( );if(v[102]) goto l2;     /*FNDC0(945,493,V7)*/
V7=pile[WZ2]; 
if(SS>((V7*11)/10)+2) goto l12;
l2:pile[v[22]]=945; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(945,936,V8)*/
V8=pile[WZ2]; 
if(NS>((V8*11)/10)+2) goto l12;
l11:x[jvj+9]=68 ;z[jvj+9]=68;
l55:pile[v[22]]=27; pile[WZ1]=145; pile[WZ2]=jvj+12; 
(*f[54])( );     /*TRI1(27,145,jvj+12)*/
pile[v[22]]=117; pile[WZ1]=AA; pile[WZ2]=122; pile[WZ3]=1005; pile[WZ4]=jvj+12; pile[WZ5]=jvj+4; 
(*f[725])( );     /*QUADRI14(117,AA,122,1005,jvj+12,jvj+4)*/
pile[v[22]]=P; pile[WZ1]=1080; pile[WZ2]=jvj+4; 
(*f[36])( );     /*PLUSC0(P,1080,jvj+4)*/
if(SA!=incon) goto l37;
l38:x[jvj+53]=incon;
pile[v[22]]=1058; pile[WZ1]=994; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(1058,994,V44)*/
V44=pile[WZ2]; 
x[jvj+7]=vo[14];z[jvj+7]=vz[14];
pile[v[22]]=1009; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l39;     /*FNDC0(1009,jvj+7,V42)*/
V42=pile[WZ2]; 
V41=V42+NS;
if((V41<=V44)) goto l39;
x[jvj+53]=12 ;z[jvj+53]=12;
l40:x[SM]=x[jvj+53] ;z[SM]=z[jvj+53];
if((x[SM]!=12)) goto l50;
x[jvj+11]=vo[12];z[jvj+11]=vz[12];
x[jvj+34]=d[45];z[jvj+34]=0;
l108:if((x[jvj+34]>0)) goto l109;
pile[v[22]]=jvj+11; 
(*f[183])( );     /*ENLEVENATTENTE0(jvj+11)*/
pile[v[22]]=P; 
(*f[554])( );     /*AJEXP1(P)*/
l50:if(SS!=incon) goto l51;
l53:if((x[SM]!=120)) goto l54;
vo[12]=x[P];vz[12]=0;
x[jvj+15]=d[45];z[jvj+15]=0;
l57:if((x[jvj+15]>0)) goto l58;
V35=g[538];
if((V35<=0)) goto l45;
V36=vg[538];
if((V36!=0)) goto l42;
if((V35<3)) goto l44;
l42:pile[v[22]]=538; pile[WZ1]=10908; pile[WZ2]=0; pile[WZ3]=(-597); pile[WZ4]=AA; pile[WZ5]=jvj+8; 
(*f[612])( );     /*INTERP9(538,10908,0,(-597),AA,jvj+8)*/
if((x[jvj+8]==135)) goto l43;
l45:pile[v[22]]=P; 
(*f[1255])( );     /*SOREXP1(P)*/
goto l54;
l7:V19=NS;
l22:if(NS>((V20*11)/10)+2) goto l23;
l6:pile[v[22]]=1163; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(1163,936,V15)*/
V15=pile[WZ2]; 
if(NS>((V15*11)/10)+2) goto l32;
l26:pile[v[22]]=945; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(945,936,V14)*/
V14=pile[WZ2]; 
if(NS>((V14*11)/10)+2) goto l11;
l32:if(SS!=incon) goto l31;
goto l41;
l8:V25=NS;
l24:if(NS>((V26*11)/10)+2) goto l25;
goto l6;
l10:if(NS!=incon) goto l1;
l31:pile[v[22]]=945; pile[WZ1]=493; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(945,493,V34)*/
V34=pile[WZ2]; 
if(SS>((V34*11)/10)+2) goto l34;
l33:pile[v[22]]=936; 
(*f[1253])( );     /*TENTEINHIBE0(936)*/
(*f[1254])( );     /*TENTEBT0()*/
l34:if(NS!=incon) goto l35;
goto l41;
l12:if((AA<800)) goto l15;
pile[v[22]]=945; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l13;     /*FNDC0(945,936,V10)*/
V10=pile[WZ2]; 
if(NS>((V10*11)/10)+2) goto l3;
l13:pile[v[22]]=945; pile[WZ1]=493; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(945,493,V9)*/
V9=pile[WZ2]; 
if(SS>((V9*11)/10)+2) goto l11;
l3:pile[v[22]]=945; pile[WZ1]=493; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(945,493,V12)*/
V12=pile[WZ2]; 
if(SS>((V12*11)/10)+2) goto l15;
l4:pile[v[22]]=1163; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1163,936,V13)*/
V13=pile[WZ2]; 
if(NS>((V13*11)/10)+2) goto l15;
l14:pile[v[22]]=945; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(945,936,V11)*/
V11=pile[WZ2]; 
if(NS>((V11*11)/10)+2) goto l11;
l15:if(SA!=incon) goto l16;
goto l32;
l16:if(NA!=incon) goto l17;
if((SA==0)) goto l20;
goto l32;
l17:if((SA!=0)) goto l32;
if((AA<900)) goto l6;
pile[v[22]]=1163; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(1163,936,V16)*/
V16=pile[WZ2]; 
if(NS>((V16*11)/10)+2) goto l18;
l20:if((AA<950)) goto l6;
if((AA<980)) goto l21;
if((AA<=980)) goto l6;
pile[v[22]]=1163; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1163,936,V26)*/
V26=pile[WZ2]; 
V27=2*V26;
V25=incon;
if((NS<=V27)) goto l8;
V25=V27;
goto l24;
l18:if(NA<((V16*9)/10)-2) goto l19;
goto l20;
l19:x[jvj+9]=68 ;z[jvj+9]=68;
pile[v[22]]=P; pile[WZ1]=936; pile[WZ2]=V16; 
(*f[43])( );     /*CHGC2(P,936,V16)*/
goto l55;
l21:pile[v[22]]=1163; pile[WZ1]=936; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1163,936,V20)*/
V20=pile[WZ2]; 
V22=V20*14;
V21=V22/10;
V19=incon;
if((NS<=V21)) goto l7;
V19=V21;
goto l22;
l23:x[jvj+9]=68 ;z[jvj+9]=68;
pile[v[22]]=P; pile[WZ1]=936; pile[WZ2]=V19; 
(*f[43])( );     /*CHGC2(P,936,V19)*/
goto l55;
l25:x[jvj+9]=68 ;z[jvj+9]=68;
pile[v[22]]=P; pile[WZ1]=936; pile[WZ2]=V25; 
(*f[43])( );     /*CHGC2(P,936,V25)*/
goto l55;
l28:if((V29<4)) goto l29;
goto l41;
l29:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V52; pile[WZ2]=10908; 
(*f[98])( );     /*SRA3(135,V52,10908,V53)*/
V53=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=2; pile[WZ2]=V53; 
(*f[39])( );     /*SDX0(41,2,V53,V54)*/
V54=pile[WZ3]; 
pile[v[22]]=V54; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V54,125,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=10; pile[WZ1]=V55; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(10,V55,43,V56)*/
V56=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V56; pile[WZ2]=12; 
(*f[42])( );     /*SRA1(135,V56,12,V57)*/
V57=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=SA; pile[WZ2]=V57; 
(*f[39])( );     /*SDX0(41,SA,V57,V58)*/
V58=pile[WZ3]; 
pile[WZ1]=NA; pile[WZ2]=V58; 
(*f[39])( );     /*SDX0(41,NA,V58,V60)*/
V60=pile[WZ3]; 
pile[WZ1]=SS; pile[WZ2]=V60; 
(*f[39])( );     /*SDX0(41,SS,V60,V62)*/
V62=pile[WZ3]; 
pile[WZ1]=NS; pile[WZ2]=V62; 
(*f[39])( );     /*SDX0(41,NS,V62,V64)*/
V64=pile[WZ3]; 
pile[v[22]]=V64; 
(*f[40])( );     /*SLG0(V64)*/
if((V29!=2)) goto l41;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l41;
l30:V29=g[536];
if((V29<=0)) goto l41;
V30=vg[536];
if((V30!=0)) goto l27;
if((V29<3)) goto l29;
l27:pile[v[22]]=536; pile[WZ1]=10908; pile[WZ2]=0; pile[WZ3]=(-4589); pile[WZ4]=SA; pile[WZ5]=(-3085); pile[v[22]+6]=NA; pile[v[22]+7]=jvj+3; 
(*f[1256])( );     /*INTERP12(536,10908,0,(-4589),SA,(-3085),NA,jvj+3)*/
if((x[jvj+3]==135)) goto l28;
goto l41;
l35:if(SA!=incon) goto l36;
goto l41;
l36:if(NA!=incon) goto l30;
goto l41;
l37:if((SA>0)) goto l56;
if((SA!=0)) goto l38;
pile[v[22]]=27; pile[WZ1]=145; pile[WZ2]=jvj+14; 
(*f[54])( );     /*TRI1(27,145,jvj+14)*/
pile[v[22]]=117; pile[WZ1]=0; pile[WZ2]=122; pile[WZ3]=493; pile[WZ4]=jvj+14; pile[WZ5]=jvj+6; 
(*f[725])( );     /*QUADRI14(117,0,122,493,jvj+14,jvj+6)*/
pile[v[22]]=P; pile[WZ1]=1042; pile[WZ2]=jvj+6; 
(*f[36])( );     /*PLUSC0(P,1042,jvj+6)*/
goto l38;
l39:x[jvj+53]=120 ;z[jvj+53]=120;
goto l40;
l43:if((V35<4)) goto l44;
goto l45;
l44:pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V67; pile[WZ2]=10908; 
(*f[98])( );     /*SRA3(135,V67,10908,V68)*/
V68=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=3; pile[WZ2]=V68; 
(*f[39])( );     /*SDX0(41,3,V68,V69)*/
V69=pile[WZ3]; 
pile[v[22]]=V69; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V69,125,V70)*/
V70=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V70; pile[WZ2]=1005; 
(*f[42])( );     /*SRA1(135,V70,1005,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=AA; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(41,AA,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=V72; 
(*f[40])( );     /*SLG0(V72)*/
if((V35!=2)) goto l45;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l45;
l47:if((V46<4)) goto l48;
goto l53;
l48:V81=x[jvj+9];
V83=x[SM];
pile[v[22]]=0; pile[WZ1]=123; 
(*f[38])( );     /*SPC0(0,123,V75)*/
V75=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V75; pile[WZ2]=10908; 
(*f[98])( );     /*SRA3(135,V75,10908,V76)*/
V76=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=1; pile[WZ2]=V76; 
(*f[39])( );     /*SDX0(41,1,V76,V77)*/
V77=pile[WZ3]; 
pile[v[22]]=V77; pile[WZ1]=125; 
(*f[38])( );     /*SPC0(V77,125,V78)*/
V78=pile[WZ2]; 
pile[v[22]]=16; pile[WZ1]=V78; pile[WZ2]=43; 
(*f[41])( );     /*SRB0(16,V78,43,V79)*/
V79=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V81; pile[WZ2]=V79; 
(*f[39])( );     /*SDX0(20,V81,V79,V80)*/
V80=pile[WZ3]; 
pile[WZ1]=V83; pile[WZ2]=V80; 
(*f[39])( );     /*SDX0(20,V83,V80,V82)*/
V82=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=SA; pile[WZ2]=V82; 
(*f[39])( );     /*SDX0(41,SA,V82,V84)*/
V84=pile[WZ3]; 
pile[WZ1]=NA; pile[WZ2]=V84; 
(*f[39])( );     /*SDX0(41,NA,V84,V86)*/
V86=pile[WZ3]; 
pile[WZ1]=SS; pile[WZ2]=V86; 
(*f[39])( );     /*SDX0(41,SS,V86,V88)*/
V88=pile[WZ3]; 
pile[WZ1]=NS; pile[WZ2]=V88; 
(*f[39])( );     /*SDX0(41,NS,V88,V90)*/
V90=pile[WZ3]; 
pile[v[22]]=V90; 
(*f[40])( );     /*SLG0(V90)*/
if((V46!=2)) goto l53;
pile[v[22]]=(-1); 
(*f[23])( );     /*EDITE0((-1))*/
goto l53;
l49:V46=g[537];
if((V46<=0)) goto l53;
V47=vg[537];
if((V47!=0)) goto l46;
if((V46<3)) goto l48;
l46:pile[v[22]]=537; pile[WZ1]=10908; pile[WZ2]=0; pile[WZ3]=(-2823); pile[WZ4]=jvj+9; pile[WZ5]=(-13); pile[v[22]+6]=SM; pile[v[22]+7]=(-4589); pile[v[22]+8]=SA; pile[v[22]+9]=(-3085); pile[v[22]+10]=NA; pile[v[22]+11]=jvj+10; 
(*f[1257])( );     /*INTERP13(537,10908,0,(-2823),jvj+9,(-13),SM,(-4589),SA,(-3085),NA,jvj+10)*/
if((x[jvj+10]==135)) goto l47;
goto l53;
l51:if(SA!=incon) goto l52;
goto l53;
l52:if(NA!=incon) goto l49;
goto l53;
l56:pile[v[22]]=547; pile[WZ1]=218; pile[WZ2]=jvj+13; 
(*f[54])( );     /*TRI1(547,218,jvj+13)*/
pile[v[22]]=122; pile[WZ1]=935; pile[WZ2]=145; pile[WZ3]=25; pile[WZ4]=jvj+13; pile[WZ5]=jvj+5; 
(*f[269])( );     /*QUADRI6(122,935,145,25,jvj+13,jvj+5)*/
pile[v[22]]=P; pile[WZ1]=999; pile[WZ2]=jvj+5; 
(*f[36])( );     /*PLUSC0(P,999,jvj+5)*/
goto l38;
l58:x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=P; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(jvj+16,P,jvj+17)*/
x[jvj+54]=x[jvj+17] ;z[jvj+54]=z[jvj+17];
l59:if((x[jvj+54]>0)) goto l60;
x[jvj+15]=t[x[jvj+15]];
goto l57;
l60:x[jvj+18]=s[x[jvj+54]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+54];
pile[v[22]]=122; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l107;     /*FNDO0(122,jvj+18,jvj+19)*/
x[jvj+55]=t[x[jvj+54]];
l61:if((x[jvj+55]<=0)) goto l107;
x[jvj+20]=s[x[jvj+55]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+55];
pile[v[22]]=122; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(122,jvj+20,jvj+21)*/
if((x[jvj+19]!=x[jvj+21])) goto l74;
V128=x[jvj+23]=V132=x[jvj+25]=V104=V136=V137=x[jvj+27]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+18; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(145,jvj+18,jvj+22)*/
pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l62;     /*FNDO0(145,jvj+20,jvj+23)*/
V128=x[jvj+22];
l62:pile[v[22]]=218; pile[WZ1]=jvj+18; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(218,jvj+18,jvj+24)*/
pile[WZ1]=jvj+20; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(218,jvj+20,jvj+25)*/
V132=x[jvj+24];
l63:if(V128!=incon) goto l106;
l64:pile[v[22]]=122; pile[WZ1]=jvj+18; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(122,jvj+18,jvj+26)*/
pile[v[22]]=550; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(550,jvj+26,jvj+27)*/
l65:pile[v[22]]=117; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(117,jvj+18,V134)*/
V134=pile[WZ2]; 
pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(117,jvj+20,V137)*/
V137=pile[WZ2]; 
V136=V134;
l66:if(V104==incon) goto l98;
l67:if((V104==68)) goto l76;
if((V104!=67)) goto l74;
V113=x[jvj+29]=V117=x[jvj+31]=V106=V121=V122=x[jvj+33]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+20; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(145,jvj+20,jvj+28)*/
pile[WZ1]=jvj+18; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(145,jvj+18,jvj+29)*/
V113=x[jvj+28];
l68:pile[v[22]]=218; pile[WZ1]=jvj+20; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(218,jvj+20,jvj+30)*/
pile[WZ1]=jvj+18; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l69;     /*FNDO0(218,jvj+18,jvj+31)*/
V117=x[jvj+30];
l69:if(V113!=incon) goto l91;
l70:pile[v[22]]=122; pile[WZ1]=jvj+20; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(122,jvj+20,jvj+32)*/
pile[v[22]]=550; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(550,jvj+32,jvj+33)*/
l71:pile[v[22]]=117; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(117,jvj+20,V119)*/
V119=pile[WZ2]; 
pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(117,jvj+18,V122)*/
V122=pile[WZ2]; 
V121=V119;
l72:if(V106==incon) goto l83;
l73:if((V106==68)) goto l75;
l74:x[jvj+55]=t[x[jvj+55]];
goto l61;
l75:V107=x[jvj+18];
pile[v[22]]=jvj+16; pile[WZ1]=P; pile[WZ2]=V107; 
(*f[134])( );     /*OTA0(jvj+16,P,V107)*/
goto l74;
l76:V105=x[jvj+20];
pile[v[22]]=jvj+16; pile[WZ1]=P; pile[WZ2]=V105; 
(*f[134])( );     /*OTA0(jvj+16,P,V105)*/
goto l74;
l77:V106=68;
goto l73;
l79:if(V122!=incon) goto l80;
l78:V106=67;
goto l73;
l80:if((V113!=x[jvj+29])) goto l78;
if((V121==V122)) goto l77;
if(x[jvj+33]!=incon) goto l86;
goto l78;
l81:if(V121!=incon) goto l79;
goto l78;
l82:if(x[jvj+29]!=incon) goto l81;
goto l78;
l83:if(V113!=incon) goto l82;
goto l78;
l84:if(V113==29||V113==30||V113==996) goto l77;
goto l78;
l85:if((V121<V122)) goto l84;
if(V113==27||V113==28||V113==995) goto l77;
if((V121<=V122)) goto l84;
goto l78;
l86:if((x[jvj+33]==36)) goto l85;
if((x[jvj+33]!=52)) goto l78;
if((V121>V122)) goto l87;
if(V113==27||V113==28||V113==995) goto l77;
if((V121>=V122)) goto l87;
goto l78;
l87:if(V113==29||V113==30||V113==996) goto l77;
goto l78;
l88:if((V113!=x[jvj+29])) goto l70;
if((V117!=x[jvj+31])) goto l70;
V106=68;
goto l70;
l89:if(x[jvj+31]!=incon) goto l88;
goto l70;
l90:if(V117!=incon) goto l89;
goto l70;
l91:if(x[jvj+29]!=incon) goto l90;
goto l70;
l92:V104=68;
goto l67;
l94:if(V137!=incon) goto l95;
l93:V104=67;
goto l67;
l95:if((V128!=x[jvj+23])) goto l93;
if((V136==V137)) goto l92;
if(x[jvj+27]!=incon) goto l101;
goto l93;
l96:if(V136!=incon) goto l94;
goto l93;
l97:if(x[jvj+23]!=incon) goto l96;
goto l93;
l98:if(V128!=incon) goto l97;
goto l93;
l99:if(V128==29||V128==30||V128==996) goto l92;
goto l93;
l100:if((V136<V137)) goto l99;
if(V128==27||V128==28||V128==995) goto l92;
if((V136<=V137)) goto l99;
goto l93;
l101:if((x[jvj+27]==36)) goto l100;
if((x[jvj+27]!=52)) goto l93;
if((V136>V137)) goto l102;
if(V128==27||V128==28||V128==995) goto l92;
if((V136>=V137)) goto l102;
goto l93;
l102:if(V128==29||V128==30||V128==996) goto l92;
goto l93;
l103:if((V128!=x[jvj+23])) goto l64;
if((V132!=x[jvj+25])) goto l64;
V104=68;
goto l64;
l104:if(x[jvj+25]!=incon) goto l103;
goto l64;
l105:if(V132!=incon) goto l104;
goto l64;
l106:if(x[jvj+23]!=incon) goto l105;
goto l64;
l107:x[jvj+54]=t[x[jvj+54]];
goto l59;
l109:x[jvj+35]=s[x[jvj+34]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+34];
pile[v[22]]=jvj+35; pile[WZ1]=P; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(jvj+35,P,jvj+36)*/
x[jvj+56]=x[jvj+36] ;z[jvj+56]=z[jvj+36];
l110:if((x[jvj+56]>0)) goto l111;
x[jvj+34]=t[x[jvj+34]];
goto l108;
l111:x[jvj+37]=s[x[jvj+56]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+56];
pile[v[22]]=122; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l158;     /*FNDO0(122,jvj+37,jvj+38)*/
x[jvj+57]=t[x[jvj+56]];
l112:if((x[jvj+57]<=0)) goto l158;
x[jvj+39]=s[x[jvj+57]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+57];
pile[v[22]]=122; pile[WZ1]=jvj+39; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l125;     /*FNDO0(122,jvj+39,jvj+40)*/
if((x[jvj+38]!=x[jvj+40])) goto l125;
V171=x[jvj+42]=V175=x[jvj+44]=V147=V179=V180=x[jvj+46]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+37; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l113;     /*FNDO0(145,jvj+37,jvj+41)*/
pile[WZ1]=jvj+39; pile[WZ2]=jvj+42; 
(*f[32])( );if(v[102]) goto l113;     /*FNDO0(145,jvj+39,jvj+42)*/
V171=x[jvj+41];
l113:pile[v[22]]=218; pile[WZ1]=jvj+37; pile[WZ2]=jvj+43; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(218,jvj+37,jvj+43)*/
pile[WZ1]=jvj+39; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l114;     /*FNDO0(218,jvj+39,jvj+44)*/
V175=x[jvj+43];
l114:if(V171!=incon) goto l157;
l115:pile[v[22]]=122; pile[WZ1]=jvj+37; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l116;     /*FNDO0(122,jvj+37,jvj+45)*/
pile[v[22]]=550; pile[WZ1]=jvj+45; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l116;     /*FNDO0(550,jvj+45,jvj+46)*/
l116:pile[v[22]]=117; pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l117;     /*FNDC0(117,jvj+37,V177)*/
V177=pile[WZ2]; 
pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l117;     /*FNDC0(117,jvj+39,V180)*/
V180=pile[WZ2]; 
V179=V177;
l117:if(V147==incon) goto l149;
l118:if((V147==68)) goto l127;
if((V147!=67)) goto l125;
V156=x[jvj+48]=V160=x[jvj+50]=V149=V164=V165=x[jvj+52]=incon;
pile[v[22]]=145; pile[WZ1]=jvj+39; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(145,jvj+39,jvj+47)*/
pile[WZ1]=jvj+37; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l119;     /*FNDO0(145,jvj+37,jvj+48)*/
V156=x[jvj+47];
l119:pile[v[22]]=218; pile[WZ1]=jvj+39; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(218,jvj+39,jvj+49)*/
pile[WZ1]=jvj+37; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l120;     /*FNDO0(218,jvj+37,jvj+50)*/
V160=x[jvj+49];
l120:if(V156!=incon) goto l142;
l121:pile[v[22]]=122; pile[WZ1]=jvj+39; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(122,jvj+39,jvj+51)*/
pile[v[22]]=550; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l122;     /*FNDO0(550,jvj+51,jvj+52)*/
l122:pile[v[22]]=117; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l123;     /*FNDC0(117,jvj+39,V162)*/
V162=pile[WZ2]; 
pile[WZ1]=jvj+37; 
(*f[26])( );if(v[102]) goto l123;     /*FNDC0(117,jvj+37,V165)*/
V165=pile[WZ2]; 
V164=V162;
l123:if(V149==incon) goto l134;
l124:if((V149==68)) goto l126;
l125:x[jvj+57]=t[x[jvj+57]];
goto l112;
l126:V150=x[jvj+37];
pile[v[22]]=jvj+35; pile[WZ1]=P; pile[WZ2]=V150; 
(*f[134])( );     /*OTA0(jvj+35,P,V150)*/
goto l125;
l127:V148=x[jvj+39];
pile[v[22]]=jvj+35; pile[WZ1]=P; pile[WZ2]=V148; 
(*f[134])( );     /*OTA0(jvj+35,P,V148)*/
goto l125;
l128:V149=68;
goto l124;
l130:if(V165!=incon) goto l131;
l129:V149=67;
goto l124;
l131:if((V156!=x[jvj+48])) goto l129;
if((V164==V165)) goto l128;
if(x[jvj+52]!=incon) goto l137;
goto l129;
l132:if(V164!=incon) goto l130;
goto l129;
l133:if(x[jvj+48]!=incon) goto l132;
goto l129;
l134:if(V156!=incon) goto l133;
goto l129;
l135:if(V156==29||V156==30||V156==996) goto l128;
goto l129;
l136:if((V164<V165)) goto l135;
if(V156==27||V156==28||V156==995) goto l128;
if((V164<=V165)) goto l135;
goto l129;
l137:if((x[jvj+52]==36)) goto l136;
if((x[jvj+52]!=52)) goto l129;
if((V164>V165)) goto l138;
if(V156==27||V156==28||V156==995) goto l128;
if((V164>=V165)) goto l138;
goto l129;
l138:if(V156==29||V156==30||V156==996) goto l128;
goto l129;
l139:if((V156!=x[jvj+48])) goto l121;
if((V160!=x[jvj+50])) goto l121;
V149=68;
goto l121;
l140:if(x[jvj+50]!=incon) goto l139;
goto l121;
l141:if(V160!=incon) goto l140;
goto l121;
l142:if(x[jvj+48]!=incon) goto l141;
goto l121;
l143:V147=68;
goto l118;
l145:if(V180!=incon) goto l146;
l144:V147=67;
goto l118;
l146:if((V171!=x[jvj+42])) goto l144;
if((V179==V180)) goto l143;
if(x[jvj+46]!=incon) goto l152;
goto l144;
l147:if(V179!=incon) goto l145;
goto l144;
l148:if(x[jvj+42]!=incon) goto l147;
goto l144;
l149:if(V171!=incon) goto l148;
goto l144;
l150:if(V171==29||V171==30||V171==996) goto l143;
goto l144;
l151:if((V179<V180)) goto l150;
if(V171==27||V171==28||V171==995) goto l143;
if((V179<=V180)) goto l150;
goto l144;
l152:if((x[jvj+46]==36)) goto l151;
if((x[jvj+46]!=52)) goto l144;
if((V179>V180)) goto l153;
if(V171==27||V171==28||V171==995) goto l143;
if((V179>=V180)) goto l153;
goto l144;
l153:if(V171==29||V171==30||V171==996) goto l143;
goto l144;
l154:if((V171!=x[jvj+42])) goto l115;
if((V175!=x[jvj+44])) goto l115;
V147=68;
goto l115;
l155:if(x[jvj+44]!=incon) goto l154;
goto l115;
l156:if(V175!=incon) goto l155;
goto l115;
l157:if(x[jvj+42]!=incon) goto l156;
goto l115;
l158:x[jvj+56]=t[x[jvj+56]];
goto l110;
}
