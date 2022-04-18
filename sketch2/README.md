# Sketch 2
## [Link](https://youtu.be/u60lAF9IADM)
---

For this sketch, I aimed to explore the use of sine waves in animation. I decided to create a more geometrical output because of the consistent nature of the wave. 
For the colours, I decided to keep it as black and white because the use of multiple colours did not seem appealing 


The shape is created by generating half a sine wave and increasing its frequency and then multiplying and rotating each wave accordingly to create the shape. 
I used ofPushMatrix() and ofPopMatrix() to rotate the waves around and ofGetElapsedTimef() to increase the frequency of the wave. 
To avoid the frequency from increasing forever, I used fmod() to get the modulus. I also used this technique to repeat the animation forever
 
 
 ### ScreenShots
 
<img width="784" alt="Screen Shot 2022-04-18 at 12 59 31 PM" src="https://user-images.githubusercontent.com/90758857/163784626-1dbdafe9-7eeb-42b6-ab71-ebb0416fff9f.png">
 
<img width="781" alt="Screen Shot 2022-04-18 at 12 59 22 PM" src="https://user-images.githubusercontent.com/90758857/163784619-d24a8bcc-5892-4528-9cb4-14b5161d71c2.png">

<img width="771" alt="Screen Shot 2022-04-18 at 12 59 38 PM" src="https://user-images.githubusercontent.com/90758857/163784634-1441cad2-02aa-452b-8bab-b8692af50928.png">
