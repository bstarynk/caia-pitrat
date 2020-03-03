#include "dx.h"
void COMPARAISON0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V4=0,V5=0,V33=0,V34=0,V24=0,V25=0,V35=0,V36=0,V27=0,V28=0,V1=0,V2=0,V7=0,V8=0,V38=0,V39=0,V15=0,V16=0,V19=0,V20=0,V29=0,V30=0,V40=0,V41=0,V17=0,V18=0,V21=0,V22=0,V31=0,V32=0,V42=0,V43=0,V10=0,V11=0,V13=0,V14=0;
int RL,X,Y;
int R;
int WZ1,WZ2;
int jvj;
jvj=v[0];
v[0]+=16;
if(v[0]>99700) (*f[6])( );

RL=pile[v[22]]; X=pile[v[22]+1]; Y=pile[v[22]+2]; R=pile[v[22]+3]; v[22]+=4; 
WZ2=v[22]+2; WZ1=v[22]+1; 
if((x[RL]==995)) goto l1;
if((x[RL]!=996)) goto l8;
pile[v[22]]=493; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(493,X,V35)*/
V35=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l6;     /*FNDC0(493,Y,V36)*/
V36=pile[WZ2]; 
if(V35>((V36*11)/10)+2) goto l21;
l6:x[jvj+4]=d[112];z[jvj+4]=0;
l5:if((x[jvj+4]<=0)) goto l8;
x[jvj+5]=s[x[jvj+4]] ;z[jvj+5]=(x[jvj+5]<=sepcte) ? x[jvj+5] : z[jvj+4];
pile[v[22]]=jvj+5; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(jvj+5,X,V27)*/
V27=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l7;     /*FNDC0(jvj+5,Y,V28)*/
V28=pile[WZ2]; 
if(V27<((V28*9)/10)-2) goto l21;
l7:x[jvj+4]=t[x[jvj+4]];
goto l5;
l1:pile[v[22]]=493; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(493,X,V33)*/
V33=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l3;     /*FNDC0(493,Y,V34)*/
V34=pile[WZ2]; 
if(V33<((V34*9)/10)-2) goto l21;
l3:x[jvj+2]=d[112];z[jvj+2]=0;
l2:if((x[jvj+2]<=0)) goto l8;
x[jvj+3]=s[x[jvj+2]] ;z[jvj+3]=(x[jvj+3]<=sepcte) ? x[jvj+3] : z[jvj+2];
pile[v[22]]=jvj+3; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(jvj+3,X,V24)*/
V24=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l4;     /*FNDC0(jvj+3,Y,V25)*/
V25=pile[WZ2]; 
if(V24>((V25*11)/10)+2) goto l21;
l4:x[jvj+2]=t[x[jvj+2]];
goto l2;
l8:if(x[RL]==995||x[RL]==996) goto l9;
if((x[RL]==25)) goto l12;
if((x[RL]!=1012)) goto l21;
x[jvj+9]=d[73];z[jvj+9]=0;
l16:if((x[jvj+9]>0)) goto l17;
x[jvj+11]=d[73];z[jvj+11]=0;
l19:if((x[jvj+11]<=0)) goto l21;
x[jvj+12]=s[x[jvj+11]] ;z[jvj+12]=(x[jvj+12]<=sepcte) ? x[jvj+12] : z[jvj+11];
pile[v[22]]=jvj+12; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(jvj+12,X,V38)*/
V38=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l20;     /*FNDC0(jvj+12,Y,V39)*/
V39=pile[WZ2]; 
if(V38<((V39*9)/10)-2) goto l9;
l20:x[jvj+11]=t[x[jvj+11]];
goto l19;
l11:x[jvj+1]=s[x[jvj+6]] ;z[jvj+1]=(x[jvj+1]<=sepcte) ? x[jvj+1] : z[jvj+6];
pile[v[22]]=jvj+1; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+1,X,V4)*/
V4=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l9;     /*FNDC0(jvj+1,Y,V5)*/
V5=pile[WZ2]; 
if((V4<=((V5*11)/10)+2)&&(V4>=((V5*9)/10)-2)) goto l13;
l9:x[R]=67 ;z[R]=67;
l36:v[0]=jvj; v[22]-=4; return;
l12:x[jvj+6]=d[113];z[jvj+6]=0;
l10:if((x[jvj+6]>0)) goto l11;
x[jvj+7]=d[114];z[jvj+7]=0;
l14:if((x[jvj+7]<=0)) goto l21;
x[jvj+8]=s[x[jvj+7]] ;z[jvj+8]=(x[jvj+8]<=sepcte) ? x[jvj+8] : z[jvj+7];
pile[v[22]]=jvj+8; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(jvj+8,X,V1)*/
V1=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l15;     /*FNDC0(jvj+8,Y,V2)*/
V2=pile[WZ2]; 
if((V1!=V2)) goto l9;
l15:x[jvj+7]=t[x[jvj+7]];
goto l14;
l13:x[jvj+6]=t[x[jvj+6]];
goto l10;
l17:x[jvj+10]=s[x[jvj+9]] ;z[jvj+10]=(x[jvj+10]<=sepcte) ? x[jvj+10] : z[jvj+9];
pile[v[22]]=jvj+10; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(jvj+10,X,V7)*/
V7=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l18;     /*FNDC0(jvj+10,Y,V8)*/
V8=pile[WZ2]; 
if(V7>((V8*11)/10)+2) goto l9;
l18:x[jvj+9]=t[x[jvj+9]];
goto l16;
l21:if(x[RL]!=996&&x[RL]!=29) goto l25;
pile[v[22]]=876; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(876,X,V15)*/
V15=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l22;     /*FNDC0(876,Y,V16)*/
V16=pile[WZ2]; 
if((V15>V16)) goto l9;
l22:pile[v[22]]=977; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(977,X,V19)*/
V19=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l23;     /*FNDC0(977,Y,V20)*/
V20=pile[WZ2]; 
if((V19>V20)) goto l9;
l23:pile[v[22]]=493; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(493,X,V29)*/
V29=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l24;     /*FNDC0(493,Y,V30)*/
V30=pile[WZ2]; 
if((V29<V30)) goto l9;
l24:pile[v[22]]=936; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(936,X,V40)*/
V40=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l25;     /*FNDC0(936,Y,V41)*/
V41=pile[WZ2]; 
if(V40>((V41*11)/10)+2) goto l9;
l25:if(x[RL]!=995&&x[RL]!=27) goto l29;
pile[v[22]]=876; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(876,X,V17)*/
V17=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l26;     /*FNDC0(876,Y,V18)*/
V18=pile[WZ2]; 
if((V17<V18)) goto l9;
l26:pile[v[22]]=977; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(977,X,V21)*/
V21=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l27;     /*FNDC0(977,Y,V22)*/
V22=pile[WZ2]; 
if((V21<V22)) goto l9;
l27:pile[v[22]]=493; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(493,X,V31)*/
V31=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l28;     /*FNDC0(493,Y,V32)*/
V32=pile[WZ2]; 
if((V31>V32)) goto l9;
l28:pile[v[22]]=936; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(936,X,V42)*/
V42=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l29;     /*FNDC0(936,Y,V43)*/
V43=pile[WZ2]; 
if(V42<((V43*9)/10)-2) goto l9;
l29:if(x[RL]!=1012&&x[RL]!=996&&x[RL]!=29) goto l32;
x[jvj+13]=d[115];z[jvj+13]=0;
l30:if((x[jvj+13]<=0)) goto l32;
x[jvj+14]=s[x[jvj+13]] ;z[jvj+14]=(x[jvj+14]<=sepcte) ? x[jvj+14] : z[jvj+13];
pile[v[22]]=jvj+14; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(jvj+14,X,V10)*/
V10=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l31;     /*FNDC0(jvj+14,Y,V11)*/
V11=pile[WZ2]; 
if(V10>((V11*11)/10)+2) goto l9;
l31:x[jvj+13]=t[x[jvj+13]];
goto l30;
l32:if(x[RL]!=1012&&x[RL]!=995&&x[RL]!=27) goto l35;
x[jvj+15]=d[115];z[jvj+15]=0;
l33:if((x[jvj+15]<=0)) goto l35;
x[jvj+16]=s[x[jvj+15]] ;z[jvj+16]=(x[jvj+16]<=sepcte) ? x[jvj+16] : z[jvj+15];
pile[v[22]]=jvj+16; pile[WZ1]=X; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(jvj+16,X,V13)*/
V13=pile[WZ2]; 
pile[WZ1]=Y; 
(*f[26])( );if(v[102]) goto l34;     /*FNDC0(jvj+16,Y,V14)*/
V14=pile[WZ2]; 
if(V13<((V14*9)/10)-2) goto l9;
l34:x[jvj+15]=t[x[jvj+15]];
goto l33;
l35:x[R]=68 ;z[R]=68;
goto l36;
}
