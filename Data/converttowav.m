%% Write WAVE file in the current folder
data = load('ep1SR.mat');
data = data.PATIENT1SINUSRHYTHMNUMBERSONLY;
vent_labels = load('detect_ep1SR_ventall_Ch17.mat', '-ASCII');
atrial_labels = load('detect_ep1SR_atrialall_Ch15.mat','-ASCII');
avlabels = [atrial_labels(:,1),vent_labels(:,1)];
avbinary = zeros(60000, 2);
avbinary(avlabels(:,1),1) = 1;
convatrial = conv(avbinary(:,1),[1,1,1,1,1]);
avbinary(avlabels(:,2),2) = 1;
convvent = conv(avbinary(:,2),[1,1,1,1,1]);
avbinary = 2*[convatrial(1:60000,:),convvent(1:60000,:)];


%% Creating Fixed time delay for June

% atrial_labels = [1:1000:60000]';
% vent_labels = [1:1000:60000]';
% avlabels = [atrial_labels,vent_labels];
% avbinary = zeros(60000, 2);
% avbinary(avlabels(:,1),1) = 1;
% convatrial = conv(avbinary(:,1),[1,1,1,1,1]);
% avbinary(avlabels(:,2),2) = 1;
% convvent = conv(avbinary(:,2),[1,1,1,1,1]);
% avbinary = 5*[convatrial(1:60000,:),convvent(1:60000,:)];


% filename = 'SinusRhythmIntracardiacCS_struct.wav';
% waveform = data(:,1);
% audiowrite(filename,waveform,Fs);
% clear y Fs


%% Testing to verify WAVE file written correctly
% [y,Fs] = audioread(filename);
% 
% sound(y,Fs);

%% Clip and add binary data

[~,y] = size(data);
if (y > 6) 
    y = 6;
end

data = data(:,13:18); % Used to grab channels 13-18.
mymat = [data(:,1:y), avbinary];


%% Save whole data set as a CSV
csvfilename = 'SinusRhythmIntracardiacCS_struct.csv'
csvwrite(csvfilename, mymat);

y = csvread(csvfilename);

size(y);    