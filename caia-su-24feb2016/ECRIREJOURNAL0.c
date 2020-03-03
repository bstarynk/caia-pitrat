#include "dx.h"
void ECRIREJOURNAL0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int M=0,J=0,A=0,H=0,MN=0,V36=0,V35=0,V39=0,V67=0,V14=0,V5=0,V10=0,V79=0,V26=0,V81=0,V40=0,V41=0,V76=0,V75=0,V96=0,V95=0,V103=0,V102=0;
int B;
int S;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=53;
x[jvj+1]=10966;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1284&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
B=pile[v[22]]; S=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[S]=incon;
(*f[1544])( );     /*DATE3(M,J,A,H,MN)*/
M=pile[v[22]]; J=pile[WZ1]; A=pile[WZ2]; H=pile[WZ3]; MN=pile[WZ4]; 
pile[v[22]]=J; pile[WZ1]=943; pile[WZ2]=jvj+43; 
(*f[46])( );     /*TRI0(J,943,jvj+43)*/
pile[v[22]]=jvj+43; pile[WZ1]=M; pile[WZ2]=942; pile[WZ3]=jvj+44; 
(*f[189])( );     /*TRI4(jvj+43,M,942,jvj+44)*/
pile[v[22]]=jvj+44; pile[WZ1]=A; pile[WZ2]=941; pile[WZ3]=jvj+45; 
(*f[189])( );     /*TRI4(jvj+44,A,941,jvj+45)*/
pile[v[22]]=938; pile[WZ1]=H; pile[WZ2]=939; pile[WZ3]=MN; pile[WZ4]=jvj+45; pile[WZ5]=S; 
(*f[190])( );     /*QUADRI3(938,H,939,MN,jvj+45,S)*/
x[jvj+14]=vo[14];z[jvj+14]=vz[14];
pile[v[22]]=935; pile[WZ1]=jvj+14; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(935,jvj+14,jvj+16)*/
pile[v[22]]=S; pile[WZ1]=935; 
(*f[35])( );     /*CHGC1(S,935,jvj+16)*/
if(x[jvj+16]!=936&&x[jvj+16]!=493&&x[jvj+16]!=876&&x[jvj+16]!=977&&x[jvj+16]!=1037&&x[jvj+16]!=927) goto l10;
pile[v[22]]=jvj+16; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(jvj+16,jvj+14,V67)*/
V67=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=jvj+16; pile[WZ2]=V67; 
(*f[43])( );     /*CHGC2(S,jvj+16,V67)*/
l10:if(x[jvj+16]!=547&&x[jvj+16]!=1000&&x[jvj+16]!=371) goto l13;
x[jvj+12]=vo[12];z[jvj+12]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+12; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l13;     /*FNDO0(860,jvj+12,jvj+17)*/
if(x[jvj+17]!=1082&&x[jvj+17]!=336) goto l13;
x[jvj+13]=incon;
if((x[jvj+16]==547)) goto l9;
pile[v[22]]=1120; pile[WZ1]=jvj+14; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(1120,jvj+14,jvj+13)*/
l11:pile[v[22]]=1081; pile[WZ1]=jvj+12; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1081,jvj+12,jvj+18)*/
if((x[jvj+16]!=1000)) goto l12;
pile[v[22]]=658; pile[WZ2]=jvj+15; 
(*f[33])( );     /*FNDE0(658,jvj+12,jvj+15)*/
pile[v[22]]=S; pile[WZ1]=658; 
(*f[34])( );     /*CHGC0(S,658,jvj+15)*/
l12:pile[v[22]]=S; pile[WZ1]=1081; pile[WZ2]=jvj+18; 
(*f[34])( );     /*CHGC0(S,1081,jvj+18)*/
pile[WZ1]=1120; pile[WZ2]=jvj+13; 
(*f[34])( );     /*CHGC0(S,1120,jvj+13)*/
l13:pile[v[22]]=1005; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(1005,jvj+14,V14)*/
V14=pile[WZ2]; 
if((V14>=1000)) goto l14;
x[jvj+19]=vo[12];z[jvj+19]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+19; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(860,jvj+19,jvj+20)*/
if(x[jvj+20]==1082||x[jvj+20]==336) goto l14;
pile[v[22]]=S; pile[WZ1]=1005; pile[WZ2]=V14; 
(*f[43])( );     /*CHGC2(S,1005,V14)*/
l14:x[jvj+21]=vo[12];z[jvj+21]=vz[12];
pile[v[22]]=860; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l1;     /*FNDO0(860,jvj+21,jvj+22)*/
if(x[jvj+22]!=1082&&x[jvj+22]!=336) goto l15;
pile[v[22]]=1124; pile[WZ1]=jvj+14; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l15;     /*FNDO0(1124,jvj+14,jvj+23)*/
pile[v[22]]=S; pile[WZ1]=1124; 
(*f[35])( );     /*CHGC1(S,1124,jvj+23)*/
l15:if((x[jvj+22]==954)) goto l17;
if((x[jvj+22]!=530)) goto l21;
x[jvj+26]=d[41];z[jvj+26]=0;
l19:if((x[jvj+26]<=0)) goto l21;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(jvj+27,jvj+14,V10)*/
V10=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=jvj+27; pile[WZ2]=V10; 
(*f[43])( );     /*CHGC2(S,jvj+27,V10)*/
l20:x[jvj+26]=t[x[jvj+26]];
goto l19;
l1:x[jvj+31]=incon;
pile[v[22]]=80; pile[WZ1]=994; pile[WZ2]=jvj+2; 
(*f[32])( );if(v[102]) goto l2;     /*FNDO0(80,994,jvj+2)*/
x[jvj+31]=x[jvj+2] ;z[jvj+31]=z[jvj+2];
l24:pile[v[22]]=jvj+31; pile[WZ1]=120; pile[WZ2]=S; 
(*f[35])( );     /*CHGC1(jvj+31,120,S)*/
pile[v[22]]=994; pile[WZ1]=80; 
(*f[35])( );     /*CHGC1(994,80,S)*/
x[jvj+7]=vo[12];z[jvj+7]=vz[12];
x[jvj+32]=d[100];z[jvj+32]=0;
l25:if((x[jvj+32]>0)) goto l26;
pile[v[22]]=860; pile[WZ1]=jvj+7; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(860,jvj+7,jvj+35)*/
if((x[jvj+35]!=1085)) goto l31;
pile[v[22]]=109; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(109,jvj+7,jvj+46)*/
pile[v[22]]=983; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(983,jvj+46,jvj+47)*/
pile[v[22]]=878; pile[WZ1]=jvj+47; pile[WZ2]=jvj+48; 
(*f[33])( );     /*FNDE0(878,jvj+47,jvj+48)*/
l35:if((x[jvj+48]<=0)) goto l31;
x[jvj+49]=s[x[jvj+48]] ;z[jvj+49]=(x[jvj+49]<=sepcte) ? x[jvj+49] : z[jvj+48];
pile[v[22]]=163; pile[WZ1]=jvj+49; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(163,jvj+49,V96)*/
V96=pile[WZ2]; 
pile[WZ1]=jvj+7; 
(*f[44])( );if(v[102]) goto l36;     /*FNDC1(163,jvj+7,V95)*/
V95=pile[WZ2]; 
if((V96==V95)) goto l36;
x[jvj+48]=t[x[jvj+48]];
goto l35;
l2:x[jvj+31]=994 ;z[jvj+31]=994;
goto l24;
l4:x[jvj+4]=t[x[jvj+4]];
l3:if((x[jvj+4]<=0)) goto l31;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=860; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(860,jvj+5,jvj+6)*/
if((x[jvj+6]!=1085)) goto l4;
pile[v[22]]=1107; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l31;     /*FNDO0(1107,jvj+5,jvj+10)*/
l7:x[jvj+11]=x[jvj+10] ;z[jvj+11]=z[jvj+10];
pile[v[22]]=1110; pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l8;     /*FNDC0(1110,jvj+11,V39)*/
V39=pile[WZ2]; 
if((V39!=1)) goto l8;
pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(1110,jvj+7,V36)*/
V36=pile[WZ2]; 
pile[v[22]]=1107; pile[WZ1]=jvj+5; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(1107,jvj+5,jvj+8)*/
l5:x[jvj+9]=x[jvj+8] ;z[jvj+9]=z[jvj+8];
pile[v[22]]=1110; pile[WZ1]=jvj+9; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1110,jvj+9,V35)*/
V35=pile[WZ2]; 
if((V35!=V36)) goto l6;
pile[v[22]]=204; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(204,jvj+9,V40)*/
V40=pile[WZ2]; 
pile[WZ1]=jvj+11; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(204,jvj+11,V41)*/
V41=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=204; pile[WZ2]=V40; 
(*f[43])( );     /*CHGC2(S,204,V40)*/
pile[WZ1]=1117; pile[WZ2]=V41; 
(*f[43])( );     /*CHGC2(S,1117,V41)*/
l30:if(x[S]!=incon) goto l31;
l33:if(x[S]!=incon) goto l34;
l32:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=1;return;
l6:pile[v[22]]=120; pile[WZ1]=jvj+9; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(120,jvj+9,jvj+8)*/
goto l5;
l8:pile[v[22]]=120; pile[WZ1]=jvj+11; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l30;     /*FNDO0(120,jvj+11,jvj+10)*/
goto l7;
l9:pile[v[22]]=658; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[33])( );     /*FNDE0(658,jvj+12,jvj+13)*/
goto l11;
l17:x[jvj+24]=d[98];z[jvj+24]=0;
l16:if((x[jvj+24]<=0)) goto l21;
x[jvj+25]=s[x[jvj+24]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+24];
pile[v[22]]=jvj+25; pile[WZ1]=jvj+14; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(jvj+25,jvj+14,V5)*/
V5=pile[WZ2]; 
pile[v[22]]=S; pile[WZ1]=jvj+25; pile[WZ2]=V5; 
(*f[43])( );     /*CHGC2(S,jvj+25,V5)*/
l18:x[jvj+24]=t[x[jvj+24]];
goto l16;
l21:if(x[jvj+22]!=530&&x[jvj+22]!=1085) goto l1;
x[jvj+28]=d[99];z[jvj+28]=0;
l22:if((x[jvj+28]<=0)) goto l1;
x[jvj+29]=s[x[jvj+28]] ;z[jvj+29]=(x[jvj+29]<=sepcte) ? x[jvj+29] : z[jvj+28];
pile[v[22]]=jvj+29; pile[WZ1]=jvj+14; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(jvj+29,jvj+14,jvj+30)*/
pile[v[22]]=S; pile[WZ1]=jvj+29; 
(*f[35])( );     /*CHGC1(S,jvj+29,jvj+30)*/
l23:x[jvj+28]=t[x[jvj+28]];
goto l22;
l26:x[jvj+33]=s[x[jvj+32]] ;z[jvj+33]=(x[jvj+33]<=sepcte) ? x[jvj+33] : z[jvj+32];
pile[v[22]]=jvj+7; pile[WZ1]=jvj+33; pile[WZ3]=jvj+34; 
(*f[45])( );if(v[102]) goto l27;     /*FNDZ0(jvj+7,jvj+33,V79,jvj+34)*/
V79=pile[WZ2]; 
V26=V79;
V81=V26;
pile[v[22]]=S; pile[WZ2]=V81; 
(*f[43])( );     /*CHGC2(S,jvj+33,V81)*/
l27:x[jvj+32]=t[x[jvj+32]];
goto l25;
l29:x[jvj+38]=t[x[jvj+38]];
l28:if((x[jvj+38]<=0)) goto l33;
x[jvj+39]=s[x[jvj+38]] ;z[jvj+39]=(x[jvj+39]<=sepcte) ? x[jvj+39] : z[jvj+38];
pile[v[22]]=117; pile[WZ1]=jvj+39; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(117,jvj+39,V75)*/
V75=pile[WZ2]; 
if((V75!=V76)) goto l29;
pile[v[22]]=935; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(935,jvj+39,jvj+41)*/
if((x[jvj+41]!=547)) goto l33;
pile[v[22]]=jvj+39; pile[WZ1]=B; pile[WZ2]=S; pile[WZ3]=jvj+42; 
(*f[1545])( );if(v[102]) goto l33;     /*COMPARE0(jvj+39,B,S,jvj+42)*/
goto l33;
l31:pile[v[22]]=935; pile[WZ1]=B; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(935,B,jvj+40)*/
if((x[jvj+40]!=547)) goto l33;
x[jvj+36]=vo[12];z[jvj+36]=vz[12];
pile[v[22]]=1114; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l33;     /*FNDC0(1114,jvj+36,V76)*/
V76=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(109,jvj+36,jvj+50)*/
pile[v[22]]=983; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(983,jvj+50,jvj+51)*/
pile[v[22]]=878; pile[WZ1]=jvj+51; pile[WZ2]=jvj+52; 
(*f[33])( );     /*FNDE0(878,jvj+51,jvj+52)*/
l37:if((x[jvj+52]<=0)) goto l33;
x[jvj+53]=s[x[jvj+52]] ;z[jvj+53]=(x[jvj+53]<=sepcte) ? x[jvj+53] : z[jvj+52];
pile[v[22]]=163; pile[WZ1]=jvj+53; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(163,jvj+53,V103)*/
V103=pile[WZ2]; 
pile[WZ1]=jvj+36; 
(*f[44])( );if(v[102]) goto l38;     /*FNDC1(163,jvj+36,V102)*/
V102=pile[WZ2]; 
if((V103==V102)) goto l38;
x[jvj+52]=t[x[jvj+52]];
goto l37;
l34:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; v[102]=0;return;
l36:x[jvj+3]=x[jvj+49] ;z[jvj+3]=z[jvj+49];
pile[v[22]]=718; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[33])( );     /*FNDE0(718,jvj+3,jvj+4)*/
goto l3;
l38:x[jvj+37]=x[jvj+53] ;z[jvj+37]=z[jvj+53];
pile[v[22]]=944; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[33])( );     /*FNDE0(944,jvj+37,jvj+38)*/
goto l28;
}
