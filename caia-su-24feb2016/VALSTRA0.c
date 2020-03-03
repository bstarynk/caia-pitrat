#include "dx.h"
void VALSTRA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V13=0,V32=0,V4=0,V20=0,V26=0,V29=0,V36=0,V1=0,V7=0,V10=0;
int P,B;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=20;
x[jvj+1]=10942;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1144&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
P=pile[v[22]]; B=pile[v[22]+1]; Z=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=P; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(P,274,Z)*/
pile[v[22]]=1002; pile[WZ1]=P; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l55;     /*FNDO0(1002,P,jvj+3)*/
pile[v[22]]=jvj+3; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+3,602,Z,2,36)*/
l55:pile[v[22]]=860; pile[WZ1]=P; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(860,P,jvj+4)*/
if((x[jvj+4]==924)) goto l56;
if((x[jvj+4]==104)) goto l57;
if((x[jvj+4]==530)) goto l58;
if((x[jvj+4]!=1085)) goto l59;
pile[v[22]]=607; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=19; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,607,Z,19,36)*/
l59:pile[v[22]]=715; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(715,jvj+4,jvj+5)*/
pile[v[22]]=jvj+5; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=11; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+5,607,Z,11,36)*/
l60:if((x[jvj+4]==954)) goto l20;
if((x[jvj+4]==1074)) goto l62;
if((x[jvj+4]==228)) goto l64;
if((x[jvj+4]==1082)) goto l66;
if((x[jvj+4]==1057)) goto l68;
if((x[jvj+4]==901)) goto l70;
if((x[jvj+4]==84)) goto l72;
if((x[jvj+4]!=368)) goto l75;
pile[v[22]]=876; pile[WZ1]=B; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(876,B,V36)*/
V36=pile[WZ2]; 
x[jvj+13]=incon;
if((V36==1)) goto l43;
if((V36==2)) goto l44;
if((V36<3)) goto l75;
if((V36<=4)) goto l45;
if((V36<=8)) goto l46;
if((V36<=14)) goto l47;
if((V36<=23)) goto l48;
if((V36>30)) goto l75;
x[jvj+13]=606 ;z[jvj+13]=606;
l74:pile[v[22]]=jvj+13; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=16; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+13,602,Z,16,36)*/
l75:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(935,B,jvj+14)*/
if((x[jvj+14]!=120)) goto l76;
pile[v[22]]=607; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=10; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,602,Z,10,36)*/
l76:pile[v[22]]=936; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(936,P,V1)*/
V1=pile[WZ2]; 
x[jvj+15]=incon;
if((V1<=3)) goto l1;
if((V1<=10)) goto l2;
if((V1<=31)) goto l3;
if((V1<=95)) goto l4;
if((V1<=296)) goto l5;
if((V1<=934)) goto l6;
x[jvj+15]=606 ;z[jvj+15]=606;
l77:pile[v[22]]=jvj+15; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+15,607,Z,1,36)*/
x[jvj+16]=incon;
if((V1<1001)) goto l79;
if((V1<=1481)) goto l49;
if((V1<=2351)) goto l50;
if((V1<=3911)) goto l51;
if((V1<=6208)) goto l52;
if((V1<=9855)) goto l53;
if((V1<=16149)) goto l54;
x[jvj+16]=607 ;z[jvj+16]=607;
l78:pile[v[22]]=jvj+16; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=17; pile[WZ4]=52; 
(*f[1122])( );     /*EVALJGT0(jvj+16,607,Z,17,52)*/
l79:pile[v[22]]=999; pile[WZ1]=P; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(999,P,jvj+17)*/
for(i=x[jvj+17],V7=0;i>0;i=t[i],V7++)  ;
x[jvj+18]=incon;
if((V7==1)) goto l12;
if((V7<2)) goto l81;
if((V7<=3)) goto l13;
if((V7<=6)) goto l14;
x[jvj+18]=607 ;z[jvj+18]=607;
l80:pile[v[22]]=jvj+18; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+18,603,Z,4,36)*/
l81:pile[v[22]]=1042; pile[WZ1]=P; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(1042,P,jvj+19)*/
for(i=x[jvj+19],V10=0;i>0;i=t[i],V10++)  ;
x[jvj+20]=incon;
if((V10==1)) goto l15;
if((V10<2)) goto l83;
if((V10<=3)) goto l16;
if((V10<=6)) goto l17;
x[jvj+20]=607 ;z[jvj+20]=607;
l82:pile[v[22]]=jvj+20; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+20,206,Z,5,36)*/
l83:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; return;
l1:x[jvj+15]=607 ;z[jvj+15]=607;
goto l77;
l2:x[jvj+15]=602 ;z[jvj+15]=602;
goto l77;
l3:x[jvj+15]=603 ;z[jvj+15]=603;
goto l77;
l4:x[jvj+15]=206 ;z[jvj+15]=206;
goto l77;
l5:x[jvj+15]=604 ;z[jvj+15]=604;
goto l77;
l6:x[jvj+15]=605 ;z[jvj+15]=605;
goto l77;
l7:x[jvj+9]=607 ;z[jvj+9]=607;
l67:pile[v[22]]=jvj+9; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+9,206,Z,3,36)*/
goto l75;
l8:x[jvj+9]=603 ;z[jvj+9]=603;
goto l67;
l9:x[jvj+9]=206 ;z[jvj+9]=206;
goto l67;
l10:x[jvj+9]=604 ;z[jvj+9]=604;
goto l67;
l11:x[jvj+9]=605 ;z[jvj+9]=605;
goto l67;
l12:x[jvj+18]=605 ;z[jvj+18]=605;
goto l80;
l13:x[jvj+18]=206 ;z[jvj+18]=206;
goto l80;
l14:x[jvj+18]=602 ;z[jvj+18]=602;
goto l80;
l15:x[jvj+20]=605 ;z[jvj+20]=605;
goto l82;
l16:x[jvj+20]=206 ;z[jvj+20]=206;
goto l82;
l17:x[jvj+20]=602 ;z[jvj+20]=602;
goto l82;
l18:x[jvj+7]=606 ;z[jvj+7]=606;
l63:pile[v[22]]=jvj+7; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=6; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+7,206,Z,6,36)*/
goto l75;
l19:x[jvj+7]=603 ;z[jvj+7]=603;
goto l63;
l20:x[jvj+6]=incon;
pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(935,B,jvj+2)*/
if((x[jvj+2]!=547)) goto l21;
x[jvj+6]=206 ;z[jvj+6]=206;
l61:pile[v[22]]=jvj+6; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=7; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+6,602,Z,7,36)*/
goto l75;
l21:x[jvj+6]=607 ;z[jvj+6]=607;
goto l61;
l22:x[jvj+10]=607 ;z[jvj+10]=607;
l69:pile[v[22]]=jvj+10; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=9; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+10,603,Z,9,36)*/
goto l75;
l23:x[jvj+10]=603 ;z[jvj+10]=603;
goto l69;
l24:x[jvj+10]=206 ;z[jvj+10]=206;
goto l69;
l25:x[jvj+10]=604 ;z[jvj+10]=604;
goto l69;
l26:x[jvj+10]=605 ;z[jvj+10]=605;
goto l69;
l27:x[jvj+11]=606 ;z[jvj+11]=606;
l71:pile[v[22]]=jvj+11; pile[WZ1]=607; pile[WZ2]=Z; pile[WZ3]=12; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+11,607,Z,12,36)*/
goto l75;
l28:x[jvj+11]=605 ;z[jvj+11]=605;
goto l71;
l29:x[jvj+11]=604 ;z[jvj+11]=604;
goto l71;
l30:x[jvj+11]=206 ;z[jvj+11]=206;
goto l71;
l31:x[jvj+11]=603 ;z[jvj+11]=603;
goto l71;
l32:x[jvj+11]=602 ;z[jvj+11]=602;
goto l71;
l33:x[jvj+12]=607 ;z[jvj+12]=607;
l73:pile[v[22]]=jvj+12; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=13; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+12,602,Z,13,36)*/
goto l75;
l34:x[jvj+12]=602 ;z[jvj+12]=602;
goto l73;
l35:x[jvj+12]=603 ;z[jvj+12]=603;
goto l73;
l36:x[jvj+12]=206 ;z[jvj+12]=206;
goto l73;
l37:x[jvj+12]=604 ;z[jvj+12]=604;
goto l73;
l38:x[jvj+12]=605 ;z[jvj+12]=605;
goto l73;
l39:x[jvj+8]=607 ;z[jvj+8]=607;
l65:pile[v[22]]=jvj+8; pile[WZ1]=603; pile[WZ2]=Z; pile[WZ3]=14; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+8,603,Z,14,36)*/
goto l75;
l40:x[jvj+8]=603 ;z[jvj+8]=603;
goto l65;
l41:x[jvj+8]=604 ;z[jvj+8]=604;
goto l65;
l42:x[jvj+8]=605 ;z[jvj+8]=605;
goto l65;
l43:x[jvj+13]=607 ;z[jvj+13]=607;
goto l74;
l44:x[jvj+13]=602 ;z[jvj+13]=602;
goto l74;
l45:x[jvj+13]=603 ;z[jvj+13]=603;
goto l74;
l46:x[jvj+13]=206 ;z[jvj+13]=206;
goto l74;
l47:x[jvj+13]=604 ;z[jvj+13]=604;
goto l74;
l48:x[jvj+13]=605 ;z[jvj+13]=605;
goto l74;
l49:x[jvj+16]=606 ;z[jvj+16]=606;
goto l78;
l50:x[jvj+16]=605 ;z[jvj+16]=605;
goto l78;
l51:x[jvj+16]=604 ;z[jvj+16]=604;
goto l78;
l52:x[jvj+16]=206 ;z[jvj+16]=206;
goto l78;
l53:x[jvj+16]=603 ;z[jvj+16]=603;
goto l78;
l54:x[jvj+16]=602 ;z[jvj+16]=602;
goto l78;
l56:pile[v[22]]=206; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=8; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(206,604,Z,8,36)*/
goto l59;
l57:pile[v[22]]=602; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=15; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(602,602,Z,15,36)*/
goto l59;
l58:pile[v[22]]=607; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=18; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(607,602,Z,18,36)*/
goto l59;
l62:pile[v[22]]=936; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(936,P,V13)*/
V13=pile[WZ2]; 
x[jvj+7]=incon;
if((V13<0)) goto l75;
if((V13<=1)) goto l18;
if((V13<=3)) goto l19;
x[jvj+7]=607 ;z[jvj+7]=607;
goto l63;
l64:pile[v[22]]=1110; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(1110,P,V32)*/
V32=pile[WZ2]; 
x[jvj+8]=incon;
if((V32==1)) goto l39;
if((V32<2)) goto l75;
if((V32<=3)) goto l40;
if((V32<=6)) goto l41;
if((V32<=9)) goto l42;
x[jvj+8]=606 ;z[jvj+8]=606;
goto l65;
l66:pile[v[22]]=1110; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(1110,P,V4)*/
V4=pile[WZ2]; 
x[jvj+9]=incon;
if((V4<=3)) goto l7;
if((V4<=7)) goto l8;
if((V4<=10)) goto l9;
if((V4<=16)) goto l10;
if((V4<=23)) goto l11;
x[jvj+9]=606 ;z[jvj+9]=606;
goto l67;
l68:pile[v[22]]=1110; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(1110,P,V20)*/
V20=pile[WZ2]; 
x[jvj+10]=incon;
if((V20<2)) goto l75;
if((V20<=3)) goto l22;
if((V20<=7)) goto l23;
if((V20<=10)) goto l24;
if((V20<=16)) goto l25;
if((V20<=23)) goto l26;
x[jvj+10]=606 ;z[jvj+10]=606;
goto l69;
l70:pile[v[22]]=1039; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(1039,P,V26)*/
V26=pile[WZ2]; 
x[jvj+11]=incon;
if((V26<10)) goto l75;
if((V26<=16)) goto l27;
if((V26<=25)) goto l28;
if((V26<=40)) goto l29;
if((V26<=63)) goto l30;
if((V26<=99)) goto l31;
if((V26<=161)) goto l32;
x[jvj+11]=607 ;z[jvj+11]=607;
goto l71;
l72:pile[v[22]]=1039; pile[WZ1]=P; 
(*f[26])( );if(v[102]) goto l75;     /*FNDC0(1039,P,V29)*/
V29=pile[WZ2]; 
x[jvj+12]=incon;
if((V29<=9)) goto l33;
if((V29<=76)) goto l34;
if((V29<=617)) goto l35;
if((V29<=5924)) goto l36;
if((V29<=49681)) goto l37;
if((V29<=478125)) goto l38;
x[jvj+12]=606 ;z[jvj+12]=606;
goto l73;
}
