#include "dx.h"
void ANEXPERIENCES0(void )
/* Copyright (C) 2000-2012 Jacques Pitrat
This file is part of CAIA.
CAIA is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
CAIA is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details.
You should have received a copy of the GNU General Public License along with CAIA.  If not, see <http://www.gnu.org/licenses/>. */
{int V12=0,V=0,V4=0,V3=0,V8=0,V7=0,V10=0,V9=0,V13=0,A=0,V15=0,V6=0,V143=0,V145=0,V5=0,NVV=0,NWW=0,V27=0,V28=0,V29=0,V30=0,V67=0,V23=0,V32=0,V31=0,V34=0,V33=0,V36=0,V35=0,V37=0,V38=0,V65=0,V164=0,V173=0,V180=0,V163=0,V165=0,V166=0,V167=0,V59=0,V168=0,V170=0,V172=0,V54=0,V174=0,CA=0,V176=0,V178=0,V179=0,V56=0,V181=0,CB=0,V183=0,V39=0,V40=0,V81=0,VV=0,V42=0,V41=0,V44=0,V43=0,V46=0,V45=0,V79=0,V189=0,V198=0,V205=0,V188=0,V190=0,V191=0,V192=0,V72=0,V193=0,V195=0,V197=0,V199=0,V201=0,V203=0,V204=0,V206=0,V208=0,QQ=0,V78=0,V77=0,V76=0,V75=0,V74=0,V73=0,V80=0,PP=0,XB=0,V64=0,XA=0,V63=0,V62=0,V61=0,V60=0,V66=0,V52=0,V55=0,V53=0,V57=0,V50=0,V51=0,V86=0,V88=0,V48=0,D=0,S=0,V147=0,V16=0,V17=0,V149=0,V148=0,V150=0,V151=0,V152=0,V153=0,V155=0,V156=0,V157=0,V158=0,V97=0,V96=0,V113=0,V90=0,V99=0,V98=0,V121=0,V123=0,V122=0,V125=0,V93=0,V101=0,V100=0,V126=0,AA=0,V103=0,V222=0,V223=0,V224=0,V102=0,V127=0,BB=0,V227=0,V228=0,V229=0,V104=0,V128=0,V232=0,V110=0,V109=0,V112=0,V111=0,V108=0,V107=0,V135=0,V134=0,V136=0,V239=0,V238=0,V240=0,V242=0,V243=0,V244=0,V246=0,V247=0,V248=0,V249=0,V250=0,V252=0,V138=0,V139=0,V236=0,V253=0,V255=0,V115=0,V117=0,V216=0,V220=0,V214=0,V217=0,V218=0,V219=0,V95=0,V211=0,V273=0,V272=0,V280=0,V279=0,V26=0,V287=0,V292=0;
int NT,NV,E,NW,EC;
int WZ1,WZ2,WZ3,WZ4,WZ5;
int jvj;
jvj=v[0];
v[0]+=68;
x[jvj+1]=10881;z[jvj+1]=(-100);
if(v[0]>99700) (*f[6])( );
if(v[90]==520&&v[97]==0) {
(*f[4])( ); x[jvj+1]=incon;v[0]=jvj;return;
}
NT=pile[v[22]]; NV=pile[v[22]+1]; E=pile[v[22]+2]; NW=pile[v[22]+3]; EC=pile[v[22]+4]; v[22]+=5; 
WZ5=v[22]+5; WZ4=v[22]+4; WZ3=v[22]+3; WZ2=v[22]+2; WZ1=v[22]+1; 
NVV=NWW=x[jvj+42]=x[jvj+20]=incon;
if((NT==1)) goto l13;
if((NT!=3)) goto l14;
NVV=0;
NWW=0;
l14:if(NT!=1&&NT!=3) goto l90;
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+20; 
(*f[54])( );     /*TRI1(250,158,jvj+20)*/
if(NVV!=incon) goto l83;
l90:if((NT==4)) goto l91;
if((NT==5)) goto l92;
if((NT!=2)) goto l151;
x[jvj+67]=x[E] ;z[jvj+67]=z[E];
l93:if((x[jvj+67]<=0)) goto l151;
x[jvj+25]=s[x[jvj+67]] ;z[jvj+25]=(x[jvj+25]<=sepcte) ? x[jvj+25] : z[jvj+67];
pile[v[22]]=109; pile[WZ1]=jvj+25; pile[WZ2]=jvj+56; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(109,jvj+25,jvj+56)*/
pile[v[22]]=983; pile[WZ1]=jvj+56; pile[WZ2]=jvj+57; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(983,jvj+56,jvj+57)*/
pile[v[22]]=878; pile[WZ1]=jvj+57; pile[WZ2]=jvj+58; 
(*f[33])( );     /*FNDE0(878,jvj+57,jvj+58)*/
l158:if((x[jvj+58]<=0)) goto l94;
x[jvj+59]=s[x[jvj+58]] ;z[jvj+59]=(x[jvj+59]<=sepcte) ? x[jvj+59] : z[jvj+58];
pile[v[22]]=163; pile[WZ1]=jvj+59; 
(*f[44])( );if(v[102]) goto l159;     /*FNDC1(163,jvj+59,V280)*/
V280=pile[WZ2]; 
pile[WZ1]=jvj+25; 
(*f[44])( );if(v[102]) goto l159;     /*FNDC1(163,jvj+25,V279)*/
V279=pile[WZ2]; 
if((V280==V279)) goto l159;
x[jvj+58]=t[x[jvj+58]];
goto l158;
l2:V3=V4;
l98:if(V3!=incon) goto l99;
l97:pile[v[22]]=120; pile[WZ1]=jvj+3; pile[WZ2]=jvj+29; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(120,jvj+3,jvj+29)*/
l96:x[jvj+3]=x[jvj+29] ;z[jvj+3]=z[jvj+29];
pile[v[22]]=204; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l97;     /*FNDC0(204,jvj+3,V16)*/
V16=pile[WZ2]; 
pile[v[22]]=1110; 
(*f[26])( );if(v[102]) goto l97;     /*FNDC0(1110,jvj+3,V17)*/
V17=pile[WZ2]; 
pile[v[22]]=698; pile[WZ2]=jvj+30; 
(*f[32])( );if(v[102]) goto l97;     /*FNDO0(698,jvj+3,jvj+30)*/
V149=x[jvj+30];
pile[v[22]]=20; pile[WZ1]=V147; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V147,0,V4)*/
V4=pile[WZ3]; 
V3=incon;
pile[v[22]]=163; pile[WZ1]=jvj+2; 
(*f[44])( );if(v[102]) goto l1;     /*FNDC1(163,jvj+2,V12)*/
V12=pile[WZ2]; 
V=V12;
pile[v[22]]=V4; pile[WZ1]=V; 
(*f[37])( );     /*SRA0(V4,V,V3)*/
V3=pile[WZ2]; 
l1:if(V3==incon) goto l2;
goto l98;
l4:V7=V8;
l7:if(V7!=incon) goto l8;
l11:if(V5==incon) goto l12;
l100:if(V5!=incon) goto l101;
goto l97;
l6:V9=V10;
l9:if(V9!=incon) goto l10;
goto l11;
l8:pile[v[22]]=41; pile[WZ1]=V15; pile[WZ2]=V7; 
(*f[39])( );     /*SDX0(41,V15,V7,V145)*/
V145=pile[WZ3]; 
pile[v[22]]=V145; pile[WZ1]=(-5570); 
(*f[37])( );     /*SRA0(V145,(-5570),V10)*/
V10=pile[WZ2]; 
V9=incon;
if((V15<=1)) goto l5;
pile[v[22]]=V10; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V10,83,V9)*/
V9=pile[WZ2]; 
l5:if(V9==incon) goto l6;
goto l9;
l10:V5=V9;
goto l11;
l12:V5=V6;
goto l100;
l13:NVV=NV;
NWW=NW;
goto l14;
l16:V27=V56;
l72:if(V27!=incon) goto l17;
l80:x[jvj+17]=x[jvj+7] ;z[jvj+17]=z[jvj+7];
l79:pile[v[22]]=120; pile[WZ1]=jvj+17; pile[WZ2]=jvj+7; 
(*f[32])( );if(v[102]) goto l78;     /*FNDO0(120,jvj+17,jvj+7)*/
pile[v[22]]=204; pile[WZ1]=jvj+7; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(204,jvj+7,V53)*/
V53=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l80;     /*FNDC0(876,jvj+7,V57)*/
V57=pile[WZ2]; 
V56=V57+S;
V50=V54-V56;
V51=V54+V56;
if((V51<=0)) goto l80;
CB=V53;
if((V50<=0)) goto l71;
if((CA==CB)) goto l71;
V39=incon;
if((v[185]<=0)) goto l49;
V39=v[185];
l49:if(V39==incon) goto l50;
l69:if(V39!=incon) goto l70;
l71:if((V54==V56)) goto l80;
V27=incon;
if((V54<=V56)) goto l15;
V27=V54;
l15:if(V27==incon) goto l16;
goto l72;
l17:V28=incon;
if((V54<=V56)) goto l18;
V28=V56;
l18:if(V28==incon) goto l19;
l73:if(V28!=incon) goto l20;
goto l80;
l19:V28=V54;
goto l73;
l20:V29=incon;
if((v[184]<=0)) goto l21;
V29=v[184];
l21:if(V29==incon) goto l22;
l74:if(V29!=incon) goto l75;
goto l80;
l22:V29=150;
goto l74;
l24:V30=V65;
l41:if(V30!=incon) goto l42;
goto l80;
l26:V31=V32;
l43:if(V31!=incon) goto l44;
goto l80;
l28:V33=V34;
l45:if(V33!=incon) goto l46;
goto l80;
l30:V35=V36;
l47:if(V35!=incon) goto l48;
goto l80;
l32:V37=43;
l37:if(V37!=incon) goto l33;
l40:if((NT!=1)) goto l80;
V30=incon;
if((V65<=50)) goto l23;
V30=50;
l23:if(V30==incon) goto l24;
goto l41;
l33:V38=incon;
if((V54<=V56)) goto l34;
V38=43;
l34:if(V38==incon) goto l35;
l38:if(V38!=incon) goto l39;
goto l40;
l35:V38=45;
goto l38;
l36:if((NT!=3)) goto l40;
V37=incon;
if((V54<=V56)) goto l31;
V37=45;
l31:if(V37==incon) goto l32;
goto l37;
l39:pile[v[22]]=698; pile[WZ1]=jvj+5; pile[WZ2]=jvj+6; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(698,jvj+5,jvj+6)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+8; 
(*f[32])( );if(v[102]) goto l40;     /*FNDO0(698,jvj+7,jvj+8)*/
pile[v[22]]=1012; pile[WZ1]=V65; pile[WZ2]=jvj+6; pile[WZ3]=jvj+9; pile[WZ4]=V37; pile[WZ5]=jvj+5; pile[v[22]+6]=jvj+7; 
(*f[859])( );     /*STEXP0(1012,V65,jvj+6,jvj+9,V37,jvj+5,jvj+7)*/
pile[WZ2]=jvj+8; pile[WZ4]=V38; 
(*f[859])( );     /*STEXP0(1012,V65,jvj+8,jvj+9,V38,jvj+5,jvj+7)*/
goto l40;
l42:pile[v[22]]=698; pile[WZ1]=jvj+7; pile[WZ2]=jvj+10; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(698,jvj+7,jvj+10)*/
pile[WZ1]=jvj+5; pile[WZ2]=jvj+11; 
(*f[32])( );if(v[102]) goto l80;     /*FNDO0(698,jvj+5,jvj+11)*/
V164=x[jvj+51];
V173=x[jvj+11];
V180=x[jvj+10];
pile[v[22]]=V30; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V30,0,42,V163)*/
V163=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V164; pile[WZ2]=V163; 
(*f[39])( );     /*SDX0(20,V164,V163,V32)*/
V32=pile[WZ3]; 
V31=incon;
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l25;     /*FNDC1(163,jvj+4,V67)*/
V67=pile[WZ2]; 
V23=V67;
pile[v[22]]=V32; pile[WZ1]=V23; 
(*f[37])( );     /*SRA0(V32,V23,V31)*/
V31=pile[WZ2]; 
l25:if(V31==incon) goto l26;
goto l43;
l44:pile[v[22]]=V31; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V31,32,V165)*/
V165=pile[WZ2]; 
pile[v[22]]=V165; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V165,61,V166)*/
V166=pile[WZ2]; 
pile[v[22]]=V166; 
(*f[38])( );     /*SPC0(V166,61,V167)*/
V167=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V59; pile[WZ2]=V167; 
(*f[39])( );     /*SDX0(41,V59,V167,V168)*/
V168=pile[WZ3]; 
pile[WZ1]=V65; pile[WZ2]=V168; 
(*f[39])( );     /*SDX0(41,V65,V168,V170)*/
V170=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V173; pile[WZ2]=V170; 
(*f[39])( );     /*SDX0(20,V173,V170,V172)*/
V172=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V54; pile[WZ2]=V172; 
(*f[39])( );     /*SDX0(41,V54,V172,V174)*/
V174=pile[WZ3]; 
pile[v[22]]=V174; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V174,(-8892),V34)*/
V34=pile[WZ2]; 
V33=incon;
if((V54<=1)) goto l27;
pile[v[22]]=V34; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V34,83,V33)*/
V33=pile[WZ2]; 
l27:if(V33==incon) goto l28;
goto l45;
l46:pile[v[22]]=41; pile[WZ1]=CA; pile[WZ2]=V33; 
(*f[39])( );     /*SDX0(41,CA,V33,V176)*/
V176=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V176; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V176,48,V178)*/
V178=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V180; pile[WZ2]=V178; 
(*f[39])( );     /*SDX0(20,V180,V178,V179)*/
V179=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V56; pile[WZ2]=V179; 
(*f[39])( );     /*SDX0(41,V56,V179,V181)*/
V181=pile[WZ3]; 
pile[v[22]]=V181; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V181,(-8892),V36)*/
V36=pile[WZ2]; 
V35=incon;
if((V56<=1)) goto l29;
pile[v[22]]=V36; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V36,83,V35)*/
V35=pile[WZ2]; 
l29:if(V35==incon) goto l30;
goto l47;
l48:pile[v[22]]=41; pile[WZ1]=CB; pile[WZ2]=V35; 
(*f[39])( );     /*SDX0(41,CB,V35,V183)*/
V183=pile[WZ3]; 
pile[v[22]]=V183; 
(*f[40])( );     /*SLG0(V183)*/
goto l80;
l50:V39=15;
goto l69;
l52:V40=V79;
l61:if(V40!=incon) goto l62;
goto l71;
l54:V41=V42;
l63:if(V41!=incon) goto l64;
goto l71;
l56:V43=V44;
l65:if(V43!=incon) goto l66;
goto l71;
l58:V45=V46;
l67:if(V45!=incon) goto l68;
goto l71;
l59:if((NT!=3)) goto l60;
pile[v[22]]=698; pile[WZ1]=jvj+5; pile[WZ2]=jvj+12; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(698,jvj+5,jvj+12)*/
pile[WZ1]=jvj+7; pile[WZ2]=jvj+13; 
(*f[32])( );if(v[102]) goto l60;     /*FNDO0(698,jvj+7,jvj+13)*/
pile[v[22]]=995; pile[WZ1]=V79; pile[WZ2]=jvj+12; pile[WZ3]=jvj+9; pile[WZ4]=45; pile[WZ5]=jvj+5; pile[v[22]+6]=jvj+7; 
(*f[859])( );     /*STEXP0(995,V79,jvj+12,jvj+9,45,jvj+5,jvj+7)*/
pile[v[22]]=996; pile[WZ2]=jvj+13; pile[WZ4]=43; 
(*f[859])( );     /*STEXP0(996,V79,jvj+13,jvj+9,43,jvj+5,jvj+7)*/
l60:if((NT!=1)) goto l71;
V40=incon;
if((V79<=50)) goto l51;
V40=50;
l51:if(V40==incon) goto l52;
goto l61;
l62:pile[v[22]]=698; pile[WZ1]=jvj+7; pile[WZ2]=jvj+14; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(698,jvj+7,jvj+14)*/
pile[WZ1]=jvj+5; pile[WZ2]=jvj+15; 
(*f[32])( );if(v[102]) goto l71;     /*FNDO0(698,jvj+5,jvj+15)*/
V189=x[jvj+51];
V198=x[jvj+15];
V205=x[jvj+14];
pile[v[22]]=V40; pile[WZ1]=0; pile[WZ2]=42; 
(*f[41])( );     /*SRB0(V40,0,42,V188)*/
V188=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V189; pile[WZ2]=V188; 
(*f[39])( );     /*SDX0(20,V189,V188,V42)*/
V42=pile[WZ3]; 
V41=incon;
pile[v[22]]=163; pile[WZ1]=jvj+4; 
(*f[44])( );if(v[102]) goto l53;     /*FNDC1(163,jvj+4,V81)*/
V81=pile[WZ2]; 
VV=V81;
pile[v[22]]=V42; pile[WZ1]=VV; 
(*f[37])( );     /*SRA0(V42,VV,V41)*/
V41=pile[WZ2]; 
l53:if(V41==incon) goto l54;
goto l63;
l64:pile[v[22]]=V41; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V41,32,V190)*/
V190=pile[WZ2]; 
pile[v[22]]=V190; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V190,62,V191)*/
V191=pile[WZ2]; 
pile[v[22]]=V191; 
(*f[38])( );     /*SPC0(V191,62,V192)*/
V192=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V72; pile[WZ2]=V192; 
(*f[39])( );     /*SDX0(41,V72,V192,V193)*/
V193=pile[WZ3]; 
pile[WZ1]=V79; pile[WZ2]=V193; 
(*f[39])( );     /*SDX0(41,V79,V193,V195)*/
V195=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V198; pile[WZ2]=V195; 
(*f[39])( );     /*SDX0(20,V198,V195,V197)*/
V197=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V54; pile[WZ2]=V197; 
(*f[39])( );     /*SDX0(41,V54,V197,V199)*/
V199=pile[WZ3]; 
pile[v[22]]=V199; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V199,(-8892),V44)*/
V44=pile[WZ2]; 
V43=incon;
if((V54<=1)) goto l55;
pile[v[22]]=V44; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V44,83,V43)*/
V43=pile[WZ2]; 
l55:if(V43==incon) goto l56;
goto l65;
l66:pile[v[22]]=41; pile[WZ1]=CA; pile[WZ2]=V43; 
(*f[39])( );     /*SDX0(41,CA,V43,V201)*/
V201=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V201; pile[WZ2]=48; 
(*f[42])( );     /*SRA1(135,V201,48,V203)*/
V203=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V205; pile[WZ2]=V203; 
(*f[39])( );     /*SDX0(20,V205,V203,V204)*/
V204=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V56; pile[WZ2]=V204; 
(*f[39])( );     /*SDX0(41,V56,V204,V206)*/
V206=pile[WZ3]; 
pile[v[22]]=V206; pile[WZ1]=(-8892); 
(*f[37])( );     /*SRA0(V206,(-8892),V46)*/
V46=pile[WZ2]; 
V45=incon;
if((V56<=1)) goto l57;
pile[v[22]]=V46; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V46,83,V45)*/
V45=pile[WZ2]; 
l57:if(V45==incon) goto l58;
goto l67;
l68:pile[v[22]]=41; pile[WZ1]=CB; pile[WZ2]=V45; 
(*f[39])( );     /*SDX0(41,CB,V45,V208)*/
V208=pile[WZ3]; 
pile[v[22]]=V208; 
(*f[40])( );     /*SLG0(V208)*/
goto l71;
l70:QQ=V39;
V78=CA-CB;
V77=1000*V50;
V76=V77/V51;
V75=V76*V78;
V74=V75/1000000;
V73=30*V74;
V72=V73/D;
if((V72<=QQ)) goto l71;
V80=V72/QQ;
V79=V80-1;
if((V79<NWW)) goto l71;
if(CA>((CB*11)/10)+2) goto l59;
goto l71;
l75:PP=V29;
XB=V28;
V64=XB+1;
XA=V27;
V63=XA+1;
V62=100*V63;
V61=V62/V64;
V60=30*V61;
V59=V60/D;
if((V59<=PP)) goto l80;
V66=V59/PP;
V65=V66-1;
if((V65<NVV)) goto l80;
if((CA<=((CB*11)/10)+2)&&(CA>=((CB*9)/10)-2)) goto l36;
goto l80;
l78:pile[v[22]]=120; pile[WZ1]=jvj+5; pile[WZ2]=jvj+16; 
(*f[32])( );if(v[102]) goto l89;     /*FNDO0(120,jvj+5,jvj+16)*/
l76:x[jvj+5]=x[jvj+16] ;z[jvj+5]=z[jvj+16];
pile[v[22]]=204; pile[WZ1]=jvj+5; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(204,jvj+5,V52)*/
V52=pile[WZ2]; 
pile[v[22]]=876; 
(*f[26])( );if(v[102]) goto l78;     /*FNDC0(876,jvj+5,V55)*/
V55=pile[WZ2]; 
V54=V55+S;
CA=V52;
x[jvj+17]=x[jvj+5] ;z[jvj+17]=z[jvj+5];
goto l79;
l83:if(NWW!=incon) goto l85;
goto l90;
l85:x[jvj+65]=x[E] ;z[jvj+65]=z[E];
l84:if((x[jvj+65]<=0)) goto l90;
x[jvj+21]=s[x[jvj+65]] ;z[jvj+21]=(x[jvj+21]<=sepcte) ? x[jvj+21] : z[jvj+65];
pile[v[22]]=109; pile[WZ1]=jvj+21; pile[WZ2]=jvj+22; 
(*f[32])( );if(v[102]) goto l86;     /*FNDO0(109,jvj+21,jvj+22)*/
pile[WZ2]=jvj+52; 
(*f[32])( );if(v[102]) goto l86;     /*FNDO0(109,jvj+21,jvj+52)*/
pile[v[22]]=983; pile[WZ1]=jvj+52; pile[WZ2]=jvj+53; 
(*f[32])( );if(v[102]) goto l86;     /*FNDO0(983,jvj+52,jvj+53)*/
pile[v[22]]=878; pile[WZ1]=jvj+53; pile[WZ2]=jvj+54; 
(*f[33])( );     /*FNDE0(878,jvj+53,jvj+54)*/
l156:if((x[jvj+54]<=0)) goto l86;
x[jvj+55]=s[x[jvj+54]] ;z[jvj+55]=(x[jvj+55]<=sepcte) ? x[jvj+55] : z[jvj+54];
pile[v[22]]=163; pile[WZ1]=jvj+55; 
(*f[44])( );if(v[102]) goto l157;     /*FNDC1(163,jvj+55,V273)*/
V273=pile[WZ2]; 
pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l157;     /*FNDC1(163,jvj+21,V272)*/
V272=pile[WZ2]; 
if((V273==V272)) goto l157;
x[jvj+54]=t[x[jvj+54]];
goto l156;
l87:D=V26;
if((D<=0)) goto l86;
pile[v[22]]=jvj+4; pile[WZ1]=EC; pile[WZ2]=jvj+24; 
(*f[505])( );     /*EVCOND0(jvj+4,EC,jvj+24)*/
if((x[jvj+24]==135)) goto l88;
l86:x[jvj+65]=t[x[jvj+65]];
goto l84;
l88:x[jvj+51]=x[jvj+22] ;z[jvj+51]=z[jvj+22];
pile[v[22]]=jvj+51; pile[WZ1]=109; pile[WZ2]=jvj+9; 
(*f[54])( );     /*TRI1(jvj+51,109,jvj+9)*/
S=V48;
pile[v[22]]=163; pile[WZ1]=jvj+21; 
(*f[44])( );if(v[102]) goto l77;     /*FNDC1(163,jvj+21,V88)*/
V88=pile[WZ2]; 
pile[v[22]]=jvj+9; pile[WZ1]=163; pile[WZ2]=V88; 
(*f[177])( );     /*CHGC4(jvj+9,163,V88)*/
l77:x[jvj+16]=x[jvj+23] ;z[jvj+16]=z[jvj+23];
goto l76;
l89:pile[v[22]]=jvj+20; pile[WZ1]=609; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+20,609,1)*/
if((NT!=3)) goto l86;
pile[v[22]]=1260; pile[WZ1]=jvj+9; pile[WZ2]=jvj+18; 
(*f[33])( );     /*FNDE0(1260,jvj+9,jvj+18)*/
x[jvj+64]=x[jvj+18] ;z[jvj+64]=z[jvj+18];
l81:if((x[jvj+64]<=0)) goto l86;
x[jvj+19]=s[x[jvj+64]] ;z[jvj+19]=(x[jvj+19]<=sepcte) ? x[jvj+19] : z[jvj+64];
pile[v[22]]=117; pile[WZ1]=jvj+19; 
(*f[26])( );if(v[102]) goto l82;     /*FNDC0(117,jvj+19,V86)*/
V86=pile[WZ2]; 
if((V86<=NV)) goto l82;
pile[v[22]]=jvj+20; pile[WZ2]=117; 
(*f[860])( );     /*STEXPA0(jvj+20,jvj+19,117)*/
l82:x[jvj+64]=t[x[jvj+64]];
goto l81;
l91:pile[v[22]]=E; pile[WZ1]=EC; 
(*f[861])( );     /*ANEXA0(E,EC)*/
l151:if(x[jvj+20]!=incon) goto l152;
l155:x[jvj+1]=incon; v[0]=jvj; v[22]-=5; return;
l92:pile[v[22]]=E; pile[WZ1]=EC; 
(*f[862])( );     /*ANEXB0(E,EC)*/
goto l151;
l95:V147=x[jvj+26];
x[jvj+29]=x[jvj+27] ;z[jvj+29]=z[jvj+27];
goto l96;
l99:pile[v[22]]=20; pile[WZ1]=V149; pile[WZ2]=V3; 
(*f[39])( );     /*SDX0(20,V149,V3,V148)*/
V148=pile[WZ3]; 
pile[v[22]]=V148; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V148,58,V150)*/
V150=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V150; pile[WZ2]=117; 
(*f[42])( );     /*SRA1(135,V150,117,V151)*/
V151=pile[WZ3]; 
pile[v[22]]=V151; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V151,61,V152)*/
V152=pile[WZ2]; 
pile[v[22]]=V152; pile[WZ1]=V17; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V152,V17,41,V153)*/
V153=pile[WZ3]; 
pile[v[22]]=V153; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V153,59,V155)*/
V155=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V155; pile[WZ2]=204; 
(*f[42])( );     /*SRA1(135,V155,204,V156)*/
V156=pile[WZ3]; 
pile[v[22]]=V156; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V156,61,V157)*/
V157=pile[WZ2]; 
pile[v[22]]=V157; pile[WZ1]=V16; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V157,V16,41,V158)*/
V158=pile[WZ3]; 
pile[v[22]]=V158; pile[WZ1]=59; 
(*f[38])( );     /*SPC0(V158,59,V6)*/
V6=pile[WZ2]; 
V5=incon;
pile[v[22]]=876; pile[WZ1]=jvj+3; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(876,jvj+3,V13)*/
V13=pile[WZ2]; 
A=V13;
pile[v[22]]=936; 
(*f[26])( );if(v[102]) goto l11;     /*FNDC0(936,jvj+3,V15)*/
V15=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=A; pile[WZ2]=V6; 
(*f[39])( );     /*SDX0(41,A,V6,V143)*/
V143=pile[WZ3]; 
pile[v[22]]=V143; pile[WZ1]=(-5994); 
(*f[37])( );     /*SRA0(V143,(-5994),V8)*/
V8=pile[WZ2]; 
V7=incon;
if((A<=1)) goto l3;
pile[v[22]]=V8; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V8,83,V7)*/
V7=pile[WZ2]; 
l3:if(V7==incon) goto l4;
goto l7;
l101:pile[v[22]]=V5; 
(*f[40])( );     /*SLG0(V5)*/
goto l97;
l102:pile[v[22]]=V97; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V97,83,V96)*/
V96=pile[WZ2]; 
l154:pile[v[22]]=V96; 
(*f[40])( );     /*SLG0(V96)*/
if((NW!=0)) goto l150;
x[jvj+47]=x[jvj+20] ;z[jvj+47]=z[jvj+20];
l146:pile[v[22]]=120; pile[WZ1]=jvj+47; pile[WZ2]=jvj+31; 
(*f[32])( );if(v[102]) goto l150;     /*FNDO0(120,jvj+47,jvj+31)*/
pile[v[22]]=516; pile[WZ1]=jvj+31; 
(*f[219])( );if(v[102]) goto l147;     /*FNDC2(516,jvj+31,V115)*/
V115=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l147;     /*FNDC0(117,jvj+31,V117)*/
V117=pile[WZ2]; 
pile[v[22]]=698; pile[WZ2]=jvj+48; 
(*f[32])( );if(v[102]) goto l147;     /*FNDO0(698,jvj+31,jvj+48)*/
pile[v[22]]=109; pile[WZ2]=jvj+49; 
(*f[32])( );if(v[102]) goto l147;     /*FNDO0(109,jvj+31,jvj+49)*/
V216=x[jvj+49];
V220=x[jvj+48];
pile[v[22]]=41; pile[WZ1]=V117; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V117,0,V214)*/
V214=pile[WZ3]; 
pile[v[22]]=20; pile[WZ1]=V216; pile[WZ2]=V214; 
(*f[39])( );     /*SDX0(20,V216,V214,V99)*/
V99=pile[WZ3]; 
V98=incon;
pile[v[22]]=163; pile[WZ1]=jvj+31; 
(*f[44])( );if(v[102]) goto l103;     /*FNDC1(163,jvj+31,V113)*/
V113=pile[WZ2]; 
V90=V113;
pile[v[22]]=V99; pile[WZ1]=V90; 
(*f[37])( );     /*SRA0(V99,V90,V98)*/
V98=pile[WZ2]; 
l103:if(V98==incon) goto l104;
l148:if(V98!=incon) goto l149;
l147:x[jvj+47]=x[jvj+31] ;z[jvj+47]=z[jvj+31];
goto l146;
l104:V98=V99;
goto l148;
l106:x[jvj+34]=s[x[jvj+33]] ;z[jvj+34]=(x[jvj+34]<=sepcte) ? x[jvj+34] : z[jvj+33];
pile[v[22]]=jvj+32; pile[WZ1]=jvj+34; pile[WZ2]=117; 
(*f[860])( );     /*STEXPA0(jvj+32,jvj+34,117)*/
x[jvj+33]=t[x[jvj+33]];
l105:if((x[jvj+33]>0)) goto l106;
pile[v[22]]=1261; pile[WZ1]=jvj+32; pile[WZ2]=jvj+35; 
(*f[33])( );     /*FNDE0(1261,jvj+32,jvj+35)*/
l107:if((x[jvj+35]>0)) goto l108;
x[jvj+39]=x[jvj+32] ;z[jvj+39]=z[jvj+32];
l117:pile[v[22]]=120; pile[WZ1]=jvj+39; pile[WZ2]=jvj+38; 
(*f[32])( );if(v[102]) goto l124;     /*FNDO0(120,jvj+39,jvj+38)*/
pile[v[22]]=117; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l118;     /*FNDC0(117,jvj+38,V128)*/
V128=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+40; 
(*f[32])( );if(v[102]) goto l118;     /*FNDO0(109,jvj+38,jvj+40)*/
V232=x[jvj+40];
pile[v[22]]=20; pile[WZ1]=V232; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V232,0,V101)*/
V101=pile[WZ3]; 
V100=incon;
pile[v[22]]=163; pile[WZ1]=jvj+38; 
(*f[44])( );if(v[102]) goto l110;     /*FNDC1(163,jvj+38,V125)*/
V125=pile[WZ2]; 
V93=V125;
pile[v[22]]=V101; pile[WZ1]=V93; 
(*f[37])( );     /*SRA0(V101,V93,V100)*/
V100=pile[WZ2]; 
l110:if(V100==incon) goto l111;
l119:if(V100!=incon) goto l120;
l118:x[jvj+39]=x[jvj+38] ;z[jvj+39]=z[jvj+38];
goto l117;
l108:x[jvj+36]=s[x[jvj+35]] ;z[jvj+36]=(x[jvj+36]<=sepcte) ? x[jvj+36] : z[jvj+35];
pile[v[22]]=515; pile[WZ1]=jvj+36; 
(*f[26])( );if(v[102]) goto l109;     /*FNDC0(515,jvj+36,V121)*/
V121=pile[WZ2]; 
if((V121<=0)) goto l109;
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l109;     /*FNDC0(510,jvj+36,V123)*/
V123=pile[WZ2]; 
V122=V123/V121;
pile[v[22]]=jvj+36; pile[WZ1]=117; pile[WZ2]=V122; 
(*f[43])( );     /*CHGC2(jvj+36,117,V122)*/
pile[v[22]]=jvj+37; pile[WZ1]=jvj+36; pile[WZ2]=117; 
(*f[860])( );     /*STEXPA0(jvj+37,jvj+36,117)*/
l109:x[jvj+35]=t[x[jvj+35]];
goto l107;
l111:V100=V101;
goto l119;
l113:V102=V103;
l121:if(V102!=incon) goto l114;
goto l118;
l114:V104=incon;
pile[v[22]]=610; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l115;     /*FNDC0(610,jvj+38,V127)*/
V127=pile[WZ2]; 
BB=V127;
pile[v[22]]=V102; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V102,32,V227)*/
V227=pile[WZ2]; 
pile[v[22]]=V227; pile[WZ1]=62; 
(*f[38])( );     /*SPC0(V227,62,V228)*/
V228=pile[WZ2]; 
pile[v[22]]=V228; 
(*f[38])( );     /*SPC0(V228,62,V229)*/
V229=pile[WZ2]; 
pile[v[22]]=V229; pile[WZ1]=BB; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V229,BB,41,V104)*/
V104=pile[WZ3]; 
l115:if(V104==incon) goto l116;
l122:if(V104!=incon) goto l123;
goto l118;
l116:V104=V102;
goto l122;
l120:pile[v[22]]=41; pile[WZ1]=V128; pile[WZ2]=V100; 
(*f[39])( );     /*SDX0(41,V128,V100,V103)*/
V103=pile[WZ3]; 
V102=incon;
pile[v[22]]=164; pile[WZ1]=jvj+38; 
(*f[26])( );if(v[102]) goto l112;     /*FNDC0(164,jvj+38,V126)*/
V126=pile[WZ2]; 
AA=V126;
pile[v[22]]=V103; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V103,32,V222)*/
V222=pile[WZ2]; 
pile[v[22]]=V222; pile[WZ1]=61; 
(*f[38])( );     /*SPC0(V222,61,V223)*/
V223=pile[WZ2]; 
pile[v[22]]=V223; 
(*f[38])( );     /*SPC0(V223,61,V224)*/
V224=pile[WZ2]; 
pile[v[22]]=V224; pile[WZ1]=AA; pile[WZ2]=41; 
(*f[179])( );     /*SDX1(V224,AA,41,V102)*/
V102=pile[WZ3]; 
l112:if(V102==incon) goto l113;
goto l121;
l123:pile[v[22]]=V104; 
(*f[40])( );     /*SLG0(V104)*/
goto l118;
l124:x[jvj+42]=0 ;z[jvj+42]=0;
if(x[jvj+42]!=incon) goto l126;
l127:if(x[jvj+42]!=incon) goto l129;
l140:pile[v[22]]=515; pile[WZ1]=jvj+32; 
(*f[26])( );if(v[102]) goto l155;     /*FNDC0(515,jvj+32,V138)*/
V138=pile[WZ2]; 
pile[v[22]]=609; 
(*f[26])( );if(v[102]) goto l155;     /*FNDC0(609,jvj+32,V139)*/
V139=pile[WZ2]; 
pile[v[22]]=60; pile[WZ1]=0; pile[WZ2]=37; 
(*f[41])( );     /*SRB0(60,0,37,V236)*/
V236=pile[WZ3]; 
pile[v[22]]=V236; 
(*f[40])( );     /*SLG0(V236)*/
l136:pile[v[22]]=120; pile[WZ1]=jvj+37; pile[WZ2]=jvj+45; 
(*f[32])( );if(v[102]) goto l141;     /*FNDO0(120,jvj+37,jvj+45)*/
pile[v[22]]=515; pile[WZ1]=jvj+45; 
(*f[26])( );if(v[102]) goto l137;     /*FNDC0(515,jvj+45,V135)*/
V135=pile[WZ2]; 
pile[v[22]]=510; 
(*f[26])( );if(v[102]) goto l137;     /*FNDC0(510,jvj+45,V134)*/
V134=pile[WZ2]; 
pile[v[22]]=117; 
(*f[26])( );if(v[102]) goto l137;     /*FNDC0(117,jvj+45,V136)*/
V136=pile[WZ2]; 
pile[v[22]]=109; pile[WZ2]=jvj+46; 
(*f[32])( );if(v[102]) goto l137;     /*FNDO0(109,jvj+45,jvj+46)*/
V239=x[jvj+46];
pile[v[22]]=20; pile[WZ1]=V239; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(20,V239,0,V238)*/
V238=pile[WZ3]; 
pile[v[22]]=41; pile[WZ1]=V136; pile[WZ2]=V238; 
(*f[39])( );     /*SDX0(41,V136,V238,V240)*/
V240=pile[WZ3]; 
pile[v[22]]=135; pile[WZ1]=V240; pile[WZ2]=206; 
(*f[42])( );     /*SRA1(135,V240,206,V242)*/
V242=pile[WZ3]; 
pile[v[22]]=V242; pile[WZ1]=(-9543); 
(*f[37])( );     /*SRA0(V242,(-9543),V243)*/
V243=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V135; pile[WZ2]=V243; 
(*f[39])( );     /*SDX0(41,V135,V243,V244)*/
V244=pile[WZ3]; 
pile[v[22]]=V244; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V244,(-2986),V108)*/
V108=pile[WZ2]; 
V107=incon;
if((V135<=1)) goto l134;
pile[v[22]]=V108; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V108,83,V107)*/
V107=pile[WZ2]; 
l134:if(V107==incon) goto l135;
l138:if(V107!=incon) goto l139;
l137:x[jvj+37]=x[jvj+45] ;z[jvj+37]=z[jvj+45];
goto l136;
l126:x[jvj+41]=x[jvj+32] ;z[jvj+41]=z[jvj+32];
l125:pile[v[22]]=120; pile[WZ1]=jvj+41; pile[WZ2]=jvj+41; 
(*f[32])( );if(v[102]) goto l127;     /*FNDO0(120,jvj+41,jvj+41)*/
pile[v[22]]=jvj+42; 
(*f[68])( );     /*PLUE0(jvj+42,jvj+41)*/
goto l125;
l129:x[jvj+43]=d[59];z[jvj+43]=0;
l128:if((x[jvj+43]<=0)) goto l140;
x[jvj+44]=s[x[jvj+43]] ;z[jvj+44]=(x[jvj+44]<=sepcte) ? x[jvj+44] : z[jvj+43];
pile[v[22]]=jvj+44; pile[WZ1]=jvj+42; pile[WZ2]=NV; 
(*f[864])( );     /*STEXPC0(jvj+44,jvj+42,NV)*/
x[jvj+43]=t[x[jvj+43]];
goto l128;
l131:V109=V110;
l142:if(V109!=incon) goto l143;
goto l155;
l133:V111=V112;
l144:if(V111!=incon) goto l145;
goto l155;
l135:V107=V108;
goto l138;
l139:pile[v[22]]=V107; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V107,32,V246)*/
V246=pile[WZ2]; 
pile[v[22]]=V246; pile[WZ1]=40; 
(*f[38])( );     /*SPC0(V246,40,V247)*/
V247=pile[WZ2]; 
pile[v[22]]=135; pile[WZ1]=V247; pile[WZ2]=301; 
(*f[98])( );     /*SRA3(135,V247,301,V248)*/
V248=pile[WZ3]; 
pile[v[22]]=V248; pile[WZ1]=58; 
(*f[38])( );     /*SPC0(V248,58,V249)*/
V249=pile[WZ2]; 
pile[v[22]]=41; pile[WZ1]=V134; pile[WZ2]=V249; 
(*f[39])( );     /*SDX0(41,V134,V249,V250)*/
V250=pile[WZ3]; 
pile[v[22]]=V250; pile[WZ1]=41; 
(*f[38])( );     /*SPC0(V250,41,V252)*/
V252=pile[WZ2]; 
pile[v[22]]=V252; 
(*f[40])( );     /*SLG0(V252)*/
goto l137;
l141:pile[v[22]]=41; pile[WZ1]=V139; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V139,0,V253)*/
V253=pile[WZ3]; 
pile[v[22]]=V253; pile[WZ1]=(-8396); 
(*f[37])( );     /*SRA0(V253,(-8396),V110)*/
V110=pile[WZ2]; 
V109=incon;
if((V139<=1)) goto l130;
pile[v[22]]=V110; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V110,83,V109)*/
V109=pile[WZ2]; 
l130:if(V109==incon) goto l131;
goto l142;
l143:pile[v[22]]=41; pile[WZ1]=V138; pile[WZ2]=V109; 
(*f[39])( );     /*SDX0(41,V138,V109,V255)*/
V255=pile[WZ3]; 
pile[v[22]]=V255; pile[WZ1]=(-2986); 
(*f[37])( );     /*SRA0(V255,(-2986),V112)*/
V112=pile[WZ2]; 
V111=incon;
if((V138<=1)) goto l132;
pile[v[22]]=V112; pile[WZ1]=83; 
(*f[38])( );     /*SPC0(V112,83,V111)*/
V111=pile[WZ2]; 
l132:if(V111==incon) goto l133;
goto l144;
l145:pile[v[22]]=V111; 
(*f[40])( );     /*SLG0(V111)*/
goto l155;
l149:pile[v[22]]=V98; pile[WZ1]=32; 
(*f[38])( );     /*SPC0(V98,32,V217)*/
V217=pile[WZ2]; 
pile[v[22]]=V217; pile[WZ1]=V115; 
(*f[38])( );     /*SPC0(V217,V115,V218)*/
V218=pile[WZ2]; 
pile[v[22]]=20; pile[WZ1]=V220; pile[WZ2]=V218; 
(*f[39])( );     /*SDX0(20,V220,V218,V219)*/
V219=pile[WZ3]; 
pile[v[22]]=V219; 
(*f[40])( );     /*SLG0(V219)*/
goto l147;
l150:if((NW<=0)) goto l155;
pile[v[22]]=120; pile[WZ1]=jvj+20; pile[WZ2]=jvj+50; 
(*f[32])( );if(v[102]) goto l155;     /*FNDO0(120,jvj+20,jvj+50)*/
pile[v[22]]=250; pile[WZ1]=158; pile[WZ2]=jvj+32; 
(*f[54])( );     /*TRI1(250,158,jvj+32)*/
pile[v[22]]=985; pile[WZ2]=jvj+37; 
(*f[54])( );     /*TRI1(985,158,jvj+37)*/
pile[v[22]]=jvj+32; pile[WZ1]=jvj+50; 
(*f[863])( );     /*STEXPB0(jvj+32,jvj+50)*/
pile[v[22]]=1260; pile[WZ1]=jvj+32; pile[WZ2]=jvj+33; 
(*f[33])( );     /*FNDE0(1260,jvj+32,jvj+33)*/
goto l105;
l152:if((NT!=3)) goto l155;
x[jvj+62]=V292=V95=incon;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+62; 
(*f[46])( );     /*TRI0(0,117,jvj+62)*/
x[jvj+63]=x[jvj+20] ;z[jvj+63]=z[jvj+20];
l166:pile[v[22]]=120; pile[WZ1]=jvj+63; pile[WZ2]=jvj+63; 
(*f[32])( );if(v[102]) goto l167;     /*FNDO0(120,jvj+63,jvj+63)*/
pile[v[22]]=jvj+62; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+62,117,1)*/
goto l166;
l153:pile[v[22]]=41; pile[WZ1]=V95; pile[WZ2]=0; 
(*f[39])( );     /*SDX0(41,V95,0,V211)*/
V211=pile[WZ3]; 
pile[v[22]]=V211; pile[WZ1]=(-4670); 
(*f[37])( );     /*SRA0(V211,(-4670),V97)*/
V97=pile[WZ2]; 
V96=incon;
if((V95>1)) goto l102;
V96=V97;
goto l154;
l157:x[jvj+66]=x[jvj+55] ;z[jvj+66]=z[jvj+55];
x[jvj+4]=x[jvj+66] ;z[jvj+4]=z[jvj+66];
pile[v[22]]=493; pile[WZ1]=jvj+4; 
(*f[26])( );if(v[102]) goto l86;     /*FNDC0(493,jvj+4,V48)*/
V48=pile[WZ2]; 
pile[v[22]]=1107; pile[WZ2]=jvj+23; 
(*f[32])( );if(v[102]) goto l86;     /*FNDO0(1107,jvj+4,jvj+23)*/
x[jvj+60]=V287=V26=incon;
pile[v[22]]=0; pile[WZ1]=117; pile[WZ2]=jvj+60; 
(*f[46])( );     /*TRI0(0,117,jvj+60)*/
x[jvj+61]=x[jvj+23] ;z[jvj+61]=z[jvj+23];
l160:pile[v[22]]=120; pile[WZ1]=jvj+61; pile[WZ2]=jvj+61; 
(*f[32])( );if(v[102]) goto l161;     /*FNDO0(120,jvj+61,jvj+61)*/
pile[v[22]]=jvj+60; pile[WZ1]=117; pile[WZ2]=1; 
(*f[186])( );     /*BTC0(jvj+60,117,1)*/
goto l160;
l159:x[jvj+68]=x[jvj+59] ;z[jvj+68]=z[jvj+59];
pile[v[22]]=109; pile[WZ1]=jvj+25; pile[WZ2]=jvj+26; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(109,jvj+25,jvj+26)*/
x[jvj+2]=x[jvj+68] ;z[jvj+2]=z[jvj+68];
pile[v[22]]=1107; pile[WZ1]=jvj+2; pile[WZ2]=jvj+27; 
(*f[32])( );if(v[102]) goto l94;     /*FNDO0(1107,jvj+2,jvj+27)*/
pile[v[22]]=jvj+2; pile[WZ1]=EC; pile[WZ2]=jvj+28; 
(*f[505])( );     /*EVCOND0(jvj+2,EC,jvj+28)*/
if((x[jvj+28]==135)) goto l95;
l94:x[jvj+67]=t[x[jvj+67]];
goto l93;
l161:if(x[jvj+60]!=incon) goto l165;
l162:if(V287!=incon) goto l164;
l163:if(V26!=incon) goto l87;
goto l86;
l164:V26=V287;
goto l163;
l165:pile[v[22]]=117; pile[WZ1]=jvj+60; 
(*f[26])( );if(v[102]) goto l162;     /*FNDC0(117,jvj+60,V287)*/
V287=pile[WZ2]; 
goto l162;
l167:if(x[jvj+62]!=incon) goto l171;
l168:if(V292!=incon) goto l170;
l169:if(V95!=incon) goto l153;
goto l155;
l170:V95=V292;
goto l169;
l171:pile[v[22]]=117; pile[WZ1]=jvj+62; 
(*f[26])( );if(v[102]) goto l168;     /*FNDC0(117,jvj+62,V292)*/
V292=pile[WZ2]; 
goto l168;
}
