#include "dx.h"
void EAF0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V30=0,DX=0,V48=0,V47=0,DY=0,V91=0,V93=0,V92=0,KR=0,UR=0,V53=0,DZ=0,V45=0,V3=0,V42=0,V102=0,V101=0,V75=0,V73=0,V74=0,V77=0,V72=0,F=0,V83=0,V81=0,V82=0,V85=0,V80=0,FF=0,V98=0,V95=0,H=0,V99=0,V106=0,V103=0,V105=0;
int L,LL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=69;
x[jvj+1]=10531;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==111&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
L=pile[v[22]]; LL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+2]=x[jvj+8]=x[jvj+3]=KR=UR=DY=incon;
V30=bh[v[1]][LL];
if((V30==42)) goto l13;
pile[v[22]]=LL; pile[WZ1]=jvj+2; 
(*f[79])( );if(v[102]) goto l13;     /*LEXP0(LL,jvj+2,DX)*/
DX=pile[WZ2]; 
V47=bh[v[1]][DX];
if((V47!=124)) goto l1;
x[jvj+8]=38 ;z[jvj+8]=38;
pile[v[22]]=DX; pile[WZ1]=jvj+3; 
(*f[79])( );if(v[102]) goto l7;     /*LEXP0(DX,jvj+3,DY)*/
DY=pile[WZ2]; 
l8:V91=bh[v[1]][DY];
V93=DY+1;
V92=bh[v[1]][V93];
KR=V91;
UR=V92;
if((KR==43)) goto l9;
if((KR==38)) goto l10;
if((KR!=32)) goto l11;
if((UR==32)) goto l11;
pile[v[22]]=DY; 
(*f[107])( );     /*CRC0(DY,DZ)*/
DZ=pile[WZ1]; 
l12:V45=bh[v[1]][DZ];
if((V45!=33)) goto l13;
x[jvj+9]=67 ;z[jvj+9]=67;
l64:if(x[jvj+8]!=incon) goto l65;
l82:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l1:x[jvj+54]=incon;
V48=bh[v[1]][LL];
if((V48==43)) goto l2;
if((V48==32)) goto l3;
if((V48==59)) goto l4;
if((V48==58)) goto l5;
if((V48!=37)) goto l7;
x[jvj+54]=18 ;z[jvj+54]=18;
l6:x[jvj+8]=x[jvj+54] ;z[jvj+8]=z[jvj+54];
l7:DY=DX;
x[jvj+3]=250 ;z[jvj+3]=250;
goto l8;
l2:x[jvj+54]=209 ;z[jvj+54]=209;
goto l6;
l3:x[jvj+54]=67 ;z[jvj+54]=67;
goto l6;
l4:x[jvj+54]=208 ;z[jvj+54]=208;
goto l6;
l5:x[jvj+54]=100 ;z[jvj+54]=100;
goto l6;
l9:V53=DY+1;
DZ=V53;
goto l12;
l10:pile[v[22]]=DY; 
(*f[107])( );     /*CRC0(DY,DZ)*/
DZ=pile[WZ1]; 
goto l12;
l11:DZ=DY;
goto l12;
l13:x[jvj+9]=68 ;z[jvj+9]=68;
if(x[jvj+2]!=incon) goto l64;
goto l82;
l15:x[jvj+4]=t[x[jvj+4]];
l14:if((x[jvj+4]<=0)) goto l70;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
V3=x[jvj+5];
if((V3>sepbloc)) goto l15;
pile[v[22]]=184; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(184,jvj+5,jvj+6)*/
x[jvj+55]=x[jvj+6] ;z[jvj+55]=z[jvj+6];
l16:if((x[jvj+55]<=0)) goto l15;
x[jvj+7]=s[x[jvj+55]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+55];
pile[v[22]]=jvj+5; pile[WZ1]=jvj+7; pile[WZ2]=jvj+2; pile[WZ3]=jvj+7; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+5,jvj+7,jvj+2,jvj+7,jvj+8,jvj+3,jvj+9)*/
x[jvj+55]=t[x[jvj+55]];
goto l16;
l17:if(KR==33||KR==46) goto l18;
if((KR!=32)) goto l77;
pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(274,L,jvj+10)*/
pile[v[22]]=100; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l76;     /*FNDO0(100,jvj+10,jvj+11)*/
if(x[jvj+11]==508||x[jvj+11]==854) goto l18;
l76:pile[v[22]]=274; pile[WZ1]=L; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(274,L,jvj+51)*/
pile[v[22]]=100; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(100,jvj+51,jvj+52)*/
if(x[jvj+52]==508||x[jvj+52]==854) goto l77;
pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(109,L,jvj+53)*/
z[jvj+51]=(-1);
pile[v[22]]=jvj+9; pile[WZ1]=jvj+3; pile[WZ2]=jvj+8; pile[WZ3]=jvj+51; pile[WZ4]=jvj+2; pile[WZ5]=jvj+53; pile[v[22]+6]=jvj+51; 
(*f[337])( );     /*EAFA0(jvj+9,jvj+3,jvj+8,jvj+51,jvj+2,jvj+53,jvj+51)*/
if((x[jvj+8]!=38)) goto l77;
V102=x[jvj+51];
pile[v[22]]=20; pile[WZ1]=V102; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V102,0,V101)*/
V101=pile[WZ3]; 
pile[v[22]]=V101; 
(*f[40])( );     /*SLG0(V101)*/
l77:if(DY!=incon) goto l78;
l80:if((x[jvj+8]!=18)) goto l82;
V99=incon;
pile[v[22]]=117; pile[WZ1]=jvj+2; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(117,jvj+2,H)*/
H=pile[WZ2]; 
V99=H;
l81:V106=x[jvj+2];
pile[v[22]]=41; pile[WZ1]=V99; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V99,0,V103)*/
V103=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V106; pile[WZ2]=V103; 
(*f[39])( );     /*SDX0(20,V106,V103,V105)*/
V105=pile[WZ3]; 
pile[v[22]]=V105; 
(*f[40])( );     /*SLG0(V105)*/
goto l82;
l18:pile[v[22]]=109; pile[WZ1]=L; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(109,L,jvj+12)*/
pile[v[22]]=100; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l75;     /*FNDO0(100,jvj+12,jvj+13)*/
x[jvj+56]=w[x[jvj+13]][9];
l19:if((x[jvj+56]>0)) goto l20;
x[jvj+57]=w[x[jvj+13]][8];
l22:if((x[jvj+57]<=0)) goto l75;
x[jvj+17]=s[x[jvj+57]] ;z[jvj+17]=(x[jvj+17]<=sepcte) ? x[jvj+17] : z[jvj+57];
pile[v[22]]=jvj+17; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(jvj+17,jvj+12,jvj+18)*/
x[jvj+58]=x[jvj+18] ;z[jvj+58]=z[jvj+18];
l23:if((x[jvj+58]>0)) goto l24;
x[jvj+57]=t[x[jvj+57]];
goto l22;
l20:x[jvj+14]=s[x[jvj+56]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+56];
pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(jvj+14,jvj+12,jvj+15)*/
x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
z[jvj+16]=(-1);
pile[v[22]]=jvj+12; pile[WZ1]=jvj+16; pile[WZ2]=jvj+2; pile[WZ3]=jvj+16; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+12,jvj+16,jvj+2,jvj+16,jvj+8,jvj+3,jvj+9)*/
l21:x[jvj+56]=t[x[jvj+56]];
goto l19;
l24:x[jvj+19]=s[x[jvj+58]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+58];
z[jvj+19]=(-1);
pile[v[22]]=jvj+12; pile[WZ1]=jvj+19; pile[WZ2]=jvj+2; pile[WZ3]=jvj+19; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+12,jvj+19,jvj+2,jvj+19,jvj+8,jvj+3,jvj+9)*/
x[jvj+58]=t[x[jvj+58]];
goto l23;
l26:x[jvj+22]=s[x[jvj+59]] ;z[jvj+22]=(x[jvj+22]<=sepcte) ? x[jvj+22] : z[jvj+59];
pile[v[22]]=jvj+22; pile[WZ1]=jvj+20; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l27;     /*FNDO0(jvj+22,jvj+20,jvj+23)*/
x[jvj+24]=x[jvj+23] ;z[jvj+24]=z[jvj+23];
z[jvj+24]=(-1);
pile[v[22]]=jvj+20; pile[WZ1]=jvj+24; pile[WZ2]=jvj+2; pile[WZ3]=jvj+24; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+20,jvj+24,jvj+2,jvj+24,jvj+8,jvj+3,jvj+9)*/
l27:x[jvj+59]=t[x[jvj+59]];
l25:if((x[jvj+59]>0)) goto l26;
x[jvj+60]=w[x[jvj+21]][8];
l28:if((x[jvj+60]<=0)) goto l78;
x[jvj+25]=s[x[jvj+60]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+60];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+20; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(jvj+25,jvj+20,jvj+26)*/
x[jvj+61]=x[jvj+26] ;z[jvj+61]=z[jvj+26];
l29:if((x[jvj+61]>0)) goto l30;
x[jvj+60]=t[x[jvj+60]];
goto l28;
l30:x[jvj+27]=s[x[jvj+61]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+61];
z[jvj+27]=(-1);
pile[v[22]]=jvj+20; pile[WZ1]=jvj+27; pile[WZ2]=jvj+2; pile[WZ3]=jvj+27; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+20,jvj+27,jvj+2,jvj+27,jvj+8,jvj+3,jvj+9)*/
x[jvj+61]=t[x[jvj+61]];
goto l29;
l31:for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==x[jvj+29]) goto l35;
l34:x[jvj+30]=t[x[jvj+30]];
l33:if((x[jvj+30]<=0)) goto l80;
x[jvj+33]=s[x[jvj+30]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+30];
V42=x[jvj+33];
if((V42>=sepbloc)) goto l34;
if((x[jvj+29]==10240)) goto l35;
pile[v[22]]=311; pile[WZ1]=10240; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(311,10240,jvj+28)*/
for(a=x[jvj+28];a>0;a=t[a]) if(s[a]==x[jvj+33]) goto l31;
l35:pile[v[22]]=184; pile[WZ1]=jvj+33; pile[WZ2]=jvj+34; 
(*f[33])( );     /*FNDE0(184,jvj+33,jvj+34)*/
x[jvj+62]=x[jvj+34] ;z[jvj+62]=z[jvj+34];
l36:if((x[jvj+62]<=0)) goto l34;
x[jvj+35]=s[x[jvj+62]] ;z[jvj+35]=(x[jvj+35]<=sepcte) ? x[jvj+35] : z[jvj+62];
pile[v[22]]=jvj+33; pile[WZ1]=jvj+35; pile[WZ2]=jvj+2; pile[WZ3]=jvj+35; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+33,jvj+35,jvj+2,jvj+35,jvj+8,jvj+3,jvj+9)*/
x[jvj+62]=t[x[jvj+62]];
goto l36;
l37:if((F==(-5963))) goto l48;
l40:if((F==(-9113))) goto l48;
l46:V73++;
l45:if((V73>V74)) goto l50;
V77=r[V73];
if((V77!=1)) goto l46;
x[jvj+36]=V73 ;z[jvj+36]=(V73<=sepcte) ? V73 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l46;     /*FNDC1(905,jvj+36,V72)*/
V72=pile[WZ2]; 
F=V72;
if((UR==65)) goto l37;
if((UR==84)) goto l38;
if((UR==71)) goto l39;
if((UR==32)) goto l48;
goto l40;
l38:if((F==(-9009))) goto l48;
goto l40;
l39:if((F==(-11721))) goto l48;
goto l40;
l41:if((FF==(-5963))) goto l54;
l44:if((FF==(-9113))) goto l54;
l52:V81++;
l51:if((V81>V82)) goto l72;
V85=r[V81];
if((V85!=1)) goto l52;
x[jvj+40]=V81 ;z[jvj+40]=(V81<=sepcte) ? V81 : 0;
pile[v[22]]=905; pile[WZ1]=jvj+40; 
(*f[44])( );if(v[102]) goto l52;     /*FNDC1(905,jvj+40,V80)*/
V80=pile[WZ2]; 
FF=V80;
if((UR==65)) goto l41;
if((UR==84)) goto l42;
if((UR==71)) goto l43;
if((UR==32)) goto l54;
goto l44;
l42:if((FF==(-9009))) goto l54;
goto l44;
l43:if((FF==(-11721))) goto l54;
goto l44;
l48:x[jvj+63]=x[jvj+68] ;z[jvj+63]=z[jvj+68];
l47:if((x[jvj+63]<=0)) goto l46;
x[jvj+37]=s[x[jvj+63]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+63];
pile[v[22]]=jvj+37; pile[WZ1]=jvj+36; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l49;     /*FNDO0(jvj+37,jvj+36,jvj+38)*/
x[jvj+39]=x[jvj+38] ;z[jvj+39]=z[jvj+38];
pile[v[22]]=jvj+36; pile[WZ1]=jvj+39; pile[WZ2]=jvj+2; pile[WZ3]=jvj+39; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+36,jvj+39,jvj+2,jvj+39,jvj+8,jvj+3,jvj+9)*/
l49:x[jvj+63]=t[x[jvj+63]];
goto l47;
l50:x[jvj+69]=w[854][8];
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l72;     /*FNDC0(1484,854,V83)*/
V83=pile[WZ2]; 
V81=sepfacts+1;
V82=sepfacts+V83;
goto l51;
l54:x[jvj+64]=x[jvj+69] ;z[jvj+64]=z[jvj+69];
l53:if((x[jvj+64]<=0)) goto l52;
x[jvj+41]=s[x[jvj+64]] ;z[jvj+41]=(x[jvj+41]<=sepcte) ? x[jvj+41] : z[jvj+64];
pile[v[22]]=jvj+41; pile[WZ1]=jvj+40; pile[WZ2]=jvj+42; 
(*f[33])( );     /*FNDE0(jvj+41,jvj+40,jvj+42)*/
x[jvj+65]=x[jvj+42] ;z[jvj+65]=z[jvj+42];
l55:if((x[jvj+65]>0)) goto l56;
x[jvj+64]=t[x[jvj+64]];
goto l53;
l56:x[jvj+39]=s[x[jvj+65]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+65];
pile[v[22]]=jvj+40; pile[WZ1]=jvj+39; pile[WZ2]=jvj+2; pile[WZ3]=jvj+39; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+40,jvj+39,jvj+2,jvj+39,jvj+8,jvj+3,jvj+9)*/
x[jvj+65]=t[x[jvj+65]];
goto l55;
l59:x[jvj+46]=s[x[jvj+66]] ;z[jvj+46]=(x[jvj+46]<=sepcte) ? x[jvj+46] : z[jvj+66];
pile[v[22]]=jvj+45; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[33])( );     /*FNDE0(jvj+45,jvj+46,jvj+47)*/
x[jvj+67]=x[jvj+47] ;z[jvj+67]=z[jvj+47];
l60:if((x[jvj+67]>0)) goto l61;
x[jvj+66]=t[x[jvj+66]];
l58:if((x[jvj+66]>0)) goto l59;
x[jvj+44]=t[x[jvj+44]];
l57:if((x[jvj+44]<=0)) goto l71;
x[jvj+45]=s[x[jvj+44]] ;z[jvj+45]=(x[jvj+45]<=sepcte) ? x[jvj+45] : z[jvj+44];
x[jvj+66]=x[jvj+43] ;z[jvj+66]=z[jvj+43];
goto l58;
l61:x[jvj+48]=s[x[jvj+67]] ;z[jvj+48]=(x[jvj+48]<=sepcte) ? x[jvj+48] : z[jvj+67];
pile[v[22]]=jvj+46; pile[WZ1]=jvj+48; pile[WZ2]=jvj+2; pile[WZ3]=jvj+48; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+46,jvj+48,jvj+2,jvj+48,jvj+8,jvj+3,jvj+9)*/
x[jvj+67]=t[x[jvj+67]];
goto l60;
l65:if(x[jvj+3]!=incon) goto l66;
goto l80;
l66:if(KR!=incon) goto l67;
goto l80;
l67:if(UR!=incon) goto l68;
goto l77;
l68:if((KR!=43)) goto l72;
if(UR!=32&&UR!=70) goto l69;
V98=sepnouv+1;
l62:if((V98>sepfacts)) goto l69;
V95=r[V98];
if((V95<=0)) goto l63;
x[jvj+49]=V98 ;z[jvj+49]=(V98<=sepcte) ? V98 : 0;
pile[v[22]]=1923; pile[WZ1]=jvj+49; pile[WZ2]=jvj+50; 
(*f[33])( );     /*FNDE0(1923,jvj+49,jvj+50)*/
for(a=x[jvj+50];a>0;a=t[a]) if(s[a]==901) goto l63;
pile[v[22]]=jvj+49; pile[WZ2]=jvj+2; pile[WZ3]=jvj+49; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+49,jvj+49,jvj+2,jvj+49,jvj+8,jvj+3,jvj+9)*/
l63:V98++;
goto l62;
l69:if(UR!=32&&UR!=66) goto l70;
pile[v[22]]=311; pile[WZ1]=324; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(311,324,jvj+4)*/
goto l14;
l70:if(UR!=32&&UR!=80) goto l71;
pile[v[22]]=457; pile[WZ1]=324; pile[WZ2]=jvj+43; 
(*f[33])( );     /*FNDE0(457,324,jvj+43)*/
x[jvj+44]=d[9];z[jvj+44]=0;
goto l57;
l71:if(UR!=32&&UR!=65&&UR!=84&&UR!=71) goto l72;
x[jvj+68]=w[854][9];
pile[v[22]]=1484; pile[WZ1]=854; 
(*f[26])( );if(v[102]) goto l50;     /*FNDC0(1484,854,V75)*/
V75=pile[WZ2]; 
V73=sepfacts+1;
V74=sepfacts+V75;
goto l45;
l72:if(DY!=incon) goto l73;
l74:if((UR==32)) goto l17;
goto l77;
l73:if(KR!=32&&KR!=46) goto l74;
if((UR==32)) goto l17;
pile[v[22]]=DY; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+20; 
(*f[78])( );if(v[102]) goto l78;     /*SMA0(DY,36,67,jvj+20)*/
pile[v[22]]=100; pile[WZ1]=jvj+20; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(100,jvj+20,jvj+21)*/
x[jvj+59]=w[x[jvj+21]][9];
goto l25;
l75:if((KR==32)) goto l76;
goto l77;
l78:if((KR!=38)) goto l80;
pile[v[22]]=DY; pile[WZ1]=36; pile[WZ2]=67; pile[WZ3]=jvj+29; 
(*f[78])( );if(v[102]) goto l80;     /*SMA0(DY,36,67,jvj+29)*/
pile[v[22]]=311; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[33])( );     /*FNDE0(311,jvj+29,jvj+30)*/
for(a=x[jvj+30];a>0;a=t[a]) if(s[a]==x[jvj+29]) goto l33;
pile[v[22]]=184; pile[WZ2]=jvj+31; 
(*f[33])( );     /*FNDE0(184,jvj+29,jvj+31)*/
l32:if((x[jvj+31]<=0)) goto l33;
x[jvj+32]=s[x[jvj+31]] ;z[jvj+32]=(x[jvj+32]<=sepcte) ? x[jvj+32] : z[jvj+31];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+32; pile[WZ2]=jvj+2; pile[WZ3]=jvj+32; pile[WZ4]=jvj+8; pile[WZ5]=jvj+3; pile[v[22]+6]=jvj+9; 
(*f[336])( );     /*EAFB0(jvj+29,jvj+32,jvj+2,jvj+32,jvj+8,jvj+3,jvj+9)*/
x[jvj+31]=t[x[jvj+31]];
goto l32;
l79:V99=0;
goto l81;
}
