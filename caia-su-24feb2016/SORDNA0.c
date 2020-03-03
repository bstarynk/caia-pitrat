#include "dx.h"
void SORDNA0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V3=0,V8=0,V13=0,V18=0,V23=0,V28=0,V33=0,V38=0,V41=0,V42=0,V106=0,V107=0,V125=0,V124=0,V119=0,V122=0,V127=0,V120=0,V116=0,V118=0,V121=0,V126=0,V114=0,V219=0,V217=0,V214=0,V113=0,V207=0,V205=0,V202=0,V112=0,V195=0,V193=0,V190=0,V111=0,V183=0,V181=0,V178=0,V110=0,V171=0,V169=0,V166=0,V109=0,V159=0,V157=0,V154=0,V108=0,V147=0,V145=0,V142=0,V135=0,V133=0,V130=0;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=76;
x[jvj+1]=11165;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==438&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}

WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+20]=x[jvj+57]=x[jvj+52]=x[jvj+47]=x[jvj+42]=x[jvj+37]=x[jvj+32]=x[jvj+27]=incon;
x[jvj+2]=vo[16];z[jvj+2]=vz[16];
pile[v[22]]=454; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[33])( );     /*FNDE0(454,jvj+2,jvj+3)*/
x[jvj+62]=x[jvj+3] ;z[jvj+62]=z[jvj+3];
l1:if((x[jvj+62]<=0)) goto l4;
x[jvj+4]=s[x[jvj+62]] ;z[jvj+4]=(x[jvj+4]<=sepcte) ? x[jvj+4] : z[jvj+62];
pile[v[22]]=436; pile[WZ1]=jvj+4; pile[WZ2]=jvj+5; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(436,jvj+4,jvj+5)*/
pile[v[22]]=140; pile[WZ1]=jvj+5; 
(*f[44])( );if(v[102]) goto l2;     /*FNDC1(140,jvj+5,V3)*/
V3=pile[WZ2]; 
if((V3!=(-598))) goto l2;
x[jvj+20]=x[jvj+4] ;z[jvj+20]=z[jvj+4];
l4:x[jvj+63]=x[jvj+3] ;z[jvj+63]=z[jvj+3];
l3:if((x[jvj+63]<=0)) goto l7;
x[jvj+6]=s[x[jvj+63]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+63];
pile[v[22]]=436; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l5;     /*FNDO0(436,jvj+6,jvj+7)*/
pile[v[22]]=140; pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l5;     /*FNDC1(140,jvj+7,V8)*/
V8=pile[WZ2]; 
if((V8!=(-591))) goto l5;
x[jvj+57]=x[jvj+6] ;z[jvj+57]=z[jvj+6];
l7:x[jvj+64]=x[jvj+3] ;z[jvj+64]=z[jvj+3];
l6:if((x[jvj+64]<=0)) goto l10;
x[jvj+8]=s[x[jvj+64]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+64];
pile[v[22]]=436; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(436,jvj+8,jvj+9)*/
pile[v[22]]=140; pile[WZ1]=jvj+9; 
(*f[44])( );if(v[102]) goto l8;     /*FNDC1(140,jvj+9,V13)*/
V13=pile[WZ2]; 
if((V13!=(-632))) goto l8;
x[jvj+52]=x[jvj+8] ;z[jvj+52]=z[jvj+8];
l10:x[jvj+65]=x[jvj+3] ;z[jvj+65]=z[jvj+3];
l9:if((x[jvj+65]<=0)) goto l13;
x[jvj+10]=s[x[jvj+65]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+65];
pile[v[22]]=436; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l11;     /*FNDO0(436,jvj+10,jvj+11)*/
pile[v[22]]=140; pile[WZ1]=jvj+11; 
(*f[44])( );if(v[102]) goto l11;     /*FNDC1(140,jvj+11,V18)*/
V18=pile[WZ2]; 
if((V18!=(-656))) goto l11;
x[jvj+47]=x[jvj+10] ;z[jvj+47]=z[jvj+10];
l13:x[jvj+66]=x[jvj+3] ;z[jvj+66]=z[jvj+3];
l12:if((x[jvj+66]<=0)) goto l16;
x[jvj+12]=s[x[jvj+66]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+66];
pile[v[22]]=436; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(436,jvj+12,jvj+13)*/
pile[v[22]]=140; pile[WZ1]=jvj+13; 
(*f[44])( );if(v[102]) goto l14;     /*FNDC1(140,jvj+13,V23)*/
V23=pile[WZ2]; 
if((V23!=(-697))) goto l14;
x[jvj+42]=x[jvj+12] ;z[jvj+42]=z[jvj+12];
l16:x[jvj+67]=x[jvj+3] ;z[jvj+67]=z[jvj+3];
l15:if((x[jvj+67]<=0)) goto l19;
x[jvj+14]=s[x[jvj+67]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+67];
pile[v[22]]=436; pile[WZ1]=jvj+14; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l17;     /*FNDO0(436,jvj+14,jvj+15)*/
pile[v[22]]=140; pile[WZ1]=jvj+15; 
(*f[44])( );if(v[102]) goto l17;     /*FNDC1(140,jvj+15,V28)*/
V28=pile[WZ2]; 
if((V28!=(-1544))) goto l17;
x[jvj+37]=x[jvj+14] ;z[jvj+37]=z[jvj+14];
l19:x[jvj+68]=x[jvj+3] ;z[jvj+68]=z[jvj+3];
l18:if((x[jvj+68]<=0)) goto l21;
x[jvj+16]=s[x[jvj+68]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+68];
pile[v[22]]=436; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(436,jvj+16,jvj+17)*/
pile[v[22]]=140; pile[WZ1]=jvj+17; 
(*f[44])( );if(v[102]) goto l20;     /*FNDC1(140,jvj+17,V33)*/
V33=pile[WZ2]; 
if((V33!=(-2041))) goto l20;
x[jvj+32]=x[jvj+16] ;z[jvj+32]=z[jvj+16];
l21:if((x[jvj+3]<=0)) goto l27;
x[jvj+18]=s[x[jvj+3]] ;z[jvj+18]=(x[jvj+18]<=sepcte) ? x[jvj+18] : z[jvj+3];
pile[v[22]]=436; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l22;     /*FNDO0(436,jvj+18,jvj+19)*/
pile[v[22]]=140; pile[WZ1]=jvj+19; 
(*f[44])( );if(v[102]) goto l22;     /*FNDC1(140,jvj+19,V38)*/
V38=pile[WZ2]; 
if((V38!=(-630))) goto l22;
x[jvj+27]=x[jvj+18] ;z[jvj+27]=z[jvj+18];
l27:if(x[jvj+20]!=incon) goto l28;
l35:x[jvj+1]=incon; v[0]=jvj; return;
l2:x[jvj+62]=t[x[jvj+62]];
goto l1;
l5:x[jvj+63]=t[x[jvj+63]];
goto l3;
l8:x[jvj+64]=t[x[jvj+64]];
goto l6;
l11:x[jvj+65]=t[x[jvj+65]];
goto l9;
l14:x[jvj+66]=t[x[jvj+66]];
goto l12;
l17:x[jvj+67]=t[x[jvj+67]];
goto l15;
l20:x[jvj+68]=t[x[jvj+68]];
goto l18;
l22:x[jvj+3]=t[x[jvj+3]];
goto l21;
l23:V41=(-999999);
pile[v[22]]=480; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[33])( );     /*FNDE0(480,jvj+20,jvj+21)*/
l24:if((x[jvj+21]>0)) goto l25;
if((V41==(-999999))) goto l35;
V106=1;
V107=0;
V125=V107;
V124=V106;
l36:pile[v[22]]=480; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[33])( );     /*FNDE0(480,jvj+20,jvj+23)*/
l37:if((x[jvj+23]>0)) goto l111;
goto l35;
l25:x[jvj+22]=s[x[jvj+21]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+21];
pile[v[22]]=130; pile[WZ1]=jvj+22; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(130,jvj+22,V42)*/
V42=pile[WZ2]; 
if(V42>V41) V41=V42;
l26:x[jvj+21]=t[x[jvj+21]];
goto l24;
l28:if(x[jvj+57]!=incon) goto l29;
goto l35;
l29:if(x[jvj+52]!=incon) goto l30;
goto l35;
l30:if(x[jvj+47]!=incon) goto l31;
goto l35;
l31:if(x[jvj+42]!=incon) goto l32;
goto l35;
l32:if(x[jvj+37]!=incon) goto l33;
goto l35;
l33:if(x[jvj+32]!=incon) goto l34;
goto l35;
l34:if(x[jvj+27]!=incon) goto l23;
goto l35;
l40:V121=0;
V126=V116;
if((V126<0)) goto l39;
pile[v[22]]=V126; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V126,3)*/
l39:if((V124>=V41)) goto l35;
pile[v[22]]=V116; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V116,32,V119)*/
V119=pile[WZ2]; 
l38:V120=V124+1;
V124=V120;
V125=V119;
goto l36;
l42:V219=65;
l41:pile[v[22]]=V114; pile[WZ1]=V219; 
(*f[38])( );     /*SPC0(V114,V219,V116)*/
V116=pile[WZ2]; 
if((V124==V41)) goto l40;
V118=V124%4;
if((V118!=0)) goto l39;
if((V124>=V41)) goto l35;
V119=0;
V122=0;
V127=V116;
if((V127<0)) goto l38;
pile[v[22]]=V127; pile[WZ1]=3; 
(*f[342])( );     /*SLG2(V127,3)*/
goto l38;
l43:V219=71;
goto l41;
l44:V219=67;
goto l41;
l45:x[jvj+69]=t[x[jvj+69]];
l46:if((x[jvj+69]<=0)) goto l47;
x[jvj+24]=s[x[jvj+69]] ;z[jvj+24]=(x[jvj+24]<=sepcte) ? x[jvj+24] : z[jvj+69];
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l45;     /*FNDC0(130,jvj+24,V217)*/
V217=pile[WZ2]; 
V219=incon;
if((V217==1)) goto l42;
if((V217==2)) goto l44;
if((V217==3)) goto l43;
V219=84;
goto l41;
l47:x[jvj+28]=t[x[jvj+28]];
l48:if((x[jvj+28]>0)) goto l49;
goto l35;
l49:x[jvj+25]=s[x[jvj+28]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+28];
pile[v[22]]=130; pile[WZ1]=jvj+25; 
(*f[26])( );if(v[102]) goto l47;     /*FNDC0(130,jvj+25,V214)*/
V214=pile[WZ2]; 
if((V214!=V124)) goto l47;
pile[v[22]]=489; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(489,jvj+25,jvj+26)*/
x[jvj+69]=x[jvj+26] ;z[jvj+69]=z[jvj+26];
goto l46;
l51:V207=65;
l50:pile[v[22]]=V113; pile[WZ1]=V207; 
(*f[38])( );     /*SPC0(V113,V207,V114)*/
V114=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+27; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(480,jvj+27,jvj+28)*/
goto l48;
l52:V207=71;
goto l50;
l53:V207=67;
goto l50;
l54:x[jvj+70]=t[x[jvj+70]];
l55:if((x[jvj+70]<=0)) goto l56;
x[jvj+29]=s[x[jvj+70]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+70];
pile[v[22]]=130; pile[WZ1]=jvj+29; 
(*f[26])( );if(v[102]) goto l54;     /*FNDC0(130,jvj+29,V205)*/
V205=pile[WZ2]; 
V207=incon;
if((V205==1)) goto l51;
if((V205==2)) goto l53;
if((V205==3)) goto l52;
V207=84;
goto l50;
l56:x[jvj+33]=t[x[jvj+33]];
l57:if((x[jvj+33]>0)) goto l58;
goto l35;
l58:x[jvj+30]=s[x[jvj+33]] ;z[jvj+30]=(x[jvj+30]<=sepcte) ? x[jvj+30] : z[jvj+33];
pile[v[22]]=130; pile[WZ1]=jvj+30; 
(*f[26])( );if(v[102]) goto l56;     /*FNDC0(130,jvj+30,V202)*/
V202=pile[WZ2]; 
if((V202!=V124)) goto l56;
pile[v[22]]=489; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(489,jvj+30,jvj+31)*/
x[jvj+70]=x[jvj+31] ;z[jvj+70]=z[jvj+31];
goto l55;
l60:V195=65;
l59:pile[v[22]]=V112; pile[WZ1]=V195; 
(*f[38])( );     /*SPC0(V112,V195,V113)*/
V113=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(480,jvj+32,jvj+33)*/
goto l57;
l61:V195=71;
goto l59;
l62:V195=67;
goto l59;
l63:x[jvj+71]=t[x[jvj+71]];
l64:if((x[jvj+71]<=0)) goto l65;
x[jvj+34]=s[x[jvj+71]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+71];
pile[v[22]]=130; pile[WZ1]=jvj+34; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(130,jvj+34,V193)*/
V193=pile[WZ2]; 
V195=incon;
if((V193==1)) goto l60;
if((V193==2)) goto l62;
if((V193==3)) goto l61;
V195=84;
goto l59;
l65:x[jvj+38]=t[x[jvj+38]];
l66:if((x[jvj+38]>0)) goto l67;
goto l35;
l67:x[jvj+35]=s[x[jvj+38]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+38];
pile[v[22]]=130; pile[WZ1]=jvj+35; 
(*f[26])( );if(v[102]) goto l65;     /*FNDC0(130,jvj+35,V190)*/
V190=pile[WZ2]; 
if((V190!=V124)) goto l65;
pile[v[22]]=489; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(489,jvj+35,jvj+36)*/
x[jvj+71]=x[jvj+36] ;z[jvj+71]=z[jvj+36];
goto l64;
l69:V183=65;
l68:pile[v[22]]=V111; pile[WZ1]=V183; 
(*f[38])( );     /*SPC0(V111,V183,V112)*/
V112=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(480,jvj+37,jvj+38)*/
goto l66;
l70:V183=71;
goto l68;
l71:V183=67;
goto l68;
l72:x[jvj+72]=t[x[jvj+72]];
l73:if((x[jvj+72]<=0)) goto l74;
x[jvj+39]=s[x[jvj+72]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+72];
pile[v[22]]=130; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(130,jvj+39,V181)*/
V181=pile[WZ2]; 
V183=incon;
if((V181==1)) goto l69;
if((V181==2)) goto l71;
if((V181==3)) goto l70;
V183=84;
goto l68;
l74:x[jvj+43]=t[x[jvj+43]];
l75:if((x[jvj+43]>0)) goto l76;
goto l35;
l76:x[jvj+40]=s[x[jvj+43]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+43];
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l74;     /*FNDC0(130,jvj+40,V178)*/
V178=pile[WZ2]; 
if((V178!=V124)) goto l74;
pile[v[22]]=489; pile[WZ2]=jvj+41; 
(*f[33])( );     /*FNDE0(489,jvj+40,jvj+41)*/
x[jvj+72]=x[jvj+41] ;z[jvj+72]=z[jvj+41];
goto l73;
l78:V171=65;
l77:pile[v[22]]=V110; pile[WZ1]=V171; 
(*f[38])( );     /*SPC0(V110,V171,V111)*/
V111=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+42; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(480,jvj+42,jvj+43)*/
goto l75;
l79:V171=71;
goto l77;
l80:V171=67;
goto l77;
l81:x[jvj+73]=t[x[jvj+73]];
l82:if((x[jvj+73]<=0)) goto l83;
x[jvj+44]=s[x[jvj+73]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+73];
pile[v[22]]=130; pile[WZ1]=jvj+44; 
(*f[26])( );if(v[102]) goto l81;     /*FNDC0(130,jvj+44,V169)*/
V169=pile[WZ2]; 
V171=incon;
if((V169==1)) goto l78;
if((V169==2)) goto l80;
if((V169==3)) goto l79;
V171=84;
goto l77;
l83:x[jvj+48]=t[x[jvj+48]];
l84:if((x[jvj+48]>0)) goto l85;
goto l35;
l85:x[jvj+45]=s[x[jvj+48]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+48];
pile[v[22]]=130; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l83;     /*FNDC0(130,jvj+45,V166)*/
V166=pile[WZ2]; 
if((V166!=V124)) goto l83;
pile[v[22]]=489; pile[WZ2]=jvj+46; 
(*f[33])( );     /*FNDE0(489,jvj+45,jvj+46)*/
x[jvj+73]=x[jvj+46] ;z[jvj+73]=z[jvj+46];
goto l82;
l87:V159=65;
l86:pile[v[22]]=V109; pile[WZ1]=V159; 
(*f[38])( );     /*SPC0(V109,V159,V110)*/
V110=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(480,jvj+47,jvj+48)*/
goto l84;
l88:V159=71;
goto l86;
l89:V159=67;
goto l86;
l90:x[jvj+74]=t[x[jvj+74]];
l91:if((x[jvj+74]<=0)) goto l92;
x[jvj+49]=s[x[jvj+74]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+74];
pile[v[22]]=130; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l90;     /*FNDC0(130,jvj+49,V157)*/
V157=pile[WZ2]; 
V159=incon;
if((V157==1)) goto l87;
if((V157==2)) goto l89;
if((V157==3)) goto l88;
V159=84;
goto l86;
l92:x[jvj+53]=t[x[jvj+53]];
l93:if((x[jvj+53]>0)) goto l94;
goto l35;
l94:x[jvj+50]=s[x[jvj+53]] ;z[jvj+50]=(x[jvj+50]<=sepcte) ? x[jvj+50] : z[jvj+53];
pile[v[22]]=130; pile[WZ1]=jvj+50; 
(*f[26])( );if(v[102]) goto l92;     /*FNDC0(130,jvj+50,V154)*/
V154=pile[WZ2]; 
if((V154!=V124)) goto l92;
pile[v[22]]=489; pile[WZ2]=jvj+51; 
(*f[33])( );     /*FNDE0(489,jvj+50,jvj+51)*/
x[jvj+74]=x[jvj+51] ;z[jvj+74]=z[jvj+51];
goto l91;
l96:V147=65;
l95:pile[v[22]]=V108; pile[WZ1]=V147; 
(*f[38])( );     /*SPC0(V108,V147,V109)*/
V109=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[33])( );     /*FNDE0(480,jvj+52,jvj+53)*/
goto l93;
l97:V147=71;
goto l95;
l98:V147=67;
goto l95;
l99:x[jvj+75]=t[x[jvj+75]];
l100:if((x[jvj+75]<=0)) goto l101;
x[jvj+54]=s[x[jvj+75]] ;z[jvj+54]=(x[jvj+54]<=sepcte) ? x[jvj+54] : z[jvj+75];
pile[v[22]]=130; pile[WZ1]=jvj+54; 
(*f[26])( );if(v[102]) goto l99;     /*FNDC0(130,jvj+54,V145)*/
V145=pile[WZ2]; 
V147=incon;
if((V145==1)) goto l96;
if((V145==2)) goto l98;
if((V145==3)) goto l97;
V147=84;
goto l95;
l101:x[jvj+58]=t[x[jvj+58]];
l102:if((x[jvj+58]>0)) goto l103;
goto l35;
l103:x[jvj+55]=s[x[jvj+58]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+58];
pile[v[22]]=130; pile[WZ1]=jvj+55; 
(*f[26])( );if(v[102]) goto l101;     /*FNDC0(130,jvj+55,V142)*/
V142=pile[WZ2]; 
if((V142!=V124)) goto l101;
pile[v[22]]=489; pile[WZ2]=jvj+56; 
(*f[33])( );     /*FNDE0(489,jvj+55,jvj+56)*/
x[jvj+75]=x[jvj+56] ;z[jvj+75]=z[jvj+56];
goto l100;
l105:V135=65;
l104:pile[v[22]]=V125; pile[WZ1]=V135; 
(*f[38])( );     /*SPC0(V125,V135,V108)*/
V108=pile[WZ2]; 
pile[v[22]]=480; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(480,jvj+57,jvj+58)*/
goto l102;
l106:V135=71;
goto l104;
l107:V135=67;
goto l104;
l108:x[jvj+76]=t[x[jvj+76]];
l109:if((x[jvj+76]<=0)) goto l110;
x[jvj+59]=s[x[jvj+76]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+76];
pile[v[22]]=130; pile[WZ1]=jvj+59; 
(*f[26])( );if(v[102]) goto l108;     /*FNDC0(130,jvj+59,V133)*/
V133=pile[WZ2]; 
V135=incon;
if((V133==1)) goto l105;
if((V133==2)) goto l107;
if((V133==3)) goto l106;
V135=84;
goto l104;
l110:x[jvj+23]=t[x[jvj+23]];
goto l37;
l111:x[jvj+60]=s[x[jvj+23]] ;z[jvj+60]=(x[jvj+60]<=sepcte) ? x[jvj+60] : z[jvj+23];
pile[v[22]]=130; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l110;     /*FNDC0(130,jvj+60,V130)*/
V130=pile[WZ2]; 
if((V130!=V124)) goto l110;
pile[v[22]]=489; pile[WZ2]=jvj+61; 
(*f[33])( );     /*FNDE0(489,jvj+60,jvj+61)*/
x[jvj+76]=x[jvj+61] ;z[jvj+76]=z[jvj+61];
goto l109;
}
