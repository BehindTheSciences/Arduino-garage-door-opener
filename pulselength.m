clear all
[signal,fs]=audioread('Fob.wav');
data=abs(signal);
x=1/fs:1/fs:(length(data)/fs);

%get average amplitudes of each level:
amplitudes=statelevels(data);



%get pulse width
y=pulsewidth(data, x, 'Polarity', 'Positive');
min(y)
dlmwrite('y.txt',y);



