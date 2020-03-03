#include "dx.h"
void VALASSERT0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V60=0,V64=0,V69=0,V40=0,V39=0,V38=0,V34=0,V55=0,V5=0,V8=0,V9=0,V7=0,V6=0,V1=0,V51=0,V52=0,V50=0,V49=0,V44=0,V16=0,V19=0,V20=0,V18=0,V17=0,V12=0,V30=0,V31=0,V29=0,V28=0,V23=0;
int D;
int Z;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=16;
x[jvj+1]=11240;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1477&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
D=pile[v[22]]; Z=pile[v[22]+1]; v[22]+=2; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=D; pile[WZ1]=274; pile[WZ2]=Z; 
(*f[54])( );     /*TRI1(D,274,Z)*/
pile[v[22]]=763; pile[WZ1]=D; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(763,D,jvj+3)*/
x[jvj+16]=x[jvj+3] ;z[jvj+16]=z[jvj+3];
l58:if((x[jvj+16]>0)) goto l59;
l75:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+11]=606 ;z[jvj+11]=606;
l70:pile[v[22]]=jvj+11; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=1; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+11,206,Z,1,36)*/
l60:x[jvj+16]=t[x[jvj+16]];
goto l58;
l2:x[jvj+11]=605 ;z[jvj+11]=605;
goto l70;
l3:x[jvj+11]=604 ;z[jvj+11]=604;
goto l70;
l4:x[jvj+11]=206 ;z[jvj+11]=206;
goto l70;
l5:x[jvj+11]=603 ;z[jvj+11]=603;
goto l70;
l6:x[jvj+11]=602 ;z[jvj+11]=602;
goto l70;
l7:x[jvj+11]=(-99999998);
goto l60;
l8:x[jvj+13]=606 ;z[jvj+13]=606;
l73:pile[v[22]]=jvj+13; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=2; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+13,604,Z,2,36)*/
goto l60;
l9:x[jvj+13]=605 ;z[jvj+13]=605;
goto l73;
l10:x[jvj+13]=604 ;z[jvj+13]=604;
goto l73;
l11:x[jvj+13]=206 ;z[jvj+13]=206;
goto l73;
l12:x[jvj+13]=603 ;z[jvj+13]=603;
goto l73;
l13:x[jvj+13]=602 ;z[jvj+13]=602;
goto l73;
l14:x[jvj+13]=(-99999998);
goto l60;
l15:x[jvj+14]=606 ;z[jvj+14]=606;
l74:pile[v[22]]=jvj+14; pile[WZ1]=605; pile[WZ2]=Z; pile[WZ3]=4; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+14,605,Z,4,36)*/
goto l60;
l16:x[jvj+14]=605 ;z[jvj+14]=605;
goto l74;
l17:x[jvj+14]=604 ;z[jvj+14]=604;
goto l74;
l18:x[jvj+14]=206 ;z[jvj+14]=206;
goto l74;
l19:x[jvj+14]=603 ;z[jvj+14]=603;
goto l74;
l20:x[jvj+14]=602 ;z[jvj+14]=602;
goto l74;
l21:x[jvj+14]=(-99999998);
goto l60;
l22:x[jvj+8]=606 ;z[jvj+8]=606;
l65:pile[v[22]]=jvj+8; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=5; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+8,206,Z,5,36)*/
goto l60;
l23:x[jvj+8]=605 ;z[jvj+8]=605;
goto l65;
l24:x[jvj+8]=604 ;z[jvj+8]=604;
goto l65;
l25:x[jvj+8]=206 ;z[jvj+8]=206;
goto l65;
l26:x[jvj+8]=603 ;z[jvj+8]=603;
goto l65;
l27:x[jvj+8]=602 ;z[jvj+8]=602;
goto l65;
l28:x[jvj+8]=(-99999998);
goto l60;
l29:x[jvj+12]=606 ;z[jvj+12]=606;
l71:pile[v[22]]=jvj+12; pile[WZ1]=604; pile[WZ2]=Z; pile[WZ3]=3; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+12,604,Z,3,36)*/
goto l60;
l30:x[jvj+12]=605 ;z[jvj+12]=605;
goto l71;
l31:x[jvj+12]=604 ;z[jvj+12]=604;
goto l71;
l32:x[jvj+12]=206 ;z[jvj+12]=206;
goto l71;
l33:x[jvj+12]=603 ;z[jvj+12]=603;
goto l71;
l34:x[jvj+12]=602 ;z[jvj+12]=602;
goto l71;
l35:x[jvj+12]=(-99999998);
goto l60;
l36:x[jvj+9]=606 ;z[jvj+9]=606;
l42:x[jvj+10]=incon;
x[jvj+15]=x[jvj+3] ;z[jvj+15]=z[jvj+3];
l43:if((x[jvj+15]>0)) goto l44;
x[jvj+10]=206 ;z[jvj+10]=206;
l67:pile[v[22]]=jvj+9; pile[WZ1]=jvj+10; pile[WZ2]=Z; pile[WZ3]=6; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+9,jvj+10,Z,6,36)*/
goto l60;
l37:x[jvj+9]=605 ;z[jvj+9]=605;
goto l42;
l38:x[jvj+9]=604 ;z[jvj+9]=604;
goto l42;
l39:x[jvj+9]=206 ;z[jvj+9]=206;
goto l42;
l40:x[jvj+9]=603 ;z[jvj+9]=603;
goto l42;
l41:x[jvj+9]=602 ;z[jvj+9]=602;
goto l42;
l44:x[jvj+2]=s[x[jvj+15]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+15];
pile[v[22]]=510; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(510,jvj+2,V60)*/
V60=pile[WZ2]; 
if((V60!=3)) goto l45;
x[jvj+10]=603 ;z[jvj+10]=603;
goto l67;
l45:x[jvj+15]=t[x[jvj+15]];
goto l43;
l46:x[jvj+6]=606 ;z[jvj+6]=606;
l62:pile[v[22]]=jvj+6; pile[WZ1]=206; pile[WZ2]=Z; pile[WZ3]=7; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+6,206,Z,7,36)*/
goto l60;
l47:x[jvj+6]=605 ;z[jvj+6]=605;
goto l62;
l48:x[jvj+6]=604 ;z[jvj+6]=604;
goto l62;
l49:x[jvj+6]=206 ;z[jvj+6]=206;
goto l62;
l50:x[jvj+6]=603 ;z[jvj+6]=603;
goto l62;
l51:x[jvj+6]=602 ;z[jvj+6]=602;
goto l62;
l52:x[jvj+7]=606 ;z[jvj+7]=606;
l64:pile[v[22]]=jvj+7; pile[WZ1]=602; pile[WZ2]=Z; pile[WZ3]=8; pile[WZ4]=36; 
(*f[1122])( );     /*EVALJGT0(jvj+7,602,Z,8,36)*/
pile[v[22]]=515; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(515,jvj+4,V40)*/
V40=pile[WZ2]; 
V39=V40-V69;
V38=100*V39;
V34=V38/V40;
x[jvj+8]=incon;
if((V34<1)) goto l28;
if((V34<=2)) goto l22;
if((V34<=4)) goto l23;
if((V34<=9)) goto l24;
if((V34<=20)) goto l25;
if((V34<=40)) goto l26;
if((V34<=86)) goto l27;
if((V34>100)) goto l28;
x[jvj+8]=607 ;z[jvj+8]=607;
goto l65;
l53:x[jvj+7]=605 ;z[jvj+7]=605;
goto l64;
l54:x[jvj+7]=604 ;z[jvj+7]=604;
goto l64;
l55:x[jvj+7]=206 ;z[jvj+7]=206;
goto l64;
l56:x[jvj+7]=603 ;z[jvj+7]=603;
goto l64;
l57:x[jvj+7]=602 ;z[jvj+7]=602;
goto l64;
l59:x[jvj+4]=s[x[jvj+16]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+16];
pile[v[22]]=447; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(447,jvj+4,jvj+5)*/
if((x[jvj+5]==954)) goto l61;
if((x[jvj+5]==493)) goto l63;
if((x[jvj+5]==547)) goto l66;
if((x[jvj+5]==876)) goto l68;
if((x[jvj+5]!=967)) goto l60;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(510,jvj+4,V16)*/
V16=pile[WZ2]; 
if((V16==1)) goto l72;
if((V16!=0)) goto l60;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+4,V30)*/
V30=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(515,jvj+4,V31)*/
V31=pile[WZ2]; 
V29=V30-V31;
V28=100*V29;
V23=V28/V30;
x[jvj+14]=incon;
if((V23<1)) goto l21;
if((V23<=2)) goto l15;
if((V23<=4)) goto l16;
if((V23<=9)) goto l17;
if((V23<=20)) goto l18;
if((V23<=40)) goto l19;
if((V23<=86)) goto l20;
if((V23>100)) goto l21;
x[jvj+14]=607 ;z[jvj+14]=607;
goto l74;
l61:pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+4,V64)*/
V64=pile[WZ2]; 
x[jvj+6]=incon;
if((V64<=1481)) goto l46;
if((V64<=2351)) goto l47;
if((V64<=3911)) goto l48;
if((V64<=6208)) goto l49;
if((V64<=9855)) goto l50;
if((V64<=16149)) goto l51;
x[jvj+6]=607 ;z[jvj+6]=607;
goto l62;
l63:pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+4,V69)*/
V69=pile[WZ2]; 
x[jvj+7]=incon;
if((V69<=1481)) goto l52;
if((V69<=2351)) goto l53;
if((V69<=3911)) goto l54;
if((V69<=6208)) goto l55;
if((V69<=9855)) goto l56;
if((V69<=16149)) goto l57;
x[jvj+7]=607 ;z[jvj+7]=607;
goto l64;
l66:pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+4,V55)*/
V55=pile[WZ2]; 
x[jvj+9]=incon;
if((V55<=1481)) goto l36;
if((V55<=2351)) goto l37;
if((V55<=3911)) goto l38;
if((V55<=6208)) goto l39;
if((V55<=9855)) goto l40;
if((V55<=16149)) goto l41;
x[jvj+9]=607 ;z[jvj+9]=607;
goto l42;
l68:pile[v[22]]=510; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(510,jvj+4,V5)*/
V5=pile[WZ2]; 
if((V5==1)) goto l69;
if((V5!=0)) goto l60;
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+4,V51)*/
V51=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(515,jvj+4,V52)*/
V52=pile[WZ2]; 
V50=V51-V52;
V49=100*V50;
V44=V49/V51;
x[jvj+12]=incon;
if((V44<1)) goto l35;
if((V44<=2)) goto l29;
if((V44<=4)) goto l30;
if((V44<=9)) goto l31;
if((V44<=20)) goto l32;
if((V44<=40)) goto l33;
if((V44<=86)) goto l34;
if((V44>100)) goto l35;
x[jvj+12]=607 ;z[jvj+12]=607;
goto l71;
l69:pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+4,V8)*/
V8=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(515,jvj+4,V9)*/
V9=pile[WZ2]; 
V7=V8-V9;
V6=100*V7;
V1=V6/V8;
x[jvj+11]=incon;
if((V1<1)) goto l7;
if((V1<=2)) goto l1;
if((V1<=4)) goto l2;
if((V1<=9)) goto l3;
if((V1<=20)) goto l4;
if((V1<=40)) goto l5;
if((V1<=86)) goto l6;
if((V1>100)) goto l7;
x[jvj+11]=607 ;z[jvj+11]=607;
goto l70;
l72:pile[v[22]]=117; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(117,jvj+4,V19)*/
V19=pile[WZ2]; 
pile[v[22]]=515; 
(*f[26])( );if(v[102]) goto l60;     /*FNDC0(515,jvj+4,V20)*/
V20=pile[WZ2]; 
V18=V19-V20;
V17=100*V18;
V12=V17/V19;
x[jvj+13]=incon;
if((V12<1)) goto l14;
if((V12<=2)) goto l8;
if((V12<=4)) goto l9;
if((V12<=9)) goto l10;
if((V12<=20)) goto l11;
if((V12<=40)) goto l12;
if((V12<=86)) goto l13;
if((V12>100)) goto l14;
x[jvj+13]=607 ;z[jvj+13]=607;
goto l73;
}
