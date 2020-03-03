#include "dx.h"
void BILEXPLORE0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V6=0,V4=0,V9=0,V8=0,V10=0,N=0,V13=0,V12=0,V23=0,V27=0,V28=0,V14=0,V16=0,V31=0,V32=0,V30=0,V34=0,V40=0,V38=0,V42=0,V24=0,V58=0;
int M,BL;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=34;
x[jvj+1]=10806;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1267&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
M=pile[v[22]]; BL=pile[v[22]+1]; v[22]+=2; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
x[jvj+8]=N=incon;
pile[v[22]]=1114; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l1;     /*FNDC0(1114,M,V9)*/
V9=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=BL; pile[WZ2]=jvj+6; 
(*f[33])( );     /*FNDE0(944,BL,jvj+6)*/
l4:if((x[jvj+6]<=0)) goto l1;
x[jvj+7]=s[x[jvj+6]] ;z[jvj+7]=(x[jvj+7]<=sepcte) ? x[jvj+7] : z[jvj+6];
pile[v[22]]=117; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(117,jvj+7,V8)*/
V8=pile[WZ2]; 
if((V8!=V9)) goto l5;
pile[v[22]]=683; 
(*f[26])( );if(v[102]) goto l5;     /*FNDC0(683,jvj+7,V10)*/
V10=pile[WZ2]; 
x[jvj+8]=x[jvj+7] ;z[jvj+8]=z[jvj+7];
N=V10;
l1:x[jvj+5]=0 ;z[jvj+5]=0;
pile[v[22]]=1076; pile[WZ1]=M; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(1076,M,V6)*/
V6=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=BL; pile[WZ2]=jvj+2; 
(*f[33])( );     /*FNDE0(944,BL,jvj+2)*/
l2:if((x[jvj+2]<=0)) goto l6;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=1078; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l3;     /*FNDO0(1078,jvj+3,jvj+4)*/
pile[v[22]]=1076; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(1076,jvj+4,V4)*/
V4=pile[WZ2]; 
if((V4!=V6)) goto l3;
pile[v[22]]=jvj+5; pile[WZ1]=jvj+3; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+3)*/
l3:x[jvj+2]=t[x[jvj+2]];
goto l2;
l5:x[jvj+6]=t[x[jvj+6]];
goto l4;
l6:x[jvj+34]=x[jvj+5] ;z[jvj+34]=z[jvj+5];
if(x[jvj+8]!=incon) goto l7;
l22:x[jvj+1]=incon; v[0]=jvj; v[22]-=2; return;
l7:pile[v[22]]=876; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l10;     /*FNDC0(876,jvj+8,V13)*/
V13=pile[WZ2]; 
x[jvj+32]=x[jvj+34] ;z[jvj+32]=z[jvj+34];
l8:if((x[jvj+32]<=0)) goto l10;
x[jvj+9]=s[x[jvj+32]] ;z[jvj+9]=(x[jvj+9]<=sepcte) ? x[jvj+9] : z[jvj+32];
pile[v[22]]=935; pile[WZ1]=jvj+9; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l9;     /*FNDO0(935,jvj+9,jvj+10)*/
if((x[jvj+10]!=547)) goto l9;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(876,jvj+9,V12)*/
V12=pile[WZ2]; 
if((V12>=V13)) goto l9;
pile[v[22]]=1085; pile[WZ1]=BL; pile[WZ2]=jvj+8; pile[WZ3]=jvj+9; pile[WZ4]=204; pile[WZ5]=876; pile[v[22]+6]=M; 
(*f[1534])( );     /*ANOMALIE0(1085,BL,jvj+8,jvj+9,204,876,M)*/
l9:x[jvj+32]=t[x[jvj+32]];
goto l8;
l10:pile[v[22]]=1051; pile[WZ1]=M; pile[WZ2]=jvj+11; 
(*f[33])( );     /*FNDE0(1051,M,jvj+11)*/
if((x[jvj+11]==0)) goto l11;
pile[v[22]]=117; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+8,V27)*/
V27=pile[WZ2]; 
x[jvj+14]=0 ;z[jvj+14]=0;
V24=incon;
x[jvj+33]=x[jvj+34] ;z[jvj+33]=z[jvj+34];
l12:if((x[jvj+33]>0)) goto l13;
if((x[jvj+14]<=0)) goto l22;
x[jvj+15]=s[x[jvj+14]] ;z[jvj+15]=(x[jvj+15]<=sepcte) ? x[jvj+15] : z[jvj+14];
pile[v[22]]=117; pile[WZ1]=jvj+15; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(117,jvj+15,V28)*/
V28=pile[WZ2]; 
x[jvj+16]=x[jvj+15] ;z[jvj+16]=z[jvj+15];
pile[v[22]]=BL; pile[WZ1]=1051; pile[WZ2]=M; 
(*f[36])( );     /*PLUSC0(BL,1051,M)*/
pile[v[22]]=M; pile[WZ1]=510; pile[WZ2]=V27; 
(*f[43])( );     /*CHGC2(M,510,V27)*/
pile[WZ1]=515; pile[WZ2]=V28; 
(*f[43])( );     /*CHGC2(M,515,V28)*/
l16:pile[v[22]]=876; pile[WZ1]=jvj+16; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(876,jvj+16,V14)*/
V14=pile[WZ2]; 
if((V14<=0)) goto l17;
if((V14>=15)) goto l17;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l17;     /*FNDC0(936,jvj+16,V16)*/
V16=pile[WZ2]; 
if((V16>=20)) goto l17;
x[jvj+17]=vo[12];z[jvj+17]=vz[12];
pile[v[22]]=1056; pile[WZ1]=jvj+17; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1056,jvj+17,jvj+18)*/
for(a=x[jvj+18];a>0;a=t[a]) if(s[a]==301) goto l17;
pile[v[22]]=jvj+16; 
(*f[1535])( );     /*FAIRETOTAL0(jvj+16)*/
l17:if(N!=incon) goto l18;
goto l22;
l11:x[jvj+16]=x[jvj+8] ;z[jvj+16]=z[jvj+8];
goto l16;
l13:x[jvj+12]=s[x[jvj+33]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+33];
pile[v[22]]=935; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l14;     /*FNDO0(935,jvj+12,jvj+13)*/
if((x[jvj+13]!=547)) goto l14;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l14;     /*FNDC0(876,jvj+12,V23)*/
V23=pile[WZ2]; 
if(V24==incon) goto l23;
if((V23==V24)) goto l15;
if((V23<=V24)) goto l23;
l14:x[jvj+33]=t[x[jvj+33]];
goto l12;
l18:pile[v[22]]=876; pile[WZ1]=jvj+8; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(876,jvj+8,V31)*/
V31=pile[WZ2]; 
pile[v[22]]=944; pile[WZ1]=BL; pile[WZ2]=jvj+19; 
(*f[33])( );     /*FNDE0(944,BL,jvj+19)*/
l19:if((x[jvj+19]<=0)) goto l22;
x[jvj+20]=s[x[jvj+19]] ;z[jvj+20]=(x[jvj+20]<=sepcte) ? x[jvj+20] : z[jvj+19];
if((x[jvj+20]==x[jvj+16])) goto l20;
if((x[jvj+20]==x[jvj+8])) goto l21;
pile[v[22]]=683; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(683,jvj+20,V32)*/
V32=pile[WZ2]; 
if((V32!=N)) goto l21;
pile[v[22]]=860; pile[WZ2]=jvj+21; 
(*f[32])( );if(v[102]) goto l21;     /*FNDO0(860,jvj+20,jvj+21)*/
if((x[jvj+21]!=1085)) goto l21;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l21;     /*FNDC0(876,jvj+20,V30)*/
V30=pile[WZ2]; 
if((V30<V31)) goto l21;
V34=x[jvj+20];
pile[v[22]]=944; pile[WZ1]=BL; pile[WZ2]=V34; 
(*f[134])( );     /*OTA0(944,BL,V34)*/
l21:pile[v[22]]=683; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(683,jvj+20,V40)*/
V40=pile[WZ2]; 
if((V40!=N)) goto l20;
pile[v[22]]=860; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(860,jvj+20,jvj+22)*/
if((x[jvj+22]!=1085)) goto l20;
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(876,jvj+20,V38)*/
V38=pile[WZ2]; 
if((V38>=V31)) goto l20;
pile[v[22]]=860; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l20;     /*FNDO0(860,jvj+20,jvj+24)*/
pile[v[22]]=jvj+24; pile[WZ1]=860; pile[WZ2]=jvj+23; 
(*f[54])( );     /*TRI1(jvj+24,860,jvj+23)*/
pile[v[22]]=1078; pile[WZ1]=jvj+20; pile[WZ2]=jvj+25; 
(*f[32])( );if(v[102]) goto l26;     /*FNDO0(1078,jvj+20,jvj+25)*/
pile[v[22]]=1022; pile[WZ1]=1250; pile[WZ2]=jvj+26; 
(*f[33])( );     /*FNDE0(1022,1250,jvj+26)*/
l24:if((x[jvj+26]<=0)) goto l26;
x[jvj+27]=s[x[jvj+26]] ;z[jvj+27]=(x[jvj+27]<=sepcte) ? x[jvj+27] : z[jvj+26];
pile[v[22]]=jvj+27; pile[WZ1]=jvj+25; pile[WZ2]=jvj+28; 
(*f[33])( );     /*FNDE0(jvj+27,jvj+25,jvj+28)*/
if((x[jvj+28]==0)) goto l25;
pile[v[22]]=jvj+23; pile[WZ1]=jvj+27; 
(*f[34])( );     /*CHGC0(jvj+23,jvj+27,jvj+28)*/
l25:x[jvj+26]=t[x[jvj+26]];
goto l24;
l23:V24=V23;
x[jvj+14]=0 ;z[jvj+14]=0;
l15:pile[v[22]]=jvj+14; pile[WZ1]=jvj+12; 
(*f[68])( );     /*PLUE0(jvj+14,jvj+12)*/
goto l14;
l26:pile[v[22]]=1016; pile[WZ1]=1250; pile[WZ2]=jvj+29; 
(*f[33])( );     /*FNDE0(1016,1250,jvj+29)*/
l27:if((x[jvj+29]>0)) goto l28;
V42=x[jvj+20];
pile[v[22]]=944; pile[WZ1]=BL; pile[WZ2]=V42; 
(*f[134])( );     /*OTA0(944,BL,V42)*/
pile[v[22]]=BL; pile[WZ1]=1250; pile[WZ2]=jvj+23; 
(*f[36])( );     /*PLUSC0(BL,1250,jvj+23)*/
l20:x[jvj+19]=t[x[jvj+19]];
goto l19;
l28:x[jvj+31]=s[x[jvj+29]] ;z[jvj+31]=(x[jvj+31]<=sepcte) ? x[jvj+31] : z[jvj+29];
if(x[jvj+31]!=695&&x[jvj+31]!=1015) goto l29;
pile[v[22]]=860; pile[WZ1]=jvj+20; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l29;     /*FNDO0(860,jvj+20,jvj+30)*/
if((x[jvj+30]!=954)) goto l30;
l29:pile[v[22]]=jvj+31; pile[WZ1]=jvj+20; 
(*f[26])( );if(v[102]) goto l30;     /*FNDC0(jvj+31,jvj+20,V58)*/
V58=pile[WZ2]; 
pile[v[22]]=jvj+23; pile[WZ1]=jvj+31; pile[WZ2]=V58; 
(*f[43])( );     /*CHGC2(jvj+23,jvj+31,V58)*/
l30:x[jvj+29]=t[x[jvj+29]];
goto l27;
}
