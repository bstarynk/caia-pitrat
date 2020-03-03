#include "dx.h"
void NORMW0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V105=0,V102=0,V6=0,V12=0,V48=0;
int MMMI;
int MMMT,MMMX;
int WZ1,WZ2,WZ3,WZ4;
int jvj;
jvj=v[0];
v[0]+=43;
x[jvj+1]=11728;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==1572&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
MMMI=pile[v[22]]; MMMT=pile[v[22]+1]; MMMX=pile[v[22]+2]; v[22]+=3; 
WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
pile[v[22]]=MMMI; pile[WZ1]=MMMT; pile[WZ2]=MMMX; 
(*f[1771])( );if(v[102]) goto l13;     /*Z15Z0(MMMI,MMMT,MMMX)*/
l41:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=0;return;
l2:x[jvj+2]=s[x[jvj+33]] ;z[jvj+2]=(x[jvj+2]<=sepcte) ? x[jvj+2] : z[jvj+33];
if((x[jvj+2]==x[jvj+34])) goto l3;
pile[v[22]]=111; pile[WZ1]=jvj+2; pile[WZ2]=jvj+3; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(111,jvj+2,jvj+3)*/
pile[v[22]]=101; pile[WZ1]=jvj+3; pile[WZ2]=jvj+4; 
(*f[32])( );if(v[102]) goto l4;     /*FNDO0(101,jvj+3,jvj+4)*/
if((x[jvj+4]==649)) goto l3;
l4:pile[v[22]]=jvj+5; pile[WZ1]=jvj+2; 
(*f[68])( );     /*PLUE0(jvj+5,jvj+2)*/
l3:x[jvj+33]=t[x[jvj+33]];
l1:if((x[jvj+33]>0)) goto l2;
x[MMMT]=16590 ;z[MMMT]=16590;
l43:pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=135; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,135,MMMX)*/
goto l41;
l6:x[jvj+6]=s[x[jvj+39]] ;z[jvj+6]=(x[jvj+6]<=sepcte) ? x[jvj+6] : z[jvj+39];
if((x[jvj+6]==x[jvj+40])) goto l7;
pile[v[22]]=111; pile[WZ1]=jvj+6; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(111,jvj+6,jvj+7)*/
pile[v[22]]=101; pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l8;     /*FNDO0(101,jvj+7,jvj+8)*/
if((x[jvj+8]==649)) goto l7;
l8:pile[v[22]]=jvj+9; pile[WZ1]=jvj+6; 
(*f[68])( );     /*PLUE0(jvj+9,jvj+6)*/
l7:x[jvj+39]=t[x[jvj+39]];
l5:if((x[jvj+39]>0)) goto l6;
x[MMMT]=16621 ;z[MMMT]=16621;
l42:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=0; pile[WZ4]=MMMX; 
(*f[192])( );     /*QUADRI4(100,41,130,0,MMMX)*/
goto l41;
l10:x[jvj+10]=s[x[jvj+36]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+36];
if((x[jvj+10]==x[jvj+37])) goto l11;
pile[v[22]]=111; pile[WZ1]=jvj+10; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(111,jvj+10,jvj+11)*/
pile[v[22]]=101; pile[WZ1]=jvj+11; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l12;     /*FNDO0(101,jvj+11,jvj+12)*/
if((x[jvj+12]==649)) goto l11;
l12:pile[v[22]]=jvj+13; pile[WZ1]=jvj+10; 
(*f[68])( );     /*PLUE0(jvj+13,jvj+10)*/
l11:x[jvj+36]=t[x[jvj+36]];
l9:if((x[jvj+36]>0)) goto l10;
x[MMMT]=16673 ;z[MMMT]=16673;
pile[v[22]]=100; pile[WZ1]=20; pile[WZ2]=101; pile[WZ3]=134; pile[WZ4]=MMMX; 
(*f[181])( );     /*QUADRI2(100,20,101,134,MMMX)*/
goto l41;
l13:pile[v[22]]=MMMI; pile[WZ1]=MMMT; pile[WZ2]=MMMX; 
(*f[1772])( );if(v[102]) goto l14;     /*Z17Z0(MMMI,MMMT,MMMX)*/
goto l41;
l14:pile[v[22]]=MMMI; pile[WZ1]=MMMT; pile[WZ2]=MMMX; 
(*f[1773])( );if(v[102]) goto l15;     /*Z43Z0(MMMI,MMMT,MMMX)*/
goto l41;
l15:pile[v[22]]=MMMI; pile[WZ1]=MMMT; pile[WZ2]=MMMX; 
(*f[1774])( );if(v[102]) goto l16;     /*Z137Z0(MMMI,MMMT,MMMX)*/
goto l41;
l16:pile[v[22]]=MMMI; pile[WZ1]=MMMT; pile[WZ2]=MMMX; 
(*f[1775])( );if(v[102]) goto l17;     /*Z50Z0(MMMI,MMMT,MMMX)*/
goto l41;
l17:pile[v[22]]=100; pile[WZ1]=MMMI; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(100,MMMI,jvj+14)*/
if((x[jvj+14]!=484)) goto l18;
pile[v[22]]=102; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l18;     /*FNDO0(102,MMMI,jvj+15)*/
pile[v[22]]=162; pile[WZ1]=jvj+15; 
(*f[219])( );if(v[102]) goto l18;     /*FNDC2(162,jvj+15,V105)*/
V105=pile[WZ2]; 
if((V105!=42)) goto l18;
x[MMMT]=16757 ;z[MMMT]=16757;
goto l42;
l18:pile[v[22]]=111; pile[WZ1]=MMMI; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,MMMI,jvj+16)*/
pile[v[22]]=101; pile[WZ1]=jvj+16; pile[WZ2]=jvj+17; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+16,jvj+17)*/
if((x[jvj+17]==625)) goto l19;
if((x[jvj+17]==596)) goto l20;
if((x[jvj+17]==52)) goto l30;
if((x[jvj+17]==55)) goto l31;
if((x[jvj+17]==48)) goto l34;
if((x[jvj+17]!=486)) goto l40;
pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+39; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+39)*/
x[jvj+43]=x[jvj+39] ;z[jvj+43]=z[jvj+39];
l37:if((x[jvj+43]<=0)) goto l40;
x[jvj+40]=s[x[jvj+43]] ;z[jvj+40]=(x[jvj+40]<=sepcte) ? x[jvj+40] : z[jvj+43];
pile[v[22]]=130; pile[WZ1]=jvj+40; 
(*f[26])( );if(v[102]) goto l38;     /*FNDC0(130,jvj+40,V48)*/
V48=pile[WZ2]; 
if((V48!=0)) goto l38;
x[jvj+9]=0 ;z[jvj+9]=0;
goto l5;
l19:pile[v[22]]=160; pile[WZ1]=MMMI; pile[WZ2]=jvj+18; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(160,MMMI,jvj+18)*/
pile[v[22]]=130; pile[WZ1]=jvj+18; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+18,V102)*/
V102=pile[WZ2]; 
if((V102!=1)) goto l40;
x[MMMT]=16754 ;z[MMMT]=16754;
goto l43;
l20:pile[v[22]]=103; pile[WZ1]=MMMI; pile[WZ2]=jvj+19; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(103,MMMI,jvj+19)*/
pile[v[22]]=130; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(130,jvj+19,V6)*/
V6=pile[WZ2]; 
if((V6==1)) goto l21;
if((V6!=0)) goto l23;
pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,MMMI,jvj+22)*/
pile[v[22]]=jvj+22; pile[WZ1]=jvj+23; 
(*f[1446])( );     /*NONUL0(jvj+22,jvj+23)*/
if((x[jvj+23]==135)) goto l22;
l23:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+24; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,MMMI,jvj+24)*/
pile[v[22]]=130; pile[WZ1]=jvj+24; 
(*f[26])( );if(v[102]) goto l40;     /*FNDC0(130,jvj+24,V12)*/
V12=pile[WZ2]; 
if((V12==(-1))) goto l24;
if((V12==1)) goto l28;
if((V12!=0)) goto l40;
pile[v[22]]=jvj+19; pile[WZ1]=jvj+27; 
(*f[1446])( );     /*NONUL0(jvj+19,jvj+27)*/
if((x[jvj+27]==135)) goto l29;
l40:x[MMMT]=x[MMMX]=incon;
l39:x[jvj+1]=incon; v[0]=jvj; v[22]-=3; v[102]=1;return;
l21:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+20; 
(*f[32])( );if(v[102]) goto l23;     /*FNDO0(102,MMMI,jvj+20)*/
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+20,jvj+21)*/
x[MMMT]=16502 ;z[MMMT]=16502;
x[MMMX]=x[jvj+21] ;z[MMMX]=z[jvj+21];
goto l41;
l22:x[MMMT]=16588 ;z[MMMT]=16588;
l44:pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=1; pile[WZ4]=MMMX; 
(*f[192])( );     /*QUADRI4(100,41,130,1,MMMX)*/
goto l41;
l24:pile[v[22]]=jvj+19; pile[WZ1]=jvj+25; 
(*f[997])( );if(v[102]) goto l26;     /*IMPAIR0(jvj+19,jvj+25)*/
if((x[jvj+25]==135)) goto l25;
l26:pile[v[22]]=jvj+19; pile[WZ1]=jvj+26; 
(*f[996])( );if(v[102]) goto l40;     /*PAIR0(jvj+19,jvj+26)*/
if((x[jvj+26]==135)) goto l27;
goto l40;
l25:x[MMMT]=16586 ;z[MMMT]=16586;
pile[v[22]]=100; pile[WZ1]=41; pile[WZ2]=130; pile[WZ3]=(-1); pile[WZ4]=MMMX; 
(*f[192])( );     /*QUADRI4(100,41,130,(-1),MMMX)*/
goto l41;
l27:x[MMMT]=16587 ;z[MMMT]=16587;
goto l44;
l28:x[MMMT]=16625 ;z[MMMT]=16625;
goto l44;
l29:x[MMMT]=16647 ;z[MMMT]=16647;
goto l42;
l30:pile[v[22]]=102; pile[WZ1]=MMMI; pile[WZ2]=jvj+28; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,MMMI,jvj+28)*/
pile[v[22]]=111; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(111,jvj+28,jvj+29)*/
pile[v[22]]=101; pile[WZ1]=jvj+29; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(101,jvj+29,jvj+30)*/
if((x[jvj+30]!=52)) goto l40;
pile[v[22]]=102; pile[WZ1]=jvj+28; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(102,jvj+28,jvj+31)*/
pile[v[22]]=jvj+31; pile[WZ1]=jvj+32; 
(*f[1770])( );     /*COPEXPFAIT0(jvj+31,jvj+32)*/
x[MMMT]=16645 ;z[MMMT]=16645;
x[MMMX]=x[jvj+32] ;z[MMMX]=z[jvj+32];
goto l41;
l31:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+33)*/
x[jvj+41]=x[jvj+33] ;z[jvj+41]=z[jvj+33];
l32:if((x[jvj+41]<=0)) goto l40;
x[jvj+34]=s[x[jvj+41]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+41];
pile[v[22]]=101; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[32])( );if(v[102]) goto l33;     /*FNDO0(101,jvj+34,jvj+35)*/
if((x[jvj+35]!=135)) goto l33;
x[jvj+5]=0 ;z[jvj+5]=0;
goto l1;
l33:x[jvj+41]=t[x[jvj+41]];
goto l32;
l34:pile[v[22]]=107; pile[WZ1]=MMMI; pile[WZ2]=jvj+36; 
(*f[33])( );     /*FNDE0(107,MMMI,jvj+36)*/
x[jvj+42]=x[jvj+36] ;z[jvj+42]=z[jvj+36];
l35:if((x[jvj+42]<=0)) goto l40;
x[jvj+37]=s[x[jvj+42]] ;z[jvj+37]=(x[jvj+37]<=sepcte) ? x[jvj+37] : z[jvj+42];
pile[v[22]]=101; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l36;     /*FNDO0(101,jvj+37,jvj+38)*/
if((x[jvj+38]!=134)) goto l36;
x[jvj+13]=0 ;z[jvj+13]=0;
goto l9;
l36:x[jvj+42]=t[x[jvj+42]];
goto l35;
l38:x[jvj+43]=t[x[jvj+43]];
goto l37;
}
