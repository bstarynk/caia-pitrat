#include "dx.h"
void EVLD0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V110=0,V6=0,V7=0,V8=0,V9=0,V12=0,V11=0,V10=0,V17=0,V18=0,V19=0,V20=0,V21=0,V26=0,V25=0,V31=0,V33=0,V48=0,V58=0,V61=0,V71=0,V73=0,V75=0,V85=0,V92=0,V99=0,V106=0,V4=0,V13=0,V108=0,V117=0,V123=0,V119=0,V118=0,V114=0,V112=0,V116=0,V115=0,V124=0,V126=0,V127=0,V129=0,V125=0,V128=0,V121=0,V130=0,V131=0,V132=0,V133=0,V134=0,V135=0,V136=0,V139=0,V138=0,V137=0,V141=0,V46=0,V148=0,V145=0,V59=0,V150=0,V149=0,V151=0,V152=0,V89=0,V155=0,V156=0;
int B,A,Y;
int Z;
int WZ1,WZ2,WZ3;
int jvj;
jvj=v[0];
v[0]+=55;
if(v[0]>99700) (*f[6])( );

B=pile[v[22]]; A=pile[v[22]+1]; Y=pile[v[22]+2]; v[22]+=4; 
WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
if((A!=B)) goto l2;
if((x[Y]==25)) goto l1;
l2:if((x[Y]==26)) goto l3;
if((x[Y]==27)) goto l4;
if((x[Y]==28)) goto l5;
if((x[Y]==29)) goto l6;
if((x[Y]==30)) goto l7;
if((x[Y]==45)) goto l8;
if((x[Y]==51)) goto l9;
if((x[Y]==53)) goto l10;
if((x[Y]==63)) goto l11;
if((x[Y]==64)) goto l12;
if((x[Y]==172)) goto l13;
if((x[Y]==326)) goto l14;
if((x[Y]==328)) goto l15;
if((x[Y]==329)) goto l16;
if((x[Y]==338)) goto l17;
if((x[Y]==339)) goto l18;
if((x[Y]==408)) goto l19;
if((x[Y]==465)) goto l20;
if((x[Y]==468)) goto l21;
if((x[Y]==540)) goto l22;
if((x[Y]==542)) goto l23;
if((x[Y]==596)) goto l24;
if((x[Y]==660)) goto l25;
if((x[Y]==743)) goto l26;
if((x[Y]==885)) goto l27;
if((x[Y]==995)) goto l28;
if((x[Y]==996)) goto l29;
if((x[Y]==1012)) goto l30;
if((x[Y]==1040)) goto l31;
if((x[Y]==1059)) goto l32;
if((x[Y]==1073)) goto l66;
if((x[Y]==1111)) goto l33;
if((x[Y]==1126)) goto l35;
if((x[Y]==1132)) goto l36;
if((x[Y]==1134)) goto l37;
if((x[Y]==1158)) goto l38;
if((x[Y]==1193)) goto l39;
if((x[Y]==1205)) goto l82;
if((x[Y]==1211)) goto l40;
if((x[Y]==1233)) goto l41;
if((x[Y]==1278)) goto l42;
if((x[Y]==1295)) goto l43;
if((x[Y]==1306)) goto l44;
if((x[Y]==1307)) goto l45;
if((x[Y]==1322)) goto l46;
if((x[Y]==1355)) goto l71;
if((x[Y]==1376)) goto l47;
if((x[Y]==1377)) goto l48;
if((x[Y]==1449)) goto l49;
if((x[Y]==1482)) goto l69;
if((x[Y]==1577)) goto l50;
if((x[Y]==1637)) goto l51;
if((x[Y]==1724)) goto l52;
if((x[Y]==1785)) goto l53;
if((x[Y]==1786)) goto l55;
if((x[Y]==1813)) goto l56;
if((x[Y]==1824)) goto l57;
if((x[Y]==1866)) goto l74;
if((x[Y]==1930)) goto l86;
if((x[Y]==1936)) goto l58;
if((x[Y]==44)) goto l59;
if((x[Y]==636)) goto l60;
if((x[Y]==285)) goto l61;
if((x[Y]==8)) goto l62;
if((x[Y]!=300)) goto l63;
x[jvj+2]=A ;z[jvj+2]=(A<=sepcte) ? A : 0;
x[jvj+1]=B ;z[jvj+1]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+1; pile[WZ1]=jvj+2; pile[WZ3]=jvj+3; 
(*f[45])( );if(v[102]) goto l1;     /*FNDZ0(jvj+1,jvj+2,V110,jvj+3)*/
V110=pile[WZ2]; 
l63:pile[v[22]]=11; pile[WZ1]=Y; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l64;     /*FNDO0(11,Y,jvj+45)*/
if((x[jvj+45]!=135)) goto l64;
Z=134;
l65:v[0]=jvj; v[22]-=4; pile[v[22]+3]=Z; v[102]=0;return;
l3:if((A!=B)) goto l1;
goto l63;
l4:if((A>B)) goto l1;
goto l63;
l5:if((A>=B)) goto l1;
goto l63;
l6:if((A<B)) goto l1;
goto l63;
l7:if((A<=B)) goto l1;
goto l63;
l8:for(a=B;a>0;a=t[a]) if(s[a]==A) goto l63;
l1:Z=135;
goto l65;
l9:V6=A+B;
Z=V6;
goto l65;
l10:V7=A*B;
Z=V7;
goto l65;
l11:V8=A/B;
Z=V8;
goto l65;
l12:V9=A-B;
Z=V9;
goto l65;
l13:V12=B;
V11=A;
V10=V11;
Z=V10;
goto l65;
l14:V17=A%B;
Z=V17;
goto l65;
l15:V18=A>>B;
Z=V18;
goto l65;
l16:V19=A<<B;
Z=V19;
goto l65;
l17:V20=A&B;
Z=V20;
goto l65;
l18:V21=A|B;
Z=V21;
goto l65;
l19:x[jvj+4]=B ;z[jvj+4]=(B<=sepcte) ? B : 0;
x[jvj+5]=A ;z[jvj+5]=(A<=sepcte) ? A : 0;
pile[v[22]]=jvj+4; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[1009])( );     /*DIVISE0(jvj+4,jvj+5,jvj+6)*/
x[jvj+6];
goto l1;
l20:V26=w[A][B];
V25=V26;
Z=V25;
goto l65;
l21:x[jvj+7]=A ;z[jvj+7]=(A<=sepcte) ? A : 0;
x[jvj+8]=B ;z[jvj+8]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+7; pile[WZ1]=jvj+8; pile[WZ2]=jvj+9; 
(*f[492])( );     /*FIGURE0(jvj+7,jvj+8,jvj+9)*/
if((x[jvj+9]==135)) goto l1;
goto l63;
l22:V31=A;
pile[v[22]]=B; pile[WZ1]=V31; 
(*f[1010])( );if(v[102]) goto l63;     /*FVECT0(B,V31,Z)*/
Z=pile[WZ2]; 
goto l65;
l23:V33=A;
pile[v[22]]=B; pile[WZ1]=V33; 
(*f[201])( );if(v[102]) goto l63;     /*FCOEFF0(B,V33,Z)*/
Z=pile[WZ2]; 
goto l65;
l24:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1006])( );if(v[102]) goto l63;     /*POWER0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l25:x[jvj+10]=A ;z[jvj+10]=(A<=sepcte) ? A : 0;
pile[v[22]]=B; pile[WZ1]=jvj+10; 
(*f[1012])( );if(v[102]) goto l63;     /*EXECUTION0(B,jvj+10,Z)*/
Z=pile[WZ2]; 
goto l65;
l26:if((A==B)) goto l1;
goto l63;
l27:x[jvj+11]=A ;z[jvj+11]=(A<=sepcte) ? A : 0;
x[jvj+12]=B ;z[jvj+12]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+11; pile[WZ1]=jvj+12; pile[WZ2]=jvj+13; 
(*f[1013])( );     /*ETABLI0(jvj+11,jvj+12,jvj+13)*/
if((x[jvj+13]==135)) goto l1;
goto l63;
l28:if(A>((B*11)/10)+2) goto l1;
goto l63;
l29:if(A<((B*9)/10)-2) goto l1;
goto l63;
l30:if((A<=((B*11)/10)+2)&&(A>=((B*9)/10)-2)) goto l1;
goto l63;
l31:x[jvj+14]=A ;z[jvj+14]=(A<=sepcte) ? A : 0;
x[jvj+15]=B ;z[jvj+15]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+14; pile[WZ1]=jvj+15; pile[WZ2]=jvj+16; 
(*f[491])( );     /*FIGURETOTAL0(jvj+14,jvj+15,jvj+16)*/
if((x[jvj+16]==135)) goto l1;
goto l63;
l32:pile[v[22]]=B; pile[WZ1]=A; 
(*f[783])( );if(v[102]) goto l63;     /*POURMILLE0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l33:x[jvj+54]=A ;z[jvj+54]=(A<=sepcte) ? A : 0;
V46=incon;
x[jvj+47]=x[jvj+54] ;z[jvj+47]=z[jvj+54];
l76:x[jvj+46]=x[jvj+47] ;z[jvj+46]=z[jvj+47];
pile[v[22]]=1110; pile[WZ1]=jvj+46; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(1110,jvj+46,V141)*/
V141=pile[WZ2]; 
if((V141!=B)) goto l78;
V46=x[jvj+46];
l77:if(V46!=incon) goto l34;
goto l63;
l34:V48=V46;
Z=V48;
goto l65;
l35:x[jvj+17]=A ;z[jvj+17]=(A<=sepcte) ? A : 0;
x[jvj+18]=B ;z[jvj+18]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+17; pile[WZ1]=jvj+18; pile[WZ2]=jvj+19; 
(*f[806])( );     /*EQVALSYM0(jvj+17,jvj+18,jvj+19)*/
if((x[jvj+19]==135)) goto l1;
goto l63;
l36:x[jvj+49]=B ;z[jvj+49]=(B<=sepcte) ? B : 0;
x[jvj+48]=A ;z[jvj+48]=(A<=sepcte) ? A : 0;
pile[v[22]]=jvj+48; pile[WZ1]=jvj+49; 
(*f[26])( );if(v[102]) goto l79;     /*FNDC0(jvj+48,jvj+49,Z)*/
Z=pile[WZ2]; 
goto l65;
l37:x[jvj+20]=B ;z[jvj+20]=(B<=sepcte) ? B : 0;
x[jvj+21]=A ;z[jvj+21]=0;
pile[v[22]]=jvj+20; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[1016])( );if(v[102]) goto l63;     /*FINDPB0(jvj+20,jvj+21,jvj+22)*/
V58=x[jvj+22];
Z=V58;
goto l65;
l38:x[jvj+55]=B ;z[jvj+55]=(B<=sepcte) ? B : 0;
V148=A;
x[jvj+50]=x[jvj+55] ;z[jvj+50]=z[jvj+55];
l80:if((V148==1)) goto l81;
pile[v[22]]=120; pile[WZ1]=jvj+50; pile[WZ2]=jvj+51; 
(*f[32])( );if(v[102]) goto l63;     /*FNDO0(120,jvj+50,jvj+51)*/
V145=V148-1;
x[jvj+50]=x[jvj+51] ;z[jvj+50]=z[jvj+51];
V148=V145;
goto l80;
l39:x[jvj+23]=B ;z[jvj+23]=0;
pile[v[22]]=jvj+23; pile[WZ1]=A; 
(*f[1017])( );if(v[102]) goto l63;     /*ELTN0(jvj+23,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l40:pile[v[22]]=B; pile[WZ1]=A; 
(*f[784])( );if(v[102]) goto l63;     /*RAPPORT0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l41:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1018])( );     /*MODULO0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l42:x[jvj+24]=A ;z[jvj+24]=(A<=sepcte) ? A : 0;
x[jvj+25]=B ;z[jvj+25]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+24; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[1019])( );     /*PLUSTARD0(jvj+24,jvj+25,jvj+26)*/
if((x[jvj+26]==135)) goto l1;
goto l63;
l43:V71=A;
pile[v[22]]=B; pile[WZ1]=V71; 
(*f[1020])( );if(v[102]) goto l63;     /*VALTAB0(B,V71,Z)*/
Z=pile[WZ2]; 
goto l65;
l44:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1021])( );if(v[102]) goto l63;     /*PPCM0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l45:V73=abs(A-B);
Z=V73;
goto l65;
l46:V75=A;
pile[v[22]]=B; pile[WZ1]=V75; 
(*f[1022])( );if(v[102]) goto l63;     /*VVL0(B,V75,Z)*/
Z=pile[WZ2]; 
goto l65;
l47:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1024])( );if(v[102]) goto l63;     /*POSPRD0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l48:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1025])( );if(v[102]) goto l63;     /*POSOM0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l49:pile[v[22]]=B; pile[WZ1]=A; 
(*f[913])( );if(v[102]) goto l63;     /*PMILLE0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l50:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1027])( );     /*PUIDANS0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l51:x[jvj+27]=B ;z[jvj+27]=(B<=sepcte) ? B : 0;
x[jvj+28]=A ;z[jvj+28]=(A<=sepcte) ? A : 0;
pile[v[22]]=jvj+27; pile[WZ1]=jvj+28; pile[WZ2]=jvj+29; 
(*f[1028])( );if(v[102]) goto l63;     /*ISOLE0(jvj+27,jvj+28,jvj+29)*/
V85=x[jvj+29];
Z=V85;
goto l65;
l52:x[jvj+30]=A ;z[jvj+30]=(A<=sepcte) ? A : 0;
x[jvj+31]=B ;z[jvj+31]=0;
pile[v[22]]=jvj+30; pile[WZ1]=jvj+31; pile[WZ2]=jvj+32; 
(*f[1029])( );     /*DIFFAPP0(jvj+30,jvj+31,jvj+32)*/
if((x[jvj+32]==135)) goto l1;
goto l63;
l53:x[jvj+53]=B ;z[jvj+53]=(B<=sepcte) ? B : 0;
x[jvj+52]=A ;z[jvj+52]=(A<=sepcte) ? A : 0;
pile[v[22]]=130; pile[WZ1]=jvj+52; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(130,jvj+52,V151)*/
V151=pile[WZ2]; 
pile[WZ1]=jvj+53; 
(*f[26])( );if(v[102]) goto l63;     /*FNDC0(130,jvj+53,V152)*/
V152=pile[WZ2]; 
if((V151>=V152)) goto l85;
V89=x[jvj+53];
l54:V92=V89;
Z=V92;
goto l65;
l55:x[jvj+33]=A ;z[jvj+33]=(A<=sepcte) ? A : 0;
x[jvj+34]=B ;z[jvj+34]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+33; pile[WZ1]=jvj+34; pile[WZ2]=jvj+35; 
(*f[1031])( );     /*APPEARS0(jvj+33,jvj+34,jvj+35)*/
if((x[jvj+35]==135)) goto l1;
goto l63;
l56:x[jvj+36]=B ;z[jvj+36]=(B<=sepcte) ? B : 0;
x[jvj+37]=A ;z[jvj+37]=(A<=sepcte) ? A : 0;
pile[v[22]]=jvj+36; pile[WZ1]=jvj+37; pile[WZ2]=jvj+38; 
(*f[1032])( );if(v[102]) goto l63;     /*MERGEQM0(jvj+36,jvj+37,jvj+38)*/
V99=x[jvj+38];
Z=V99;
goto l65;
l57:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1033])( );     /*VALEXPO0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l58:x[jvj+39]=B ;z[jvj+39]=(B<=sepcte) ? B : 0;
x[jvj+40]=A ;z[jvj+40]=(A<=sepcte) ? A : 0;
pile[v[22]]=jvj+39; pile[WZ1]=jvj+40; pile[WZ2]=jvj+41; 
(*f[4055])( );if(v[102]) goto l63;     /*ISOPRD0(jvj+39,jvj+40,jvj+41)*/
V106=x[jvj+41];
Z=V106;
goto l65;
l59:V4=B;
for(a=V4;a>0;a=t[a]) if(s[a]==A) goto l1;
goto l63;
l60:pile[v[22]]=B; pile[WZ1]=A; 
(*f[1011])( );     /*PGCD0(B,A,Z)*/
Z=pile[WZ2]; 
goto l65;
l61:V13=A;
pile[v[22]]=B; pile[WZ1]=V13; 
(*f[1008])( );if(v[102]) goto l63;     /*EVLI0(B,V13,Z)*/
Z=pile[WZ2]; 
goto l65;
l62:x[jvj+43]=A ;z[jvj+43]=(A<=sepcte) ? A : 0;
x[jvj+42]=B ;z[jvj+42]=(B<=sepcte) ? B : 0;
pile[v[22]]=jvj+42; pile[WZ1]=jvj+43; pile[WZ3]=jvj+44; 
(*f[45])( );if(v[102]) goto l63;     /*FNDZ0(jvj+42,jvj+43,V108,jvj+44)*/
V108=pile[WZ2]; 
goto l1;
l64:v[0]=jvj; v[22]-=4; v[102]=1;return;
l66:V117=49;
V118=incon;
V123=v[V117];
V119=V123%1000000;
if((V119>0)) goto l68;
V118=137643;
l67:v[V117]=V118;
V114=B+1;
V112=V114-A;
V116=v[49]%V112;
V115=A+V116;
Z=V115;
goto l65;
l68:V121=V119%100000;
V128=V119/100000;
V125=V121*10;
V129=V121/10000;
V127=V128+V129;
V126=V127%10;
V124=V125+V126;
V118=V124;
goto l67;
l69:V130=A%B;
V131=V130;
if((V131<0)) goto l70;
Z=V131;
goto l65;
l70:V132=V131+B;
Z=V132;
goto l65;
l71:V133=A%B;
V134=V133;
if((V134<=0)) goto l73;
V135=B/2;
if((V134<=V135)) goto l73;
V136=V134-B;
Z=V136;
goto l65;
l72:Z=V134;
goto l65;
l73:if((V134>=0)) goto l72;
V138=abs(V134);
V137=2*V138;
if((V137<B)) goto l72;
V139=V134+B;
Z=V139;
goto l65;
l74:if((A<=B)) goto l75;
Z=B;
goto l65;
l75:Z=A;
goto l65;
l78:pile[v[22]]=120; pile[WZ1]=jvj+46; pile[WZ2]=jvj+47; 
(*f[32])( );if(v[102]) goto l77;     /*FNDO0(120,jvj+46,jvj+47)*/
goto l76;
l79:Z=0;
goto l65;
l81:V59=x[jvj+50];
V61=V59;
Z=V61;
goto l65;
l82:if((B!=0)) goto l84;
Z=999999999;
goto l65;
l83:Z=V150;
goto l65;
l84:V149=A/B;
V150=V149;
if((V150!=0)) goto l83;
if((A<=0)) goto l83;
Z=1;
goto l65;
l85:V89=x[jvj+52];
goto l54;
l86:V155=A%B;
if((V155!=0)) goto l63;
if((B==0)) goto l63;
V156=A/B;
Z=V156;
goto l65;
}
