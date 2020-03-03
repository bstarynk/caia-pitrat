#include "dx.h"
void COUTREGT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V27=0,V45=0,V35=0,K=0,V33=0,V32=0,V79=0,V78=0,V81=0,V80=0,V85=0,V86=0,V70=0,V89=0,V88=0,V69=0,V77=0,V67=0,V12=0,V63=0,V6=0,V16=0,V21=0,N=0,V37=0,V23=0,V73=0,V72=0;
int R;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=11632;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1730&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
R=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=R; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(R,274,Z)*/
pile[v[22]]=1142; pile[WZ1]=R; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l61;     /*FNDO0(1142,R,jvj+31)*/
if((x[jvj+31]!=68)) goto l61;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,4,36)*/
l61:pile[v[22]]=869; pile[WZ1]=R; pile[WZ2]=jvj+32; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(869,R,jvj+32)*/
if((x[jvj+32]!=769)) goto l63;
pile[v[22]]=607; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,603,Z,5,36)*/
pile[v[22]]=R; 
(*f[1741])( );if(v[102]) goto l63;     /*Z277Z0(R,V12)*/
V12=pile[WZ1]; 
x[jvj+33]=incon;
if((V12==2)) goto l13;
if((V12<3)) goto l63;
if((V12<=4)) goto l14;
if((V12<=6)) goto l15;
if((V12<=9)) goto l16;
if((V12<=12)) goto l17;
x[jvj+33]=607 ;z[jvj+33]=607;
l62:pile[v[22]]=jvj+33; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=7; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+33,206,Z,7,52)*/
l63:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l65;     /*FNDO0(868,R,jvj+34)*/
if((x[jvj+34]!=55)) goto l65;
x[jvj+35]=incon;
if((x[jvj+32]==484)) goto l10;
if((x[jvj+32]!=25)) goto l11;
x[jvj+35]=603 ;z[jvj+35]=603;
l11:if(x[jvj+32]==27||x[jvj+32]==28||x[jvj+32]==29||x[jvj+32]==30) goto l12;
if(x[jvj+35]==incon) goto l65;
if((x[jvj+35]!=(-99999998))) goto l64;
l65:pile[v[22]]=868; pile[WZ1]=R; pile[WZ2]=jvj+36; 
(*f[32])( );if(v[102]) goto l73;     /*FNDO0(868,R,jvj+36)*/
if((x[jvj+36]!=48)) goto l6;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=14; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,14,36)*/
l6:x[jvj+37]=incon;
if((x[jvj+36]==25)) goto l7;
if((x[jvj+36]==26)) goto l8;
if((x[jvj+36]==625)) goto l9;
x[jvj+37]=206 ;z[jvj+37]=206;
l66:pile[v[22]]=jvj+37; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+37,607,Z,2,36)*/
pile[v[22]]=1101; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l68;     /*FNDC0(1101,R,V63)*/
V63=pile[WZ2]; 
if((V63!=1)) goto l68;
x[jvj+38]=incon;
if((x[jvj+36]!=25)) goto l37;
x[jvj+38]=607 ;z[jvj+38]=607;
l37:if(x[jvj+36]==29||x[jvj+36]==30||x[jvj+36]==27||x[jvj+36]==28||x[jvj+36]==408) goto l38;
if(x[jvj+38]==incon) goto l68;
if((x[jvj+38]!=(-99999998))) goto l67;
l68:if((x[jvj+36]==625)) goto l69;
if((x[jvj+36]!=408)) goto l73;
pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(111,R,jvj+14)*/
pile[v[22]]=101; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+14,jvj+15)*/
if((x[jvj+15]!=408)) goto l36;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(102,R,jvj+16)*/
pile[v[22]]=100; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(100,jvj+16,jvj+17)*/
if((x[jvj+17]==484)) goto l73;
l36:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(111,R,jvj+18)*/
pile[v[22]]=101; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(101,jvj+18,jvj+19)*/
if((x[jvj+19]!=408)) goto l72;
pile[v[22]]=102; pile[WZ1]=R; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(102,R,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l72;     /*FNDO0(100,jvj+20,jvj+21)*/
if((x[jvj+21]==41)) goto l73;
l72:pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=13; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,13,52)*/
l73:pile[v[22]]=1188; pile[WZ1]=R; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l74;     /*FNDO0(1188,R,jvj+40)*/
if((x[jvj+40]!=68)) goto l74;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=15; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,15,52)*/
l74:pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(870,R,V21)*/
V21=pile[WZ2]; 
x[jvj+41]=incon;
if((V21==4)) goto l20;
if((V21<5)) goto l24;
if((V21<=6)) goto l21;
if((V21<=8)) goto l22;
x[jvj+41]=607 ;z[jvj+41]=607;
l75:pile[v[22]]=jvj+41; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=9; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+41,607,Z,9,52)*/
l24:x[jvj+42]=incon;
if((V21<10)) goto l1;
if((V21<=11)) goto l25;
if((V21<=13)) goto l26;
if((V21<=15)) goto l27;
x[jvj+42]=607 ;z[jvj+42]=607;
l76:pile[v[22]]=jvj+42; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=11; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+42,607,Z,11,52)*/
l1:x[jvj+43]=incon;
if((V21<=2)) goto l2;
if((V21<=4)) goto l3;
if((V21<=6)) goto l4;
if((V21<=8)) goto l5;
x[jvj+43]=606 ;z[jvj+43]=606;
l77:pile[v[22]]=jvj+43; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+43,607,Z,1,36)*/
l78:pile[v[22]]=1370; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(1370,R,N)*/
N=pile[WZ2]; 
V32=incon;
pile[v[22]]=111; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(111,R,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l32;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]!=55)) goto l32;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(107,R,jvj+13)*/
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+10; 
(*f[46])( );     /*TRI0(0,117,jvj+10)*/
l29:if((x[jvj+13]>0)) goto l30;
pile[v[22]]=117; pile[WZ1]=jvj+10; 
(*f[26])( );if(v[102]) goto l32;     /*FNDC0(117,jvj+10,V33)*/
V33=pile[WZ2]; 
if((V33<=0)) goto l32;
V32=V33;
l79:V37=N/V32;
x[jvj+44]=incon;
if((V37==5)) goto l33;
if((V37<6)) goto l81;
if((V37<=7)) goto l34;
if((V37<=10)) goto l35;
x[jvj+44]=607 ;z[jvj+44]=607;
l80:pile[v[22]]=jvj+44; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=12; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+44,607,Z,12,52)*/
l81:pile[v[22]]=678; pile[WZ1]=R; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(678,R,jvj+45)*/
for(i=x[jvj+45],V23=0;i>0;i=t[i],V23++)  ;
if((V23!=1)) goto l83;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+3)*/
l23:if((x[jvj+3]<=0)) goto l83;
x[jvj+4]=s[x[jvj+3]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+3];
pile[v[22]]=480; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[33])( );     /*FNDE0(480,jvj+4,jvj+5)*/
for(i=x[jvj+5],V27=0;i>0;i=t[i],V27++)  ;
if((V27>1)) goto l82;
x[jvj+3]=t[x[jvj+3]];
goto l23;
l2:x[jvj+43]=607 ;z[jvj+43]=607;
goto l77;
l3:x[jvj+43]=603 ;z[jvj+43]=603;
goto l77;
l4:x[jvj+43]=604 ;z[jvj+43]=604;
goto l77;
l5:x[jvj+43]=605 ;z[jvj+43]=605;
goto l77;
l7:x[jvj+37]=607 ;z[jvj+37]=607;
goto l66;
l8:x[jvj+37]=605 ;z[jvj+37]=605;
goto l66;
l9:x[jvj+37]=602 ;z[jvj+37]=602;
goto l66;
l10:x[jvj+35]=607 ;z[jvj+35]=607;
goto l11;
l12:x[jvj+35]=604 ;z[jvj+35]=604;
l64:pile[v[22]]=jvj+35; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=6; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+35,602,Z,6,36)*/
goto l65;
l13:x[jvj+33]=606 ;z[jvj+33]=606;
goto l62;
l14:x[jvj+33]=604 ;z[jvj+33]=604;
goto l62;
l15:x[jvj+33]=206 ;z[jvj+33]=206;
goto l62;
l16:x[jvj+33]=603 ;z[jvj+33]=603;
goto l62;
l17:x[jvj+33]=602 ;z[jvj+33]=602;
goto l62;
l18:x[jvj+39]=606 ;z[jvj+39]=606;
l71:pile[v[22]]=jvj+39; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=8; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+39,603,Z,8,36)*/
goto l73;
l19:x[jvj+39]=603 ;z[jvj+39]=603;
goto l71;
l20:x[jvj+41]=606 ;z[jvj+41]=606;
goto l75;
l21:x[jvj+41]=604 ;z[jvj+41]=604;
goto l75;
l22:x[jvj+41]=603 ;z[jvj+41]=603;
goto l75;
l25:x[jvj+42]=605 ;z[jvj+42]=605;
goto l76;
l26:x[jvj+42]=206 ;z[jvj+42]=206;
goto l76;
l27:x[jvj+42]=602 ;z[jvj+42]=602;
goto l76;
l28:V35=1;
l31:K=V35;
pile[v[22]]=jvj+10; pile[WZ1]=117; pile[WZ2]=K; 
(*f[186])( );     /*BTC0(jvj+10,117,K)*/
x[jvj+13]=t[x[jvj+13]];
goto l29;
l30:x[jvj+6]=s[x[jvj+13]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+13];
V35=incon;
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l28;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]!=48)) goto l28;
pile[v[22]]=107; pile[WZ1]=jvj+6; pile[WZ2]=jvj+9; 
(*f[33])( );     /*FNDE0(107,jvj+6,jvj+9)*/
for(i=x[jvj+9],V45=0;i>0;i=t[i],V45++)  ;
V35=V45;
goto l31;
l32:V32=1;
goto l79;
l33:x[jvj+44]=606 ;z[jvj+44]=606;
goto l80;
l34:x[jvj+44]=604 ;z[jvj+44]=604;
goto l80;
l35:x[jvj+44]=603 ;z[jvj+44]=603;
goto l80;
l38:x[jvj+38]=206 ;z[jvj+38]=206;
l67:pile[v[22]]=jvj+38; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=16; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+38,607,Z,16,36)*/
goto l68;
l40:x[jvj+50]=t[x[jvj+50]];
l39:if((x[jvj+50]<=0)) goto l47;
x[jvj+23]=s[x[jvj+50]] ;z[jvj+23]=(x[jvj+23]<=sepcte) ? x[jvj+23] : z[jvj+50];
pile[v[22]]=204; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(204,jvj+23,V78)*/
V78=pile[WZ2]; 
if((V78<=V79)) goto l40;
x[jvj+51]=t[x[jvj+51]];
l41:if((x[jvj+51]<=0)) goto l50;
x[jvj+22]=s[x[jvj+51]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+51];
pile[v[22]]=204; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(204,jvj+22,V79)*/
V79=pile[WZ2]; 
x[jvj+50]=x[jvj+29] ;z[jvj+50]=z[jvj+29];
goto l39;
l42:x[jvj+51]=x[jvj+29] ;z[jvj+51]=z[jvj+29];
goto l41;
l46:x[jvj+53]=t[x[jvj+53]];
l45:if((x[jvj+53]<=0)) goto l50;
x[jvj+24]=s[x[jvj+53]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+53];
if((x[jvj+24]==x[Z])) goto l46;
pile[v[22]]=204; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l42;     /*FNDC0(204,jvj+24,V81)*/
V81=pile[WZ2]; 
x[jvj+52]=x[jvj+29] ;z[jvj+52]=z[jvj+29];
l43:if((x[jvj+52]<=0)) goto l42;
x[jvj+25]=s[x[jvj+52]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+52];
if((x[jvj+25]==x[Z])) goto l44;
pile[v[22]]=204; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l44;     /*FNDC0(204,jvj+25,V80)*/
V80=pile[WZ2]; 
if((V80>V81)) goto l46;
l44:x[jvj+52]=t[x[jvj+52]];
goto l43;
l47:V70=incon;
pile[v[22]]=204; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l48;     /*FNDC0(204,jvj+24,V85)*/
V85=pile[WZ2]; 
if((V85<=0)) goto l48;
V86=V85/2;
V70=V86;
l49:V88=V89+V70;
V69=V88;
l54:pile[v[22]]=jvj+30; pile[WZ1]=117; pile[WZ2]=V69; 
(*f[186])( );     /*BTC0(jvj+30,117,V69)*/
l53:x[jvj+48]=t[x[jvj+48]];
l51:if((x[jvj+48]>0)) goto l52;
pile[v[22]]=117; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l85;     /*FNDC0(117,jvj+30,V67)*/
V67=pile[WZ2]; 
V72=V67/V73;
x[jvj+49]=incon;
if((V72<=68905)) goto l55;
if((V72<=102581)) goto l56;
if((V72<=157773)) goto l57;
if((V72<=239019)) goto l58;
if((V72<=379465)) goto l59;
if((V72<=551542)) goto l60;
x[jvj+49]=607 ;z[jvj+49]=607;
l84:pile[v[22]]=jvj+49; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=17; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+49,607,Z,17,36)*/
l85:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l48:V70=0;
goto l49;
l50:pile[v[22]]=204; pile[WZ1]=jvj+26; 
(*f[26])( );if(v[102]) goto l53;     /*FNDC0(204,jvj+26,V77)*/
V77=pile[WZ2]; 
V69=V77;
goto l54;
l52:x[jvj+26]=s[x[jvj+48]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+48];
V69=incon;
pile[v[22]]=111; pile[WZ1]=jvj+26; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(111,jvj+26,jvj+27)*/
pile[v[22]]=101; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l50;     /*FNDO0(101,jvj+27,jvj+28)*/
if((x[jvj+28]!=48)) goto l50;
pile[v[22]]=204; pile[WZ1]=Z; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(204,Z,V89)*/
V89=pile[WZ2]; 
pile[v[22]]=107; pile[WZ1]=jvj+26; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(107,jvj+26,jvj+29)*/
x[jvj+53]=x[jvj+29] ;z[jvj+53]=z[jvj+29];
goto l45;
l55:x[jvj+49]=606 ;z[jvj+49]=606;
goto l84;
l56:x[jvj+49]=605 ;z[jvj+49]=605;
goto l84;
l57:x[jvj+49]=604 ;z[jvj+49]=604;
goto l84;
l58:x[jvj+49]=206 ;z[jvj+49]=206;
goto l84;
l59:x[jvj+49]=603 ;z[jvj+49]=603;
goto l84;
l60:x[jvj+49]=602 ;z[jvj+49]=602;
goto l84;
l69:pile[v[22]]=870; pile[WZ1]=R; 
(*f[26])( );if(v[102]) goto l73;     /*FNDC0(870,R,V6)*/
V6=pile[WZ2]; 
if((V6>3)) goto l70;
pile[v[22]]=R; 
(*f[1741])( );if(v[102]) goto l73;     /*Z277Z0(R,V16)*/
V16=pile[WZ1]; 
x[jvj+39]=incon;
if((V16<=1)) goto l18;
if((V16<=3)) goto l19;
x[jvj+39]=607 ;z[jvj+39]=607;
goto l71;
l70:pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,3,52)*/
goto l73;
l82:pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=10; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,10,36)*/
l83:pile[v[22]]=111; pile[WZ1]=R; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(111,R,jvj+46)*/
pile[v[22]]=101; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l85;     /*FNDO0(101,jvj+46,jvj+47)*/
if((x[jvj+47]!=55)) goto l85;
pile[v[22]]=107; pile[WZ1]=R; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(107,R,jvj+48)*/
if((x[jvj+48]==0)) goto l85;
for(i=x[jvj+48],V73=0;i>0;i=t[i],V73++)  ;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+30; 
(*f[46])( );     /*TRI0(0,117,jvj+30)*/
goto l51;
}
