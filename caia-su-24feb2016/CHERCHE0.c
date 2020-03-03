#include "dx.h"
void CHERCHE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V5=0,V8=0,V2=0,V4=0,D=0,V6=0,S=0,V9=0,V10=0,DY=0,V11=0,V15=0,DT=0,V55=0,V62=0,V49=0,V48=0,NR=0,V65=0,V27=0,V21=0,J=0,V32=0,V23=0,V31=0,V34=0,I=0,V22=0,V71=0,V72=0,V73=0,V74=0,V25=0,V75=0,V77=0,V28=0,M=0,V38=0,V41=0,V36=0,V37=0,V69=0,V66=0;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=38;
x[jvj+1]=10463;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1185&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+4]=D=DY=S=x[jvj+10]=DT=x[jvj+35]=x[jvj+34]=M=incon;
V2=bh[v[1]][2];
x[jvj+37]=incon;
if((V2==32)) goto l1;
if((V2!=42)) goto l21;
x[jvj+37]=131 ;z[jvj+37]=131;
l20:x[jvj+35]=x[jvj+37] ;z[jvj+35]=z[jvj+37];
l21:V4=bh[v[1]][3];
V3=incon;
if((V4==68)) goto l2;
if((V4==70)) goto l3;
if((V4!=80)) goto l24;
V3=8;
l22:D=V3;
if((D==259)) goto l23;
if((D!=80)) goto l24;
x[jvj+4]=404 ;z[jvj+4]=404;
l24:V6=bh[v[1]][5];
V5=incon;
if((V6==84)) goto l4;
if((V6==80)) goto l5;
if((V6==78)) goto l6;
if((V6==66)) goto l7;
if((V6==49)) goto l8;
if((V6==50)) goto l9;
if((V6==51)) goto l10;
if((V6==52)) goto l11;
if((V6!=53)) goto l26;
V5=((-6281));
l25:S=V5;
l26:V9=bh[v[1]][6];
V10=bh[v[1]][7];
x[jvj+38]=incon;
if((V9==62)) goto l12;
if((V9==60)) goto l14;
if((V9!=35)) goto l16;
x[jvj+38]=26 ;z[jvj+38]=26;
l16:if(V9==32||V9==61) goto l17;
if(x[jvj+38]==incon) goto l28;
if((x[jvj+38]!=(-99999998))) goto l18;
l28:if(x[jvj+4]==incon) goto l29;
l32:if(D!=incon) goto l33;
l38:if(DY!=incon) goto l39;
l44:if(S!=incon) goto l45;
if(x[jvj+10]!=incon) goto l50;
l70:if(x[jvj+35]!=incon) goto l71;
l76:x[jvj+1]=incon; v[0]=jvj; return;
l1:x[jvj+37]=324 ;z[jvj+37]=324;
goto l20;
l2:V3=259;
goto l22;
l3:V3=80;
goto l22;
l4:V5=((-6275));
goto l25;
l5:V5=((-6274));
goto l25;
l6:V5=((-6276));
goto l25;
l7:V5=((-6290));
goto l25;
l8:V5=((-6277));
goto l25;
l9:V5=((-6278));
goto l25;
l10:V5=((-6279));
goto l25;
l11:V5=((-6280));
goto l25;
l12:if((V10!=61)) goto l13;
x[jvj+38]=28 ;z[jvj+38]=28;
goto l16;
l13:x[jvj+38]=27 ;z[jvj+38]=27;
goto l16;
l14:if((V10!=61)) goto l15;
x[jvj+38]=30 ;z[jvj+38]=30;
goto l16;
l15:x[jvj+38]=29 ;z[jvj+38]=29;
goto l16;
l17:x[jvj+38]=25 ;z[jvj+38]=25;
l18:V8=incon;
if((V10==61)) goto l19;
V8=6;
l27:x[jvj+34]=x[jvj+38] ;z[jvj+34]=z[jvj+38];
DY=V8;
goto l28;
l19:V8=7;
goto l27;
l23:x[jvj+4]=689 ;z[jvj+4]=689;
goto l24;
l29:x[jvj+2]=vo[20];z[jvj+2]=vz[20];
pile[v[22]]=857; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(857,jvj+2,jvj+3)*/
pile[v[22]]=550; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(550,jvj+3,jvj+4)*/
goto l32;
l30:V11=0;
l37:x[jvj+8]=vo[20];z[jvj+8]=vz[20];
pile[v[22]]=550; pile[WZ1]=jvj+4; pile[WZ2]=642; pile[WZ3]=V11; pile[WZ4]=jvj+9; 
(*f[192])( );     /*QUADRI4(550,jvj+4,642,V11,jvj+9)*/
pile[v[22]]=jvj+8; pile[WZ1]=857; pile[WZ2]=jvj+9; 
(*f[35])( );     /*CHGC1(jvj+8,857,jvj+9)*/
goto l38;
l31:V15=1;
l35:x[jvj+6]=vo[20];z[jvj+6]=vz[20];
pile[v[22]]=857; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(857,jvj+6,jvj+7)*/
pile[v[22]]=jvj+7; pile[WZ1]=642; pile[WZ2]=V15; 
(*f[186])( );     /*BTC0(jvj+7,642,V15)*/
l36:if(D!=259&&D!=80) goto l38;
V11=incon;
if((D==259)) goto l30;
x[jvj+5]=vo[14];z[jvj+5]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(642,jvj+5,V11)*/
V11=pile[WZ2]; 
goto l37;
l33:if(x[jvj+4]!=incon) goto l34;
goto l38;
l34:if((D!=8)) goto l36;
V15=incon;
if((x[jvj+4]==689)) goto l31;
V15=(-1);
goto l35;
l39:pile[v[22]]=DY; pile[WZ1]=jvj+10; 
(*f[79])( );if(v[102]) goto l44;     /*LEXP0(DY,jvj+10,DT)*/
DT=pile[WZ2]; 
goto l44;
l43:x[jvj+20]=t[x[jvj+20]];
l42:if((x[jvj+20]<=0)) goto l50;
x[jvj+21]=s[x[jvj+20]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+20];
pile[v[22]]=130; pile[WZ1]=jvj+21; 
(*f[26])( );if(v[102]) goto l43;     /*FNDC0(130,jvj+21,V62)*/
V62=pile[WZ2]; 
if((V62!=NR)) goto l43;
pile[v[22]]=246; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(246,jvj+21,V65)*/
V65=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V65; pile[WZ4]=jvj+27; 
(*f[192])( );     /*QUADRI4(100,41,130,V65,jvj+27)*/
l62:x[jvj+26]=0 ;z[jvj+26]=0;
pile[v[22]]=100; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(100,jvj+27,jvj+28)*/
if((x[jvj+28]!=128)) goto l64;
pile[v[22]]=128; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(128,jvj+27,jvj+29)*/
for(i=x[jvj+29],V25=0;i>0;i=t[i],V25++)  ;
V21=incon;
if((V25<=20)) goto l51;
V21=20;
l63:V28=150+V21;
M=V28;
if((V25<=20)) goto l60;
pile[v[22]]=20; pile[WZ1]=0; pile[WZ2]=126; 
(*f[41])( );     /*SRB0(20,0,126,V71)*/
V71=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=10463; pile[WZ2]=V71; 
(*f[39])( );     /*SDX0(20,10463,V71,V72)*/
V72=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V72; pile[WZ2]=23; 
(*f[42])( );     /*SRA1(135,V72,23,V73)*/
V73=pile[WZ3]; 
pile[v[22]]=V73; pile[WZ1]=(-9813); 
(*f[37])( );     /*SRA0(V73,(-9813),V74)*/
V74=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V25; pile[WZ2]=V74; 
(*f[39])( );     /*SDX0(41,V25,V74,V75)*/
V75=pile[WZ3]; 
pile[v[22]]=V75; pile[WZ1]=(-2361); 
(*f[37])( );     /*SRA0(V75,(-2361),V77)*/
V77=pile[WZ2]; 
pile[v[22]]=V77; 
(*f[40])( );     /*SLG0(V77)*/
l60:if((x[jvj+29]<=0)) goto l70;
x[jvj+24]=s[x[jvj+29]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+29];
J=150;
l52:if((J>M)) goto l61;
for(a=x[jvj+26];a>0;a=t[a]) if(s[a]==J) goto l53;
V22=incon;
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l55;     /*FNDC0(130,jvj+24,V34)*/
V34=pile[WZ2]; 
I=V34;
V22=I;
l55:pile[v[22]]=101; pile[WZ1]=jvj+24; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l57;     /*FNDO0(101,jvj+24,jvj+25)*/
x[jvj+23]=x[jvj+25] ;z[jvj+23]=z[jvj+25];
V23=incon;
if((S!=(-6274))) goto l54;
pile[v[22]]=130; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+23,V32)*/
V32=pile[WZ2]; 
V23=V32;
l56:V22=V23;
l59:if((V22==(-99999998))) goto l61;
v[J]=V22;
pile[v[22]]=jvj+26; pile[WZ1]=J; 
(*f[207])( );     /*PLUE2(jvj+26,J)*/
l61:x[jvj+29]=t[x[jvj+29]];
goto l60;
l45:if(x[jvj+10]!=incon) goto l46;
goto l70;
l46:if(DT!=incon) goto l47;
l50:x[jvj+27]=x[jvj+10] ;z[jvj+27]=z[jvj+10];
if(S!=incon) goto l62;
goto l70;
l47:if((S!=(-6290))) goto l50;
V49=DT+1;
V48=bh[v[1]][V49];
if((V48==32)) goto l48;
pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+10,jvj+18)*/
pile[v[22]]=DT; 
(*f[135])( );     /*LND3(DT,NR)*/
NR=pile[WZ1]; 
pile[v[22]]=345; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(345,jvj+18,jvj+19)*/
pile[v[22]]=365; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(365,jvj+19,jvj+20)*/
goto l42;
l48:pile[v[22]]=101; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+10,jvj+11)*/
x[jvj+17]=0 ;z[jvj+17]=0;
pile[v[22]]=345; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(345,jvj+11,jvj+12)*/
pile[v[22]]=365; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(365,jvj+12,jvj+13)*/
x[jvj+14]=d[29];z[jvj+14]=0;
l40:if((x[jvj+13]<=0)) goto l49;
x[jvj+15]=s[x[jvj+13]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+13];
pile[v[22]]=246; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l41;     /*FNDC0(246,jvj+15,V55)*/
V55=pile[WZ2]; 
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=V55; pile[WZ4]=jvj+16; 
(*f[192])( );     /*QUADRI4(100,41,130,V55,jvj+16)*/
pile[v[22]]=jvj+14; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[196])( );     /*PLUF0(jvj+14,jvj+16,jvj+17)*/
l41:x[jvj+13]=t[x[jvj+13]];
goto l40;
l49:pile[v[22]]=jvj+17; pile[WZ1]=jvj+22; 
(*f[299])( );     /*COPEL0(jvj+17,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=128; pile[WZ2]=jvj+36; 
(*f[300])( );     /*TRI10(jvj+22,128,jvj+36)*/
pile[v[22]]=jvj+36; pile[WZ2]=100; pile[WZ3]=jvj+27; 
(*f[58])( );     /*TRI3(jvj+36,128,100,jvj+27)*/
goto l62;
l51:V27=V25-1;
V21=V27;
goto l63;
l53:J++;
goto l52;
l54:V31=x[jvj+23];
V23=V31;
goto l56;
l57:if(V22==incon) goto l58;
goto l59;
l58:V22=(-99999998);
goto l61;
l64:V37=incon;
pile[v[22]]=130; pile[WZ1]=jvj+27; 
(*f[26])( );if(v[102]) goto l66;     /*FNDC0(130,jvj+27,V36)*/
V36=pile[WZ2]; 
V37=V36;
l66:pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l68;     /*FNDO0(101,jvj+27,jvj+30)*/
V38=incon;
if((S!=(-6274))) goto l65;
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+30,V38)*/
V38=pile[WZ2]; 
l67:V37=V38;
l69:if((V37==(-99999998))) goto l70;
M=150;
v[150]=V37;
goto l70;
l65:V41=x[jvj+30];
V38=V41;
goto l67;
l68:if(V37==incon) goto l70;
goto l69;
l71:if(S!=incon) goto l72;
goto l76;
l72:if(x[jvj+34]!=incon) goto l73;
goto l76;
l73:if(x[jvj+4]!=incon) goto l74;
goto l76;
l74:if(M!=incon) goto l75;
goto l76;
l75:x[jvj+31]=vo[14];z[jvj+31]=vz[14];
pile[v[22]]=642; pile[WZ1]=jvj+31; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(642,jvj+31,V69)*/
V69=pile[WZ2]; 
x[jvj+32]=vo[20];z[jvj+32]=vz[20];
pile[v[22]]=857; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(857,jvj+32,jvj+33)*/
pile[v[22]]=642; pile[WZ1]=jvj+33; 
(*f[26])( );if(v[102]) goto l76;     /*FNDC0(642,jvj+33,V66)*/
V66=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; pile[WZ3]=jvj+4; pile[WZ4]=V66; pile[WZ5]=V69; pile[v[22]+6]=M; 
(*f[1473])( );     /*PARCOURT0(S,jvj+34,jvj+35,jvj+4,V66,V69,M)*/
goto l76;
}
