# Lines

For this sketch, I tried to make the lines move in a somewhat smooth yet random manner, to give a cohesive aesthetic to it. 
This was not possible using the ofRandom() function so I ended up exploring the different possibilities that the ofNoise() function offers. 
I used the noise function to calculate a variable that varies with time. This variable is used to change the position of the line as well as the colour.
The lines are drawn using a for loop that iterates depending on the number given by the user through the GUI. the positions of the lines are determined by
ofNoise() functions that are multiplied by ofGetWidth() and ofGetHeight() to centre the lines and keep them within the borders of the window. 
The colour is determined by different noise functions and the opacity is determined by the user. 

---

## Screenshots 
<img width="1025" alt="Screen Shot 2022-04-04 at 9 32 36 PM" src="https://user-images.githubusercontent.com/90758857/161772697-fb50dfd0-ea56-475d-872f-da7d687af9b3.png">
<img width="1013" alt="Screen Shot 2022-04-04 at 9 23 54 PM" src="https://user-images.githubusercontent.com/90758857/161772661-43d7a244-9e36-4c67-8f13-9ec5b67302ef.png"><img width="1015" alt="Screen Shot 2022-04-04 at 9 27 38 PM" src="https://user-images.githubusercontent.com/90758857/161772704-8677b5a1-7e45-4f15-9d65-07ee7172a13b.png">
<img width="1022" alt="Screen Shot 2022-04-04 at 9 30 12 PM" src="https://user-images.githubusercontent.com/90758857/161772707-7bbeb19d-0870-4b4e-aa8b-9c81ec11690b.png">
<img width="1020" alt="Screen Shot 2022-04-04 at 9 23 18 PM" src="https://user-images.githubusercontent.com/90758857/161772712-4184452a-1c52-410b-8889-85240e238d4c.png">

