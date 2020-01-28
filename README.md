# DriveSafe-Pi-Arduino

## Inspiration
We were inspired to create the project due to the increased frequency of accidents cause by impaired driving or medical emergencies occurring in the GTA. Below are some statistics from the Canadian Association of Chiefs of Police, which show the importance of mitigating motor vehicle accidents due to reckless driving/Accidents. 

1. In 2016, the number of motor vehicle fatalities in Canada was 1,898, up 2% from 2015 (1,860).
2. 16% of serious injury collisions involved a drinking driver
3. In 2008, coroners’ testing showed that almost 40% of fatally injured drivers had been drinking
some amount of alcohol (HBD) prior to the collision.
4. In a 1965 study of California drivers whose medical conditions were known to the Department of Motor Vehicles, drivers with diabetes, epilepsy, cardiovascular disease (CVD), alcoholism and mental illness averaged twice as many crashes per 1,000,000 miles of driving, as compared to a control group without such conditions [Waller, 1965]

## What it does
Our python and OpenCV based application detects if a driver is not paying attention to the road by detecting the EAR. The threshold we used is 0.2 based on a paper written by TDr. Tereza Soukupova and Dr. Jan Cech from the Czech Technical University in Prague. Dr. Soukupova and Dr. Cech found that an average person who is paying attention will have an EAR of 0.2 - 0.25. 

## How I built it

We already knew that we wanted to do something with computer vision  and the rasberri pi 3 was perfect platform. We did reach about how we could make alarms systems and the Arduino was a chip we we're very familiar with and therefore it was easy to adapt into our one ideas. As for the software aspect of the application we used OpenCV and dlib to detect the EAR.  First we used a webcam to monitor a video stream for a face using a pre-classified dataset from dlib.net. Subsequently, if a face is detected, the landmark detection was used to extract the eye regions and contour them on the frame. The EAR was then computed and if the EAR threshold dropped below 0.2 for 30 consecutive frames, then the driver will receive an alert. 

## Challenges I ran into

A challenge that we ran into was how to make our program put an alert if a driver is not looking at the camera for 30 consecutive frames. We were able to solve this challenge by checking if the NumPy array holding the facial landmarks is empty. 

## Accomplishments that I'm proud of

As a team, we are very proud that we were able to integrate software with hardware. Our team is comprised of one second year electrical engineering student, one computer engineering student at Ryerson University and two second year computer science students. We were able to effectively collaborate together and use each other's strength to develop our application. 

Moreover, we are very proud that we were able to successfully use facial landmark techniques in order to detect the eye aspect ratio (EAR). This technique utilized a lot of the concepts we learned in our linear algebra classes such as finding the euclidean distance between 2D points. 

## What I learned

The computer science students learned a lot about hardware. The computer science curriculum is very focused on software and theoretical aspects of computer architecture/operating systems. Thus, the computer science students were able to apply the theory to a practical project. 

Furthermore, the team learned how to utilize multiple APIs such as the Google geocoding API. We also leveraged machine learning by using landmark detectors trained on the iBUG 300-W dataset. The face detector uses Histogram of Oriented Gradients (HOG) algorithm. HOG taught us about the importance of pre-processing a picture by grayscaling it and resizing the picture. We then learned about how we can use the EAR formula to find a threshold that would classify a driver as driving dangerously. 

## What's next for DriveSafe

The next step is making DriveSafe a phone application that can be downloaded from the App Store and Google Play. Drivers can download the application on their personal mobile devices and mount their phone. 
