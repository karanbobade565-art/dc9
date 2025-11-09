clear;
clear;
clc;
B=3.4*10^3;
SNR=30
SN=10^(SNR/10);
C=B*log2(1+SN)//Information capacity
printf("Information capacity of telephone is \n\n \tC = %.2f kbps",C/1000);

