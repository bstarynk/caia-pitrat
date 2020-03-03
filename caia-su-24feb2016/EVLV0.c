#include "dx.h"
void EVLV0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int RS=0,V2=0,RT=0,V3=0,V13=0,V17=0,V15=0,V18=0,V28=0,T=0,V31=0,V41=0,V42=0,V45=0,V55=0,V58=0,V69=0,V79=0,V84=0,V82=0,V85=0,V87=0,V96=0,V98=0,V108=0,V114=0,V109=0,V112=0,V124=0,V128=0,V131=0,V126=0,V129=0,V104=0,V64=0,V37=0,V51=0,V125=0;
int A,X;
int Z,TY;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=54;
if(v[0]>99700) (*f[6])( );

A=pile[v[22]]; X=pile[v[22]+1]; TY=pile[v[22]+3]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=111; pile[WZ1]=A; pile[WZ2]=jvj+33; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(111,A,jvj+33)*/
pile[v[22]]=101; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(101,jvj+33,jvj+34)*/
if((x[jvj+34]==485)) goto l71;
if((x[jvj+34]==486)) goto l73;
if((x[jvj+34]==1029)) goto l74;
if((x[jvj+34]==1215)) goto l77;
if((x[jvj+34]==1214)) goto l78;
if((x[jvj+34]==50)) goto l79;
if((x[jvj+34]==48)) goto l81;
if((x[jvj+34]==55)) goto l83;
if((x[jvj+34]==1273)) goto l85;
if((x[jvj+34]!=433)) goto l87;
pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+45; 
(*f[33])( );     /*FNDE0(107,A,jvj+45)*/
x[jvj+53]=incon;
x[jvj+51]=x[jvj+45] ;z[jvj+51]=z[jvj+45];
l34:if((x[jvj+51]>0)) goto l35;
x[jvj+53]=250 ;z[jvj+53]=250;
l37:x[jvj+46]=incon;
l41:if((x[jvj+45]>0)) goto l42;
x[jvj+46]=x[jvj+53] ;z[jvj+46]=z[jvj+53];
l86:if((x[jvj+46]==250)) goto l87;
pile[v[22]]=102; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(102,jvj+46,jvj+47)*/
pile[v[22]]=X; pile[WZ1]=jvj+47; pile[WZ3]=TY; 
(*f[110])( );if(v[102]) goto l87;     /*EVL2(X,jvj+47,Z,TY)*/
Z=pile[WZ2]; 
l88:v[0]=jvj; v[22]-=4; pile[v[22]+2]=Z; v[102]=0;return;
l1:V2=impos;
l4:pile[v[22]]=jvj+2; pile[WZ1]=V2; 
(*f[978])( );     /*PLUB3(jvj+2,V2)*/
x[jvj+35]=t[x[jvj+35]];
l2:if((x[jvj+35]>0)) goto l3;
for(a=x[jvj+2];a>0;a=t[a]) if(s[a]==impos) goto l87;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+3; 
(*f[46])( );     /*TRI0(0,117,jvj+3)*/
l5:if((x[jvj+2]>0)) goto l6;
pile[v[22]]=117; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(117,jvj+3,V3)*/
V3=pile[WZ2]; 
Z=V3;
l72:x[TY]=41 ;z[TY]=41;
goto l88;
l3:x[jvj+1]=s[x[jvj+35]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+35];
V2=incon;
pile[v[22]]=jvj+1; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l1;     /*EVL0(jvj+1,X,RS)*/
RS=pile[WZ2]; 
V2=RS;
goto l4;
l6:RT=s[x[jvj+2]];
pile[v[22]]=jvj+3; pile[WZ1]=117; pile[WZ2]=RT; 
(*f[186])( );     /*BTC0(jvj+3,117,RT)*/
x[jvj+2]=t[x[jvj+2]];
goto l5;
l7:V17=impos;
l10:pile[v[22]]=jvj+5; pile[WZ1]=V17; 
(*f[978])( );     /*PLUB3(jvj+5,V17)*/
x[jvj+36]=t[x[jvj+36]];
l8:if((x[jvj+36]>0)) goto l9;
for(a=x[jvj+5];a>0;a=t[a]) if(s[a]==impos) goto l87;
pile[v[22]]=1; pile[WZ1]=117; pile[WZ2]=jvj+6; 
(*f[46])( );     /*TRI0(1,117,jvj+6)*/
l11:if((x[jvj+5]>0)) goto l12;
pile[v[22]]=117; pile[WZ1]=jvj+6; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(117,jvj+6,V18)*/
V18=pile[WZ2]; 
Z=V18;
goto l72;
l9:x[jvj+4]=s[x[jvj+36]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+36];
V17=incon;
pile[v[22]]=jvj+4; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l7;     /*EVL0(jvj+4,X,V13)*/
V13=pile[WZ2]; 
V17=V13;
goto l10;
l12:V15=s[x[jvj+5]];
pile[v[22]]=jvj+6; pile[WZ1]=117; pile[WZ2]=V15; 
(*f[818])( );     /*MTC0(jvj+6,117,V15)*/
x[jvj+5]=t[x[jvj+5]];
goto l11;
l13:x[jvj+9]=300 ;z[jvj+9]=300;
l16:pile[v[22]]=jvj+8; pile[WZ1]=jvj+9; 
(*f[68])( );     /*PLUE0(jvj+8,jvj+9)*/
x[jvj+41]=t[x[jvj+41]];
l14:if((x[jvj+41]>0)) goto l15;
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==300) goto l87;
V31=incon;
for(a=x[jvj+8];a>0;a=t[a]) if(s[a]==134) goto l19;
l17:if((x[jvj+8]>0)) goto l18;
V31=135;
l82:V37=V31;
Z=V37;
l76:x[TY]=20 ;z[TY]=20;
goto l88;
l15:x[jvj+7]=s[x[jvj+41]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+41];
x[jvj+9]=incon;
pile[v[22]]=jvj+7; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l13;     /*EVL0(jvj+7,X,V28)*/
V28=pile[WZ2]; 
x[jvj+48]=V28 ;z[jvj+48]=(V28<=sepcte) ? V28 : 0;
x[jvj+9]=x[jvj+48] ;z[jvj+9]=z[jvj+48];
goto l16;
l18:T=s[x[jvj+8]];
if((T!=135)) goto l20;
x[jvj+8]=t[x[jvj+8]];
goto l17;
l19:V31=134;
goto l17;
l20:if(V31==incon) goto l87;
if((V31!=(-99999998))) goto l82;
l87:Z=x[TY]=incon;
v[0]=jvj; v[22]-=4; v[102]=1;return;
l21:x[jvj+12]=300 ;z[jvj+12]=300;
l24:pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+11,jvj+12)*/
x[jvj+42]=t[x[jvj+42]];
l22:if((x[jvj+42]>0)) goto l23;
V45=incon;
for(a=x[jvj+11];a>0;a=t[a]) if(s[a]==135) goto l27;
l25:if((x[jvj+11]>0)) goto l26;
V45=134;
l84:V51=V45;
Z=V51;
goto l76;
l23:x[jvj+10]=s[x[jvj+42]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+42];
x[jvj+12]=incon;
pile[v[22]]=jvj+10; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l21;     /*EVL0(jvj+10,X,V41)*/
V41=pile[WZ2]; 
x[jvj+49]=V41 ;z[jvj+49]=(V41<=sepcte) ? V41 : 0;
x[jvj+12]=x[jvj+49] ;z[jvj+12]=z[jvj+49];
goto l24;
l26:V42=s[x[jvj+11]];
if((V42!=134)) goto l28;
x[jvj+11]=t[x[jvj+11]];
goto l25;
l27:V45=135;
goto l25;
l28:if(V45==incon) goto l87;
if((V45!=(-99999998))) goto l84;
goto l87;
l29:x[jvj+15]=300 ;z[jvj+15]=300;
l32:pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+15)*/
x[jvj+40]=t[x[jvj+40]];
l30:if((x[jvj+40]>0)) goto l31;
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==300) goto l87;
V58=incon;
for(a=x[jvj+14];a>0;a=t[a]) if(s[a]==134) goto l33;
V58=134;
l80:V64=V58;
Z=V64;
goto l76;
l31:x[jvj+13]=s[x[jvj+40]] ;z[jvj+13]=(x[jvj+13]<=sepcte) ? x[jvj+13] : z[jvj+40];
x[jvj+15]=incon;
pile[v[22]]=jvj+13; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l29;     /*EVL0(jvj+13,X,V55)*/
V55=pile[WZ2]; 
x[jvj+50]=V55 ;z[jvj+50]=(V55<=sepcte) ? V55 : 0;
x[jvj+15]=x[jvj+50] ;z[jvj+15]=z[jvj+50];
goto l32;
l33:V58=135;
goto l80;
l35:x[jvj+16]=s[x[jvj+51]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+51];
pile[v[22]]=107; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[33])( );     /*FNDE0(107,jvj+16,jvj+17)*/
if((x[jvj+17]==0)) goto l36;
x[jvj+51]=t[x[jvj+51]];
goto l34;
l36:x[jvj+53]=x[jvj+16] ;z[jvj+53]=z[jvj+16];
goto l37;
l39:x[jvj+18]=s[x[jvj+52]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+52];
pile[v[22]]=jvj+18; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l43;     /*EVL0(jvj+18,X,V69)*/
V69=pile[WZ2]; 
if((V69==135)) goto l40;
l43:x[jvj+45]=t[x[jvj+45]];
goto l41;
l40:x[jvj+52]=t[x[jvj+52]];
l38:if((x[jvj+52]>0)) goto l39;
x[jvj+46]=x[jvj+19] ;z[jvj+46]=z[jvj+19];
goto l86;
l42:x[jvj+19]=s[x[jvj+45]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+45];
if((x[jvj+19]==x[jvj+53])) goto l43;
pile[v[22]]=107; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[33])( );     /*FNDE0(107,jvj+19,jvj+20)*/
x[jvj+52]=x[jvj+20] ;z[jvj+52]=z[jvj+20];
goto l38;
l44:V84=impos;
l47:pile[v[22]]=jvj+22; pile[WZ1]=V84; 
(*f[978])( );     /*PLUB3(jvj+22,V84)*/
x[jvj+37]=t[x[jvj+37]];
l45:if((x[jvj+37]>0)) goto l46;
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==impos) goto l87;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+23; 
(*f[46])( );     /*TRI0(0,117,jvj+23)*/
V82=135;
for(a=x[jvj+22];a>0;a=t[a]) if(s[a]==V82) goto l48;
l49:pile[v[22]]=117; pile[WZ1]=jvj+23; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(117,jvj+23,V85)*/
V85=pile[WZ2]; 
V87=incon;
if((V85==1)) goto l50;
V87=134;
l75:Z=V87;
goto l76;
l46:x[jvj+21]=s[x[jvj+37]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+37];
V84=incon;
pile[v[22]]=jvj+21; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l44;     /*EVL0(jvj+21,X,V79)*/
V79=pile[WZ2]; 
V84=V79;
goto l47;
l48:pile[v[22]]=jvj+23; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+23,117,1)*/
goto l49;
l50:V87=135;
goto l75;
l51:V98=(-99999);
l54:pile[v[22]]=jvj+25; pile[WZ1]=V98; 
(*f[207])( );     /*PLUE2(jvj+25,V98)*/
x[jvj+39]=t[x[jvj+39]];
l52:if((x[jvj+39]>0)) goto l53;
for(a=x[jvj+25];a>0;a=t[a]) if(s[a]==(-99999)) goto l87;
for(i=x[jvj+25],V104=0;i>0;i=t[i],V104++)  ;
Z=V104;
goto l72;
l53:x[jvj+24]=s[x[jvj+39]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+39];
V98=incon;
pile[v[22]]=jvj+24; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l51;     /*EVL0(jvj+24,X,V96)*/
V96=pile[WZ2]; 
V98=V96;
goto l54;
l55:x[jvj+28]=250 ;z[jvj+28]=250;
l58:pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; 
(*f[522])( );     /*PLUB2(jvj+27,jvj+28)*/
x[jvj+38]=t[x[jvj+38]];
l56:if((x[jvj+38]>0)) goto l57;
for(a=x[jvj+27];a>0;a=t[a]) if(s[a]==250) goto l87;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+29; 
(*f[46])( );     /*TRI0(0,117,jvj+29)*/
l60:if((x[jvj+27]>0)) goto l61;
pile[v[22]]=117; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(117,jvj+29,V112)*/
V112=pile[WZ2]; 
Z=V112;
goto l72;
l57:x[jvj+26]=s[x[jvj+38]] ;z[jvj+26]=(x[jvj+26]<=sepcte) ? x[jvj+26] : z[jvj+38];
x[jvj+28]=incon;
pile[v[22]]=jvj+26; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l55;     /*EVL0(jvj+26,X,V108)*/
V108=pile[WZ2]; 
x[jvj+54]=V108 ;z[jvj+54]=(V108<=sepcte) ? V108 : 0;
x[jvj+28]=x[jvj+54] ;z[jvj+28]=z[jvj+54];
goto l58;
l59:V114=1;
l62:pile[v[22]]=jvj+29; pile[WZ1]=117; pile[WZ2]=V114; 
(*f[186])( );     /*BTC0(jvj+29,117,V114)*/
x[jvj+27]=t[x[jvj+27]];
goto l60;
l61:V109=s[x[jvj+27]];
V114=incon;
if((V109==135)) goto l59;
V114=0;
goto l62;
l63:V128=999999999;
l66:pile[v[22]]=jvj+31; pile[WZ1]=V128; 
(*f[978])( );     /*PLUB3(jvj+31,V128)*/
x[jvj+43]=t[x[jvj+43]];
l64:if((x[jvj+43]>0)) goto l65;
for(a=x[jvj+31];a>0;a=t[a]) if(s[a]==999999999) goto l87;
pile[v[22]]=102; pile[WZ1]=A; pile[WZ2]=jvj+44; 
(*f[32])( );if(v[102]) goto l87;     /*FNDO0(102,A,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l87;     /*EVL0(jvj+44,X,V125)*/
V125=pile[WZ2]; 
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+32; 
(*f[46])( );     /*TRI0(0,117,jvj+32)*/
l68:if((x[jvj+31]>0)) goto l69;
pile[v[22]]=117; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l87;     /*FNDC0(117,jvj+32,V129)*/
V129=pile[WZ2]; 
Z=V129;
goto l72;
l65:x[jvj+30]=s[x[jvj+43]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+43];
V128=incon;
pile[v[22]]=jvj+30; pile[WZ1]=X; 
(*f[30])( );if(v[102]) goto l63;     /*EVL0(jvj+30,X,V124)*/
V124=pile[WZ2]; 
V128=V124;
goto l66;
l67:V131=1;
l70:pile[v[22]]=jvj+32; pile[WZ1]=117; pile[WZ2]=V131; 
(*f[186])( );     /*BTC0(jvj+32,117,V131)*/
x[jvj+31]=t[x[jvj+31]];
goto l68;
l69:V126=s[x[jvj+31]];
V131=incon;
if((V126==V125)) goto l67;
V131=0;
goto l70;
l71:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(107,A,jvj+35)*/
x[jvj+2]=0 ;z[jvj+2]=0;
goto l2;
l73:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,A,jvj+36)*/
x[jvj+5]=0 ;z[jvj+5]=0;
goto l8;
l74:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+37; 
(*f[33])( );     /*FNDE0(107,A,jvj+37)*/
x[jvj+22]=0 ;z[jvj+22]=0;
goto l45;
l77:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(107,A,jvj+38)*/
x[jvj+27]=0 ;z[jvj+27]=0;
goto l56;
l78:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,A,jvj+39)*/
x[jvj+25]=0 ;z[jvj+25]=0;
goto l52;
l79:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+40; 
(*f[33])( );     /*FNDE0(107,A,jvj+40)*/
x[jvj+14]=0 ;z[jvj+14]=0;
goto l30;
l81:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(107,A,jvj+41)*/
x[jvj+8]=0 ;z[jvj+8]=0;
goto l14;
l83:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(107,A,jvj+42)*/
x[jvj+11]=0 ;z[jvj+11]=0;
goto l22;
l85:pile[v[22]]=107; pile[WZ1]=A; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(107,A,jvj+43)*/
x[jvj+31]=0 ;z[jvj+31]=0;
goto l64;
}
