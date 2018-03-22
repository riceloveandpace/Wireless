%% Write WAVE file in the current folder
load SinusRhythmIntracardiacCS_struct.mat


% filename = 'SinusRhythmIntracardiacCS_struct.wav';
% waveform = data(:,1);
% audiowrite(filename,waveform,Fs);
% clear y Fs


%% Testing to verify WAVE file written correctly
% [y,Fs] = audioread(filename);
% 
% sound(y,Fs);

%% Save whole data set as a CSV

[~,y] = size(data);
if (y > 16) 
    y = 8;
end

mymat = data(:,1:y);
csvfilename = 'SinusRhythmIntracardiacCS_struct.csv'
csvwrite(csvfilename, mymat);

y = csvread(csvfilename);

size(y);    